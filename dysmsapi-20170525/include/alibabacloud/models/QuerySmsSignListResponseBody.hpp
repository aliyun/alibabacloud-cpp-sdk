// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSSIGNLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSSIGNLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dysmsapi20170525
{
namespace Models
{
  class QuerySmsSignListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsSignListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmsSignList, smsSignList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsSignListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmsSignList, smsSignList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySmsSignListResponseBody() = default ;
    QuerySmsSignListResponseBody(const QuerySmsSignListResponseBody &) = default ;
    QuerySmsSignListResponseBody(QuerySmsSignListResponseBody &&) = default ;
    QuerySmsSignListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsSignListResponseBody() = default ;
    QuerySmsSignListResponseBody& operator=(const QuerySmsSignListResponseBody &) = default ;
    QuerySmsSignListResponseBody& operator=(QuerySmsSignListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmsSignList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmsSignList& obj) { 
        DARABONBA_PTR_TO_JSON(AppIcpRecordId, appIcpRecordId_);
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(AuthorizationLetterId, authorizationLetterId_);
        DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(SignName, signName_);
        DARABONBA_PTR_TO_JSON(TrademarkId, trademarkId_);
        DARABONBA_PTR_TO_JSON(authorizationLetterAuditPass, authorizationLetterAuditPass_);
      };
      friend void from_json(const Darabonba::Json& j, SmsSignList& obj) { 
        DARABONBA_PTR_FROM_JSON(AppIcpRecordId, appIcpRecordId_);
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(AuthorizationLetterId, authorizationLetterId_);
        DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(SignName, signName_);
        DARABONBA_PTR_FROM_JSON(TrademarkId, trademarkId_);
        DARABONBA_PTR_FROM_JSON(authorizationLetterAuditPass, authorizationLetterAuditPass_);
      };
      SmsSignList() = default ;
      SmsSignList(const SmsSignList &) = default ;
      SmsSignList(SmsSignList &&) = default ;
      SmsSignList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmsSignList() = default ;
      SmsSignList& operator=(const SmsSignList &) = default ;
      SmsSignList& operator=(SmsSignList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Reason : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Reason& obj) { 
          DARABONBA_PTR_TO_JSON(RejectDate, rejectDate_);
          DARABONBA_PTR_TO_JSON(RejectInfo, rejectInfo_);
          DARABONBA_PTR_TO_JSON(RejectSubInfo, rejectSubInfo_);
        };
        friend void from_json(const Darabonba::Json& j, Reason& obj) { 
          DARABONBA_PTR_FROM_JSON(RejectDate, rejectDate_);
          DARABONBA_PTR_FROM_JSON(RejectInfo, rejectInfo_);
          DARABONBA_PTR_FROM_JSON(RejectSubInfo, rejectSubInfo_);
        };
        Reason() = default ;
        Reason(const Reason &) = default ;
        Reason(Reason &&) = default ;
        Reason(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Reason() = default ;
        Reason& operator=(const Reason &) = default ;
        Reason& operator=(Reason &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->rejectDate_ == nullptr
        && this->rejectInfo_ == nullptr && this->rejectSubInfo_ == nullptr; };
        // rejectDate Field Functions 
        bool hasRejectDate() const { return this->rejectDate_ != nullptr;};
        void deleteRejectDate() { this->rejectDate_ = nullptr;};
        inline string getRejectDate() const { DARABONBA_PTR_GET_DEFAULT(rejectDate_, "") };
        inline Reason& setRejectDate(string rejectDate) { DARABONBA_PTR_SET_VALUE(rejectDate_, rejectDate) };


        // rejectInfo Field Functions 
        bool hasRejectInfo() const { return this->rejectInfo_ != nullptr;};
        void deleteRejectInfo() { this->rejectInfo_ = nullptr;};
        inline string getRejectInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectInfo_, "") };
        inline Reason& setRejectInfo(string rejectInfo) { DARABONBA_PTR_SET_VALUE(rejectInfo_, rejectInfo) };


        // rejectSubInfo Field Functions 
        bool hasRejectSubInfo() const { return this->rejectSubInfo_ != nullptr;};
        void deleteRejectSubInfo() { this->rejectSubInfo_ = nullptr;};
        inline string getRejectSubInfo() const { DARABONBA_PTR_GET_DEFAULT(rejectSubInfo_, "") };
        inline Reason& setRejectSubInfo(string rejectSubInfo) { DARABONBA_PTR_SET_VALUE(rejectSubInfo_, rejectSubInfo) };


      protected:
        // The time when the signature was rejected. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> rejectDate_ {};
        // The reason why the signature was rejected.
        shared_ptr<string> rejectInfo_ {};
        // The remarks about the rejection.
        shared_ptr<string> rejectSubInfo_ {};
      };

      virtual bool empty() const override { return this->appIcpRecordId_ == nullptr
        && this->auditStatus_ == nullptr && this->authorizationLetterId_ == nullptr && this->businessType_ == nullptr && this->createDate_ == nullptr && this->orderId_ == nullptr
        && this->reason_ == nullptr && this->signName_ == nullptr && this->trademarkId_ == nullptr && this->authorizationLetterAuditPass_ == nullptr; };
      // appIcpRecordId Field Functions 
      bool hasAppIcpRecordId() const { return this->appIcpRecordId_ != nullptr;};
      void deleteAppIcpRecordId() { this->appIcpRecordId_ = nullptr;};
      inline int64_t getAppIcpRecordId() const { DARABONBA_PTR_GET_DEFAULT(appIcpRecordId_, 0L) };
      inline SmsSignList& setAppIcpRecordId(int64_t appIcpRecordId) { DARABONBA_PTR_SET_VALUE(appIcpRecordId_, appIcpRecordId) };


      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline SmsSignList& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // authorizationLetterId Field Functions 
      bool hasAuthorizationLetterId() const { return this->authorizationLetterId_ != nullptr;};
      void deleteAuthorizationLetterId() { this->authorizationLetterId_ = nullptr;};
      inline int64_t getAuthorizationLetterId() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterId_, 0L) };
      inline SmsSignList& setAuthorizationLetterId(int64_t authorizationLetterId) { DARABONBA_PTR_SET_VALUE(authorizationLetterId_, authorizationLetterId) };


      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline string getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, "") };
      inline SmsSignList& setBusinessType(string businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline SmsSignList& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline SmsSignList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline const SmsSignList::Reason & getReason() const { DARABONBA_PTR_GET_CONST(reason_, SmsSignList::Reason) };
      inline SmsSignList::Reason getReason() { DARABONBA_PTR_GET(reason_, SmsSignList::Reason) };
      inline SmsSignList& setReason(const SmsSignList::Reason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
      inline SmsSignList& setReason(SmsSignList::Reason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


      // signName Field Functions 
      bool hasSignName() const { return this->signName_ != nullptr;};
      void deleteSignName() { this->signName_ = nullptr;};
      inline string getSignName() const { DARABONBA_PTR_GET_DEFAULT(signName_, "") };
      inline SmsSignList& setSignName(string signName) { DARABONBA_PTR_SET_VALUE(signName_, signName) };


      // trademarkId Field Functions 
      bool hasTrademarkId() const { return this->trademarkId_ != nullptr;};
      void deleteTrademarkId() { this->trademarkId_ = nullptr;};
      inline int64_t getTrademarkId() const { DARABONBA_PTR_GET_DEFAULT(trademarkId_, 0L) };
      inline SmsSignList& setTrademarkId(int64_t trademarkId) { DARABONBA_PTR_SET_VALUE(trademarkId_, trademarkId) };


      // authorizationLetterAuditPass Field Functions 
      bool hasAuthorizationLetterAuditPass() const { return this->authorizationLetterAuditPass_ != nullptr;};
      void deleteAuthorizationLetterAuditPass() { this->authorizationLetterAuditPass_ = nullptr;};
      inline bool getAuthorizationLetterAuditPass() const { DARABONBA_PTR_GET_DEFAULT(authorizationLetterAuditPass_, false) };
      inline SmsSignList& setAuthorizationLetterAuditPass(bool authorizationLetterAuditPass) { DARABONBA_PTR_SET_VALUE(authorizationLetterAuditPass_, authorizationLetterAuditPass) };


    protected:
      shared_ptr<int64_t> appIcpRecordId_ {};
      // The approval status of the signature. Valid values:
      // 
      // *   **AUDIT_STATE_INIT**: The signature is pending approval.
      // *   **AUDIT_STATE_PASS**: The signature is approved.
      // *   **AUDIT_STATE_NOT_PASS**: The signature is rejected. You can view the reason in the Reason response parameter.
      // *   **AUDIT_STATE_CANCEL**: The approval is canceled.
      shared_ptr<string> auditStatus_ {};
      shared_ptr<int64_t> authorizationLetterId_ {};
      // The type of the signature scenario. The return value ends with "type". Valid values:
      // 
      // *   Verification code type
      // *   General-purpose type
      shared_ptr<string> businessType_ {};
      // The time when the signature was created. Format: yyyy-MM-dd HH:mm:ss.
      shared_ptr<string> createDate_ {};
      // The ticket ID.
      shared_ptr<string> orderId_ {};
      // The approval remarks.
      // 
      // *   If the value of AuditStatus is **AUDIT_STATE_PASS** or **AUDIT_STATE_INIT**, the value of Reason is No Approval Remarks.
      // *   If the value of AuditStatus is **AUDIT_STATE_NOT_PASS**, the reason why the signature is rejected is returned.
      shared_ptr<SmsSignList::Reason> reason_ {};
      // The name of the signature.
      shared_ptr<string> signName_ {};
      shared_ptr<int64_t> trademarkId_ {};
      shared_ptr<bool> authorizationLetterAuditPass_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->smsSignList_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsSignListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QuerySmsSignListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsSignListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySmsSignListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsSignListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smsSignList Field Functions 
    bool hasSmsSignList() const { return this->smsSignList_ != nullptr;};
    void deleteSmsSignList() { this->smsSignList_ = nullptr;};
    inline const vector<QuerySmsSignListResponseBody::SmsSignList> & getSmsSignList() const { DARABONBA_PTR_GET_CONST(smsSignList_, vector<QuerySmsSignListResponseBody::SmsSignList>) };
    inline vector<QuerySmsSignListResponseBody::SmsSignList> getSmsSignList() { DARABONBA_PTR_GET(smsSignList_, vector<QuerySmsSignListResponseBody::SmsSignList>) };
    inline QuerySmsSignListResponseBody& setSmsSignList(const vector<QuerySmsSignListResponseBody::SmsSignList> & smsSignList) { DARABONBA_PTR_SET_VALUE(smsSignList_, smsSignList) };
    inline QuerySmsSignListResponseBody& setSmsSignList(vector<QuerySmsSignListResponseBody::SmsSignList> && smsSignList) { DARABONBA_PTR_SET_RVALUE(smsSignList_, smsSignList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QuerySmsSignListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The HTTP status code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   Other values indicate that the request failed. For more information, see [Error codes](https://help.aliyun.com/document_detail/101346.html).
    shared_ptr<string> code_ {};
    // The page number. Default value: **1**.
    shared_ptr<int32_t> currentPage_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The number of signatures per page. Valid values: **1 to 50**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried message signatures.
    shared_ptr<vector<QuerySmsSignListResponseBody::SmsSignList>> smsSignList_ {};
    // The total number of signatures.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
