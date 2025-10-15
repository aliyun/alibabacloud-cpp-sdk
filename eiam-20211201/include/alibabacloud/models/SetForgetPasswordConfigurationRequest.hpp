// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETFORGETPASSWORDCONFIGURATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETFORGETPASSWORDCONFIGURATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class SetForgetPasswordConfigurationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetForgetPasswordConfigurationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationChannels, authenticationChannels_);
      DARABONBA_PTR_TO_JSON(ForgetPasswordStatus, forgetPasswordStatus_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, SetForgetPasswordConfigurationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationChannels, authenticationChannels_);
      DARABONBA_PTR_FROM_JSON(ForgetPasswordStatus, forgetPasswordStatus_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
    };
    SetForgetPasswordConfigurationRequest() = default ;
    SetForgetPasswordConfigurationRequest(const SetForgetPasswordConfigurationRequest &) = default ;
    SetForgetPasswordConfigurationRequest(SetForgetPasswordConfigurationRequest &&) = default ;
    SetForgetPasswordConfigurationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetForgetPasswordConfigurationRequest() = default ;
    SetForgetPasswordConfigurationRequest& operator=(const SetForgetPasswordConfigurationRequest &) = default ;
    SetForgetPasswordConfigurationRequest& operator=(SetForgetPasswordConfigurationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationChannels_ == nullptr
        && return this->forgetPasswordStatus_ == nullptr && return this->instanceId_ == nullptr; };
    // authenticationChannels Field Functions 
    bool hasAuthenticationChannels() const { return this->authenticationChannels_ != nullptr;};
    void deleteAuthenticationChannels() { this->authenticationChannels_ = nullptr;};
    inline const vector<string> & authenticationChannels() const { DARABONBA_PTR_GET_CONST(authenticationChannels_, vector<string>) };
    inline vector<string> authenticationChannels() { DARABONBA_PTR_GET(authenticationChannels_, vector<string>) };
    inline SetForgetPasswordConfigurationRequest& setAuthenticationChannels(const vector<string> & authenticationChannels) { DARABONBA_PTR_SET_VALUE(authenticationChannels_, authenticationChannels) };
    inline SetForgetPasswordConfigurationRequest& setAuthenticationChannels(vector<string> && authenticationChannels) { DARABONBA_PTR_SET_RVALUE(authenticationChannels_, authenticationChannels) };


    // forgetPasswordStatus Field Functions 
    bool hasForgetPasswordStatus() const { return this->forgetPasswordStatus_ != nullptr;};
    void deleteForgetPasswordStatus() { this->forgetPasswordStatus_ = nullptr;};
    inline string forgetPasswordStatus() const { DARABONBA_PTR_GET_DEFAULT(forgetPasswordStatus_, "") };
    inline SetForgetPasswordConfigurationRequest& setForgetPasswordStatus(string forgetPasswordStatus) { DARABONBA_PTR_SET_VALUE(forgetPasswordStatus_, forgetPasswordStatus) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SetForgetPasswordConfigurationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    // The authentication channels. Valid values: email and sms.
    std::shared_ptr<vector<string>> authenticationChannels_ = nullptr;
    // The status of the forgot password feature. Valid values: enabled and disabled.
    // 
    // This parameter is required.
    std::shared_ptr<string> forgetPasswordStatus_ = nullptr;
    // The instance ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
