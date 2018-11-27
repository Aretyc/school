using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace malski_baza
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.Waluta_Kwerenda' . Możesz go przenieść lub usunąć.
            this.waluta_KwerendaTableAdapter.Fill(this._państwa_baza_danychDataSet.Waluta_Kwerenda);
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.stolice_Kwerenda1' . Możesz go przenieść lub usunąć.
            this.stolice_Kwerenda1TableAdapter.Fill(this._państwa_baza_danychDataSet.stolice_Kwerenda1);
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.rzeki_i_państwa_Kwerenda' . Możesz go przenieść lub usunąć.
            this.rzeki_i_państwa_KwerendaTableAdapter.Fill(this._państwa_baza_danychDataSet.rzeki_i_państwa_Kwerenda);
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.rzeki_Kwerenda' . Możesz go przenieść lub usunąć.
            this.rzeki_KwerendaTableAdapter.Fill(this._państwa_baza_danychDataSet.rzeki_Kwerenda);
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.Państwa_Kwerenda' . Możesz go przenieść lub usunąć.
            this.państwa_KwerendaTableAdapter.Fill(this._państwa_baza_danychDataSet.Państwa_Kwerenda);
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.nato_Kwerenda' . Możesz go przenieść lub usunąć.
            this.nato_KwerendaTableAdapter.Fill(this._państwa_baza_danychDataSet.nato_Kwerenda);
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.kontynent_Kwerenda' . Możesz go przenieść lub usunąć.
            this.kontynent_KwerendaTableAdapter.Fill(this._państwa_baza_danychDataSet.kontynent_Kwerenda);
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.języki_państwa_Kwerenda' . Możesz go przenieść lub usunąć.
            this.języki_państwa_KwerendaTableAdapter.Fill(this._państwa_baza_danychDataSet.języki_państwa_Kwerenda);
            // TODO: Ten wiersz kodu wczytuje dane do tabeli '_państwa_baza_danychDataSet.jezyki_Kwerenda' . Możesz go przenieść lub usunąć.
            this.jezyki_KwerendaTableAdapter.Fill(this._państwa_baza_danychDataSet.jezyki_Kwerenda);

        }
    }
}
