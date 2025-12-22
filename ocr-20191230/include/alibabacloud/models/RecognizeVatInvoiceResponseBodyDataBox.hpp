// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICERESPONSEBODYDATABOX_HPP_
#define ALIBABACLOUD_MODELS_RECOGNIZEVATINVOICERESPONSEBODYDATABOX_HPP_
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
  class RecognizeVATInvoiceResponseBodyDataBox : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RecognizeVATInvoiceResponseBodyDataBox& obj) { 
      DARABONBA_PTR_TO_JSON(Checkers, checkers_);
      DARABONBA_PTR_TO_JSON(Clerks, clerks_);
      DARABONBA_PTR_TO_JSON(InvoiceAmounts, invoiceAmounts_);
      DARABONBA_PTR_TO_JSON(InvoiceCodes, invoiceCodes_);
      DARABONBA_PTR_TO_JSON(InvoiceDates, invoiceDates_);
      DARABONBA_PTR_TO_JSON(InvoiceFakeCodes, invoiceFakeCodes_);
      DARABONBA_PTR_TO_JSON(InvoiceNoes, invoiceNoes_);
      DARABONBA_PTR_TO_JSON(ItemNames, itemNames_);
      DARABONBA_PTR_TO_JSON(PayeeAddresses, payeeAddresses_);
      DARABONBA_PTR_TO_JSON(PayeeBankNames, payeeBankNames_);
      DARABONBA_PTR_TO_JSON(PayeeNames, payeeNames_);
      DARABONBA_PTR_TO_JSON(PayeeRegisterNoes, payeeRegisterNoes_);
      DARABONBA_PTR_TO_JSON(Payees, payees_);
      DARABONBA_PTR_TO_JSON(PayerAddresses, payerAddresses_);
      DARABONBA_PTR_TO_JSON(PayerBankNames, payerBankNames_);
      DARABONBA_PTR_TO_JSON(PayerNames, payerNames_);
      DARABONBA_PTR_TO_JSON(PayerRegisterNoes, payerRegisterNoes_);
      DARABONBA_PTR_TO_JSON(SumAmounts, sumAmounts_);
      DARABONBA_PTR_TO_JSON(TaxAmounts, taxAmounts_);
      DARABONBA_PTR_TO_JSON(WithoutTaxAmounts, withoutTaxAmounts_);
    };
    friend void from_json(const Darabonba::Json& j, RecognizeVATInvoiceResponseBodyDataBox& obj) { 
      DARABONBA_PTR_FROM_JSON(Checkers, checkers_);
      DARABONBA_PTR_FROM_JSON(Clerks, clerks_);
      DARABONBA_PTR_FROM_JSON(InvoiceAmounts, invoiceAmounts_);
      DARABONBA_PTR_FROM_JSON(InvoiceCodes, invoiceCodes_);
      DARABONBA_PTR_FROM_JSON(InvoiceDates, invoiceDates_);
      DARABONBA_PTR_FROM_JSON(InvoiceFakeCodes, invoiceFakeCodes_);
      DARABONBA_PTR_FROM_JSON(InvoiceNoes, invoiceNoes_);
      DARABONBA_PTR_FROM_JSON(ItemNames, itemNames_);
      DARABONBA_PTR_FROM_JSON(PayeeAddresses, payeeAddresses_);
      DARABONBA_PTR_FROM_JSON(PayeeBankNames, payeeBankNames_);
      DARABONBA_PTR_FROM_JSON(PayeeNames, payeeNames_);
      DARABONBA_PTR_FROM_JSON(PayeeRegisterNoes, payeeRegisterNoes_);
      DARABONBA_PTR_FROM_JSON(Payees, payees_);
      DARABONBA_PTR_FROM_JSON(PayerAddresses, payerAddresses_);
      DARABONBA_PTR_FROM_JSON(PayerBankNames, payerBankNames_);
      DARABONBA_PTR_FROM_JSON(PayerNames, payerNames_);
      DARABONBA_PTR_FROM_JSON(PayerRegisterNoes, payerRegisterNoes_);
      DARABONBA_PTR_FROM_JSON(SumAmounts, sumAmounts_);
      DARABONBA_PTR_FROM_JSON(TaxAmounts, taxAmounts_);
      DARABONBA_PTR_FROM_JSON(WithoutTaxAmounts, withoutTaxAmounts_);
    };
    RecognizeVATInvoiceResponseBodyDataBox() = default ;
    RecognizeVATInvoiceResponseBodyDataBox(const RecognizeVATInvoiceResponseBodyDataBox &) = default ;
    RecognizeVATInvoiceResponseBodyDataBox(RecognizeVATInvoiceResponseBodyDataBox &&) = default ;
    RecognizeVATInvoiceResponseBodyDataBox(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RecognizeVATInvoiceResponseBodyDataBox() = default ;
    RecognizeVATInvoiceResponseBodyDataBox& operator=(const RecognizeVATInvoiceResponseBodyDataBox &) = default ;
    RecognizeVATInvoiceResponseBodyDataBox& operator=(RecognizeVATInvoiceResponseBodyDataBox &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkers_ == nullptr
        && return this->clerks_ == nullptr && return this->invoiceAmounts_ == nullptr && return this->invoiceCodes_ == nullptr && return this->invoiceDates_ == nullptr && return this->invoiceFakeCodes_ == nullptr
        && return this->invoiceNoes_ == nullptr && return this->itemNames_ == nullptr && return this->payeeAddresses_ == nullptr && return this->payeeBankNames_ == nullptr && return this->payeeNames_ == nullptr
        && return this->payeeRegisterNoes_ == nullptr && return this->payees_ == nullptr && return this->payerAddresses_ == nullptr && return this->payerBankNames_ == nullptr && return this->payerNames_ == nullptr
        && return this->payerRegisterNoes_ == nullptr && return this->sumAmounts_ == nullptr && return this->taxAmounts_ == nullptr && return this->withoutTaxAmounts_ == nullptr; };
    // checkers Field Functions 
    bool hasCheckers() const { return this->checkers_ != nullptr;};
    void deleteCheckers() { this->checkers_ = nullptr;};
    inline const vector<float> & checkers() const { DARABONBA_PTR_GET_CONST(checkers_, vector<float>) };
    inline vector<float> checkers() { DARABONBA_PTR_GET(checkers_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setCheckers(const vector<float> & checkers) { DARABONBA_PTR_SET_VALUE(checkers_, checkers) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setCheckers(vector<float> && checkers) { DARABONBA_PTR_SET_RVALUE(checkers_, checkers) };


    // clerks Field Functions 
    bool hasClerks() const { return this->clerks_ != nullptr;};
    void deleteClerks() { this->clerks_ = nullptr;};
    inline const vector<float> & clerks() const { DARABONBA_PTR_GET_CONST(clerks_, vector<float>) };
    inline vector<float> clerks() { DARABONBA_PTR_GET(clerks_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setClerks(const vector<float> & clerks) { DARABONBA_PTR_SET_VALUE(clerks_, clerks) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setClerks(vector<float> && clerks) { DARABONBA_PTR_SET_RVALUE(clerks_, clerks) };


    // invoiceAmounts Field Functions 
    bool hasInvoiceAmounts() const { return this->invoiceAmounts_ != nullptr;};
    void deleteInvoiceAmounts() { this->invoiceAmounts_ = nullptr;};
    inline const vector<float> & invoiceAmounts() const { DARABONBA_PTR_GET_CONST(invoiceAmounts_, vector<float>) };
    inline vector<float> invoiceAmounts() { DARABONBA_PTR_GET(invoiceAmounts_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceAmounts(const vector<float> & invoiceAmounts) { DARABONBA_PTR_SET_VALUE(invoiceAmounts_, invoiceAmounts) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceAmounts(vector<float> && invoiceAmounts) { DARABONBA_PTR_SET_RVALUE(invoiceAmounts_, invoiceAmounts) };


    // invoiceCodes Field Functions 
    bool hasInvoiceCodes() const { return this->invoiceCodes_ != nullptr;};
    void deleteInvoiceCodes() { this->invoiceCodes_ = nullptr;};
    inline const vector<float> & invoiceCodes() const { DARABONBA_PTR_GET_CONST(invoiceCodes_, vector<float>) };
    inline vector<float> invoiceCodes() { DARABONBA_PTR_GET(invoiceCodes_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceCodes(const vector<float> & invoiceCodes) { DARABONBA_PTR_SET_VALUE(invoiceCodes_, invoiceCodes) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceCodes(vector<float> && invoiceCodes) { DARABONBA_PTR_SET_RVALUE(invoiceCodes_, invoiceCodes) };


    // invoiceDates Field Functions 
    bool hasInvoiceDates() const { return this->invoiceDates_ != nullptr;};
    void deleteInvoiceDates() { this->invoiceDates_ = nullptr;};
    inline const vector<float> & invoiceDates() const { DARABONBA_PTR_GET_CONST(invoiceDates_, vector<float>) };
    inline vector<float> invoiceDates() { DARABONBA_PTR_GET(invoiceDates_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceDates(const vector<float> & invoiceDates) { DARABONBA_PTR_SET_VALUE(invoiceDates_, invoiceDates) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceDates(vector<float> && invoiceDates) { DARABONBA_PTR_SET_RVALUE(invoiceDates_, invoiceDates) };


    // invoiceFakeCodes Field Functions 
    bool hasInvoiceFakeCodes() const { return this->invoiceFakeCodes_ != nullptr;};
    void deleteInvoiceFakeCodes() { this->invoiceFakeCodes_ = nullptr;};
    inline const vector<float> & invoiceFakeCodes() const { DARABONBA_PTR_GET_CONST(invoiceFakeCodes_, vector<float>) };
    inline vector<float> invoiceFakeCodes() { DARABONBA_PTR_GET(invoiceFakeCodes_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceFakeCodes(const vector<float> & invoiceFakeCodes) { DARABONBA_PTR_SET_VALUE(invoiceFakeCodes_, invoiceFakeCodes) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceFakeCodes(vector<float> && invoiceFakeCodes) { DARABONBA_PTR_SET_RVALUE(invoiceFakeCodes_, invoiceFakeCodes) };


    // invoiceNoes Field Functions 
    bool hasInvoiceNoes() const { return this->invoiceNoes_ != nullptr;};
    void deleteInvoiceNoes() { this->invoiceNoes_ = nullptr;};
    inline const vector<float> & invoiceNoes() const { DARABONBA_PTR_GET_CONST(invoiceNoes_, vector<float>) };
    inline vector<float> invoiceNoes() { DARABONBA_PTR_GET(invoiceNoes_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceNoes(const vector<float> & invoiceNoes) { DARABONBA_PTR_SET_VALUE(invoiceNoes_, invoiceNoes) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setInvoiceNoes(vector<float> && invoiceNoes) { DARABONBA_PTR_SET_RVALUE(invoiceNoes_, invoiceNoes) };


    // itemNames Field Functions 
    bool hasItemNames() const { return this->itemNames_ != nullptr;};
    void deleteItemNames() { this->itemNames_ = nullptr;};
    inline const vector<int32_t> & itemNames() const { DARABONBA_PTR_GET_CONST(itemNames_, vector<int32_t>) };
    inline vector<int32_t> itemNames() { DARABONBA_PTR_GET(itemNames_, vector<int32_t>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setItemNames(const vector<int32_t> & itemNames) { DARABONBA_PTR_SET_VALUE(itemNames_, itemNames) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setItemNames(vector<int32_t> && itemNames) { DARABONBA_PTR_SET_RVALUE(itemNames_, itemNames) };


    // payeeAddresses Field Functions 
    bool hasPayeeAddresses() const { return this->payeeAddresses_ != nullptr;};
    void deletePayeeAddresses() { this->payeeAddresses_ = nullptr;};
    inline const vector<float> & payeeAddresses() const { DARABONBA_PTR_GET_CONST(payeeAddresses_, vector<float>) };
    inline vector<float> payeeAddresses() { DARABONBA_PTR_GET(payeeAddresses_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayeeAddresses(const vector<float> & payeeAddresses) { DARABONBA_PTR_SET_VALUE(payeeAddresses_, payeeAddresses) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayeeAddresses(vector<float> && payeeAddresses) { DARABONBA_PTR_SET_RVALUE(payeeAddresses_, payeeAddresses) };


    // payeeBankNames Field Functions 
    bool hasPayeeBankNames() const { return this->payeeBankNames_ != nullptr;};
    void deletePayeeBankNames() { this->payeeBankNames_ = nullptr;};
    inline const vector<float> & payeeBankNames() const { DARABONBA_PTR_GET_CONST(payeeBankNames_, vector<float>) };
    inline vector<float> payeeBankNames() { DARABONBA_PTR_GET(payeeBankNames_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayeeBankNames(const vector<float> & payeeBankNames) { DARABONBA_PTR_SET_VALUE(payeeBankNames_, payeeBankNames) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayeeBankNames(vector<float> && payeeBankNames) { DARABONBA_PTR_SET_RVALUE(payeeBankNames_, payeeBankNames) };


    // payeeNames Field Functions 
    bool hasPayeeNames() const { return this->payeeNames_ != nullptr;};
    void deletePayeeNames() { this->payeeNames_ = nullptr;};
    inline const vector<float> & payeeNames() const { DARABONBA_PTR_GET_CONST(payeeNames_, vector<float>) };
    inline vector<float> payeeNames() { DARABONBA_PTR_GET(payeeNames_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayeeNames(const vector<float> & payeeNames) { DARABONBA_PTR_SET_VALUE(payeeNames_, payeeNames) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayeeNames(vector<float> && payeeNames) { DARABONBA_PTR_SET_RVALUE(payeeNames_, payeeNames) };


    // payeeRegisterNoes Field Functions 
    bool hasPayeeRegisterNoes() const { return this->payeeRegisterNoes_ != nullptr;};
    void deletePayeeRegisterNoes() { this->payeeRegisterNoes_ = nullptr;};
    inline const vector<float> & payeeRegisterNoes() const { DARABONBA_PTR_GET_CONST(payeeRegisterNoes_, vector<float>) };
    inline vector<float> payeeRegisterNoes() { DARABONBA_PTR_GET(payeeRegisterNoes_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayeeRegisterNoes(const vector<float> & payeeRegisterNoes) { DARABONBA_PTR_SET_VALUE(payeeRegisterNoes_, payeeRegisterNoes) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayeeRegisterNoes(vector<float> && payeeRegisterNoes) { DARABONBA_PTR_SET_RVALUE(payeeRegisterNoes_, payeeRegisterNoes) };


    // payees Field Functions 
    bool hasPayees() const { return this->payees_ != nullptr;};
    void deletePayees() { this->payees_ = nullptr;};
    inline const vector<float> & payees() const { DARABONBA_PTR_GET_CONST(payees_, vector<float>) };
    inline vector<float> payees() { DARABONBA_PTR_GET(payees_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayees(const vector<float> & payees) { DARABONBA_PTR_SET_VALUE(payees_, payees) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayees(vector<float> && payees) { DARABONBA_PTR_SET_RVALUE(payees_, payees) };


    // payerAddresses Field Functions 
    bool hasPayerAddresses() const { return this->payerAddresses_ != nullptr;};
    void deletePayerAddresses() { this->payerAddresses_ = nullptr;};
    inline const vector<float> & payerAddresses() const { DARABONBA_PTR_GET_CONST(payerAddresses_, vector<float>) };
    inline vector<float> payerAddresses() { DARABONBA_PTR_GET(payerAddresses_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayerAddresses(const vector<float> & payerAddresses) { DARABONBA_PTR_SET_VALUE(payerAddresses_, payerAddresses) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayerAddresses(vector<float> && payerAddresses) { DARABONBA_PTR_SET_RVALUE(payerAddresses_, payerAddresses) };


    // payerBankNames Field Functions 
    bool hasPayerBankNames() const { return this->payerBankNames_ != nullptr;};
    void deletePayerBankNames() { this->payerBankNames_ = nullptr;};
    inline const vector<float> & payerBankNames() const { DARABONBA_PTR_GET_CONST(payerBankNames_, vector<float>) };
    inline vector<float> payerBankNames() { DARABONBA_PTR_GET(payerBankNames_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayerBankNames(const vector<float> & payerBankNames) { DARABONBA_PTR_SET_VALUE(payerBankNames_, payerBankNames) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayerBankNames(vector<float> && payerBankNames) { DARABONBA_PTR_SET_RVALUE(payerBankNames_, payerBankNames) };


    // payerNames Field Functions 
    bool hasPayerNames() const { return this->payerNames_ != nullptr;};
    void deletePayerNames() { this->payerNames_ = nullptr;};
    inline const vector<float> & payerNames() const { DARABONBA_PTR_GET_CONST(payerNames_, vector<float>) };
    inline vector<float> payerNames() { DARABONBA_PTR_GET(payerNames_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayerNames(const vector<float> & payerNames) { DARABONBA_PTR_SET_VALUE(payerNames_, payerNames) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayerNames(vector<float> && payerNames) { DARABONBA_PTR_SET_RVALUE(payerNames_, payerNames) };


    // payerRegisterNoes Field Functions 
    bool hasPayerRegisterNoes() const { return this->payerRegisterNoes_ != nullptr;};
    void deletePayerRegisterNoes() { this->payerRegisterNoes_ = nullptr;};
    inline const vector<float> & payerRegisterNoes() const { DARABONBA_PTR_GET_CONST(payerRegisterNoes_, vector<float>) };
    inline vector<float> payerRegisterNoes() { DARABONBA_PTR_GET(payerRegisterNoes_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayerRegisterNoes(const vector<float> & payerRegisterNoes) { DARABONBA_PTR_SET_VALUE(payerRegisterNoes_, payerRegisterNoes) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setPayerRegisterNoes(vector<float> && payerRegisterNoes) { DARABONBA_PTR_SET_RVALUE(payerRegisterNoes_, payerRegisterNoes) };


    // sumAmounts Field Functions 
    bool hasSumAmounts() const { return this->sumAmounts_ != nullptr;};
    void deleteSumAmounts() { this->sumAmounts_ = nullptr;};
    inline const vector<float> & sumAmounts() const { DARABONBA_PTR_GET_CONST(sumAmounts_, vector<float>) };
    inline vector<float> sumAmounts() { DARABONBA_PTR_GET(sumAmounts_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setSumAmounts(const vector<float> & sumAmounts) { DARABONBA_PTR_SET_VALUE(sumAmounts_, sumAmounts) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setSumAmounts(vector<float> && sumAmounts) { DARABONBA_PTR_SET_RVALUE(sumAmounts_, sumAmounts) };


    // taxAmounts Field Functions 
    bool hasTaxAmounts() const { return this->taxAmounts_ != nullptr;};
    void deleteTaxAmounts() { this->taxAmounts_ = nullptr;};
    inline const vector<float> & taxAmounts() const { DARABONBA_PTR_GET_CONST(taxAmounts_, vector<float>) };
    inline vector<float> taxAmounts() { DARABONBA_PTR_GET(taxAmounts_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setTaxAmounts(const vector<float> & taxAmounts) { DARABONBA_PTR_SET_VALUE(taxAmounts_, taxAmounts) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setTaxAmounts(vector<float> && taxAmounts) { DARABONBA_PTR_SET_RVALUE(taxAmounts_, taxAmounts) };


    // withoutTaxAmounts Field Functions 
    bool hasWithoutTaxAmounts() const { return this->withoutTaxAmounts_ != nullptr;};
    void deleteWithoutTaxAmounts() { this->withoutTaxAmounts_ = nullptr;};
    inline const vector<float> & withoutTaxAmounts() const { DARABONBA_PTR_GET_CONST(withoutTaxAmounts_, vector<float>) };
    inline vector<float> withoutTaxAmounts() { DARABONBA_PTR_GET(withoutTaxAmounts_, vector<float>) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setWithoutTaxAmounts(const vector<float> & withoutTaxAmounts) { DARABONBA_PTR_SET_VALUE(withoutTaxAmounts_, withoutTaxAmounts) };
    inline RecognizeVATInvoiceResponseBodyDataBox& setWithoutTaxAmounts(vector<float> && withoutTaxAmounts) { DARABONBA_PTR_SET_RVALUE(withoutTaxAmounts_, withoutTaxAmounts) };


  protected:
    // 1
    std::shared_ptr<vector<float>> checkers_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> clerks_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> invoiceAmounts_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> invoiceCodes_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> invoiceDates_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> invoiceFakeCodes_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> invoiceNoes_ = nullptr;
    // 1
    std::shared_ptr<vector<int32_t>> itemNames_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payeeAddresses_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payeeBankNames_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payeeNames_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payeeRegisterNoes_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payees_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payerAddresses_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payerBankNames_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payerNames_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> payerRegisterNoes_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> sumAmounts_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> taxAmounts_ = nullptr;
    // 1
    std::shared_ptr<vector<float>> withoutTaxAmounts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ocr20191230
#endif
