<?xml version="1.0" encoding="utf-8" ?>
<ContentPage xmlns="http://schemas.microsoft.com/dotnet/2021/maui"
             xmlns:x="http://schemas.microsoft.com/winfx/2009/xaml"
             x:Class="MAUI_UI.MainPage">

    <ScrollView>
        <VerticalStackLayout
            Padding="30,0"
            Spacing="25">



            <Label
                Text="Chrisnel Rivera UI Controls"
                Style="{StaticResource Headline}"
                SemanticProperties.HeadingLevel="Level1" />

            <Entry 
                Placeholder="Enter some text"
                x:Name= "txtInput"/>
            <Grid>
                <Grid.ColumnDefinitions>
                    <ColumnDefinition Width="*" />
                    <ColumnDefinition Width="*" />
                </Grid.ColumnDefinitions>
                <Button 
                    Text="Display Text"
                    Grid.Column="0"
                    Clicked="OnDisplayClicked"/>
                    <Button
                   Text="Reset"
                   Grid.Column="1"
                   Clicked="OnResetClicked"/>
            </Grid>
            <Label>
                x:Name="lblOutput"
                Style="{StaticResource Headline}"
                SemanticProperties.HeadingLevel="Level2"
                HorizontalOptions="Center" />
            </Label>


        </VerticalStackLayout>
    </ScrollView>

</ContentPage>





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
