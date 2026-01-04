// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFORGETPASSWORDCONFIGURATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETFORGETPASSWORDCONFIGURATIONRESPONSEBODY_HPP_
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
  class GetForgetPasswordConfigurationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetForgetPasswordConfigurationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OpenForgetPasswordConfiguration, openForgetPasswordConfiguration_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetForgetPasswordConfigurationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenForgetPasswordConfiguration, openForgetPasswordConfiguration_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetForgetPasswordConfigurationResponseBody() = default ;
    GetForgetPasswordConfigurationResponseBody(const GetForgetPasswordConfigurationResponseBody &) = default ;
    GetForgetPasswordConfigurationResponseBody(GetForgetPasswordConfigurationResponseBody &&) = default ;
    GetForgetPasswordConfigurationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetForgetPasswordConfigurationResponseBody() = default ;
    GetForgetPasswordConfigurationResponseBody& operator=(const GetForgetPasswordConfigurationResponseBody &) = default ;
    GetForgetPasswordConfigurationResponseBody& operator=(GetForgetPasswordConfigurationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OpenForgetPasswordConfiguration : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenForgetPasswordConfiguration& obj) { 
        DARABONBA_PTR_TO_JSON(AuthenticationChannels, authenticationChannels_);
        DARABONBA_PTR_TO_JSON(Enable, enable_);
        DARABONBA_PTR_TO_JSON(EnableEmail, enableEmail_);
        DARABONBA_PTR_TO_JSON(EnableSms, enableSms_);
        DARABONBA_PTR_TO_JSON(ForgetPasswordStatus, forgetPasswordStatus_);
      };
      friend void from_json(const Darabonba::Json& j, OpenForgetPasswordConfiguration& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthenticationChannels, authenticationChannels_);
        DARABONBA_PTR_FROM_JSON(Enable, enable_);
        DARABONBA_PTR_FROM_JSON(EnableEmail, enableEmail_);
        DARABONBA_PTR_FROM_JSON(EnableSms, enableSms_);
        DARABONBA_PTR_FROM_JSON(ForgetPasswordStatus, forgetPasswordStatus_);
      };
      OpenForgetPasswordConfiguration() = default ;
      OpenForgetPasswordConfiguration(const OpenForgetPasswordConfiguration &) = default ;
      OpenForgetPasswordConfiguration(OpenForgetPasswordConfiguration &&) = default ;
      OpenForgetPasswordConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenForgetPasswordConfiguration() = default ;
      OpenForgetPasswordConfiguration& operator=(const OpenForgetPasswordConfiguration &) = default ;
      OpenForgetPasswordConfiguration& operator=(OpenForgetPasswordConfiguration &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authenticationChannels_ == nullptr
        && this->enable_ == nullptr && this->enableEmail_ == nullptr && this->enableSms_ == nullptr && this->forgetPasswordStatus_ == nullptr; };
      // authenticationChannels Field Functions 
      bool hasAuthenticationChannels() const { return this->authenticationChannels_ != nullptr;};
      void deleteAuthenticationChannels() { this->authenticationChannels_ = nullptr;};
      inline const vector<string> & getAuthenticationChannels() const { DARABONBA_PTR_GET_CONST(authenticationChannels_, vector<string>) };
      inline vector<string> getAuthenticationChannels() { DARABONBA_PTR_GET(authenticationChannels_, vector<string>) };
      inline OpenForgetPasswordConfiguration& setAuthenticationChannels(const vector<string> & authenticationChannels) { DARABONBA_PTR_SET_VALUE(authenticationChannels_, authenticationChannels) };
      inline OpenForgetPasswordConfiguration& setAuthenticationChannels(vector<string> && authenticationChannels) { DARABONBA_PTR_SET_RVALUE(authenticationChannels_, authenticationChannels) };


      // enable Field Functions 
      bool hasEnable() const { return this->enable_ != nullptr;};
      void deleteEnable() { this->enable_ = nullptr;};
      inline bool getEnable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
      inline OpenForgetPasswordConfiguration& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


      // enableEmail Field Functions 
      bool hasEnableEmail() const { return this->enableEmail_ != nullptr;};
      void deleteEnableEmail() { this->enableEmail_ = nullptr;};
      inline bool getEnableEmail() const { DARABONBA_PTR_GET_DEFAULT(enableEmail_, false) };
      inline OpenForgetPasswordConfiguration& setEnableEmail(bool enableEmail) { DARABONBA_PTR_SET_VALUE(enableEmail_, enableEmail) };


      // enableSms Field Functions 
      bool hasEnableSms() const { return this->enableSms_ != nullptr;};
      void deleteEnableSms() { this->enableSms_ = nullptr;};
      inline bool getEnableSms() const { DARABONBA_PTR_GET_DEFAULT(enableSms_, false) };
      inline OpenForgetPasswordConfiguration& setEnableSms(bool enableSms) { DARABONBA_PTR_SET_VALUE(enableSms_, enableSms) };


      // forgetPasswordStatus Field Functions 
      bool hasForgetPasswordStatus() const { return this->forgetPasswordStatus_ != nullptr;};
      void deleteForgetPasswordStatus() { this->forgetPasswordStatus_ = nullptr;};
      inline string getForgetPasswordStatus() const { DARABONBA_PTR_GET_DEFAULT(forgetPasswordStatus_, "") };
      inline OpenForgetPasswordConfiguration& setForgetPasswordStatus(string forgetPasswordStatus) { DARABONBA_PTR_SET_VALUE(forgetPasswordStatus_, forgetPasswordStatus) };


    protected:
      // The authentication channels. Valid values:  
      // email  
      // sms  
      // totp  
      // web_authn
      shared_ptr<vector<string>> authenticationChannels_ {};
      // Indicates whether the forgot password feature is enabled.
      shared_ptr<bool> enable_ {};
      // Indicates whether email authentication is enabled for the forgot password feature.
      shared_ptr<bool> enableEmail_ {};
      // Indicates whether Short Message Service (SMS) authentication is enabled for the forgot password feature.
      shared_ptr<bool> enableSms_ {};
      // The status of the forgot password feature. Valid values: enabled and disabled.
      shared_ptr<string> forgetPasswordStatus_ {};
    };

    virtual bool empty() const override { return this->openForgetPasswordConfiguration_ == nullptr
        && this->requestId_ == nullptr; };
    // openForgetPasswordConfiguration Field Functions 
    bool hasOpenForgetPasswordConfiguration() const { return this->openForgetPasswordConfiguration_ != nullptr;};
    void deleteOpenForgetPasswordConfiguration() { this->openForgetPasswordConfiguration_ = nullptr;};
    inline const GetForgetPasswordConfigurationResponseBody::OpenForgetPasswordConfiguration & getOpenForgetPasswordConfiguration() const { DARABONBA_PTR_GET_CONST(openForgetPasswordConfiguration_, GetForgetPasswordConfigurationResponseBody::OpenForgetPasswordConfiguration) };
    inline GetForgetPasswordConfigurationResponseBody::OpenForgetPasswordConfiguration getOpenForgetPasswordConfiguration() { DARABONBA_PTR_GET(openForgetPasswordConfiguration_, GetForgetPasswordConfigurationResponseBody::OpenForgetPasswordConfiguration) };
    inline GetForgetPasswordConfigurationResponseBody& setOpenForgetPasswordConfiguration(const GetForgetPasswordConfigurationResponseBody::OpenForgetPasswordConfiguration & openForgetPasswordConfiguration) { DARABONBA_PTR_SET_VALUE(openForgetPasswordConfiguration_, openForgetPasswordConfiguration) };
    inline GetForgetPasswordConfigurationResponseBody& setOpenForgetPasswordConfiguration(GetForgetPasswordConfigurationResponseBody::OpenForgetPasswordConfiguration && openForgetPasswordConfiguration) { DARABONBA_PTR_SET_RVALUE(openForgetPasswordConfiguration_, openForgetPasswordConfiguration) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetForgetPasswordConfigurationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The forgot password configurations.
    shared_ptr<GetForgetPasswordConfigurationResponseBody::OpenForgetPasswordConfiguration> openForgetPasswordConfiguration_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
