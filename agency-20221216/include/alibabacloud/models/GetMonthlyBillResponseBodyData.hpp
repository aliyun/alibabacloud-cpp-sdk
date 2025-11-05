// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONTHLYBILLRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMONTHLYBILLRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetMonthlyBillResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonthlyBillResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(BillLinkCSV, billLinkCSV_);
      DARABONBA_PTR_TO_JSON(BillLinkXLSX, billLinkXLSX_);
      DARABONBA_PTR_TO_JSON(BillOwner, billOwner_);
      DARABONBA_PTR_TO_JSON(BillType, billType_);
      DARABONBA_PTR_TO_JSON(InvoiceLink, invoiceLink_);
      DARABONBA_PTR_TO_JSON(RefundInvoiceFlag, refundInvoiceFlag_);
      DARABONBA_PTR_TO_JSON(RefundInvoiceLink, refundInvoiceLink_);
      DARABONBA_PTR_TO_JSON(SpendingTime, spendingTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonthlyBillResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(BillLinkCSV, billLinkCSV_);
      DARABONBA_PTR_FROM_JSON(BillLinkXLSX, billLinkXLSX_);
      DARABONBA_PTR_FROM_JSON(BillOwner, billOwner_);
      DARABONBA_PTR_FROM_JSON(BillType, billType_);
      DARABONBA_PTR_FROM_JSON(InvoiceLink, invoiceLink_);
      DARABONBA_PTR_FROM_JSON(RefundInvoiceFlag, refundInvoiceFlag_);
      DARABONBA_PTR_FROM_JSON(RefundInvoiceLink, refundInvoiceLink_);
      DARABONBA_PTR_FROM_JSON(SpendingTime, spendingTime_);
    };
    GetMonthlyBillResponseBodyData() = default ;
    GetMonthlyBillResponseBodyData(const GetMonthlyBillResponseBodyData &) = default ;
    GetMonthlyBillResponseBodyData(GetMonthlyBillResponseBodyData &&) = default ;
    GetMonthlyBillResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonthlyBillResponseBodyData() = default ;
    GetMonthlyBillResponseBodyData& operator=(const GetMonthlyBillResponseBodyData &) = default ;
    GetMonthlyBillResponseBodyData& operator=(GetMonthlyBillResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->billLinkCSV_ == nullptr
        && return this->billLinkXLSX_ == nullptr && return this->billOwner_ == nullptr && return this->billType_ == nullptr && return this->invoiceLink_ == nullptr && return this->refundInvoiceFlag_ == nullptr
        && return this->refundInvoiceLink_ == nullptr && return this->spendingTime_ == nullptr; };
    // billLinkCSV Field Functions 
    bool hasBillLinkCSV() const { return this->billLinkCSV_ != nullptr;};
    void deleteBillLinkCSV() { this->billLinkCSV_ = nullptr;};
    inline string billLinkCSV() const { DARABONBA_PTR_GET_DEFAULT(billLinkCSV_, "") };
    inline GetMonthlyBillResponseBodyData& setBillLinkCSV(string billLinkCSV) { DARABONBA_PTR_SET_VALUE(billLinkCSV_, billLinkCSV) };


    // billLinkXLSX Field Functions 
    bool hasBillLinkXLSX() const { return this->billLinkXLSX_ != nullptr;};
    void deleteBillLinkXLSX() { this->billLinkXLSX_ = nullptr;};
    inline string billLinkXLSX() const { DARABONBA_PTR_GET_DEFAULT(billLinkXLSX_, "") };
    inline GetMonthlyBillResponseBodyData& setBillLinkXLSX(string billLinkXLSX) { DARABONBA_PTR_SET_VALUE(billLinkXLSX_, billLinkXLSX) };


    // billOwner Field Functions 
    bool hasBillOwner() const { return this->billOwner_ != nullptr;};
    void deleteBillOwner() { this->billOwner_ = nullptr;};
    inline string billOwner() const { DARABONBA_PTR_GET_DEFAULT(billOwner_, "") };
    inline GetMonthlyBillResponseBodyData& setBillOwner(string billOwner) { DARABONBA_PTR_SET_VALUE(billOwner_, billOwner) };


    // billType Field Functions 
    bool hasBillType() const { return this->billType_ != nullptr;};
    void deleteBillType() { this->billType_ = nullptr;};
    inline string billType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
    inline GetMonthlyBillResponseBodyData& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


    // invoiceLink Field Functions 
    bool hasInvoiceLink() const { return this->invoiceLink_ != nullptr;};
    void deleteInvoiceLink() { this->invoiceLink_ = nullptr;};
    inline string invoiceLink() const { DARABONBA_PTR_GET_DEFAULT(invoiceLink_, "") };
    inline GetMonthlyBillResponseBodyData& setInvoiceLink(string invoiceLink) { DARABONBA_PTR_SET_VALUE(invoiceLink_, invoiceLink) };


    // refundInvoiceFlag Field Functions 
    bool hasRefundInvoiceFlag() const { return this->refundInvoiceFlag_ != nullptr;};
    void deleteRefundInvoiceFlag() { this->refundInvoiceFlag_ = nullptr;};
    inline bool refundInvoiceFlag() const { DARABONBA_PTR_GET_DEFAULT(refundInvoiceFlag_, false) };
    inline GetMonthlyBillResponseBodyData& setRefundInvoiceFlag(bool refundInvoiceFlag) { DARABONBA_PTR_SET_VALUE(refundInvoiceFlag_, refundInvoiceFlag) };


    // refundInvoiceLink Field Functions 
    bool hasRefundInvoiceLink() const { return this->refundInvoiceLink_ != nullptr;};
    void deleteRefundInvoiceLink() { this->refundInvoiceLink_ = nullptr;};
    inline string refundInvoiceLink() const { DARABONBA_PTR_GET_DEFAULT(refundInvoiceLink_, "") };
    inline GetMonthlyBillResponseBodyData& setRefundInvoiceLink(string refundInvoiceLink) { DARABONBA_PTR_SET_VALUE(refundInvoiceLink_, refundInvoiceLink) };


    // spendingTime Field Functions 
    bool hasSpendingTime() const { return this->spendingTime_ != nullptr;};
    void deleteSpendingTime() { this->spendingTime_ = nullptr;};
    inline string spendingTime() const { DARABONBA_PTR_GET_DEFAULT(spendingTime_, "") };
    inline GetMonthlyBillResponseBodyData& setSpendingTime(string spendingTime) { DARABONBA_PTR_SET_VALUE(spendingTime_, spendingTime) };


  protected:
    // The link to download CSV file, please use HTTP Protocol.
    std::shared_ptr<string> billLinkCSV_ = nullptr;
    // The link to download XLSX file, please use HTTP Protocol.
    std::shared_ptr<string> billLinkXLSX_ = nullptr;
    // Same as inserted parameter BillOwner.
    std::shared_ptr<string> billOwner_ = nullptr;
    // Same as inserted parameter BillType.
    std::shared_ptr<string> billType_ = nullptr;
    // The URL to download invoice.
    std::shared_ptr<string> invoiceLink_ = nullptr;
    // It states the existence of refund invoice. </br>
    // Candidate Values: True/False
    std::shared_ptr<bool> refundInvoiceFlag_ = nullptr;
    // The URL to download refund invoice.
    std::shared_ptr<string> refundInvoiceLink_ = nullptr;
    // Spending Time, refer to the exact time of costuming.
    std::shared_ptr<string> spendingTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
