// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORGETPASSWORDCONFIGURATIONRESPONSEBODYOPENFORGETPASSWORDCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_GETFORGETPASSWORDCONFIGURATIONRESPONSEBODYOPENFORGETPASSWORDCONFIGURATION_HPP_
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
  class GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(AuthenticationChannels, authenticationChannels_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(EnableEmail, enableEmail_);
      DARABONBA_PTR_TO_JSON(EnableSms, enableSms_);
      DARABONBA_PTR_TO_JSON(ForgetPasswordStatus, forgetPasswordStatus_);
    };
    friend void from_json(const Darabonba::Json& j, GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthenticationChannels, authenticationChannels_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(EnableEmail, enableEmail_);
      DARABONBA_PTR_FROM_JSON(EnableSms, enableSms_);
      DARABONBA_PTR_FROM_JSON(ForgetPasswordStatus, forgetPasswordStatus_);
    };
    GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration() = default ;
    GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration(const GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration &) = default ;
    GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration(GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration &&) = default ;
    GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration() = default ;
    GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& operator=(const GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration &) = default ;
    GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& operator=(GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authenticationChannels_ == nullptr
        && return this->enable_ == nullptr && return this->enableEmail_ == nullptr && return this->enableSms_ == nullptr && return this->forgetPasswordStatus_ == nullptr; };
    // authenticationChannels Field Functions 
    bool hasAuthenticationChannels() const { return this->authenticationChannels_ != nullptr;};
    void deleteAuthenticationChannels() { this->authenticationChannels_ = nullptr;};
    inline const vector<string> & authenticationChannels() const { DARABONBA_PTR_GET_CONST(authenticationChannels_, vector<string>) };
    inline vector<string> authenticationChannels() { DARABONBA_PTR_GET(authenticationChannels_, vector<string>) };
    inline GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& setAuthenticationChannels(const vector<string> & authenticationChannels) { DARABONBA_PTR_SET_VALUE(authenticationChannels_, authenticationChannels) };
    inline GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& setAuthenticationChannels(vector<string> && authenticationChannels) { DARABONBA_PTR_SET_RVALUE(authenticationChannels_, authenticationChannels) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // enableEmail Field Functions 
    bool hasEnableEmail() const { return this->enableEmail_ != nullptr;};
    void deleteEnableEmail() { this->enableEmail_ = nullptr;};
    inline bool enableEmail() const { DARABONBA_PTR_GET_DEFAULT(enableEmail_, false) };
    inline GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& setEnableEmail(bool enableEmail) { DARABONBA_PTR_SET_VALUE(enableEmail_, enableEmail) };


    // enableSms Field Functions 
    bool hasEnableSms() const { return this->enableSms_ != nullptr;};
    void deleteEnableSms() { this->enableSms_ = nullptr;};
    inline bool enableSms() const { DARABONBA_PTR_GET_DEFAULT(enableSms_, false) };
    inline GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& setEnableSms(bool enableSms) { DARABONBA_PTR_SET_VALUE(enableSms_, enableSms) };


    // forgetPasswordStatus Field Functions 
    bool hasForgetPasswordStatus() const { return this->forgetPasswordStatus_ != nullptr;};
    void deleteForgetPasswordStatus() { this->forgetPasswordStatus_ = nullptr;};
    inline string forgetPasswordStatus() const { DARABONBA_PTR_GET_DEFAULT(forgetPasswordStatus_, "") };
    inline GetForgetPasswordConfigurationResponseBodyOpenForgetPasswordConfiguration& setForgetPasswordStatus(string forgetPasswordStatus) { DARABONBA_PTR_SET_VALUE(forgetPasswordStatus_, forgetPasswordStatus) };


  protected:
    // The authentication channels. Valid values:  
    // email  
    // sms  
    // totp  
    // web_authn
    std::shared_ptr<vector<string>> authenticationChannels_ = nullptr;
    // Indicates whether the forgot password feature is enabled.
    std::shared_ptr<bool> enable_ = nullptr;
    // Indicates whether email authentication is enabled for the forgot password feature.
    std::shared_ptr<bool> enableEmail_ = nullptr;
    // Indicates whether Short Message Service (SMS) authentication is enabled for the forgot password feature.
    std::shared_ptr<bool> enableSms_ = nullptr;
    // The status of the forgot password feature. Valid values: enabled and disabled.
    std::shared_ptr<string> forgetPasswordStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
