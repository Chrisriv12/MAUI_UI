namespace MAUI_UI
{
    public partial class MainPage : ContentPage
    {

        public MainPage()
        {
            InitializeComponent();
        }

        private void OnDisplayClicked(object sender, EventArgs e)
        {

            lblOutput.Text = txtInput.Text;
        }
        private void OnResetClicked(object? sender, EventArgs e)
        {
            lblOutput.Text = string.Empty;
            txtInput.Text = string.Empty;
        }
    }
}
