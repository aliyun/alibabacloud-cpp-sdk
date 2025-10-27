// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEAPPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEAPPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class UpdateAppGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAppGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_TO_JSON(MonitorConfigJson, monitorConfigJson_);
      DARABONBA_PTR_TO_JSON(MonitorContactsJson, monitorContactsJson_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NotificationPolicyName, notificationPolicyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAppGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxConcurrency, maxConcurrency_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigJson, monitorConfigJson_);
      DARABONBA_PTR_FROM_JSON(MonitorContactsJson, monitorContactsJson_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NotificationPolicyName, notificationPolicyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateAppGroupRequest() = default ;
    UpdateAppGroupRequest(const UpdateAppGroupRequest &) = default ;
    UpdateAppGroupRequest(UpdateAppGroupRequest &&) = default ;
    UpdateAppGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAppGroupRequest() = default ;
    UpdateAppGroupRequest& operator=(const UpdateAppGroupRequest &) = default ;
    UpdateAppGroupRequest& operator=(UpdateAppGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appVersion_ == nullptr
        && return this->description_ == nullptr && return this->groupId_ == nullptr && return this->maxConcurrency_ == nullptr && return this->monitorConfigJson_ == nullptr && return this->monitorContactsJson_ == nullptr
        && return this->namespace_ == nullptr && return this->notificationPolicyName_ == nullptr && return this->regionId_ == nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline int32_t appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, 0) };
    inline UpdateAppGroupRequest& setAppVersion(int32_t appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateAppGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline UpdateAppGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxConcurrency Field Functions 
    bool hasMaxConcurrency() const { return this->maxConcurrency_ != nullptr;};
    void deleteMaxConcurrency() { this->maxConcurrency_ = nullptr;};
    inline int32_t maxConcurrency() const { DARABONBA_PTR_GET_DEFAULT(maxConcurrency_, 0) };
    inline UpdateAppGroupRequest& setMaxConcurrency(int32_t maxConcurrency) { DARABONBA_PTR_SET_VALUE(maxConcurrency_, maxConcurrency) };


    // monitorConfigJson Field Functions 
    bool hasMonitorConfigJson() const { return this->monitorConfigJson_ != nullptr;};
    void deleteMonitorConfigJson() { this->monitorConfigJson_ = nullptr;};
    inline string monitorConfigJson() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigJson_, "") };
    inline UpdateAppGroupRequest& setMonitorConfigJson(string monitorConfigJson) { DARABONBA_PTR_SET_VALUE(monitorConfigJson_, monitorConfigJson) };


    // monitorContactsJson Field Functions 
    bool hasMonitorContactsJson() const { return this->monitorContactsJson_ != nullptr;};
    void deleteMonitorContactsJson() { this->monitorContactsJson_ = nullptr;};
    inline string monitorContactsJson() const { DARABONBA_PTR_GET_DEFAULT(monitorContactsJson_, "") };
    inline UpdateAppGroupRequest& setMonitorContactsJson(string monitorContactsJson) { DARABONBA_PTR_SET_VALUE(monitorContactsJson_, monitorContactsJson) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateAppGroupRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // notificationPolicyName Field Functions 
    bool hasNotificationPolicyName() const { return this->notificationPolicyName_ != nullptr;};
    void deleteNotificationPolicyName() { this->notificationPolicyName_ = nullptr;};
    inline string notificationPolicyName() const { DARABONBA_PTR_GET_DEFAULT(notificationPolicyName_, "") };
    inline UpdateAppGroupRequest& setNotificationPolicyName(string notificationPolicyName) { DARABONBA_PTR_SET_VALUE(notificationPolicyName_, notificationPolicyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAppGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The application version. 1: Basic version, 2: Professional version.
    std::shared_ptr<int32_t> appVersion_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the application. You can obtain the application ID on the **Application Management** page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The maximum number of concurrent instances. Default value: 1. A value of 1 specifies that if the last triggered instance is running, the next instance is not triggered even if the scheduled point in time for running the next instance is reached.
    std::shared_ptr<int32_t> maxConcurrency_ = nullptr;
    // The configuration of the alert. The value is a JSON string. For more information about this parameter, see **Additional information about request parameters**.
    std::shared_ptr<string> monitorConfigJson_ = nullptr;
    // The configuration of alert contacts. The value is a JSON string.
    std::shared_ptr<string> monitorContactsJson_ = nullptr;
    // The ID of the namespace. You can obtain the ID of the namespace on the Namespace page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> notificationPolicyName_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
