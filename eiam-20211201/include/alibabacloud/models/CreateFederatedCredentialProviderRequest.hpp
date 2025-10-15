// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFEDERATEDCREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEFEDERATEDCREDENTIALPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateFederatedCredentialProviderRequestOidcProviderConfig.hpp>
#include <alibabacloud/models/CreateFederatedCredentialProviderRequestPkcs7ProviderConfig.hpp>
#include <alibabacloud/models/CreateFederatedCredentialProviderRequestPrivateCaProviderConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateFederatedCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFederatedCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderType, federatedCredentialProviderType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcProviderConfig, oidcProviderConfig_);
      DARABONBA_PTR_TO_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
      DARABONBA_PTR_TO_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFederatedCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderType, federatedCredentialProviderType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcProviderConfig, oidcProviderConfig_);
      DARABONBA_PTR_FROM_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
      DARABONBA_PTR_FROM_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
    };
    CreateFederatedCredentialProviderRequest() = default ;
    CreateFederatedCredentialProviderRequest(const CreateFederatedCredentialProviderRequest &) = default ;
    CreateFederatedCredentialProviderRequest(CreateFederatedCredentialProviderRequest &&) = default ;
    CreateFederatedCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFederatedCredentialProviderRequest() = default ;
    CreateFederatedCredentialProviderRequest& operator=(const CreateFederatedCredentialProviderRequest &) = default ;
    CreateFederatedCredentialProviderRequest& operator=(CreateFederatedCredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->description_ == nullptr
        && return this->federatedCredentialProviderName_ == nullptr && return this->federatedCredentialProviderType_ == nullptr && return this->instanceId_ == nullptr && return this->networkAccessEndpointId_ == nullptr && return this->oidcProviderConfig_ == nullptr
        && return this->pkcs7ProviderConfig_ == nullptr && return this->privateCaProviderConfig_ == nullptr; };
    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateFederatedCredentialProviderRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federatedCredentialProviderName Field Functions 
    bool hasFederatedCredentialProviderName() const { return this->federatedCredentialProviderName_ != nullptr;};
    void deleteFederatedCredentialProviderName() { this->federatedCredentialProviderName_ = nullptr;};
    inline string federatedCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderName_, "") };
    inline CreateFederatedCredentialProviderRequest& setFederatedCredentialProviderName(string federatedCredentialProviderName) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderName_, federatedCredentialProviderName) };


    // federatedCredentialProviderType Field Functions 
    bool hasFederatedCredentialProviderType() const { return this->federatedCredentialProviderType_ != nullptr;};
    void deleteFederatedCredentialProviderType() { this->federatedCredentialProviderType_ = nullptr;};
    inline string federatedCredentialProviderType() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderType_, "") };
    inline CreateFederatedCredentialProviderRequest& setFederatedCredentialProviderType(string federatedCredentialProviderType) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderType_, federatedCredentialProviderType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateFederatedCredentialProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline CreateFederatedCredentialProviderRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcProviderConfig Field Functions 
    bool hasOidcProviderConfig() const { return this->oidcProviderConfig_ != nullptr;};
    void deleteOidcProviderConfig() { this->oidcProviderConfig_ = nullptr;};
    inline const CreateFederatedCredentialProviderRequestOidcProviderConfig & oidcProviderConfig() const { DARABONBA_PTR_GET_CONST(oidcProviderConfig_, CreateFederatedCredentialProviderRequestOidcProviderConfig) };
    inline CreateFederatedCredentialProviderRequestOidcProviderConfig oidcProviderConfig() { DARABONBA_PTR_GET(oidcProviderConfig_, CreateFederatedCredentialProviderRequestOidcProviderConfig) };
    inline CreateFederatedCredentialProviderRequest& setOidcProviderConfig(const CreateFederatedCredentialProviderRequestOidcProviderConfig & oidcProviderConfig) { DARABONBA_PTR_SET_VALUE(oidcProviderConfig_, oidcProviderConfig) };
    inline CreateFederatedCredentialProviderRequest& setOidcProviderConfig(CreateFederatedCredentialProviderRequestOidcProviderConfig && oidcProviderConfig) { DARABONBA_PTR_SET_RVALUE(oidcProviderConfig_, oidcProviderConfig) };


    // pkcs7ProviderConfig Field Functions 
    bool hasPkcs7ProviderConfig() const { return this->pkcs7ProviderConfig_ != nullptr;};
    void deletePkcs7ProviderConfig() { this->pkcs7ProviderConfig_ = nullptr;};
    inline const CreateFederatedCredentialProviderRequestPkcs7ProviderConfig & pkcs7ProviderConfig() const { DARABONBA_PTR_GET_CONST(pkcs7ProviderConfig_, CreateFederatedCredentialProviderRequestPkcs7ProviderConfig) };
    inline CreateFederatedCredentialProviderRequestPkcs7ProviderConfig pkcs7ProviderConfig() { DARABONBA_PTR_GET(pkcs7ProviderConfig_, CreateFederatedCredentialProviderRequestPkcs7ProviderConfig) };
    inline CreateFederatedCredentialProviderRequest& setPkcs7ProviderConfig(const CreateFederatedCredentialProviderRequestPkcs7ProviderConfig & pkcs7ProviderConfig) { DARABONBA_PTR_SET_VALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };
    inline CreateFederatedCredentialProviderRequest& setPkcs7ProviderConfig(CreateFederatedCredentialProviderRequestPkcs7ProviderConfig && pkcs7ProviderConfig) { DARABONBA_PTR_SET_RVALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };


    // privateCaProviderConfig Field Functions 
    bool hasPrivateCaProviderConfig() const { return this->privateCaProviderConfig_ != nullptr;};
    void deletePrivateCaProviderConfig() { this->privateCaProviderConfig_ = nullptr;};
    inline const CreateFederatedCredentialProviderRequestPrivateCaProviderConfig & privateCaProviderConfig() const { DARABONBA_PTR_GET_CONST(privateCaProviderConfig_, CreateFederatedCredentialProviderRequestPrivateCaProviderConfig) };
    inline CreateFederatedCredentialProviderRequestPrivateCaProviderConfig privateCaProviderConfig() { DARABONBA_PTR_GET(privateCaProviderConfig_, CreateFederatedCredentialProviderRequestPrivateCaProviderConfig) };
    inline CreateFederatedCredentialProviderRequest& setPrivateCaProviderConfig(const CreateFederatedCredentialProviderRequestPrivateCaProviderConfig & privateCaProviderConfig) { DARABONBA_PTR_SET_VALUE(privateCaProviderConfig_, privateCaProviderConfig) };
    inline CreateFederatedCredentialProviderRequest& setPrivateCaProviderConfig(CreateFederatedCredentialProviderRequestPrivateCaProviderConfig && privateCaProviderConfig) { DARABONBA_PTR_SET_RVALUE(privateCaProviderConfig_, privateCaProviderConfig) };


  protected:
    // 联邦凭证提供方描述
    std::shared_ptr<string> description_ = nullptr;
    // 联邦凭证提供方名称
    // 
    // This parameter is required.
    std::shared_ptr<string> federatedCredentialProviderName_ = nullptr;
    // 联邦凭证提供方类型
    // 
    // This parameter is required.
    std::shared_ptr<string> federatedCredentialProviderType_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 网络端点ID
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // OIDC配置
    std::shared_ptr<CreateFederatedCredentialProviderRequestOidcProviderConfig> oidcProviderConfig_ = nullptr;
    // PKCS7配置
    std::shared_ptr<CreateFederatedCredentialProviderRequestPkcs7ProviderConfig> pkcs7ProviderConfig_ = nullptr;
    // 私有CA配置
    std::shared_ptr<CreateFederatedCredentialProviderRequestPrivateCaProviderConfig> privateCaProviderConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
