// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLEINTERNALAUTHENTICATIONSOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLEINTERNALAUTHENTICATIONSOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class EnableInternalAuthenticationSourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableInternalAuthenticationSourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationSourceId, authenticationSourceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableInternalAuthenticationSourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationSourceId, authenticationSourceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    EnableInternalAuthenticationSourceRequest() = default ;
    EnableInternalAuthenticationSourceRequest(const EnableInternalAuthenticationSourceRequest &) = default ;
    EnableInternalAuthenticationSourceRequest(EnableInternalAuthenticationSourceRequest &&) = default ;
    EnableInternalAuthenticationSourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableInternalAuthenticationSourceRequest() = default ;
    EnableInternalAuthenticationSourceRequest& operator=(const EnableInternalAuthenticationSourceRequest &) = default ;
    EnableInternalAuthenticationSourceRequest& operator=(EnableInternalAuthenticationSourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationSourceId_ == nullptr
        && return this->instanceId_ == nullptr; };
    // authenticationSourceId Field Functions 
    bool hasAuthenticationSourceId() const { return this->authenticationSourceId_ != nullptr;};
    void deleteAuthenticationSourceId() { this->authenticationSourceId_ = nullptr;};
    inline string authenticationSourceId() const { DARABONBA_PTR_GET_DEFAULT(authenticationSourceId_, "") };
    inline EnableInternalAuthenticationSourceRequest& setAuthenticationSourceId(string authenticationSourceId) { DARABONBA_PTR_SET_VALUE(authenticationSourceId_, authenticationSourceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline EnableInternalAuthenticationSourceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // 内部认证源ID，比如 ia_password, ia_otp_sms 等
    std::shared_ptr<string> authenticationSourceId_ = nullptr;
    // IDaaS EIAM的实例id
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
