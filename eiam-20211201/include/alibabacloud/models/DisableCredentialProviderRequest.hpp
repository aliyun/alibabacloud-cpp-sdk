// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLECREDENTIALPROVIDERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLECREDENTIALPROVIDERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableCredentialProviderRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableCredentialProviderRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CredentialProviderId, credentialProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableCredentialProviderRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CredentialProviderId, credentialProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableCredentialProviderRequest() = default ;
    DisableCredentialProviderRequest(const DisableCredentialProviderRequest &) = default ;
    DisableCredentialProviderRequest(DisableCredentialProviderRequest &&) = default ;
    DisableCredentialProviderRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableCredentialProviderRequest() = default ;
    DisableCredentialProviderRequest& operator=(const DisableCredentialProviderRequest &) = default ;
    DisableCredentialProviderRequest& operator=(DisableCredentialProviderRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->credentialProviderId_ == nullptr
        && this->instanceId_ == nullptr; };
    // credentialProviderId Field Functions 
    bool hasCredentialProviderId() const { return this->credentialProviderId_ != nullptr;};
    void deleteCredentialProviderId() { this->credentialProviderId_ = nullptr;};
    inline string getCredentialProviderId() const { DARABONBA_PTR_GET_DEFAULT(credentialProviderId_, "") };
    inline DisableCredentialProviderRequest& setCredentialProviderId(string credentialProviderId) { DARABONBA_PTR_SET_VALUE(credentialProviderId_, credentialProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableCredentialProviderRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 认证令牌提供商ID。
    // 
    // This parameter is required.
    shared_ptr<string> credentialProviderId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
