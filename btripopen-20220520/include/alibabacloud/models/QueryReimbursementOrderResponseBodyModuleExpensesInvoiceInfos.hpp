// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEEXPENSESINVOICEINFOS_HPP_
#define ALIBABACLOUD_MODELS_QUERYREIMBURSEMENTORDERRESPONSEBODYMODULEEXPENSESINVOICEINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& obj) { 
      DARABONBA_PTR_TO_JSON(amount, amount_);
      DARABONBA_PTR_TO_JSON(invoice_code, invoiceCode_);
      DARABONBA_PTR_TO_JSON(invoice_data, invoiceData_);
      DARABONBA_PTR_TO_JSON(invoice_date, invoiceDate_);
      DARABONBA_PTR_TO_JSON(invoice_number, invoiceNumber_);
      DARABONBA_PTR_TO_JSON(invoice_type, invoiceType_);
    };
    friend void from_json(const Darabonba::Json& j, QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(amount, amount_);
      DARABONBA_PTR_FROM_JSON(invoice_code, invoiceCode_);
      DARABONBA_PTR_FROM_JSON(invoice_data, invoiceData_);
      DARABONBA_PTR_FROM_JSON(invoice_date, invoiceDate_);
      DARABONBA_PTR_FROM_JSON(invoice_number, invoiceNumber_);
      DARABONBA_PTR_FROM_JSON(invoice_type, invoiceType_);
    };
    QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos() = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos(const QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos &) = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos(QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos &&) = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos() = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& operator=(const QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos &) = default ;
    QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& operator=(QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->amount_ != nullptr
        && this->invoiceCode_ != nullptr && this->invoiceData_ != nullptr && this->invoiceDate_ != nullptr && this->invoiceNumber_ != nullptr && this->invoiceType_ != nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline string amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& setAmount(string amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // invoiceCode Field Functions 
    bool hasInvoiceCode() const { return this->invoiceCode_ != nullptr;};
    void deleteInvoiceCode() { this->invoiceCode_ = nullptr;};
    inline string invoiceCode() const { DARABONBA_PTR_GET_DEFAULT(invoiceCode_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& setInvoiceCode(string invoiceCode) { DARABONBA_PTR_SET_VALUE(invoiceCode_, invoiceCode) };


    // invoiceData Field Functions 
    bool hasInvoiceData() const { return this->invoiceData_ != nullptr;};
    void deleteInvoiceData() { this->invoiceData_ = nullptr;};
    inline string invoiceData() const { DARABONBA_PTR_GET_DEFAULT(invoiceData_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& setInvoiceData(string invoiceData) { DARABONBA_PTR_SET_VALUE(invoiceData_, invoiceData) };


    // invoiceDate Field Functions 
    bool hasInvoiceDate() const { return this->invoiceDate_ != nullptr;};
    void deleteInvoiceDate() { this->invoiceDate_ = nullptr;};
    inline string invoiceDate() const { DARABONBA_PTR_GET_DEFAULT(invoiceDate_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& setInvoiceDate(string invoiceDate) { DARABONBA_PTR_SET_VALUE(invoiceDate_, invoiceDate) };


    // invoiceNumber Field Functions 
    bool hasInvoiceNumber() const { return this->invoiceNumber_ != nullptr;};
    void deleteInvoiceNumber() { this->invoiceNumber_ = nullptr;};
    inline string invoiceNumber() const { DARABONBA_PTR_GET_DEFAULT(invoiceNumber_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& setInvoiceNumber(string invoiceNumber) { DARABONBA_PTR_SET_VALUE(invoiceNumber_, invoiceNumber) };


    // invoiceType Field Functions 
    bool hasInvoiceType() const { return this->invoiceType_ != nullptr;};
    void deleteInvoiceType() { this->invoiceType_ = nullptr;};
    inline string invoiceType() const { DARABONBA_PTR_GET_DEFAULT(invoiceType_, "") };
    inline QueryReimbursementOrderResponseBodyModuleExpensesInvoiceInfos& setInvoiceType(string invoiceType) { DARABONBA_PTR_SET_VALUE(invoiceType_, invoiceType) };


  protected:
    std::shared_ptr<string> amount_ = nullptr;
    std::shared_ptr<string> invoiceCode_ = nullptr;
    std::shared_ptr<string> invoiceData_ = nullptr;
    std::shared_ptr<string> invoiceDate_ = nullptr;
    std::shared_ptr<string> invoiceNumber_ = nullptr;
    std::shared_ptr<string> invoiceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
