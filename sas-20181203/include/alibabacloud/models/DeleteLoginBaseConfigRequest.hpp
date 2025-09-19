// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELOGINBASECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELOGINBASECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DeleteLoginBaseConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLoginBaseConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(Target, target_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLoginBaseConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(Target, target_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DeleteLoginBaseConfigRequest() = default ;
    DeleteLoginBaseConfigRequest(const DeleteLoginBaseConfigRequest &) = default ;
    DeleteLoginBaseConfigRequest(DeleteLoginBaseConfigRequest &&) = default ;
    DeleteLoginBaseConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLoginBaseConfigRequest() = default ;
    DeleteLoginBaseConfigRequest& operator=(const DeleteLoginBaseConfigRequest &) = default ;
    DeleteLoginBaseConfigRequest& operator=(DeleteLoginBaseConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->target_ != nullptr && this->type_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline DeleteLoginBaseConfigRequest& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // target Field Functions 
    bool hasTarget() const { return this->target_ != nullptr;};
    void deleteTarget() { this->target_ = nullptr;};
    inline string target() const { DARABONBA_PTR_GET_DEFAULT(target_, "") };
    inline DeleteLoginBaseConfigRequest& setTarget(string target) { DARABONBA_PTR_SET_VALUE(target_, target) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DeleteLoginBaseConfigRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The content of the logon security settings to delete. The content varies based on the type of the logon security settings. Valid values:
    // 
    // *   **login_common_ip**: approved logon IP addresses
    // 
    // Example: {"ip":"10.23.23.23"}.
    // 
    // *   **login_common_time**: approved logon time ranges
    // 
    // Example: {"startTime":"06:00:00","endTime":"16:00:00"}.
    // 
    // *   **login_common_account**: approved logon accounts
    // 
    // Example: {"account":"test_account_001"}.
    // 
    // *   **login_common_location**: approved logon locations
    // 
    // Example: {"location":"Shanghai"}.
    // 
    // This parameter is required.
    std::shared_ptr<string> config_ = nullptr;
    // The UUID of the server whose logon security settings you want to delete.
    // 
    // > You can call the [DescribeCloudCenterInstances](~~DescribeCloudCenterInstances~~) operation to query the UUIDs of servers.
    std::shared_ptr<string> target_ = nullptr;
    // The type of the logon security settings to delete. Valid values:
    // 
    // *   **login_common_ip**: approved logon IP addresses
    // *   **login_common_time**: approved logon time ranges
    // *   **login_common_account**: approved logon accounts
    // *   **login_common_location**: approved logon locations
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
