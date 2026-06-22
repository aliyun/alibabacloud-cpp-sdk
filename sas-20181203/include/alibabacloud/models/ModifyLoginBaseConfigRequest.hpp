// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYLOGINBASECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYLOGINBASECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyLoginBaseConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyLoginBaseConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyLoginBaseConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ModifyLoginBaseConfigRequest() = default ;
    ModifyLoginBaseConfigRequest(const ModifyLoginBaseConfigRequest &) = default ;
    ModifyLoginBaseConfigRequest(ModifyLoginBaseConfigRequest &&) = default ;
    ModifyLoginBaseConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyLoginBaseConfigRequest() = default ;
    ModifyLoginBaseConfigRequest& operator=(const ModifyLoginBaseConfigRequest &) = default ;
    ModifyLoginBaseConfigRequest& operator=(ModifyLoginBaseConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && this->target_ == nullptr && this->type_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string getConfig() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline ModifyLoginBaseConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string getTarget() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline ModifyLoginBaseConfigRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ModifyLoginBaseConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The detailed configuration of the unusual logon detection rule for the server. This parameter is in JSON format and contains the following fields:
    // 
    // - **totalCount**: the total number of assets.
    // - **uuidCount**: the number of assets on which the rule takes effect.
    // - **id**: the ID of the unusual logon detection rule.
    // - **location**: the name of the common logon location.
    // 
    // > This field is required only when the Type parameter is set to login_common_location.
    // 
    // - **ip**: the common logon IP address.
    // 
    // > This field is required only when the Type parameter is set to login_common_ip.
    // 
    // - **endTime**: the end time of the common logon time range.
    // 
    // > This field is required only when the Type parameter is set to login_common_time.
    // 
    // - **startTime**: the start time of the common logon time range.
    // 
    // > This field is required only when the Type parameter is set to login_common_time.
    // 
    // - **account**: the common logon account.
    // 
    // > This field is required only when the Type parameter is set to login_common_account.
    // 
    // This parameter is required.
    shared_ptr<string> config_ {};
    // The configuration of the servers on which the unusual logon detection rule takes effect. This parameter is in JSON format and contains the following fields:
    // 
    // - **Target**: the UUID of the server to add or remove.
    // - **targetType**: the mode for adding assets on which the rule takes effect. Valid values:
    //     - **uuid**: add by individual server.
    //     - **groupId**: add by server group.
    // - **flag**: the operation to perform on the asset. Valid values:
    //     - **del**: remove the server from the rule.
    //     - **add**: add the server to the rule.
    // 
    // This parameter is required.
    shared_ptr<string> target_ {};
    // The type of unusual logon detection for the server. Valid values:
    // 
    // - **login_common_location**: common logon location.
    // - **login_common_ip**: common logon IP address.
    // - **login_common_time**: common logon time.
    // - **login_common_account**: common logon account.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
