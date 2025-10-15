// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEFEDERATEDCREDENTIALPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateFederatedCredentialProviderRequestOidcProviderConfig.hpp>
#include <alibabacloud/models/UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig.hpp>
#include <alibabacloud/models/UpdateFederatedCredentialProviderRequestPrivateCaProviderConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class UpdateFederatedCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateFederatedCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcProviderConfig, oidcProviderConfig_);
      DARABONBA_PTR_TO_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
      DARABONBA_PTR_TO_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateFederatedCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcProviderConfig, oidcProviderConfig_);
      DARABONBA_PTR_FROM_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
      DARABONBA_PTR_FROM_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
    };
    UpdateFederatedCredentialProviderRequest() = default ;
    UpdateFederatedCredentialProviderRequest(const UpdateFederatedCredentialProviderRequest &) = default ;
    UpdateFederatedCredentialProviderRequest(UpdateFederatedCredentialProviderRequest &&) = default ;
    UpdateFederatedCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateFederatedCredentialProviderRequest() = default ;
    UpdateFederatedCredentialProviderRequest& operator=(const UpdateFederatedCredentialProviderRequest &) = default ;
    UpdateFederatedCredentialProviderRequest& operator=(UpdateFederatedCredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->federatedCredentialProviderId_ == nullptr
        && return this->federatedCredentialProviderName_ == nullptr && return this->instanceId_ == nullptr && return this->networkAccessEndpointId_ == nullptr && return this->oidcProviderConfig_ == nullptr && return this->pkcs7ProviderConfig_ == nullptr
        && return this->privateCaProviderConfig_ == nullptr; };
    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string federatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline UpdateFederatedCredentialProviderRequest& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // federatedCredentialProviderName Field Functions 
    bool hasFederatedCredentialProviderName() const { return this->federatedCredentialProviderName_ != nullptr;};
    void deleteFederatedCredentialProviderName() { this->federatedCredentialProviderName_ = nullptr;};
    inline string federatedCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderName_, "") };
    inline UpdateFederatedCredentialProviderRequest& setFederatedCredentialProviderName(string federatedCredentialProviderName) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderName_, federatedCredentialProviderName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateFederatedCredentialProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline UpdateFederatedCredentialProviderRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcProviderConfig Field Functions 
    bool hasOidcProviderConfig() const { return this->oidcProviderConfig_ != nullptr;};
    void deleteOidcProviderConfig() { this->oidcProviderConfig_ = nullptr;};
    inline const UpdateFederatedCredentialProviderRequestOidcProviderConfig & oidcProviderConfig() const { DARABONBA_PTR_GET_CONST(oidcProviderConfig_, UpdateFederatedCredentialProviderRequestOidcProviderConfig) };
    inline UpdateFederatedCredentialProviderRequestOidcProviderConfig oidcProviderConfig() { DARABONBA_PTR_GET(oidcProviderConfig_, UpdateFederatedCredentialProviderRequestOidcProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setOidcProviderConfig(const UpdateFederatedCredentialProviderRequestOidcProviderConfig & oidcProviderConfig) { DARABONBA_PTR_SET_VALUE(oidcProviderConfig_, oidcProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setOidcProviderConfig(UpdateFederatedCredentialProviderRequestOidcProviderConfig && oidcProviderConfig) { DARABONBA_PTR_SET_RVALUE(oidcProviderConfig_, oidcProviderConfig) };


    // pkcs7ProviderConfig Field Functions 
    bool hasPkcs7ProviderConfig() const { return this->pkcs7ProviderConfig_ != nullptr;};
    void deletePkcs7ProviderConfig() { this->pkcs7ProviderConfig_ = nullptr;};
    inline const UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig & pkcs7ProviderConfig() const { DARABONBA_PTR_GET_CONST(pkcs7ProviderConfig_, UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig) };
    inline UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig pkcs7ProviderConfig() { DARABONBA_PTR_GET(pkcs7ProviderConfig_, UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setPkcs7ProviderConfig(const UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig & pkcs7ProviderConfig) { DARABONBA_PTR_SET_VALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setPkcs7ProviderConfig(UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig && pkcs7ProviderConfig) { DARABONBA_PTR_SET_RVALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };


    // privateCaProviderConfig Field Functions 
    bool hasPrivateCaProviderConfig() const { return this->privateCaProviderConfig_ != nullptr;};
    void deletePrivateCaProviderConfig() { this->privateCaProviderConfig_ = nullptr;};
    inline const UpdateFederatedCredentialProviderRequestPrivateCaProviderConfig & privateCaProviderConfig() const { DARABONBA_PTR_GET_CONST(privateCaProviderConfig_, UpdateFederatedCredentialProviderRequestPrivateCaProviderConfig) };
    inline UpdateFederatedCredentialProviderRequestPrivateCaProviderConfig privateCaProviderConfig() { DARABONBA_PTR_GET(privateCaProviderConfig_, UpdateFederatedCredentialProviderRequestPrivateCaProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setPrivateCaProviderConfig(const UpdateFederatedCredentialProviderRequestPrivateCaProviderConfig & privateCaProviderConfig) { DARABONBA_PTR_SET_VALUE(privateCaProviderConfig_, privateCaProviderConfig) };
    inline UpdateFederatedCredentialProviderRequest& setPrivateCaProviderConfig(UpdateFederatedCredentialProviderRequestPrivateCaProviderConfig && privateCaProviderConfig) { DARABONBA_PTR_SET_RVALUE(privateCaProviderConfig_, privateCaProviderConfig) };


  protected:
    // 联邦凭证提供方ID
    // 
    // This parameter is required.
    std::shared_ptr<string> federatedCredentialProviderId_ = nullptr;
    // 联邦凭证提供方名称
    // 
    // This parameter is required.
    std::shared_ptr<string> federatedCredentialProviderName_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // 网络端点ID
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // OIDC配置
    std::shared_ptr<UpdateFederatedCredentialProviderRequestOidcProviderConfig> oidcProviderConfig_ = nullptr;
    // PKCS7配置
    std::shared_ptr<UpdateFederatedCredentialProviderRequestPkcs7ProviderConfig> pkcs7ProviderConfig_ = nullptr;
    // 私有CA配置
    std::shared_ptr<UpdateFederatedCredentialProviderRequestPrivateCaProviderConfig> privateCaProviderConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
