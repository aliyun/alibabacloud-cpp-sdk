// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLEINTERNALAUTHENTICATIONSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLEINTERNALAUTHENTICATIONSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class DisableInternalAuthenticationSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableInternalAuthenticationSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationSourceId, authenticationSourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableInternalAuthenticationSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationSourceId, authenticationSourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    DisableInternalAuthenticationSourceRequest() = default ;
    DisableInternalAuthenticationSourceRequest(const DisableInternalAuthenticationSourceRequest &) = default ;
    DisableInternalAuthenticationSourceRequest(DisableInternalAuthenticationSourceRequest &&) = default ;
    DisableInternalAuthenticationSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableInternalAuthenticationSourceRequest() = default ;
    DisableInternalAuthenticationSourceRequest& operator=(const DisableInternalAuthenticationSourceRequest &) = default ;
    DisableInternalAuthenticationSourceRequest& operator=(DisableInternalAuthenticationSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationSourceId_ == nullptr
        && this->instanceId_ == nullptr; };
    // authenticationSourceId Field Functions 
    bool hasAuthenticationSourceId() const { return this->authenticationSourceId_ != nullptr;};
    void deleteAuthenticationSourceId() { this->authenticationSourceId_ = nullptr;};
    inline string getAuthenticationSourceId() const { DARABONBA_PTR_GET_DEFAULT(authenticationSourceId_, "") };
    inline DisableInternalAuthenticationSourceRequest& setAuthenticationSourceId(string authenticationSourceId) { DARABONBA_PTR_SET_VALUE(authenticationSourceId_, authenticationSourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DisableInternalAuthenticationSourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 内部认证源ID，比如 ia_password, ia_otp_sms 等
    shared_ptr<string> authenticationSourceId_ {};
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
