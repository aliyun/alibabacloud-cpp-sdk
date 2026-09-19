// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATECACHERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATECACHERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/PublicTemplateCache.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateCacheResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateCacheResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(templateCache, templateCache_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateCacheResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(templateCache, templateCache_);
    };
    CreateTemplateCacheResponseBody() = default ;
    CreateTemplateCacheResponseBody(const CreateTemplateCacheResponseBody &) = default ;
    CreateTemplateCacheResponseBody(CreateTemplateCacheResponseBody &&) = default ;
    CreateTemplateCacheResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateCacheResponseBody() = default ;
    CreateTemplateCacheResponseBody& operator=(const CreateTemplateCacheResponseBody &) = default ;
    CreateTemplateCacheResponseBody& operator=(CreateTemplateCacheResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->templateCache_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateTemplateCacheResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateTemplateCacheResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateTemplateCacheResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // templateCache Field Functions 
    bool hasTemplateCache() const { return this->templateCache_ != nullptr;};
    void deleteTemplateCache() { this->templateCache_ = nullptr;};
    inline const PublicTemplateCache & getTemplateCache() const { DARABONBA_PTR_GET_CONST(templateCache_, PublicTemplateCache) };
    inline PublicTemplateCache getTemplateCache() { DARABONBA_PTR_GET(templateCache_, PublicTemplateCache) };
    inline CreateTemplateCacheResponseBody& setTemplateCache(const PublicTemplateCache & templateCache) { DARABONBA_PTR_SET_VALUE(templateCache_, templateCache) };
    inline CreateTemplateCacheResponseBody& setTemplateCache(PublicTemplateCache && templateCache) { DARABONBA_PTR_SET_RVALUE(templateCache_, templateCache) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<PublicTemplateCache> templateCache_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
