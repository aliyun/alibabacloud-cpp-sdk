// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSMSTEMPLATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYSMSTEMPLATELISTRESPONSEBODY_HPP_
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
  class QuerySmsTemplateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySmsTemplateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SmsTemplateList, smsTemplateList_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySmsTemplateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SmsTemplateList, smsTemplateList_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    QuerySmsTemplateListResponseBody() = default ;
    QuerySmsTemplateListResponseBody(const QuerySmsTemplateListResponseBody &) = default ;
    QuerySmsTemplateListResponseBody(QuerySmsTemplateListResponseBody &&) = default ;
    QuerySmsTemplateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySmsTemplateListResponseBody() = default ;
    QuerySmsTemplateListResponseBody& operator=(const QuerySmsTemplateListResponseBody &) = default ;
    QuerySmsTemplateListResponseBody& operator=(QuerySmsTemplateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SmsTemplateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SmsTemplateList& obj) { 
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(OrderId, orderId_);
        DARABONBA_PTR_TO_JSON(OuterTemplateType, outerTemplateType_);
        DARABONBA_PTR_TO_JSON(Reason, reason_);
        DARABONBA_PTR_TO_JSON(SignatureName, signatureName_);
        DARABONBA_PTR_TO_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_TO_JSON(TemplateContent, templateContent_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
        DARABONBA_PTR_TO_JSON(TrafficDriving, trafficDriving_);
      };
      friend void from_json(const Darabonba::Json& j, SmsTemplateList& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
        DARABONBA_PTR_FROM_JSON(OuterTemplateType, outerTemplateType_);
        DARABONBA_PTR_FROM_JSON(Reason, reason_);
        DARABONBA_PTR_FROM_JSON(SignatureName, signatureName_);
        DARABONBA_PTR_FROM_JSON(TemplateCode, templateCode_);
        DARABONBA_PTR_FROM_JSON(TemplateContent, templateContent_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
        DARABONBA_PTR_FROM_JSON(TrafficDriving, trafficDriving_);
      };
      SmsTemplateList() = default ;
      SmsTemplateList(const SmsTemplateList &) = default ;
      SmsTemplateList(SmsTemplateList &&) = default ;
      SmsTemplateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SmsTemplateList() = default ;
      SmsTemplateList& operator=(const SmsTemplateList &) = default ;
      SmsTemplateList& operator=(SmsTemplateList &&) = default ;
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
        // The time when the message template was rejected. Format: yyyy-MM-dd HH:mm:ss.
        shared_ptr<string> rejectDate_ {};
        // The reason why the message template was rejected.
        shared_ptr<string> rejectInfo_ {};
        // The remarks about the rejection.
        shared_ptr<string> rejectSubInfo_ {};
      };

      virtual bool empty() const override { return this->auditStatus_ == nullptr
        && this->createDate_ == nullptr && this->orderId_ == nullptr && this->outerTemplateType_ == nullptr && this->reason_ == nullptr && this->signatureName_ == nullptr
        && this->templateCode_ == nullptr && this->templateContent_ == nullptr && this->templateName_ == nullptr && this->templateType_ == nullptr && this->trafficDriving_ == nullptr; };
      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline SmsTemplateList& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline SmsTemplateList& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline string getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
      inline SmsTemplateList& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // outerTemplateType Field Functions 
      bool hasOuterTemplateType() const { return this->outerTemplateType_ != nullptr;};
      void deleteOuterTemplateType() { this->outerTemplateType_ = nullptr;};
      inline int32_t getOuterTemplateType() const { DARABONBA_PTR_GET_DEFAULT(outerTemplateType_, 0) };
      inline SmsTemplateList& setOuterTemplateType(int32_t outerTemplateType) { DARABONBA_PTR_SET_VALUE(outerTemplateType_, outerTemplateType) };


      // reason Field Functions 
      bool hasReason() const { return this->reason_ != nullptr;};
      void deleteReason() { this->reason_ = nullptr;};
      inline const SmsTemplateList::Reason & getReason() const { DARABONBA_PTR_GET_CONST(reason_, SmsTemplateList::Reason) };
      inline SmsTemplateList::Reason getReason() { DARABONBA_PTR_GET(reason_, SmsTemplateList::Reason) };
      inline SmsTemplateList& setReason(const SmsTemplateList::Reason & reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };
      inline SmsTemplateList& setReason(SmsTemplateList::Reason && reason) { DARABONBA_PTR_SET_RVALUE(reason_, reason) };


      // signatureName Field Functions 
      bool hasSignatureName() const { return this->signatureName_ != nullptr;};
      void deleteSignatureName() { this->signatureName_ = nullptr;};
      inline string getSignatureName() const { DARABONBA_PTR_GET_DEFAULT(signatureName_, "") };
      inline SmsTemplateList& setSignatureName(string signatureName) { DARABONBA_PTR_SET_VALUE(signatureName_, signatureName) };


      // templateCode Field Functions 
      bool hasTemplateCode() const { return this->templateCode_ != nullptr;};
      void deleteTemplateCode() { this->templateCode_ = nullptr;};
      inline string getTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(templateCode_, "") };
      inline SmsTemplateList& setTemplateCode(string templateCode) { DARABONBA_PTR_SET_VALUE(templateCode_, templateCode) };


      // templateContent Field Functions 
      bool hasTemplateContent() const { return this->templateContent_ != nullptr;};
      void deleteTemplateContent() { this->templateContent_ = nullptr;};
      inline string getTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(templateContent_, "") };
      inline SmsTemplateList& setTemplateContent(string templateContent) { DARABONBA_PTR_SET_VALUE(templateContent_, templateContent) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline SmsTemplateList& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline int32_t getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, 0) };
      inline SmsTemplateList& setTemplateType(int32_t templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


      // trafficDriving Field Functions 
      bool hasTrafficDriving() const { return this->trafficDriving_ != nullptr;};
      void deleteTrafficDriving() { this->trafficDriving_ = nullptr;};
      inline string getTrafficDriving() const { DARABONBA_PTR_GET_DEFAULT(trafficDriving_, "") };
      inline SmsTemplateList& setTrafficDriving(string trafficDriving) { DARABONBA_PTR_SET_VALUE(trafficDriving_, trafficDriving) };


    protected:
      // The approval status of the message template. Valid values:
      // 
      // *   **AUDIT_STATE_INIT**: The message template is pending approval.
      // *   **AUDIT_STATE_PASS**: The message template is approved.
      // *   **AUDIT_STATE_NOT_PASS**: The message template is rejected. You can view the reason in the Reason response parameter.
      // *   **AUDIT_STATE_CANCEL** or **AUDIT_SATE_CANCEL**: The approval is canceled.
      shared_ptr<string> auditStatus_ {};
      // The time when the message template was created. The time is in the yyyy-MM-dd HH:mm:ss format.
      shared_ptr<string> createDate_ {};
      // The ticket ID.
      shared_ptr<string> orderId_ {};
      // The type of the message template. We recommend that you specify this parameter. Valid values:
      // 
      // *   **0**: verification code
      // *   **1**: notification message
      // *   **2**: promotional message
      // *   **3**: message sent to countries or regions outside the Chinese mainland
      // *   **7**: digital message
      // 
      // > The template type is the same as the value of the TemplateType parameter in the AddSmsTemplate and ModifySmsTemplate operations.
      shared_ptr<int32_t> outerTemplateType_ {};
      // The approval remarks.
      // 
      // *   If the value of AuditStatus is **AUDIT_STATE_PASS** or **AUDIT_STATE_INIT**, the value of Reason is No Approval Remarks.
      // *   If the value of AuditStatus is **AUDIT_STATE_NOT_PASS**, the reason why the message template is rejected is returned.
      shared_ptr<SmsTemplateList::Reason> reason_ {};
      shared_ptr<string> signatureName_ {};
      // The code of the message template.
      // 
      // You can log on to the [Short Message Service (SMS) console](https://dysms.console.aliyun.com/dysms.htm), click **Go China** or **Go Globe** in the left-side navigation pane, and then view the template code on the **Templates** tab. You can also call the [AddSmsTemplate](https://help.aliyun.com/document_detail/121208.html) operation to obtain the template code.
      shared_ptr<string> templateCode_ {};
      // The content of the message template.
      shared_ptr<string> templateContent_ {};
      // The name of the message template.
      shared_ptr<string> templateName_ {};
      // The type of the message template. Valid values:
      // 
      // *   **0**: notification message
      // *   **1**: promotional message
      // *   **2**: verification code
      // *   **6**: message sent to countries or regions outside the Chinese mainland
      // *   **7**: digital message
      shared_ptr<int32_t> templateType_ {};
      shared_ptr<string> trafficDriving_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->message_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->smsTemplateList_ == nullptr
        && this->totalCount_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QuerySmsTemplateListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline QuerySmsTemplateListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QuerySmsTemplateListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline QuerySmsTemplateListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QuerySmsTemplateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // smsTemplateList Field Functions 
    bool hasSmsTemplateList() const { return this->smsTemplateList_ != nullptr;};
    void deleteSmsTemplateList() { this->smsTemplateList_ = nullptr;};
    inline const vector<QuerySmsTemplateListResponseBody::SmsTemplateList> & getSmsTemplateList() const { DARABONBA_PTR_GET_CONST(smsTemplateList_, vector<QuerySmsTemplateListResponseBody::SmsTemplateList>) };
    inline vector<QuerySmsTemplateListResponseBody::SmsTemplateList> getSmsTemplateList() { DARABONBA_PTR_GET(smsTemplateList_, vector<QuerySmsTemplateListResponseBody::SmsTemplateList>) };
    inline QuerySmsTemplateListResponseBody& setSmsTemplateList(const vector<QuerySmsTemplateListResponseBody::SmsTemplateList> & smsTemplateList) { DARABONBA_PTR_SET_VALUE(smsTemplateList_, smsTemplateList) };
    inline QuerySmsTemplateListResponseBody& setSmsTemplateList(vector<QuerySmsTemplateListResponseBody::SmsTemplateList> && smsTemplateList) { DARABONBA_PTR_SET_RVALUE(smsTemplateList_, smsTemplateList) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QuerySmsTemplateListResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


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
    // The number of templates per page. Valid values: **1 to 50**.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried message templates.
    shared_ptr<vector<QuerySmsTemplateListResponseBody::SmsTemplateList>> smsTemplateList_ {};
    // The total number of templates.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dysmsapi20170525
#endif
