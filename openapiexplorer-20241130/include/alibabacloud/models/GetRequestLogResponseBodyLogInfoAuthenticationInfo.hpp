// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOAUTHENTICATIONINFO_HPP_
#define ALIBABACLOUD_MODELS_GETREQUESTLOGRESPONSEBODYLOGINFOAUTHENTICATIONINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class GetRequestLogResponseBodyLogInfoAuthenticationInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRequestLogResponseBodyLogInfoAuthenticationInfo& obj) { 
      DARABONBA_PTR_TO_JSON(authenticationType, authenticationType_);
      DARABONBA_PTR_TO_JSON(signatureMethod, signatureMethod_);
      DARABONBA_PTR_TO_JSON(signatureVersion, signatureVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetRequestLogResponseBodyLogInfoAuthenticationInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(authenticationType, authenticationType_);
      DARABONBA_PTR_FROM_JSON(signatureMethod, signatureMethod_);
      DARABONBA_PTR_FROM_JSON(signatureVersion, signatureVersion_);
    };
    GetRequestLogResponseBodyLogInfoAuthenticationInfo() = default ;
    GetRequestLogResponseBodyLogInfoAuthenticationInfo(const GetRequestLogResponseBodyLogInfoAuthenticationInfo &) = default ;
    GetRequestLogResponseBodyLogInfoAuthenticationInfo(GetRequestLogResponseBodyLogInfoAuthenticationInfo &&) = default ;
    GetRequestLogResponseBodyLogInfoAuthenticationInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRequestLogResponseBodyLogInfoAuthenticationInfo() = default ;
    GetRequestLogResponseBodyLogInfoAuthenticationInfo& operator=(const GetRequestLogResponseBodyLogInfoAuthenticationInfo &) = default ;
    GetRequestLogResponseBodyLogInfoAuthenticationInfo& operator=(GetRequestLogResponseBodyLogInfoAuthenticationInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationType_ == nullptr
        && return this->signatureMethod_ == nullptr && return this->signatureVersion_ == nullptr; };
    // authenticationType Field Functions 
    bool hasAuthenticationType() const { return this->authenticationType_ != nullptr;};
    void deleteAuthenticationType() { this->authenticationType_ = nullptr;};
    inline string authenticationType() const { DARABONBA_PTR_GET_DEFAULT(authenticationType_, "") };
    inline GetRequestLogResponseBodyLogInfoAuthenticationInfo& setAuthenticationType(string authenticationType) { DARABONBA_PTR_SET_VALUE(authenticationType_, authenticationType) };


    // signatureMethod Field Functions 
    bool hasSignatureMethod() const { return this->signatureMethod_ != nullptr;};
    void deleteSignatureMethod() { this->signatureMethod_ = nullptr;};
    inline string signatureMethod() const { DARABONBA_PTR_GET_DEFAULT(signatureMethod_, "") };
    inline GetRequestLogResponseBodyLogInfoAuthenticationInfo& setSignatureMethod(string signatureMethod) { DARABONBA_PTR_SET_VALUE(signatureMethod_, signatureMethod) };


    // signatureVersion Field Functions 
    bool hasSignatureVersion() const { return this->signatureVersion_ != nullptr;};
    void deleteSignatureVersion() { this->signatureVersion_ = nullptr;};
    inline string signatureVersion() const { DARABONBA_PTR_GET_DEFAULT(signatureVersion_, "") };
    inline GetRequestLogResponseBodyLogInfoAuthenticationInfo& setSignatureVersion(string signatureVersion) { DARABONBA_PTR_SET_VALUE(signatureVersion_, signatureVersion) };


  protected:
    // The authentication type. Valid values:
    // 
    // *   AK: includes a permanent AccessKey pair, a temporary AccessKey pair, and a STS token.
    // *   PRIVATEKEY: an AccessKey pair for an asymmetric cryptography algorithm.
    // *   BEARETOKEN: an authentication mechanism that is widely used in the OAuth 2.0 framework and cloud services.
    // *   CUSTOM_SPI: an efficient and secure authentication method that is suitable for the delivery and management of Software as a Service (SaaS) services in Alibaba Cloud Marketplace.
    // *   Anonymous: anonymous access.
    // *   DPS: an authentication method that is similar to AK. Its signature algorithm is different from that of Alibaba Cloud services and is exclusive to specific products.
    std::shared_ptr<string> authenticationType_ = nullptr;
    // The signature algorithm. Valid values:
    // 
    // *   HMAC-SHA1
    // *   HMAC-SHA256
    std::shared_ptr<string> signatureMethod_ = nullptr;
    // The signature version.
    std::shared_ptr<string> signatureVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
