// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTIER2COUPONAPPROVALRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTIER2COUPONAPPROVALRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class ListTier2CouponApprovalResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTier2CouponApprovalResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ListTier2CouponApprovalResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    ListTier2CouponApprovalResponseBody() = default ;
    ListTier2CouponApprovalResponseBody(const ListTier2CouponApprovalResponseBody &) = default ;
    ListTier2CouponApprovalResponseBody(ListTier2CouponApprovalResponseBody &&) = default ;
    ListTier2CouponApprovalResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTier2CouponApprovalResponseBody() = default ;
    ListTier2CouponApprovalResponseBody& operator=(const ListTier2CouponApprovalResponseBody &) = default ;
    ListTier2CouponApprovalResponseBody& operator=(ListTier2CouponApprovalResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationSheetId, applicationSheetId_);
        DARABONBA_PTR_TO_JSON(ApplicationTime, applicationTime_);
        DARABONBA_PTR_TO_JSON(ApprovalStatus, approvalStatus_);
        DARABONBA_PTR_TO_JSON(T2PartnerName, t2PartnerName_);
        DARABONBA_PTR_TO_JSON(T2PartnerUid, t2PartnerUid_);
        DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationSheetId, applicationSheetId_);
        DARABONBA_PTR_FROM_JSON(ApplicationTime, applicationTime_);
        DARABONBA_PTR_FROM_JSON(ApprovalStatus, approvalStatus_);
        DARABONBA_PTR_FROM_JSON(T2PartnerName, t2PartnerName_);
        DARABONBA_PTR_FROM_JSON(T2PartnerUid, t2PartnerUid_);
        DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
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
      virtual bool empty() const override { return this->applicationSheetId_ == nullptr
        && this->applicationTime_ == nullptr && this->approvalStatus_ == nullptr && this->t2PartnerName_ == nullptr && this->t2PartnerUid_ == nullptr && this->totalAmount_ == nullptr; };
      // applicationSheetId Field Functions 
      bool hasApplicationSheetId() const { return this->applicationSheetId_ != nullptr;};
      void deleteApplicationSheetId() { this->applicationSheetId_ = nullptr;};
      inline string getApplicationSheetId() const { DARABONBA_PTR_GET_DEFAULT(applicationSheetId_, "") };
      inline Data& setApplicationSheetId(string applicationSheetId) { DARABONBA_PTR_SET_VALUE(applicationSheetId_, applicationSheetId) };


      // applicationTime Field Functions 
      bool hasApplicationTime() const { return this->applicationTime_ != nullptr;};
      void deleteApplicationTime() { this->applicationTime_ = nullptr;};
      inline string getApplicationTime() const { DARABONBA_PTR_GET_DEFAULT(applicationTime_, "") };
      inline Data& setApplicationTime(string applicationTime) { DARABONBA_PTR_SET_VALUE(applicationTime_, applicationTime) };


      // approvalStatus Field Functions 
      bool hasApprovalStatus() const { return this->approvalStatus_ != nullptr;};
      void deleteApprovalStatus() { this->approvalStatus_ = nullptr;};
      inline string getApprovalStatus() const { DARABONBA_PTR_GET_DEFAULT(approvalStatus_, "") };
      inline Data& setApprovalStatus(string approvalStatus) { DARABONBA_PTR_SET_VALUE(approvalStatus_, approvalStatus) };


      // t2PartnerName Field Functions 
      bool hasT2PartnerName() const { return this->t2PartnerName_ != nullptr;};
      void deleteT2PartnerName() { this->t2PartnerName_ = nullptr;};
      inline string getT2PartnerName() const { DARABONBA_PTR_GET_DEFAULT(t2PartnerName_, "") };
      inline Data& setT2PartnerName(string t2PartnerName) { DARABONBA_PTR_SET_VALUE(t2PartnerName_, t2PartnerName) };


      // t2PartnerUid Field Functions 
      bool hasT2PartnerUid() const { return this->t2PartnerUid_ != nullptr;};
      void deleteT2PartnerUid() { this->t2PartnerUid_ = nullptr;};
      inline int64_t getT2PartnerUid() const { DARABONBA_PTR_GET_DEFAULT(t2PartnerUid_, 0L) };
      inline Data& setT2PartnerUid(int64_t t2PartnerUid) { DARABONBA_PTR_SET_VALUE(t2PartnerUid_, t2PartnerUid) };


      // totalAmount Field Functions 
      bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
      void deleteTotalAmount() { this->totalAmount_ = nullptr;};
      inline string getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, "") };
      inline Data& setTotalAmount(string totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    protected:
      shared_ptr<string> applicationSheetId_ {};
      shared_ptr<string> applicationTime_ {};
      shared_ptr<string> approvalStatus_ {};
      shared_ptr<string> t2PartnerName_ {};
      shared_ptr<int64_t> t2PartnerUid_ {};
      shared_ptr<string> totalAmount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListTier2CouponApprovalResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListTier2CouponApprovalResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListTier2CouponApprovalResponseBody::Data>) };
    inline vector<ListTier2CouponApprovalResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListTier2CouponApprovalResponseBody::Data>) };
    inline ListTier2CouponApprovalResponseBody& setData(const vector<ListTier2CouponApprovalResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListTier2CouponApprovalResponseBody& setData(vector<ListTier2CouponApprovalResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListTier2CouponApprovalResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline ListTier2CouponApprovalResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTier2CouponApprovalResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTier2CouponApprovalResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ListTier2CouponApprovalResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListTier2CouponApprovalResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<int32_t> pageNo_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
