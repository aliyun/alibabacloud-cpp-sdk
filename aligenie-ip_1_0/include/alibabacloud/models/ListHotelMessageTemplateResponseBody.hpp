// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTELMESSAGETEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTELMESSAGETEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ListHotelMessageTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotelMessageTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotelMessageTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListHotelMessageTemplateResponseBody() = default ;
    ListHotelMessageTemplateResponseBody(const ListHotelMessageTemplateResponseBody &) = default ;
    ListHotelMessageTemplateResponseBody(ListHotelMessageTemplateResponseBody &&) = default ;
    ListHotelMessageTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotelMessageTemplateResponseBody() = default ;
    ListHotelMessageTemplateResponseBody& operator=(const ListHotelMessageTemplateResponseBody &) = default ;
    ListHotelMessageTemplateResponseBody& operator=(ListHotelMessageTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AuditMark, auditMark_);
        DARABONBA_PTR_TO_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_TO_JSON(TemplateDetail, templateDetail_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AuditMark, auditMark_);
        DARABONBA_PTR_FROM_JSON(AuditStatus, auditStatus_);
        DARABONBA_PTR_FROM_JSON(TemplateDetail, templateDetail_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->auditMark_ == nullptr
        && this->auditStatus_ == nullptr && this->templateDetail_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
      // auditMark Field Functions 
      bool hasAuditMark() const { return this->auditMark_ != nullptr;};
      void deleteAuditMark() { this->auditMark_ = nullptr;};
      inline string getAuditMark() const { DARABONBA_PTR_GET_DEFAULT(auditMark_, "") };
      inline Result& setAuditMark(string auditMark) { DARABONBA_PTR_SET_VALUE(auditMark_, auditMark) };


      // auditStatus Field Functions 
      bool hasAuditStatus() const { return this->auditStatus_ != nullptr;};
      void deleteAuditStatus() { this->auditStatus_ = nullptr;};
      inline string getAuditStatus() const { DARABONBA_PTR_GET_DEFAULT(auditStatus_, "") };
      inline Result& setAuditStatus(string auditStatus) { DARABONBA_PTR_SET_VALUE(auditStatus_, auditStatus) };


      // templateDetail Field Functions 
      bool hasTemplateDetail() const { return this->templateDetail_ != nullptr;};
      void deleteTemplateDetail() { this->templateDetail_ = nullptr;};
      inline string getTemplateDetail() const { DARABONBA_PTR_GET_DEFAULT(templateDetail_, "") };
      inline Result& setTemplateDetail(string templateDetail) { DARABONBA_PTR_SET_VALUE(templateDetail_, templateDetail) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline Result& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateName Field Functions 
      bool hasTemplateName() const { return this->templateName_ != nullptr;};
      void deleteTemplateName() { this->templateName_ = nullptr;};
      inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
      inline Result& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


    protected:
      shared_ptr<string> auditMark_ {};
      shared_ptr<string> auditStatus_ {};
      shared_ptr<string> templateDetail_ {};
      shared_ptr<int64_t> templateId_ {};
      shared_ptr<string> templateName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ListHotelMessageTemplateResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ListHotelMessageTemplateResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListHotelMessageTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListHotelMessageTemplateResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListHotelMessageTemplateResponseBody::Result>) };
    inline vector<ListHotelMessageTemplateResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListHotelMessageTemplateResponseBody::Result>) };
    inline ListHotelMessageTemplateResponseBody& setResult(const vector<ListHotelMessageTemplateResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListHotelMessageTemplateResponseBody& setResult(vector<ListHotelMessageTemplateResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ListHotelMessageTemplateResponseBody::Result>> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
