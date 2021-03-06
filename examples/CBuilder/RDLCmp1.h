//---------------------------------------------------------------------------
#ifndef RDLCmp1H
#define RDLCmp1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "LbCipher.hpp"
#include "LbClass.hpp"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label4;
    TLabel *Label5;
    TLabel *Label7;
    TLabel *Label6;
    TLabel *Label1;
    TLabel *Label2;
    TButton *btnEncrypt;
    TButton *btnDecrypt;
    TComboBox *cbxCipherMode;
    TMemo *mmoPlainText1;
    TMemo *mmoCipherText;
    TMemo *mmoPlainText2;
    TEdit *edtPassphrase;
    TComboBox *cbxKeySize;
    TLbRijndael *LbRijndael1;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall btnEncryptClick(TObject *Sender);
    void __fastcall btnDecryptClick(TObject *Sender);
    void __fastcall cbxCipherModeChange(TObject *Sender);
    void __fastcall cbxKeySizeChange(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
