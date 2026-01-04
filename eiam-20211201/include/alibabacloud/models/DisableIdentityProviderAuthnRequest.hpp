// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEIDENTITYPROVIDERAUTHNREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEIDENTITYPROVIDERAUTHNREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableIdentityProviderAuthnRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableIdentityProviderAuthnRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableIdentityProviderAuthnRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableIdentityProviderAuthnRequest() = default ;
    DisableIdentityProviderAuthnRequest(const DisableIdentityProviderAuthnRequest &) = default ;
    DisableIdentityProviderAuthnRequest(DisableIdentityProviderAuthnRequest &&) = default ;
    DisableIdentityProviderAuthnRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableIdentityProviderAuthnRequest() = default ;
    DisableIdentityProviderAuthnRequest& operator=(const DisableIdentityProviderAuthnRequest &) = default ;
    DisableIdentityProviderAuthnRequest& operator=(DisableIdentityProviderAuthnRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderId_ == nullptr
        && this->instanceId_ == nullptr; };
    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline DisableIdentityProviderAuthnRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableIdentityProviderAuthnRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS的身份提供方主键id
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderId_ {};
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
