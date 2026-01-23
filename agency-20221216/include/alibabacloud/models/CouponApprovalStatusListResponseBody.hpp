// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COUPONAPPROVALSTATUSLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_COUPONAPPROVALSTATUSLISTRESPONSEBODY_HPP_
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
  class CouponApprovalStatusListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CouponApprovalStatusListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PageNo, pageNo_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Total, total_);
    };
    friend void from_json(const Darabonba::Json& j, CouponApprovalStatusListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PageNo, pageNo_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Total, total_);
    };
    CouponApprovalStatusListResponseBody() = default ;
    CouponApprovalStatusListResponseBody(const CouponApprovalStatusListResponseBody &) = default ;
    CouponApprovalStatusListResponseBody(CouponApprovalStatusListResponseBody &&) = default ;
    CouponApprovalStatusListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CouponApprovalStatusListResponseBody() = default ;
    CouponApprovalStatusListResponseBody& operator=(const CouponApprovalStatusListResponseBody &) = default ;
    CouponApprovalStatusListResponseBody& operator=(CouponApprovalStatusListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IssuerAccount, issuerAccount_);
        DARABONBA_PTR_TO_JSON(IssuerUid, issuerUid_);
        DARABONBA_PTR_TO_JSON(Note, note_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        DARABONBA_PTR_TO_JSON(TemplateStatus, templateStatus_);
        DARABONBA_PTR_TO_JSON(TimeOfRequest, timeOfRequest_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IssuerAccount, issuerAccount_);
        DARABONBA_PTR_FROM_JSON(IssuerUid, issuerUid_);
        DARABONBA_PTR_FROM_JSON(Note, note_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        DARABONBA_PTR_FROM_JSON(TemplateStatus, templateStatus_);
        DARABONBA_PTR_FROM_JSON(TimeOfRequest, timeOfRequest_);
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
      virtual bool empty() const override { return this->issuerAccount_ == nullptr
        && this->issuerUid_ == nullptr && this->note_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr && this->templateStatus_ == nullptr
        && this->timeOfRequest_ == nullptr; };
      // issuerAccount Field Functions 
      bool hasIssuerAccount() const { return this->issuerAccount_ != nullptr;};
      void deleteIssuerAccount() { this->issuerAccount_ = nullptr;};
      inline string getIssuerAccount() const { DARABONBA_PTR_GET_DEFAULT(issuerAccount_, "") };
      inline Data& setIssuerAccount(string issuerAccount) { DARABONBA_PTR_SET_VALUE(issuerAccount_, issuerAccount) };


      // issuerUid Field Functions 
      bool hasIssuerUid() const { return this->issuerUid_ != nullptr;};
      void deleteIssuerUid() { this->issuerUid_ = nullptr;};
      inline string getIssuerUid() const { DARABONBA_PTR_GET_DEFAULT(issuerUid_, "") };
      inline Data& setIssuerUid(string issuerUid) { DARABONBA_PTR_SET_VALUE(issuerUid_, issuerUid) };


      // note Field Functions 
      bool hasNote() const { return this->note_ != nullptr;};
      void deleteNote() { this->note_ = nullptr;};
      inline string getNote() const { DARABONBA_PTR_GET_DEFAULT(note_, "") };
      inline Data& setNote(string note) { DARABONBA_PTR_SET_VALUE(note_, note) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline Data& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Data& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      // templateStatus Field Functions 
      bool hasTemplateStatus() const { return this->templateStatus_ != nullptr;};
      void deleteTemplateStatus() { this->templateStatus_ = nullptr;};
      inline int64_t getTemplateStatus() const { DARABONBA_PTR_GET_DEFAULT(templateStatus_, 0L) };
      inline Data& setTemplateStatus(int64_t templateStatus) { DARABONBA_PTR_SET_VALUE(templateStatus_, templateStatus) };


      // timeOfRequest Field Functions 
      bool hasTimeOfRequest() const { return this->timeOfRequest_ != nullptr;};
      void deleteTimeOfRequest() { this->timeOfRequest_ = nullptr;};
      inline string getTimeOfRequest() const { DARABONBA_PTR_GET_DEFAULT(timeOfRequest_, "") };
      inline Data& setTimeOfRequest(string timeOfRequest) { DARABONBA_PTR_SET_VALUE(timeOfRequest_, timeOfRequest) };


    protected:
      shared_ptr<string> issuerAccount_ {};
      shared_ptr<string> issuerUid_ {};
      shared_ptr<string> note_ {};
      shared_ptr<string> templateId_ {};
      shared_ptr<string> templateName_ {};
      shared_ptr<int64_t> templateStatus_ {};
      shared_ptr<string> timeOfRequest_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->pageNo_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr
        && this->total_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CouponApprovalStatusListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<CouponApprovalStatusListResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<CouponApprovalStatusListResponseBody::Data>) };
    inline vector<CouponApprovalStatusListResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<CouponApprovalStatusListResponseBody::Data>) };
    inline CouponApprovalStatusListResponseBody& setData(const vector<CouponApprovalStatusListResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CouponApprovalStatusListResponseBody& setData(vector<CouponApprovalStatusListResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CouponApprovalStatusListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pageNo Field Functions 
    bool hasPageNo() const { return this->pageNo_ != nullptr;};
    void deletePageNo() { this->pageNo_ = nullptr;};
    inline int32_t getPageNo() const { DARABONBA_PTR_GET_DEFAULT(pageNo_, 0) };
    inline CouponApprovalStatusListResponseBody& setPageNo(int32_t pageNo) { DARABONBA_PTR_SET_VALUE(pageNo_, pageNo) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CouponApprovalStatusListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CouponApprovalStatusListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline CouponApprovalStatusListResponseBody& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<CouponApprovalStatusListResponseBody::Data>> data_ {};
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
