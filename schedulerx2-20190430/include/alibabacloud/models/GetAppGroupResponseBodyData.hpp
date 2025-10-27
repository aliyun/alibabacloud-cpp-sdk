// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETAPPGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class GetAppGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(CurJobs, curJobs_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(MaxJobs, maxJobs_);
      DARABONBA_PTR_TO_JSON(MonitorConfigJson, monitorConfigJson_);
      DARABONBA_PTR_TO_JSON(MonitorContactsJson, monitorContactsJson_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NotificationPolicyName, notificationPolicyName_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(CurJobs, curJobs_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(MaxJobs, maxJobs_);
      DARABONBA_PTR_FROM_JSON(MonitorConfigJson, monitorConfigJson_);
      DARABONBA_PTR_FROM_JSON(MonitorContactsJson, monitorContactsJson_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NotificationPolicyName, notificationPolicyName_);
    };
    GetAppGroupResponseBodyData() = default ;
    GetAppGroupResponseBodyData(const GetAppGroupResponseBodyData &) = default ;
    GetAppGroupResponseBodyData(GetAppGroupResponseBodyData &&) = default ;
    GetAppGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppGroupResponseBodyData() = default ;
    GetAppGroupResponseBodyData& operator=(const GetAppGroupResponseBodyData &) = default ;
    GetAppGroupResponseBodyData& operator=(GetAppGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && return this->appName_ == nullptr && return this->appVersion_ == nullptr && return this->curJobs_ == nullptr && return this->description_ == nullptr && return this->groupId_ == nullptr
        && return this->maxJobs_ == nullptr && return this->monitorConfigJson_ == nullptr && return this->monitorContactsJson_ == nullptr && return this->namespace_ == nullptr && return this->notificationPolicyName_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string appKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline GetAppGroupResponseBodyData& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppGroupResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline GetAppGroupResponseBodyData& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // curJobs Field Functions 
    bool hasCurJobs() const { return this->curJobs_ != nullptr;};
    void deleteCurJobs() { this->curJobs_ = nullptr;};
    inline int32_t curJobs() const { DARABONBA_PTR_GET_DEFAULT(curJobs_, 0) };
    inline GetAppGroupResponseBodyData& setCurJobs(int32_t curJobs) { DARABONBA_PTR_SET_VALUE(curJobs_, curJobs) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetAppGroupResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetAppGroupResponseBodyData& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // maxJobs Field Functions 
    bool hasMaxJobs() const { return this->maxJobs_ != nullptr;};
    void deleteMaxJobs() { this->maxJobs_ = nullptr;};
    inline int32_t maxJobs() const { DARABONBA_PTR_GET_DEFAULT(maxJobs_, 0) };
    inline GetAppGroupResponseBodyData& setMaxJobs(int32_t maxJobs) { DARABONBA_PTR_SET_VALUE(maxJobs_, maxJobs) };


    // monitorConfigJson Field Functions 
    bool hasMonitorConfigJson() const { return this->monitorConfigJson_ != nullptr;};
    void deleteMonitorConfigJson() { this->monitorConfigJson_ = nullptr;};
    inline string monitorConfigJson() const { DARABONBA_PTR_GET_DEFAULT(monitorConfigJson_, "") };
    inline GetAppGroupResponseBodyData& setMonitorConfigJson(string monitorConfigJson) { DARABONBA_PTR_SET_VALUE(monitorConfigJson_, monitorConfigJson) };


    // monitorContactsJson Field Functions 
    bool hasMonitorContactsJson() const { return this->monitorContactsJson_ != nullptr;};
    void deleteMonitorContactsJson() { this->monitorContactsJson_ = nullptr;};
    inline string monitorContactsJson() const { DARABONBA_PTR_GET_DEFAULT(monitorContactsJson_, "") };
    inline GetAppGroupResponseBodyData& setMonitorContactsJson(string monitorContactsJson) { DARABONBA_PTR_SET_VALUE(monitorContactsJson_, monitorContactsJson) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline GetAppGroupResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // notificationPolicyName Field Functions 
    bool hasNotificationPolicyName() const { return this->notificationPolicyName_ != nullptr;};
    void deleteNotificationPolicyName() { this->notificationPolicyName_ = nullptr;};
    inline string notificationPolicyName() const { DARABONBA_PTR_GET_DEFAULT(notificationPolicyName_, "") };
    inline GetAppGroupResponseBodyData& setNotificationPolicyName(string notificationPolicyName) { DARABONBA_PTR_SET_VALUE(notificationPolicyName_, notificationPolicyName) };


  protected:
    // The AppKey of the application.
    std::shared_ptr<string> appKey_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The application version. 1: Basic version, 2: Professional version.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The number of jobs that are configured for the application group.
    std::shared_ptr<int32_t> curJobs_ = nullptr;
    // The description of the application.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> groupId_ = nullptr;
    // The maximum number of jobs that can be configured for the application group.
    std::shared_ptr<int32_t> maxJobs_ = nullptr;
    // The alert notification configurations.
    // 
    // >  For more information about this parameter, see the following **additional information about request parameters**.
    std::shared_ptr<string> monitorConfigJson_ = nullptr;
    // The alert contact configurations.
    // 
    // >  For more information about this parameter, see the following **additional information about request parameters**.
    std::shared_ptr<string> monitorContactsJson_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<string> notificationPolicyName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
