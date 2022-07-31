using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
// 一定要添加
using System.Runtime.InteropServices;

namespace CSTest
{
	public partial class Form1 : Form
	{
		[DllImport(@"QtTestWidget.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.Cdecl)]
		public static extern bool showDialog(IntPtr parent);

		//[DllImport(@"QtTestWidget.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.Cdecl)]
		//public static extern void DllInit();

		//[DllImport(@"QtTestWidget.dll", CharSet = CharSet.Ansi, CallingConvention = CallingConvention.Cdecl)]
		//public static extern void showDialog();

		public Form1()
		{
			InitializeComponent();
			//DllInit();
		}

		private void btnCallQt_Click(object sender, EventArgs e)
		{
			showDialog(this.Handle);
			//showDialog();
		}
	}
}
