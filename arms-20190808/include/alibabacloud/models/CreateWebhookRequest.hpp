// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWEBHOOKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEWEBHOOKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateWebhookRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWebhookRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(ContactName, contactName_);
      DARABONBA_PTR_TO_JSON(HttpHeaders, httpHeaders_);
      DARABONBA_PTR_TO_JSON(HttpParams, httpParams_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(RecoverBody, recoverBody_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWebhookRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(ContactName, contactName_);
      DARABONBA_PTR_FROM_JSON(HttpHeaders, httpHeaders_);
      DARABONBA_PTR_FROM_JSON(HttpParams, httpParams_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(RecoverBody, recoverBody_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateWebhookRequest() = default ;
    CreateWebhookRequest(const CreateWebhookRequest &) = default ;
    CreateWebhookRequest(CreateWebhookRequest &&) = default ;
    CreateWebhookRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWebhookRequest() = default ;
    CreateWebhookRequest& operator=(const CreateWebhookRequest &) = default ;
    CreateWebhookRequest& operator=(CreateWebhookRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->body_ != nullptr
        && this->contactName_ != nullptr && this->httpHeaders_ != nullptr && this->httpParams_ != nullptr && this->method_ != nullptr && this->recoverBody_ != nullptr
        && this->regionId_ != nullptr && this->url_ != nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateWebhookRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // contactName Field Functions 
    bool hasContactName() const { return this->contactName_ != nullptr;};
    void deleteContactName() { this->contactName_ = nullptr;};
    inline string contactName() const { DARABONBA_PTR_GET_DEFAULT(contactName_, "") };
    inline CreateWebhookRequest& setContactName(string contactName) { DARABONBA_PTR_SET_VALUE(contactName_, contactName) };


    // httpHeaders Field Functions 
    bool hasHttpHeaders() const { return this->httpHeaders_ != nullptr;};
    void deleteHttpHeaders() { this->httpHeaders_ = nullptr;};
    inline string httpHeaders() const { DARABONBA_PTR_GET_DEFAULT(httpHeaders_, "") };
    inline CreateWebhookRequest& setHttpHeaders(string httpHeaders) { DARABONBA_PTR_SET_VALUE(httpHeaders_, httpHeaders) };


    // httpParams Field Functions 
    bool hasHttpParams() const { return this->httpParams_ != nullptr;};
    void deleteHttpParams() { this->httpParams_ = nullptr;};
    inline string httpParams() const { DARABONBA_PTR_GET_DEFAULT(httpParams_, "") };
    inline CreateWebhookRequest& setHttpParams(string httpParams) { DARABONBA_PTR_SET_VALUE(httpParams_, httpParams) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateWebhookRequest& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // recoverBody Field Functions 
    bool hasRecoverBody() const { return this->recoverBody_ != nullptr;};
    void deleteRecoverBody() { this->recoverBody_ = nullptr;};
    inline string recoverBody() const { DARABONBA_PTR_GET_DEFAULT(recoverBody_, "") };
    inline CreateWebhookRequest& setRecoverBody(string recoverBody) { DARABONBA_PTR_SET_VALUE(recoverBody_, recoverBody) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateWebhookRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateWebhookRequest& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The notification template that is sent when an alert is triggered. This parameter is required if the **Method** parameter is set to **Post**. You can use the $content placeholder to specify the notification content. The content cannot exceed 500 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> body_ = nullptr;
    // The name of the contact.
    // 
    // This parameter is required.
    std::shared_ptr<string> contactName_ = nullptr;
    // The HTTP request header.
    std::shared_ptr<string> httpHeaders_ = nullptr;
    // The parameters in the HTTP request.
    std::shared_ptr<string> httpParams_ = nullptr;
    // The HTTP request method.
    // 
    // *   `Get`
    // *   `Post`
    // 
    // This parameter is required.
    std::shared_ptr<string> method_ = nullptr;
    // The notification template that is sent when an alert is resolved. This parameter is required if the **Method** parameter is set to **Post**. You can use the $content placeholder to specify the notification content. The content cannot exceed 500 characters in length.
    std::shared_ptr<string> recoverBody_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The URL of the request **method**.
    // 
    // This parameter is required.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
