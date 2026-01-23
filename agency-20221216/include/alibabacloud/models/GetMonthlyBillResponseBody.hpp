// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONTHLYBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMONTHLYBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetMonthlyBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonthlyBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonthlyBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetMonthlyBillResponseBody() = default ;
    GetMonthlyBillResponseBody(const GetMonthlyBillResponseBody &) = default ;
    GetMonthlyBillResponseBody(GetMonthlyBillResponseBody &&) = default ;
    GetMonthlyBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonthlyBillResponseBody() = default ;
    GetMonthlyBillResponseBody& operator=(const GetMonthlyBillResponseBody &) = default ;
    GetMonthlyBillResponseBody& operator=(GetMonthlyBillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BillLinkCSV, billLinkCSV_);
        DARABONBA_PTR_TO_JSON(BillLinkXLSX, billLinkXLSX_);
        DARABONBA_PTR_TO_JSON(BillOwner, billOwner_);
        DARABONBA_PTR_TO_JSON(BillType, billType_);
        DARABONBA_PTR_TO_JSON(InvoiceLink, invoiceLink_);
        DARABONBA_PTR_TO_JSON(RefundInvoiceFlag, refundInvoiceFlag_);
        DARABONBA_PTR_TO_JSON(RefundInvoiceLink, refundInvoiceLink_);
        DARABONBA_PTR_TO_JSON(SpendingTime, spendingTime_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BillLinkCSV, billLinkCSV_);
        DARABONBA_PTR_FROM_JSON(BillLinkXLSX, billLinkXLSX_);
        DARABONBA_PTR_FROM_JSON(BillOwner, billOwner_);
        DARABONBA_PTR_FROM_JSON(BillType, billType_);
        DARABONBA_PTR_FROM_JSON(InvoiceLink, invoiceLink_);
        DARABONBA_PTR_FROM_JSON(RefundInvoiceFlag, refundInvoiceFlag_);
        DARABONBA_PTR_FROM_JSON(RefundInvoiceLink, refundInvoiceLink_);
        DARABONBA_PTR_FROM_JSON(SpendingTime, spendingTime_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->billLinkCSV_ == nullptr
        && this->billLinkXLSX_ == nullptr && this->billOwner_ == nullptr && this->billType_ == nullptr && this->invoiceLink_ == nullptr && this->refundInvoiceFlag_ == nullptr
        && this->refundInvoiceLink_ == nullptr && this->spendingTime_ == nullptr; };
      // billLinkCSV Field Functions 
      bool hasBillLinkCSV() const { return this->billLinkCSV_ != nullptr;};
      void deleteBillLinkCSV() { this->billLinkCSV_ = nullptr;};
      inline string getBillLinkCSV() const { DARABONBA_PTR_GET_DEFAULT(billLinkCSV_, "") };
      inline Data& setBillLinkCSV(string billLinkCSV) { DARABONBA_PTR_SET_VALUE(billLinkCSV_, billLinkCSV) };


      // billLinkXLSX Field Functions 
      bool hasBillLinkXLSX() const { return this->billLinkXLSX_ != nullptr;};
      void deleteBillLinkXLSX() { this->billLinkXLSX_ = nullptr;};
      inline string getBillLinkXLSX() const { DARABONBA_PTR_GET_DEFAULT(billLinkXLSX_, "") };
      inline Data& setBillLinkXLSX(string billLinkXLSX) { DARABONBA_PTR_SET_VALUE(billLinkXLSX_, billLinkXLSX) };


      // billOwner Field Functions 
      bool hasBillOwner() const { return this->billOwner_ != nullptr;};
      void deleteBillOwner() { this->billOwner_ = nullptr;};
      inline string getBillOwner() const { DARABONBA_PTR_GET_DEFAULT(billOwner_, "") };
      inline Data& setBillOwner(string billOwner) { DARABONBA_PTR_SET_VALUE(billOwner_, billOwner) };


      // billType Field Functions 
      bool hasBillType() const { return this->billType_ != nullptr;};
      void deleteBillType() { this->billType_ = nullptr;};
      inline string getBillType() const { DARABONBA_PTR_GET_DEFAULT(billType_, "") };
      inline Data& setBillType(string billType) { DARABONBA_PTR_SET_VALUE(billType_, billType) };


      // invoiceLink Field Functions 
      bool hasInvoiceLink() const { return this->invoiceLink_ != nullptr;};
      void deleteInvoiceLink() { this->invoiceLink_ = nullptr;};
      inline string getInvoiceLink() const { DARABONBA_PTR_GET_DEFAULT(invoiceLink_, "") };
      inline Data& setInvoiceLink(string invoiceLink) { DARABONBA_PTR_SET_VALUE(invoiceLink_, invoiceLink) };


      // refundInvoiceFlag Field Functions 
      bool hasRefundInvoiceFlag() const { return this->refundInvoiceFlag_ != nullptr;};
      void deleteRefundInvoiceFlag() { this->refundInvoiceFlag_ = nullptr;};
      inline bool getRefundInvoiceFlag() const { DARABONBA_PTR_GET_DEFAULT(refundInvoiceFlag_, false) };
      inline Data& setRefundInvoiceFlag(bool refundInvoiceFlag) { DARABONBA_PTR_SET_VALUE(refundInvoiceFlag_, refundInvoiceFlag) };


      // refundInvoiceLink Field Functions 
      bool hasRefundInvoiceLink() const { return this->refundInvoiceLink_ != nullptr;};
      void deleteRefundInvoiceLink() { this->refundInvoiceLink_ = nullptr;};
      inline string getRefundInvoiceLink() const { DARABONBA_PTR_GET_DEFAULT(refundInvoiceLink_, "") };
      inline Data& setRefundInvoiceLink(string refundInvoiceLink) { DARABONBA_PTR_SET_VALUE(refundInvoiceLink_, refundInvoiceLink) };


      // spendingTime Field Functions 
      bool hasSpendingTime() const { return this->spendingTime_ != nullptr;};
      void deleteSpendingTime() { this->spendingTime_ = nullptr;};
      inline string getSpendingTime() const { DARABONBA_PTR_GET_DEFAULT(spendingTime_, "") };
      inline Data& setSpendingTime(string spendingTime) { DARABONBA_PTR_SET_VALUE(spendingTime_, spendingTime) };


    protected:
      // The link to download CSV file, please use HTTP Protocol.
      shared_ptr<string> billLinkCSV_ {};
      // The link to download XLSX file, please use HTTP Protocol.
      shared_ptr<string> billLinkXLSX_ {};
      // Same as inserted parameter BillOwner.
      shared_ptr<string> billOwner_ {};
      // Same as inserted parameter BillType.
      shared_ptr<string> billType_ {};
      // The URL to download invoice.
      shared_ptr<string> invoiceLink_ {};
      // It states the existence of refund invoice. </br>
      // Candidate Values: True/False
      shared_ptr<bool> refundInvoiceFlag_ {};
      // The URL to download refund invoice.
      shared_ptr<string> refundInvoiceLink_ {};
      // Spending Time, refer to the exact time of costuming.
      shared_ptr<string> spendingTime_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetMonthlyBillResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetMonthlyBillResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetMonthlyBillResponseBody::Data) };
    inline GetMonthlyBillResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetMonthlyBillResponseBody::Data) };
    inline GetMonthlyBillResponseBody& setData(const GetMonthlyBillResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetMonthlyBillResponseBody& setData(GetMonthlyBillResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetMonthlyBillResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMonthlyBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetMonthlyBillResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Result Code:
    // * 200 OK
    // * 1109 System error
    // * 3030 Sub Account Nickname exceeds maximum length, maximum length 150 bytes.
    // * 3031 Remark exceeds maximum length, maximum length 3000 bytes.
    shared_ptr<string> code_ {};
    // The returned data.
    shared_ptr<GetMonthlyBillResponseBody::Data> data_ {};
    // Same as Code parameters.
    shared_ptr<string> message_ {};
    // Request ID, the unique request identifier generated by Alibaba Cloud.
    shared_ptr<string> requestId_ {};
    // Candidate Value: True/False, which indicates whether the current API call itself is successful. It does not guarantee the success of subsequent business operations.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
