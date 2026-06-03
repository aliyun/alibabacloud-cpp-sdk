// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSMSTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSMSTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypns20170620
{
namespace Models
{
  class ListSmsTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSmsTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSmsTemplateResponseBody() = default ;
    ListSmsTemplateResponseBody(const ListSmsTemplateResponseBody &) = default ;
    ListSmsTemplateResponseBody(ListSmsTemplateResponseBody &&) = default ;
    ListSmsTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSmsTemplateResponseBody() = default ;
    ListSmsTemplateResponseBody& operator=(const ListSmsTemplateResponseBody &) = default ;
    ListSmsTemplateResponseBody& operator=(ListSmsTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(AuditResult, auditResult_);
        DARABONBA_PTR_TO_JSON(BizUrl, bizUrl_);
        DARABONBA_PTR_TO_JSON(BusinessType, businessType_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DefaultFlag, defaultFlag_);
        DARABONBA_PTR_TO_JSON(Remark, remark_);
        DARABONBA_PTR_TO_JSON(SmsTemplateCode, smsTemplateCode_);
        DARABONBA_PTR_TO_JSON(SmsTemplateContent, smsTemplateContent_);
        DARABONBA_PTR_TO_JSON(SmsTemplateName, smsTemplateName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditResult, auditResult_);
        DARABONBA_PTR_FROM_JSON(BizUrl, bizUrl_);
        DARABONBA_PTR_FROM_JSON(BusinessType, businessType_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DefaultFlag, defaultFlag_);
        DARABONBA_PTR_FROM_JSON(Remark, remark_);
        DARABONBA_PTR_FROM_JSON(SmsTemplateCode, smsTemplateCode_);
        DARABONBA_PTR_FROM_JSON(SmsTemplateContent, smsTemplateContent_);
        DARABONBA_PTR_FROM_JSON(SmsTemplateName, smsTemplateName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      virtual bool empty() const override { return this->auditResult_ == nullptr
        && this->bizUrl_ == nullptr && this->businessType_ == nullptr && this->createDate_ == nullptr && this->defaultFlag_ == nullptr && this->remark_ == nullptr
        && this->smsTemplateCode_ == nullptr && this->smsTemplateContent_ == nullptr && this->smsTemplateName_ == nullptr && this->status_ == nullptr; };
      // auditResult Field Functions 
      bool hasAuditResult() const { return this->auditResult_ != nullptr;};
      void deleteAuditResult() { this->auditResult_ = nullptr;};
      inline string getAuditResult() const { DARABONBA_PTR_GET_DEFAULT(auditResult_, "") };
      inline Data& setAuditResult(string auditResult) { DARABONBA_PTR_SET_VALUE(auditResult_, auditResult) };


      // bizUrl Field Functions 
      bool hasBizUrl() const { return this->bizUrl_ != nullptr;};
      void deleteBizUrl() { this->bizUrl_ = nullptr;};
      inline string getBizUrl() const { DARABONBA_PTR_GET_DEFAULT(bizUrl_, "") };
      inline Data& setBizUrl(string bizUrl) { DARABONBA_PTR_SET_VALUE(bizUrl_, bizUrl) };


      // businessType Field Functions 
      bool hasBusinessType() const { return this->businessType_ != nullptr;};
      void deleteBusinessType() { this->businessType_ = nullptr;};
      inline int32_t getBusinessType() const { DARABONBA_PTR_GET_DEFAULT(businessType_, 0) };
      inline Data& setBusinessType(int32_t businessType) { DARABONBA_PTR_SET_VALUE(businessType_, businessType) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline int64_t getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, 0L) };
      inline Data& setCreateDate(int64_t createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // defaultFlag Field Functions 
      bool hasDefaultFlag() const { return this->defaultFlag_ != nullptr;};
      void deleteDefaultFlag() { this->defaultFlag_ = nullptr;};
      inline bool getDefaultFlag() const { DARABONBA_PTR_GET_DEFAULT(defaultFlag_, false) };
      inline Data& setDefaultFlag(bool defaultFlag) { DARABONBA_PTR_SET_VALUE(defaultFlag_, defaultFlag) };


      // remark Field Functions 
      bool hasRemark() const { return this->remark_ != nullptr;};
      void deleteRemark() { this->remark_ = nullptr;};
      inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
      inline Data& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


      // smsTemplateCode Field Functions 
      bool hasSmsTemplateCode() const { return this->smsTemplateCode_ != nullptr;};
      void deleteSmsTemplateCode() { this->smsTemplateCode_ = nullptr;};
      inline string getSmsTemplateCode() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateCode_, "") };
      inline Data& setSmsTemplateCode(string smsTemplateCode) { DARABONBA_PTR_SET_VALUE(smsTemplateCode_, smsTemplateCode) };


      // smsTemplateContent Field Functions 
      bool hasSmsTemplateContent() const { return this->smsTemplateContent_ != nullptr;};
      void deleteSmsTemplateContent() { this->smsTemplateContent_ = nullptr;};
      inline string getSmsTemplateContent() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateContent_, "") };
      inline Data& setSmsTemplateContent(string smsTemplateContent) { DARABONBA_PTR_SET_VALUE(smsTemplateContent_, smsTemplateContent) };


      // smsTemplateName Field Functions 
      bool hasSmsTemplateName() const { return this->smsTemplateName_ != nullptr;};
      void deleteSmsTemplateName() { this->smsTemplateName_ = nullptr;};
      inline string getSmsTemplateName() const { DARABONBA_PTR_GET_DEFAULT(smsTemplateName_, "") };
      inline Data& setSmsTemplateName(string smsTemplateName) { DARABONBA_PTR_SET_VALUE(smsTemplateName_, smsTemplateName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      shared_ptr<string> auditResult_ {};
      shared_ptr<string> bizUrl_ {};
      shared_ptr<int32_t> businessType_ {};
      shared_ptr<int64_t> createDate_ {};
      shared_ptr<bool> defaultFlag_ {};
      shared_ptr<string> remark_ {};
      shared_ptr<string> smsTemplateCode_ {};
      shared_ptr<string> smsTemplateContent_ {};
      shared_ptr<string> smsTemplateName_ {};
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ListSmsTemplateResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListSmsTemplateResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListSmsTemplateResponseBody::Data>) };
    inline vector<ListSmsTemplateResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListSmsTemplateResponseBody::Data>) };
    inline ListSmsTemplateResponseBody& setData(const vector<ListSmsTemplateResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListSmsTemplateResponseBody& setData(vector<ListSmsTemplateResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListSmsTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSmsTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<ListSmsTemplateResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypns20170620
#endif
