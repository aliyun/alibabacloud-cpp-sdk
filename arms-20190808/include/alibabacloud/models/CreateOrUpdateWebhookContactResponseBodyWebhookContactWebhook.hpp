// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTRESPONSEBODYWEBHOOKCONTACTWEBHOOK_HPP_
#define ALIBABACLOUD_MODELS_CREATEORUPDATEWEBHOOKCONTACTRESPONSEBODYWEBHOOKCONTACTWEBHOOK_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& obj) { 
      DARABONBA_PTR_TO_JSON(BizHeaders, bizHeaders_);
      DARABONBA_PTR_TO_JSON(BizParams, bizParams_);
      DARABONBA_PTR_TO_JSON(Body, body_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(RecoverBody, recoverBody_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& obj) { 
      DARABONBA_PTR_FROM_JSON(BizHeaders, bizHeaders_);
      DARABONBA_PTR_FROM_JSON(BizParams, bizParams_);
      DARABONBA_PTR_FROM_JSON(Body, body_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(RecoverBody, recoverBody_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook() = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook(const CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook &) = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook(CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook &&) = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook() = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& operator=(const CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook &) = default ;
    CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& operator=(CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizHeaders_ != nullptr
        && this->bizParams_ != nullptr && this->body_ != nullptr && this->method_ != nullptr && this->recoverBody_ != nullptr && this->url_ != nullptr; };
    // bizHeaders Field Functions 
    bool hasBizHeaders() const { return this->bizHeaders_ != nullptr;};
    void deleteBizHeaders() { this->bizHeaders_ = nullptr;};
    inline string bizHeaders() const { DARABONBA_PTR_GET_DEFAULT(bizHeaders_, "") };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& setBizHeaders(string bizHeaders) { DARABONBA_PTR_SET_VALUE(bizHeaders_, bizHeaders) };


    // bizParams Field Functions 
    bool hasBizParams() const { return this->bizParams_ != nullptr;};
    void deleteBizParams() { this->bizParams_ = nullptr;};
    inline string bizParams() const { DARABONBA_PTR_GET_DEFAULT(bizParams_, "") };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& setBizParams(string bizParams) { DARABONBA_PTR_SET_VALUE(bizParams_, bizParams) };


    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string body() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // recoverBody Field Functions 
    bool hasRecoverBody() const { return this->recoverBody_ != nullptr;};
    void deleteRecoverBody() { this->recoverBody_ = nullptr;};
    inline string recoverBody() const { DARABONBA_PTR_GET_DEFAULT(recoverBody_, "") };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& setRecoverBody(string recoverBody) { DARABONBA_PTR_SET_VALUE(recoverBody_, recoverBody) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline CreateOrUpdateWebhookContactResponseBodyWebhookContactWebhook& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The HTTP request headers.
    std::shared_ptr<string> bizHeaders_ = nullptr;
    // The parameters in the HTTP request.
    std::shared_ptr<string> bizParams_ = nullptr;
    // The alert notification template.
    std::shared_ptr<string> body_ = nullptr;
    // The HTTP request method.
    // 
    // *   Post
    // *   Get
    std::shared_ptr<string> method_ = nullptr;
    // The notification template for clearing alerts.
    std::shared_ptr<string> recoverBody_ = nullptr;
    // The URL of the request method.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
