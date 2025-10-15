// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEIDENTITYPROVIDERUDPULLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEIDENTITYPROVIDERUDPULLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class EnableIdentityProviderUdPullRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableIdentityProviderUdPullRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableIdentityProviderUdPullRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    EnableIdentityProviderUdPullRequest() = default ;
    EnableIdentityProviderUdPullRequest(const EnableIdentityProviderUdPullRequest &) = default ;
    EnableIdentityProviderUdPullRequest(EnableIdentityProviderUdPullRequest &&) = default ;
    EnableIdentityProviderUdPullRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableIdentityProviderUdPullRequest() = default ;
    EnableIdentityProviderUdPullRequest& operator=(const EnableIdentityProviderUdPullRequest &) = default ;
    EnableIdentityProviderUdPullRequest& operator=(EnableIdentityProviderUdPullRequest &&) = default ;
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
    inline EnableIdentityProviderUdPullRequest& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableIdentityProviderUdPullRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // Identity provider ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> identityProviderId_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
