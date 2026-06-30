// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYINSTANCEAUTHCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYINSTANCEAUTHCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RdsAi20250507
{
namespace Models
{
  class ModifyInstanceAuthConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyInstanceAuthConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigList, configList_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyInstanceAuthConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigList, configList_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyInstanceAuthConfigRequest() = default ;
    ModifyInstanceAuthConfigRequest(const ModifyInstanceAuthConfigRequest &) = default ;
    ModifyInstanceAuthConfigRequest(ModifyInstanceAuthConfigRequest &&) = default ;
    ModifyInstanceAuthConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyInstanceAuthConfigRequest() = default ;
    ModifyInstanceAuthConfigRequest& operator=(const ModifyInstanceAuthConfigRequest &) = default ;
    ModifyInstanceAuthConfigRequest& operator=(ModifyInstanceAuthConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ConfigList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ConfigList& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ConfigList& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ConfigList() = default ;
      ConfigList(const ConfigList &) = default ;
      ConfigList(ConfigList &&) = default ;
      ConfigList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ConfigList() = default ;
      ConfigList& operator=(const ConfigList &) = default ;
      ConfigList& operator=(ConfigList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ConfigList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ConfigList& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the configuration item. Valid values:
      // 
      // - **GOTRUE_EXTERNAL_EMAIL_ENABLED**: Enables external email addresses.
      // - **GOTRUE_SITE_URL**: The website URL displayed in emails sent by the AI application.
      // - **GOTRUE_SMTP_PORT**: The port of the SMTP service provider.
      // - **GOTRUE_SMTP_SENDER_NAME**: The name of the email sender.
      // - **GOTRUE_SMTP_USER**: The username of the SMTP service provider.
      // - **GOTRUE_SMTP_PASS**: The key of the SMTP service provider.
      // - **GOTRUE_SMTP_ADMIN_EMAIL**: The email address of the SMTP service provider.
      // - **GOTRUE_SMTP_HOST**: The host address of the SMTP service provider.
      // - **GOTRUE_MAILER_AUTOCONFIRM**: Specifies whether automatic confirmation is enabled.
      // - **GOTRUE_MAILER_OTP_EXP**: The validity period of the one-time password (OTP), in seconds.
      // - **GOTRUE_MAILER_OTP_LENGTH**: The length of the verification code for the one-time password (OTP). The value must be an integer greater than or equal to 6.
      shared_ptr<string> name_ {};
      // The value of the configuration item.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->configList_ == nullptr
        && this->instanceName_ == nullptr && this->regionId_ == nullptr; };
    // configList Field Functions 
    bool hasConfigList() const { return this->configList_ != nullptr;};
    void deleteConfigList() { this->configList_ = nullptr;};
    inline const vector<ModifyInstanceAuthConfigRequest::ConfigList> & getConfigList() const { DARABONBA_PTR_GET_CONST(configList_, vector<ModifyInstanceAuthConfigRequest::ConfigList>) };
    inline vector<ModifyInstanceAuthConfigRequest::ConfigList> getConfigList() { DARABONBA_PTR_GET(configList_, vector<ModifyInstanceAuthConfigRequest::ConfigList>) };
    inline ModifyInstanceAuthConfigRequest& setConfigList(const vector<ModifyInstanceAuthConfigRequest::ConfigList> & configList) { DARABONBA_PTR_SET_VALUE(configList_, configList) };
    inline ModifyInstanceAuthConfigRequest& setConfigList(vector<ModifyInstanceAuthConfigRequest::ConfigList> && configList) { DARABONBA_PTR_SET_RVALUE(configList_, configList) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyInstanceAuthConfigRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyInstanceAuthConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the RDS Supabase instance.
    shared_ptr<vector<ModifyInstanceAuthConfigRequest::ConfigList>> configList_ {};
    // The region ID.
    shared_ptr<string> instanceName_ {};
    // The operation that you want to perform. Set the value to **ModifyInstanceAuthConfig**.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RdsAi20250507
#endif
