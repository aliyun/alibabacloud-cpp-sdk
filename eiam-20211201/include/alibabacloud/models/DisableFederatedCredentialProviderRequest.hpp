// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEFEDERATEDCREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEFEDERATEDCREDENTIALPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableFederatedCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableFederatedCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableFederatedCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FederatedCredentialProviderId, federatedCredentialProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableFederatedCredentialProviderRequest() = default ;
    DisableFederatedCredentialProviderRequest(const DisableFederatedCredentialProviderRequest &) = default ;
    DisableFederatedCredentialProviderRequest(DisableFederatedCredentialProviderRequest &&) = default ;
    DisableFederatedCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableFederatedCredentialProviderRequest() = default ;
    DisableFederatedCredentialProviderRequest& operator=(const DisableFederatedCredentialProviderRequest &) = default ;
    DisableFederatedCredentialProviderRequest& operator=(DisableFederatedCredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->federatedCredentialProviderId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // federatedCredentialProviderId Field Functions 
    bool hasFederatedCredentialProviderId() const { return this->federatedCredentialProviderId_ != nullptr;};
    void deleteFederatedCredentialProviderId() { this->federatedCredentialProviderId_ = nullptr;};
    inline string federatedCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(federatedCredentialProviderId_, "") };
    inline DisableFederatedCredentialProviderRequest& setFederatedCredentialProviderId(string federatedCredentialProviderId) { DARABONBA_PTR_SET_VALUE(federatedCredentialProviderId_, federatedCredentialProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableFederatedCredentialProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 联邦凭证提供方ID
    // 
    // This parameter is required.
    std::shared_ptr<string> federatedCredentialProviderId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
