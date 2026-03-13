// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEWEBAUTHNAUTHENTICATORREGISTRATIONURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATEWEBAUTHNAUTHENTICATORREGISTRATIONURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(WebAuthnAuthenticatorRegistrationUrl, webAuthnAuthenticatorRegistrationUrl_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(WebAuthnAuthenticatorRegistrationUrl, webAuthnAuthenticatorRegistrationUrl_);
    };
    GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody() = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody(const GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody &) = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody(GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody &&) = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody() = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody& operator=(const GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody &) = default ;
    GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody& operator=(GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class WebAuthnAuthenticatorRegistrationUrl : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const WebAuthnAuthenticatorRegistrationUrl& obj) { 
        DARABONBA_PTR_TO_JSON(RegistrationUrl, registrationUrl_);
        DARABONBA_PTR_TO_JSON(RegistrationUrlParameters, registrationUrlParameters_);
      };
      friend void from_json(const Darabonba::Json& j, WebAuthnAuthenticatorRegistrationUrl& obj) { 
        DARABONBA_PTR_FROM_JSON(RegistrationUrl, registrationUrl_);
        DARABONBA_PTR_FROM_JSON(RegistrationUrlParameters, registrationUrlParameters_);
      };
      WebAuthnAuthenticatorRegistrationUrl() = default ;
      WebAuthnAuthenticatorRegistrationUrl(const WebAuthnAuthenticatorRegistrationUrl &) = default ;
      WebAuthnAuthenticatorRegistrationUrl(WebAuthnAuthenticatorRegistrationUrl &&) = default ;
      WebAuthnAuthenticatorRegistrationUrl(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~WebAuthnAuthenticatorRegistrationUrl() = default ;
      WebAuthnAuthenticatorRegistrationUrl& operator=(const WebAuthnAuthenticatorRegistrationUrl &) = default ;
      WebAuthnAuthenticatorRegistrationUrl& operator=(WebAuthnAuthenticatorRegistrationUrl &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->registrationUrl_ == nullptr
        && this->registrationUrlParameters_ == nullptr; };
      // registrationUrl Field Functions 
      bool hasRegistrationUrl() const { return this->registrationUrl_ != nullptr;};
      void deleteRegistrationUrl() { this->registrationUrl_ = nullptr;};
      inline string getRegistrationUrl() const { DARABONBA_PTR_GET_DEFAULT(registrationUrl_, "") };
      inline WebAuthnAuthenticatorRegistrationUrl& setRegistrationUrl(string registrationUrl) { DARABONBA_PTR_SET_VALUE(registrationUrl_, registrationUrl) };


      // registrationUrlParameters Field Functions 
      bool hasRegistrationUrlParameters() const { return this->registrationUrlParameters_ != nullptr;};
      void deleteRegistrationUrlParameters() { this->registrationUrlParameters_ = nullptr;};
      inline string getRegistrationUrlParameters() const { DARABONBA_PTR_GET_DEFAULT(registrationUrlParameters_, "") };
      inline WebAuthnAuthenticatorRegistrationUrl& setRegistrationUrlParameters(string registrationUrlParameters) { DARABONBA_PTR_SET_VALUE(registrationUrlParameters_, registrationUrlParameters) };


    protected:
      // 注册WebAuthn认证器URL
      shared_ptr<string> registrationUrl_ {};
      // 注册WebAuthn认证器URL参数
      shared_ptr<string> registrationUrlParameters_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->webAuthnAuthenticatorRegistrationUrl_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // webAuthnAuthenticatorRegistrationUrl Field Functions 
    bool hasWebAuthnAuthenticatorRegistrationUrl() const { return this->webAuthnAuthenticatorRegistrationUrl_ != nullptr;};
    void deleteWebAuthnAuthenticatorRegistrationUrl() { this->webAuthnAuthenticatorRegistrationUrl_ = nullptr;};
    inline const GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody::WebAuthnAuthenticatorRegistrationUrl & getWebAuthnAuthenticatorRegistrationUrl() const { DARABONBA_PTR_GET_CONST(webAuthnAuthenticatorRegistrationUrl_, GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody::WebAuthnAuthenticatorRegistrationUrl) };
    inline GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody::WebAuthnAuthenticatorRegistrationUrl getWebAuthnAuthenticatorRegistrationUrl() { DARABONBA_PTR_GET(webAuthnAuthenticatorRegistrationUrl_, GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody::WebAuthnAuthenticatorRegistrationUrl) };
    inline GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody& setWebAuthnAuthenticatorRegistrationUrl(const GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody::WebAuthnAuthenticatorRegistrationUrl & webAuthnAuthenticatorRegistrationUrl) { DARABONBA_PTR_SET_VALUE(webAuthnAuthenticatorRegistrationUrl_, webAuthnAuthenticatorRegistrationUrl) };
    inline GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody& setWebAuthnAuthenticatorRegistrationUrl(GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody::WebAuthnAuthenticatorRegistrationUrl && webAuthnAuthenticatorRegistrationUrl) { DARABONBA_PTR_SET_RVALUE(webAuthnAuthenticatorRegistrationUrl_, webAuthnAuthenticatorRegistrationUrl) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<GenerateWebAuthnAuthenticatorRegistrationUrlResponseBody::WebAuthnAuthenticatorRegistrationUrl> webAuthnAuthenticatorRegistrationUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
