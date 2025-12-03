// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYOPENIDCONNECTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEPLOYEDAPIRESPONSEBODYOPENIDCONNECTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeDeployedApiResponseBodyOpenIdConnectConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDeployedApiResponseBodyOpenIdConnectConfig& obj) { 
      DARABONBA_PTR_TO_JSON(IdTokenParamName, idTokenParamName_);
      DARABONBA_PTR_TO_JSON(OpenIdApiType, openIdApiType_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(PublicKeyId, publicKeyId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDeployedApiResponseBodyOpenIdConnectConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(IdTokenParamName, idTokenParamName_);
      DARABONBA_PTR_FROM_JSON(OpenIdApiType, openIdApiType_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(PublicKeyId, publicKeyId_);
    };
    DescribeDeployedApiResponseBodyOpenIdConnectConfig() = default ;
    DescribeDeployedApiResponseBodyOpenIdConnectConfig(const DescribeDeployedApiResponseBodyOpenIdConnectConfig &) = default ;
    DescribeDeployedApiResponseBodyOpenIdConnectConfig(DescribeDeployedApiResponseBodyOpenIdConnectConfig &&) = default ;
    DescribeDeployedApiResponseBodyOpenIdConnectConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDeployedApiResponseBodyOpenIdConnectConfig() = default ;
    DescribeDeployedApiResponseBodyOpenIdConnectConfig& operator=(const DescribeDeployedApiResponseBodyOpenIdConnectConfig &) = default ;
    DescribeDeployedApiResponseBodyOpenIdConnectConfig& operator=(DescribeDeployedApiResponseBodyOpenIdConnectConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->idTokenParamName_ == nullptr
        && return this->openIdApiType_ == nullptr && return this->publicKey_ == nullptr && return this->publicKeyId_ == nullptr; };
    // idTokenParamName Field Functions 
    bool hasIdTokenParamName() const { return this->idTokenParamName_ != nullptr;};
    void deleteIdTokenParamName() { this->idTokenParamName_ = nullptr;};
    inline string idTokenParamName() const { DARABONBA_PTR_GET_DEFAULT(idTokenParamName_, "") };
    inline DescribeDeployedApiResponseBodyOpenIdConnectConfig& setIdTokenParamName(string idTokenParamName) { DARABONBA_PTR_SET_VALUE(idTokenParamName_, idTokenParamName) };


    // openIdApiType Field Functions 
    bool hasOpenIdApiType() const { return this->openIdApiType_ != nullptr;};
    void deleteOpenIdApiType() { this->openIdApiType_ = nullptr;};
    inline string openIdApiType() const { DARABONBA_PTR_GET_DEFAULT(openIdApiType_, "") };
    inline DescribeDeployedApiResponseBodyOpenIdConnectConfig& setOpenIdApiType(string openIdApiType) { DARABONBA_PTR_SET_VALUE(openIdApiType_, openIdApiType) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline DescribeDeployedApiResponseBodyOpenIdConnectConfig& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // publicKeyId Field Functions 
    bool hasPublicKeyId() const { return this->publicKeyId_ != nullptr;};
    void deletePublicKeyId() { this->publicKeyId_ = nullptr;};
    inline string publicKeyId() const { DARABONBA_PTR_GET_DEFAULT(publicKeyId_, "") };
    inline DescribeDeployedApiResponseBodyOpenIdConnectConfig& setPublicKeyId(string publicKeyId) { DARABONBA_PTR_SET_VALUE(publicKeyId_, publicKeyId) };


  protected:
    // The name of the parameter that corresponds to the token.
    std::shared_ptr<string> idTokenParamName_ = nullptr;
    // The configuration of OpenID Connect authentication. Valid values:
    // 
    // *   **IDTOKEN: indicates the APIs that are called by clients to obtain tokens. If you specify this value, the PublicKeyId parameter and the PublicKey parameter are required.**
    // *   **BUSINESS: indicates business APIs. Tokens are used to call the business APIs. If you specify this value, the IdTokenParamName parameter is required.
    std::shared_ptr<string> openIdApiType_ = nullptr;
    // The public key of the API.
    std::shared_ptr<string> publicKey_ = nullptr;
    // The ID of the public key.
    std::shared_ptr<string> publicKeyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
