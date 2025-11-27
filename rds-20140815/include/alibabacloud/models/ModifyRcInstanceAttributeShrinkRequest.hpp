// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCINSTANCEATTRIBUTESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCINSTANCEATTRIBUTESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCInstanceAttributeShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCInstanceAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Reboot, reboot_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityGroupIds, securityGroupIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCInstanceAttributeShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Reboot, reboot_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupId, securityGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityGroupIds, securityGroupIdsShrink_);
    };
    ModifyRCInstanceAttributeShrinkRequest() = default ;
    ModifyRCInstanceAttributeShrinkRequest(const ModifyRCInstanceAttributeShrinkRequest &) = default ;
    ModifyRCInstanceAttributeShrinkRequest(ModifyRCInstanceAttributeShrinkRequest &&) = default ;
    ModifyRCInstanceAttributeShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCInstanceAttributeShrinkRequest() = default ;
    ModifyRCInstanceAttributeShrinkRequest& operator=(const ModifyRCInstanceAttributeShrinkRequest &) = default ;
    ModifyRCInstanceAttributeShrinkRequest& operator=(ModifyRCInstanceAttributeShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deletionProtection_ == nullptr
        && return this->hostName_ == nullptr && return this->instanceId_ == nullptr && return this->instanceIdsShrink_ == nullptr && return this->instanceName_ == nullptr && return this->password_ == nullptr
        && return this->reboot_ == nullptr && return this->regionId_ == nullptr && return this->securityGroupId_ == nullptr && return this->securityGroupIdsShrink_ == nullptr; };
    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline bool deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, false) };
    inline ModifyRCInstanceAttributeShrinkRequest& setDeletionProtection(bool deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ModifyRCInstanceAttributeShrinkRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCInstanceAttributeShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string instanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline ModifyRCInstanceAttributeShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ModifyRCInstanceAttributeShrinkRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyRCInstanceAttributeShrinkRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // reboot Field Functions 
    bool hasReboot() const { return this->reboot_ != nullptr;};
    void deleteReboot() { this->reboot_ = nullptr;};
    inline bool reboot() const { DARABONBA_PTR_GET_DEFAULT(reboot_, false) };
    inline ModifyRCInstanceAttributeShrinkRequest& setReboot(bool reboot) { DARABONBA_PTR_SET_VALUE(reboot_, reboot) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCInstanceAttributeShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityGroupId Field Functions 
    bool hasSecurityGroupId() const { return this->securityGroupId_ != nullptr;};
    void deleteSecurityGroupId() { this->securityGroupId_ = nullptr;};
    inline string securityGroupId() const { DARABONBA_PTR_GET_DEFAULT(securityGroupId_, "") };
    inline ModifyRCInstanceAttributeShrinkRequest& setSecurityGroupId(string securityGroupId) { DARABONBA_PTR_SET_VALUE(securityGroupId_, securityGroupId) };


    // securityGroupIdsShrink Field Functions 
    bool hasSecurityGroupIdsShrink() const { return this->securityGroupIdsShrink_ != nullptr;};
    void deleteSecurityGroupIdsShrink() { this->securityGroupIdsShrink_ = nullptr;};
    inline string securityGroupIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(securityGroupIdsShrink_, "") };
    inline ModifyRCInstanceAttributeShrinkRequest& setSecurityGroupIdsShrink(string securityGroupIdsShrink) { DARABONBA_PTR_SET_VALUE(securityGroupIdsShrink_, securityGroupIdsShrink) };


  protected:
    // Specifies whether to enable the release protection feature for the instance. Valid values:
    // 
    // - **true**: enables the release protection feature.
    // - **false** (default): does not enable the release protection feature.
    std::shared_ptr<bool> deletionProtection_ = nullptr;
    // The hostname of the instance.
    std::shared_ptr<string> hostName_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceIdsShrink_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    // The new password of the instance.
    // 
    // *   The value must be 8 to 30 characters in length.
    // *   The value must contain at least three of the following character types: uppercase letters, lowercase letters, digits, and special characters. Special characters include `()` ~ ! @ # $ % ^ & \\* - _ + = \\`
    std::shared_ptr<string> password_ = nullptr;
    // Specifies whether to restart the instance. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> reboot_ = nullptr;
    // The region ID of the instance. You can call the DescribeRegions operation to query the most recent region list.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the security group to which the instance is added.
    std::shared_ptr<string> securityGroupId_ = nullptr;
    std::shared_ptr<string> securityGroupIdsShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
