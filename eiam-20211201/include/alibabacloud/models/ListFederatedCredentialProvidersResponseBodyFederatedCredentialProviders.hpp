// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFEDERATEDCREDENTIALPROVIDERSRESPONSEBODYFEDERATEDCREDENTIALPROVIDERS_HPP_
#define ALIBABACLOUD_MODELS_LISTFEDERATEDCREDENTIALPROVIDERSRESPONSEBODYFEDERATEDCREDENTIALPROVIDERS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig.hpp>
#include <alibabacloud/models/ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPkcs7ProviderConfig.hpp>
#include <alibabacloud/models/ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPrivateCaProviderConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderType, federatedCredentialProviderType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcProviderConfig, oidcProviderConfig_);
      DARABONBA_PTR_TO_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
      DARABONBA_PTR_TO_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderName, federatedCredentialProviderName_);
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderType, federatedCredentialProviderType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcProviderConfig, oidcProviderConfig_);
      DARABONBA_PTR_FROM_JSON(Pkcs7ProviderConfig, pkcs7ProviderConfig_);
      DARABONBA_PTR_FROM_JSON(PrivateCaProviderConfig, privateCaProviderConfig_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders() = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders(const ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders &) = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders(ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders &&) = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders() = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& operator=(const ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders &) = default ;
    ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& operator=(ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->description_ == nullptr && return this->federatedCredentialProviderId_ == nullptr && return this->federatedCredentialProviderName_ == nullptr && return this->federatedCredentialProviderType_ == nullptr && return this->instanceId_ == nullptr
        && return this->networkAccessEndpointId_ == nullptr && return this->oidcProviderConfig_ == nullptr && return this->pkcs7ProviderConfig_ == nullptr && return this->privateCaProviderConfig_ == nullptr && return this->status_ == nullptr
        && return this->updateTime_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string federatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // federatedCredentialProviderName Field Functions 
    bool hasFederatedCredentialProviderName() const { return this->federatedCredentialProviderName_ != nullptr;};
    void deleteFederatedCredentialProviderName() { this->federatedCredentialProviderName_ = nullptr;};
    inline string federatedCredentialProviderName() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderName_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setFederatedCredentialProviderName(string federatedCredentialProviderName) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderName_, federatedCredentialProviderName) };


    // federatedCredentialProviderType Field Functions 
    bool hasFederatedCredentialProviderType() const { return this->federatedCredentialProviderType_ != nullptr;};
    void deleteFederatedCredentialProviderType() { this->federatedCredentialProviderType_ = nullptr;};
    inline string federatedCredentialProviderType() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderType_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setFederatedCredentialProviderType(string federatedCredentialProviderType) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderType_, federatedCredentialProviderType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string networkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcProviderConfig Field Functions 
    bool hasOidcProviderConfig() const { return this->oidcProviderConfig_ != nullptr;};
    void deleteOidcProviderConfig() { this->oidcProviderConfig_ = nullptr;};
    inline const Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig & oidcProviderConfig() const { DARABONBA_PTR_GET_CONST(oidcProviderConfig_, Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig) };
    inline Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig oidcProviderConfig() { DARABONBA_PTR_GET(oidcProviderConfig_, Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setOidcProviderConfig(const Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig & oidcProviderConfig) { DARABONBA_PTR_SET_VALUE(oidcProviderConfig_, oidcProviderConfig) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setOidcProviderConfig(Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig && oidcProviderConfig) { DARABONBA_PTR_SET_RVALUE(oidcProviderConfig_, oidcProviderConfig) };


    // pkcs7ProviderConfig Field Functions 
    bool hasPkcs7ProviderConfig() const { return this->pkcs7ProviderConfig_ != nullptr;};
    void deletePkcs7ProviderConfig() { this->pkcs7ProviderConfig_ = nullptr;};
    inline const Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPkcs7ProviderConfig & pkcs7ProviderConfig() const { DARABONBA_PTR_GET_CONST(pkcs7ProviderConfig_, Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPkcs7ProviderConfig) };
    inline Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPkcs7ProviderConfig pkcs7ProviderConfig() { DARABONBA_PTR_GET(pkcs7ProviderConfig_, Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPkcs7ProviderConfig) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setPkcs7ProviderConfig(const Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPkcs7ProviderConfig & pkcs7ProviderConfig) { DARABONBA_PTR_SET_VALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setPkcs7ProviderConfig(Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPkcs7ProviderConfig && pkcs7ProviderConfig) { DARABONBA_PTR_SET_RVALUE(pkcs7ProviderConfig_, pkcs7ProviderConfig) };


    // privateCaProviderConfig Field Functions 
    bool hasPrivateCaProviderConfig() const { return this->privateCaProviderConfig_ != nullptr;};
    void deletePrivateCaProviderConfig() { this->privateCaProviderConfig_ = nullptr;};
    inline const Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPrivateCaProviderConfig & privateCaProviderConfig() const { DARABONBA_PTR_GET_CONST(privateCaProviderConfig_, Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPrivateCaProviderConfig) };
    inline Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPrivateCaProviderConfig privateCaProviderConfig() { DARABONBA_PTR_GET(privateCaProviderConfig_, Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPrivateCaProviderConfig) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setPrivateCaProviderConfig(const Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPrivateCaProviderConfig & privateCaProviderConfig) { DARABONBA_PTR_SET_VALUE(privateCaProviderConfig_, privateCaProviderConfig) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setPrivateCaProviderConfig(Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPrivateCaProviderConfig && privateCaProviderConfig) { DARABONBA_PTR_SET_RVALUE(privateCaProviderConfig_, privateCaProviderConfig) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListFederatedCredentialProvidersResponseBodyFederatedCredentialProviders& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // 创建时间
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // 描述
    std::shared_ptr<string> description_ = nullptr;
    // Federated Credential Provider ID
    std::shared_ptr<string> federatedCredentialProviderId_ = nullptr;
    // 联邦凭证提供方名称
    std::shared_ptr<string> federatedCredentialProviderName_ = nullptr;
    // 联邦凭证提供方类型
    std::shared_ptr<string> federatedCredentialProviderType_ = nullptr;
    // EIAM 实例ID
    std::shared_ptr<string> instanceId_ = nullptr;
    // 网络访问端点ID
    std::shared_ptr<string> networkAccessEndpointId_ = nullptr;
    // OIDC配置
    std::shared_ptr<Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersOidcProviderConfig> oidcProviderConfig_ = nullptr;
    // PKCS7配置
    std::shared_ptr<Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPkcs7ProviderConfig> pkcs7ProviderConfig_ = nullptr;
    // 私有CA配置
    std::shared_ptr<Models::ListFederatedCredentialProvidersResponseBodyFederatedCredentialProvidersPrivateCaProviderConfig> privateCaProviderConfig_ = nullptr;
    // 状态
    std::shared_ptr<string> status_ = nullptr;
    // 更新时间
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
