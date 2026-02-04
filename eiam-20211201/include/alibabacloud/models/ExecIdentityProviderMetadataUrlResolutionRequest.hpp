// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECIDENTITYPROVIDERMETADATAURLRESOLUTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECIDENTITYPROVIDERMETADATAURLRESOLUTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ExecIdentityProviderMetadataUrlResolutionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecIdentityProviderMetadataUrlResolutionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_TO_JSON(OidcIssuer, oidcIssuer_);
    };
    friend void from_json(const Darabonba::Json& j, ExecIdentityProviderMetadataUrlResolutionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkAccessEndpointId, networkAccessEndpointId_);
      DARABONBA_PTR_FROM_JSON(OidcIssuer, oidcIssuer_);
    };
    ExecIdentityProviderMetadataUrlResolutionRequest() = default ;
    ExecIdentityProviderMetadataUrlResolutionRequest(const ExecIdentityProviderMetadataUrlResolutionRequest &) = default ;
    ExecIdentityProviderMetadataUrlResolutionRequest(ExecIdentityProviderMetadataUrlResolutionRequest &&) = default ;
    ExecIdentityProviderMetadataUrlResolutionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecIdentityProviderMetadataUrlResolutionRequest() = default ;
    ExecIdentityProviderMetadataUrlResolutionRequest& operator=(const ExecIdentityProviderMetadataUrlResolutionRequest &) = default ;
    ExecIdentityProviderMetadataUrlResolutionRequest& operator=(ExecIdentityProviderMetadataUrlResolutionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderId_ == nullptr
        && this->instanceId_ == nullptr && this->networkAccessEndpointId_ == nullptr && this->oidcIssuer_ == nullptr; };
    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline ExecIdentityProviderMetadataUrlResolutionRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExecIdentityProviderMetadataUrlResolutionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkAccessEndpointId Field Functions 
    bool hasNetworkAccessEndpointId() const { return this->networkAccessEndpointId_ != nullptr;};
    void deleteNetworkAccessEndpointId() { this->networkAccessEndpointId_ = nullptr;};
    inline string getNetworkAccessEndpointId() const { DARABONBA_PTR_GET_DEFAULT(networkAccessEndpointId_, "") };
    inline ExecIdentityProviderMetadataUrlResolutionRequest& setNetworkAccessEndpointId(string networkAccessEndpointId) { DARABONBA_PTR_SET_VALUE(networkAccessEndpointId_, networkAccessEndpointId) };


    // oidcIssuer Field Functions 
    bool hasOidcIssuer() const { return this->oidcIssuer_ != nullptr;};
    void deleteOidcIssuer() { this->oidcIssuer_ = nullptr;};
    inline string getOidcIssuer() const { DARABONBA_PTR_GET_DEFAULT(oidcIssuer_, "") };
    inline ExecIdentityProviderMetadataUrlResolutionRequest& setOidcIssuer(string oidcIssuer) { DARABONBA_PTR_SET_VALUE(oidcIssuer_, oidcIssuer) };


  protected:
    shared_ptr<string> identityProviderId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> networkAccessEndpointId_ {};
    // OIDC Issuer地址。
    // 
    // This parameter is required.
    shared_ptr<string> oidcIssuer_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
