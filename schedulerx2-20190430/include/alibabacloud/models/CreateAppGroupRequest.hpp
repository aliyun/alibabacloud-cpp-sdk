// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class CreateAppGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableLog, enableLog_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxJobs, maxJobs_);
      DARABONBA_PTR_TO_JSON(MonitorConfigJson, monitorConfigJson_);
      DARABONBA_PTR_TO_JSON(MonitorContactsJson, monitorContactsJson_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(NotificationPolicyName, notificationPolicyName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScheduleBusyWorkers, scheduleBusyWorkers_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableLog, enableLog_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxJobs, maxJobs_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigJson, monitorConfigJson_);
      DARABONBA_PTR_FROM_JSON(MonitorContactsJson, monitorContactsJson_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceName, namespaceName_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(NotificationPolicyName, notificationPolicyName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScheduleBusyWorkers, scheduleBusyWorkers_);
    };
    CreateAppGroupRequest() = default ;
    CreateAppGroupRequest(const CreateAppGroupRequest &) = default ;
    CreateAppGroupRequest(CreateAppGroupRequest &&) = default ;
    CreateAppGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppGroupRequest() = default ;
    CreateAppGroupRequest& operator=(const CreateAppGroupRequest &) = default ;
    CreateAppGroupRequest& operator=(CreateAppGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->appName_ == nullptr && return this->appType_ == nullptr && return this->appVersion_ == nullptr && return this->description_ == nullptr && return this->enableLog_ == nullptr
        && return this->groupId_ == nullptr && return this->maxJobs_ == nullptr && return this->monitorConfigJson_ == nullptr && return this->monitorContactsJson_ == nullptr && return this->namespace_ == nullptr
        && return this->namespaceName_ == nullptr && return this->namespaceSource_ == nullptr && return this->notificationPolicyName_ == nullptr && return this->regionId_ == nullptr && return this->scheduleBusyWorkers_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline CreateAppGroupRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline CreateAppGroupRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline int32_t appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, 0) };
    inline CreateAppGroupRequest& setAppType(int32_t appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline int32_t appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, 0) };
    inline CreateAppGroupRequest& setAppVersion(int32_t appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateAppGroupRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableLog Field Functions 
    bool hasEnableLog() const { return this->enableLog_ != nullptr;};
    void deleteEnableLog() { this->enableLog_ = nullptr;};
    inline bool enableLog() const { DARABONBA_PTR_GET_DEFAULT(enableLog_, false) };
    inline CreateAppGroupRequest& setEnableLog(bool enableLog) { DARABONBA_PTR_SET_VALUE(enableLog_, enableLog) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline CreateAppGroupRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxJobs Field Functions 
    bool hasMaxJobs() const { return this->maxJobs_ != nullptr;};
    void deleteMaxJobs() { this->maxJobs_ = nullptr;};
    inline int32_t maxJobs() const { DARABONBA_PTR_GET_DEFAULT(maxJobs_, 0) };
    inline CreateAppGroupRequest& setMaxJobs(int32_t maxJobs) { DARABONBA_PTR_SET_VALUE(maxJobs_, maxJobs) };


    // monitorConfigJson Field Functions 
    bool hasMonitorConfigJson() const { return this->monitorConfigJson_ != nullptr;};
    void deleteMonitorConfigJson() { this->monitorConfigJson_ = nullptr;};
    inline string monitorConfigJson() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigJson_, "") };
    inline CreateAppGroupRequest& setMonitorConfigJson(string monitorConfigJson) { DARABONBA_PTR_SET_VALUE(monitorConfigJson_, monitorConfigJson) };


    // monitorContactsJson Field Functions 
    bool hasMonitorContactsJson() const { return this->monitorContactsJson_ != nullptr;};
    void deleteMonitorContactsJson() { this->monitorContactsJson_ = nullptr;};
    inline string monitorContactsJson() const { DARABONBA_PTR_GET_DEFAULT(monitorContactsJson_, "") };
    inline CreateAppGroupRequest& setMonitorContactsJson(string monitorContactsJson) { DARABONBA_PTR_SET_VALUE(monitorContactsJson_, monitorContactsJson) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline CreateAppGroupRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceName Field Functions 
    bool hasNamespaceName() const { return this->namespaceName_ != nullptr;};
    void deleteNamespaceName() { this->namespaceName_ = nullptr;};
    inline string namespaceName() const { DARABONBA_PTR_GET_DEFAULT(namespaceName_, "") };
    inline CreateAppGroupRequest& setNamespaceName(string namespaceName) { DARABONBA_PTR_SET_VALUE(namespaceName_, namespaceName) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string namespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline CreateAppGroupRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // notificationPolicyName Field Functions 
    bool hasNotificationPolicyName() const { return this->notificationPolicyName_ != nullptr;};
    void deleteNotificationPolicyName() { this->notificationPolicyName_ = nullptr;};
    inline string notificationPolicyName() const { DARABONBA_PTR_GET_DEFAULT(notificationPolicyName_, "") };
    inline CreateAppGroupRequest& setNotificationPolicyName(string notificationPolicyName) { DARABONBA_PTR_SET_VALUE(notificationPolicyName_, notificationPolicyName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateAppGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scheduleBusyWorkers Field Functions 
    bool hasScheduleBusyWorkers() const { return this->scheduleBusyWorkers_ != nullptr;};
    void deleteScheduleBusyWorkers() { this->scheduleBusyWorkers_ = nullptr;};
    inline bool scheduleBusyWorkers() const { DARABONBA_PTR_GET_DEFAULT(scheduleBusyWorkers_, false) };
    inline CreateAppGroupRequest& setScheduleBusyWorkers(bool scheduleBusyWorkers) { DARABONBA_PTR_SET_VALUE(scheduleBusyWorkers_, scheduleBusyWorkers) };


  protected:
    // The AppKey for the application.
    std::shared_ptr<string> appKey_ = nullptr;
    // The name of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The type of application. Valid values:
    // 
    // *   `TRACE`: Application Monitoring
    // *   `EBPF`: Application Monitoring eBPF Edition
    std::shared_ptr<int32_t> appType_ = nullptr;
    // The application version. 1: Basic version, 2: Professional version.
    std::shared_ptr<int32_t> appVersion_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // Specifies whether to enable logging. Valid values:
    // 
    // *   `true`: enabled
    // *   `false`: disabled
    std::shared_ptr<bool> enableLog_ = nullptr;
    // The application ID. You can obtain the application ID on the Application Management page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The maximum number of jobs.
    std::shared_ptr<int32_t> maxJobs_ = nullptr;
    // The configuration of the alert. The value is a JSON string. For more information about this parameter, see **Additional information about request parameters**.
    std::shared_ptr<string> monitorConfigJson_ = nullptr;
    // The configuration of alert contacts. The value is a JSON string.
    std::shared_ptr<string> monitorContactsJson_ = nullptr;
    // The namespace ID. You can obtain the namespace ID on the Namespace page in the SchedulerX console.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The name of the namespace.
    std::shared_ptr<string> namespaceName_ = nullptr;
    // This parameter is not supported. You do not need to specify this parameter.
    std::shared_ptr<string> namespaceSource_ = nullptr;
    std::shared_ptr<string> notificationPolicyName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to schedule a busy worker.
    std::shared_ptr<bool> scheduleBusyWorkers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
