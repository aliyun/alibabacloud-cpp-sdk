// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERUDPULLCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderUdPullConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderUdPullConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderUdPullConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetIdentityProviderUdPullConfigurationRequest() = default ;
    GetIdentityProviderUdPullConfigurationRequest(const GetIdentityProviderUdPullConfigurationRequest &) = default ;
    GetIdentityProviderUdPullConfigurationRequest(GetIdentityProviderUdPullConfigurationRequest &&) = default ;
    GetIdentityProviderUdPullConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderUdPullConfigurationRequest() = default ;
    GetIdentityProviderUdPullConfigurationRequest& operator=(const GetIdentityProviderUdPullConfigurationRequest &) = default ;
    GetIdentityProviderUdPullConfigurationRequest& operator=(GetIdentityProviderUdPullConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string identityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline GetIdentityProviderUdPullConfigurationRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetIdentityProviderUdPullConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Identity provider ID
    // 
    // This parameter is required.
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
