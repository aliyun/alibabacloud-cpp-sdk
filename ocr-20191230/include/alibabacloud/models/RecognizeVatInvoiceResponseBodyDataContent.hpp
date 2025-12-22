// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICERESPONSEBODYDATACONTENT_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICERESPONSEBODYDATACONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ocr20191230
{
namespace Models
{
  class RecognizeVATInvoiceResponseBodyDataContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVATInvoiceResponseBodyDataContent& obj) { 
      DARABONBA_PTR_TO_JSON(AntiFakeCode, antiFakeCode_);
      DARABONBA_PTR_TO_JSON(Checker, checker_);
      DARABONBA_PTR_TO_JSON(Clerk, clerk_);
      DARABONBA_PTR_TO_JSON(InvoiceAmount, invoiceAmount_);
      DARABONBA_PTR_TO_JSON(InvoiceCode, invoiceCode_);
      DARABONBA_PTR_TO_JSON(InvoiceDate, invoiceDate_);
      DARABONBA_PTR_TO_JSON(InvoiceNo, invoiceNo_);
      DARABONBA_PTR_TO_JSON(ItemName, itemName_);
      DARABONBA_PTR_TO_JSON(Payee, payee_);
      DARABONBA_PTR_TO_JSON(PayeeAddress, payeeAddress_);
      DARABONBA_PTR_TO_JSON(PayeeBankName, payeeBankName_);
      DARABONBA_PTR_TO_JSON(PayeeName, payeeName_);
      DARABONBA_PTR_TO_JSON(PayeeRegisterNo, payeeRegisterNo_);
      DARABONBA_PTR_TO_JSON(PayerAddress, payerAddress_);
      DARABONBA_PTR_TO_JSON(PayerBankName, payerBankName_);
      DARABONBA_PTR_TO_JSON(PayerName, payerName_);
      DARABONBA_PTR_TO_JSON(PayerRegisterNo, payerRegisterNo_);
      DARABONBA_PTR_TO_JSON(SumAmount, sumAmount_);
      DARABONBA_PTR_TO_JSON(TaxAmount, taxAmount_);
      DARABONBA_PTR_TO_JSON(WithoutTaxAmount, withoutTaxAmount_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVATInvoiceResponseBodyDataContent& obj) { 
      DARABONBA_PTR_FROM_JSON(AntiFakeCode, antiFakeCode_);
      DARABONBA_PTR_FROM_JSON(Checker, checker_);
      DARABONBA_PTR_FROM_JSON(Clerk, clerk_);
      DARABONBA_PTR_FROM_JSON(InvoiceAmount, invoiceAmount_);
      DARABONBA_PTR_FROM_JSON(InvoiceCode, invoiceCode_);
      DARABONBA_PTR_FROM_JSON(InvoiceDate, invoiceDate_);
      DARABONBA_PTR_FROM_JSON(InvoiceNo, invoiceNo_);
      DARABONBA_PTR_FROM_JSON(ItemName, itemName_);
      DARABONBA_PTR_FROM_JSON(Payee, payee_);
      DARABONBA_PTR_FROM_JSON(PayeeAddress, payeeAddress_);
      DARABONBA_PTR_FROM_JSON(PayeeBankName, payeeBankName_);
      DARABONBA_PTR_FROM_JSON(PayeeName, payeeName_);
      DARABONBA_PTR_FROM_JSON(PayeeRegisterNo, payeeRegisterNo_);
      DARABONBA_PTR_FROM_JSON(PayerAddress, payerAddress_);
      DARABONBA_PTR_FROM_JSON(PayerBankName, payerBankName_);
      DARABONBA_PTR_FROM_JSON(PayerName, payerName_);
      DARABONBA_PTR_FROM_JSON(PayerRegisterNo, payerRegisterNo_);
      DARABONBA_PTR_FROM_JSON(SumAmount, sumAmount_);
      DARABONBA_PTR_FROM_JSON(TaxAmount, taxAmount_);
      DARABONBA_PTR_FROM_JSON(WithoutTaxAmount, withoutTaxAmount_);
    };
    RecognizeVATInvoiceResponseBodyDataContent() = default ;
    RecognizeVATInvoiceResponseBodyDataContent(const RecognizeVATInvoiceResponseBodyDataContent &) = default ;
    RecognizeVATInvoiceResponseBodyDataContent(RecognizeVATInvoiceResponseBodyDataContent &&) = default ;
    RecognizeVATInvoiceResponseBodyDataContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVATInvoiceResponseBodyDataContent() = default ;
    RecognizeVATInvoiceResponseBodyDataContent& operator=(const RecognizeVATInvoiceResponseBodyDataContent &) = default ;
    RecognizeVATInvoiceResponseBodyDataContent& operator=(RecognizeVATInvoiceResponseBodyDataContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->antiFakeCode_ == nullptr
        && return this->checker_ == nullptr && return this->clerk_ == nullptr && return this->invoiceAmount_ == nullptr && return this->invoiceCode_ == nullptr && return this->invoiceDate_ == nullptr
        && return this->invoiceNo_ == nullptr && return this->itemName_ == nullptr && return this->payee_ == nullptr && return this->payeeAddress_ == nullptr && return this->payeeBankName_ == nullptr
        && return this->payeeName_ == nullptr && return this->payeeRegisterNo_ == nullptr && return this->payerAddress_ == nullptr && return this->payerBankName_ == nullptr && return this->payerName_ == nullptr
        && return this->payerRegisterNo_ == nullptr && return this->sumAmount_ == nullptr && return this->taxAmount_ == nullptr && return this->withoutTaxAmount_ == nullptr; };
    // antiFakeCode Field Functions 
    bool hasAntiFakeCode() const { return this->antiFakeCode_ != nullptr;};
    void deleteAntiFakeCode() { this->antiFakeCode_ = nullptr;};
    inline string antiFakeCode() const { DARABONBA_PTR_GET_DEFAULT(antiFakeCode_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setAntiFakeCode(string antiFakeCode) { DARABONBA_PTR_SET_VALUE(antiFakeCode_, antiFakeCode) };


    // checker Field Functions 
    bool hasChecker() const { return this->checker_ != nullptr;};
    void deleteChecker() { this->checker_ = nullptr;};
    inline string checker() const { DARABONBA_PTR_GET_DEFAULT(checker_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setChecker(string checker) { DARABONBA_PTR_SET_VALUE(checker_, checker) };


    // clerk Field Functions 
    bool hasClerk() const { return this->clerk_ != nullptr;};
    void deleteClerk() { this->clerk_ = nullptr;};
    inline string clerk() const { DARABONBA_PTR_GET_DEFAULT(clerk_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setClerk(string clerk) { DARABONBA_PTR_SET_VALUE(clerk_, clerk) };


    // invoiceAmount Field Functions 
    bool hasInvoiceAmount() const { return this->invoiceAmount_ != nullptr;};
    void deleteInvoiceAmount() { this->invoiceAmount_ = nullptr;};
    inline string invoiceAmount() const { DARABONBA_PTR_GET_DEFAULT(invoiceAmount_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setInvoiceAmount(string invoiceAmount) { DARABONBA_PTR_SET_VALUE(invoiceAmount_, invoiceAmount) };


    // invoiceCode Field Functions 
    bool hasInvoiceCode() const { return this->invoiceCode_ != nullptr;};
    void deleteInvoiceCode() { this->invoiceCode_ = nullptr;};
    inline string invoiceCode() const { DARABONBA_PTR_GET_DEFAULT(invoiceCode_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setInvoiceCode(string invoiceCode) { DARABONBA_PTR_SET_VALUE(invoiceCode_, invoiceCode) };


    // invoiceDate Field Functions 
    bool hasInvoiceDate() const { return this->invoiceDate_ != nullptr;};
    void deleteInvoiceDate() { this->invoiceDate_ = nullptr;};
    inline string invoiceDate() const { DARABONBA_PTR_GET_DEFAULT(invoiceDate_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setInvoiceDate(string invoiceDate) { DARABONBA_PTR_SET_VALUE(invoiceDate_, invoiceDate) };


    // invoiceNo Field Functions 
    bool hasInvoiceNo() const { return this->invoiceNo_ != nullptr;};
    void deleteInvoiceNo() { this->invoiceNo_ = nullptr;};
    inline string invoiceNo() const { DARABONBA_PTR_GET_DEFAULT(invoiceNo_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setInvoiceNo(string invoiceNo) { DARABONBA_PTR_SET_VALUE(invoiceNo_, invoiceNo) };


    // itemName Field Functions 
    bool hasItemName() const { return this->itemName_ != nullptr;};
    void deleteItemName() { this->itemName_ = nullptr;};
    inline const vector<string> & itemName() const { DARABONBA_PTR_GET_CONST(itemName_, vector<string>) };
    inline vector<string> itemName() { DARABONBA_PTR_GET(itemName_, vector<string>) };
    inline RecognizeVATInvoiceResponseBodyDataContent& setItemName(const vector<string> & itemName) { DARABONBA_PTR_SET_VALUE(itemName_, itemName) };
    inline RecognizeVATInvoiceResponseBodyDataContent& setItemName(vector<string> && itemName) { DARABONBA_PTR_SET_RVALUE(itemName_, itemName) };


    // payee Field Functions 
    bool hasPayee() const { return this->payee_ != nullptr;};
    void deletePayee() { this->payee_ = nullptr;};
    inline string payee() const { DARABONBA_PTR_GET_DEFAULT(payee_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayee(string payee) { DARABONBA_PTR_SET_VALUE(payee_, payee) };


    // payeeAddress Field Functions 
    bool hasPayeeAddress() const { return this->payeeAddress_ != nullptr;};
    void deletePayeeAddress() { this->payeeAddress_ = nullptr;};
    inline string payeeAddress() const { DARABONBA_PTR_GET_DEFAULT(payeeAddress_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayeeAddress(string payeeAddress) { DARABONBA_PTR_SET_VALUE(payeeAddress_, payeeAddress) };


    // payeeBankName Field Functions 
    bool hasPayeeBankName() const { return this->payeeBankName_ != nullptr;};
    void deletePayeeBankName() { this->payeeBankName_ = nullptr;};
    inline string payeeBankName() const { DARABONBA_PTR_GET_DEFAULT(payeeBankName_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayeeBankName(string payeeBankName) { DARABONBA_PTR_SET_VALUE(payeeBankName_, payeeBankName) };


    // payeeName Field Functions 
    bool hasPayeeName() const { return this->payeeName_ != nullptr;};
    void deletePayeeName() { this->payeeName_ = nullptr;};
    inline string payeeName() const { DARABONBA_PTR_GET_DEFAULT(payeeName_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayeeName(string payeeName) { DARABONBA_PTR_SET_VALUE(payeeName_, payeeName) };


    // payeeRegisterNo Field Functions 
    bool hasPayeeRegisterNo() const { return this->payeeRegisterNo_ != nullptr;};
    void deletePayeeRegisterNo() { this->payeeRegisterNo_ = nullptr;};
    inline string payeeRegisterNo() const { DARABONBA_PTR_GET_DEFAULT(payeeRegisterNo_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayeeRegisterNo(string payeeRegisterNo) { DARABONBA_PTR_SET_VALUE(payeeRegisterNo_, payeeRegisterNo) };


    // payerAddress Field Functions 
    bool hasPayerAddress() const { return this->payerAddress_ != nullptr;};
    void deletePayerAddress() { this->payerAddress_ = nullptr;};
    inline string payerAddress() const { DARABONBA_PTR_GET_DEFAULT(payerAddress_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayerAddress(string payerAddress) { DARABONBA_PTR_SET_VALUE(payerAddress_, payerAddress) };


    // payerBankName Field Functions 
    bool hasPayerBankName() const { return this->payerBankName_ != nullptr;};
    void deletePayerBankName() { this->payerBankName_ = nullptr;};
    inline string payerBankName() const { DARABONBA_PTR_GET_DEFAULT(payerBankName_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayerBankName(string payerBankName) { DARABONBA_PTR_SET_VALUE(payerBankName_, payerBankName) };


    // payerName Field Functions 
    bool hasPayerName() const { return this->payerName_ != nullptr;};
    void deletePayerName() { this->payerName_ = nullptr;};
    inline string payerName() const { DARABONBA_PTR_GET_DEFAULT(payerName_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayerName(string payerName) { DARABONBA_PTR_SET_VALUE(payerName_, payerName) };


    // payerRegisterNo Field Functions 
    bool hasPayerRegisterNo() const { return this->payerRegisterNo_ != nullptr;};
    void deletePayerRegisterNo() { this->payerRegisterNo_ = nullptr;};
    inline string payerRegisterNo() const { DARABONBA_PTR_GET_DEFAULT(payerRegisterNo_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setPayerRegisterNo(string payerRegisterNo) { DARABONBA_PTR_SET_VALUE(payerRegisterNo_, payerRegisterNo) };


    // sumAmount Field Functions 
    bool hasSumAmount() const { return this->sumAmount_ != nullptr;};
    void deleteSumAmount() { this->sumAmount_ = nullptr;};
    inline string sumAmount() const { DARABONBA_PTR_GET_DEFAULT(sumAmount_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setSumAmount(string sumAmount) { DARABONBA_PTR_SET_VALUE(sumAmount_, sumAmount) };


    // taxAmount Field Functions 
    bool hasTaxAmount() const { return this->taxAmount_ != nullptr;};
    void deleteTaxAmount() { this->taxAmount_ = nullptr;};
    inline string taxAmount() const { DARABONBA_PTR_GET_DEFAULT(taxAmount_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setTaxAmount(string taxAmount) { DARABONBA_PTR_SET_VALUE(taxAmount_, taxAmount) };


    // withoutTaxAmount Field Functions 
    bool hasWithoutTaxAmount() const { return this->withoutTaxAmount_ != nullptr;};
    void deleteWithoutTaxAmount() { this->withoutTaxAmount_ = nullptr;};
    inline string withoutTaxAmount() const { DARABONBA_PTR_GET_DEFAULT(withoutTaxAmount_, "") };
    inline RecognizeVATInvoiceResponseBodyDataContent& setWithoutTaxAmount(string withoutTaxAmount) { DARABONBA_PTR_SET_VALUE(withoutTaxAmount_, withoutTaxAmount) };


  protected:
    std::shared_ptr<string> antiFakeCode_ = nullptr;
    std::shared_ptr<string> checker_ = nullptr;
    std::shared_ptr<string> clerk_ = nullptr;
    std::shared_ptr<string> invoiceAmount_ = nullptr;
    std::shared_ptr<string> invoiceCode_ = nullptr;
    std::shared_ptr<string> invoiceDate_ = nullptr;
    std::shared_ptr<string> invoiceNo_ = nullptr;
    // 1
    std::shared_ptr<vector<string>> itemName_ = nullptr;
    std::shared_ptr<string> payee_ = nullptr;
    std::shared_ptr<string> payeeAddress_ = nullptr;
    std::shared_ptr<string> payeeBankName_ = nullptr;
    std::shared_ptr<string> payeeName_ = nullptr;
    std::shared_ptr<string> payeeRegisterNo_ = nullptr;
    std::shared_ptr<string> payerAddress_ = nullptr;
    std::shared_ptr<string> payerBankName_ = nullptr;
    std::shared_ptr<string> payerName_ = nullptr;
    std::shared_ptr<string> payerRegisterNo_ = nullptr;
    std::shared_ptr<string> sumAmount_ = nullptr;
    std::shared_ptr<string> taxAmount_ = nullptr;
    std::shared_ptr<string> withoutTaxAmount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
