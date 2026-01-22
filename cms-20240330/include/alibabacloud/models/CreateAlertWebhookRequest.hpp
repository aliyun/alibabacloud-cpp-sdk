// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAlertWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(contentType, contentType_);
      DARABONBA_PTR_TO_JSON(headers, headers_);
      DARABONBA_PTR_TO_JSON(lang, lang_);
      DARABONBA_PTR_TO_JSON(method, method_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(url, url_);
      DARABONBA_PTR_TO_JSON(webhookId, webhookId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(contentType, contentType_);
      DARABONBA_PTR_FROM_JSON(headers, headers_);
      DARABONBA_PTR_FROM_JSON(lang, lang_);
      DARABONBA_PTR_FROM_JSON(method, method_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(url, url_);
      DARABONBA_PTR_FROM_JSON(webhookId, webhookId_);
    };
    CreateAlertWebhookRequest() = default ;
    CreateAlertWebhookRequest(const CreateAlertWebhookRequest &) = default ;
    CreateAlertWebhookRequest(CreateAlertWebhookRequest &&) = default ;
    CreateAlertWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertWebhookRequest() = default ;
    CreateAlertWebhookRequest& operator=(const CreateAlertWebhookRequest &) = default ;
    CreateAlertWebhookRequest& operator=(CreateAlertWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentType_ == nullptr
        && this->headers_ == nullptr && this->lang_ == nullptr && this->method_ == nullptr && this->name_ == nullptr && this->url_ == nullptr
        && this->webhookId_ == nullptr; };
    // contentType Field Functions 
    bool hasContentType() const { return this->contentType_ != nullptr;};
    void deleteContentType() { this->contentType_ = nullptr;};
    inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
    inline CreateAlertWebhookRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const map<string, string> & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, map<string, string>) };
    inline map<string, string> getHeaders() { DARABONBA_PTR_GET(headers_, map<string, string>) };
    inline CreateAlertWebhookRequest& setHeaders(const map<string, string> & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline CreateAlertWebhookRequest& setHeaders(map<string, string> && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateAlertWebhookRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateAlertWebhookRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAlertWebhookRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateAlertWebhookRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // webhookId Field Functions 
    bool hasWebhookId() const { return this->webhookId_ != nullptr;};
    void deleteWebhookId() { this->webhookId_ = nullptr;};
    inline string getWebhookId() const { DARABONBA_PTR_GET_DEFAULT(webhookId_, "") };
    inline CreateAlertWebhookRequest& setWebhookId(string webhookId) { DARABONBA_PTR_SET_VALUE(webhookId_, webhookId) };


  protected:
    shared_ptr<string> contentType_ {};
    // headers
    shared_ptr<map<string, string>> headers_ {};
    shared_ptr<string> lang_ {};
    shared_ptr<string> method_ {};
    // This parameter is required.
    shared_ptr<string> name_ {};
    // This parameter is required.
    shared_ptr<string> url_ {};
    shared_ptr<string> webhookId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
