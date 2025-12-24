// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSTATUSCHECKJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEIDENTITYPROVIDERSTATUSCHECKJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class CreateIdentityProviderStatusCheckJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateIdentityProviderStatusCheckJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateIdentityProviderStatusCheckJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    CreateIdentityProviderStatusCheckJobRequest() = default ;
    CreateIdentityProviderStatusCheckJobRequest(const CreateIdentityProviderStatusCheckJobRequest &) = default ;
    CreateIdentityProviderStatusCheckJobRequest(CreateIdentityProviderStatusCheckJobRequest &&) = default ;
    CreateIdentityProviderStatusCheckJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateIdentityProviderStatusCheckJobRequest() = default ;
    CreateIdentityProviderStatusCheckJobRequest& operator=(const CreateIdentityProviderStatusCheckJobRequest &) = default ;
    CreateIdentityProviderStatusCheckJobRequest& operator=(CreateIdentityProviderStatusCheckJobRequest &&) = default ;
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
    inline CreateIdentityProviderStatusCheckJobRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateIdentityProviderStatusCheckJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS的身份提供方主键id
    // 
    // This parameter is required.
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
