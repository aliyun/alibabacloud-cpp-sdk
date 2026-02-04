// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSTATUSCHECKJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETIDENTITYPROVIDERSTATUSCHECKJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetIdentityProviderStatusCheckJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetIdentityProviderStatusCheckJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(IdentityProviderStatusCheckJobId, identityProviderStatusCheckJobId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetIdentityProviderStatusCheckJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(IdentityProviderStatusCheckJobId, identityProviderStatusCheckJobId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    GetIdentityProviderStatusCheckJobRequest() = default ;
    GetIdentityProviderStatusCheckJobRequest(const GetIdentityProviderStatusCheckJobRequest &) = default ;
    GetIdentityProviderStatusCheckJobRequest(GetIdentityProviderStatusCheckJobRequest &&) = default ;
    GetIdentityProviderStatusCheckJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetIdentityProviderStatusCheckJobRequest() = default ;
    GetIdentityProviderStatusCheckJobRequest& operator=(const GetIdentityProviderStatusCheckJobRequest &) = default ;
    GetIdentityProviderStatusCheckJobRequest& operator=(GetIdentityProviderStatusCheckJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->identityProviderId_ == nullptr
        && this->identityProviderStatusCheckJobId_ == nullptr && this->instanceId_ == nullptr; };
    // identityProviderId Field Functions 
    bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
    void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
    inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
    inline GetIdentityProviderStatusCheckJobRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // identityProviderStatusCheckJobId Field Functions 
    bool hasIdentityProviderStatusCheckJobId() const { return this->identityProviderStatusCheckJobId_ != nullptr;};
    void deleteIdentityProviderStatusCheckJobId() { this->identityProviderStatusCheckJobId_ = nullptr;};
    inline string getIdentityProviderStatusCheckJobId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderStatusCheckJobId_, "") };
    inline GetIdentityProviderStatusCheckJobRequest& setIdentityProviderStatusCheckJobId(string identityProviderStatusCheckJobId) { DARABONBA_PTR_SET_VALUE(identityProviderStatusCheckJobId_, identityProviderStatusCheckJobId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetIdentityProviderStatusCheckJobRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // IDaaS的身份提供方主键id
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderId_ {};
    // 任务ID
    // 
    // This parameter is required.
    shared_ptr<string> identityProviderStatusCheckJobId_ {};
    // IDaaS EIAM实例的ID。
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
