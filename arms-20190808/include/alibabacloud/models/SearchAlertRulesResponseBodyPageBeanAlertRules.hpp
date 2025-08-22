// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHALERTRULESRESPONSEBODYPAGEBEANALERTRULES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext.hpp>
#include <alibabacloud/models/SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule.hpp>
#include <vector>
#include <alibabacloud/models/SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam.hpp>
#include <alibabacloud/models/SearchAlertRulesResponseBodyPageBeanAlertRulesNotice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class SearchAlertRulesResponseBodyPageBeanAlertRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAlertRulesResponseBodyPageBeanAlertRules& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmContext, alarmContext_);
      DARABONBA_PTR_TO_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_TO_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_TO_JSON(AlertTitle, alertTitle_);
      DARABONBA_PTR_TO_JSON(AlertType, alertType_);
      DARABONBA_PTR_TO_JSON(AlertVersion, alertVersion_);
      DARABONBA_PTR_TO_JSON(AlertWays, alertWays_);
      DARABONBA_PTR_TO_JSON(Config, config_);
      DARABONBA_PTR_TO_JSON(ContactGroupIdList, contactGroupIdList_);
      DARABONBA_PTR_TO_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(HostByAlertManager, hostByAlertManager_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MetricParam, metricParam_);
      DARABONBA_PTR_TO_JSON(Notice, notice_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAlertRulesResponseBodyPageBeanAlertRules& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmContext, alarmContext_);
      DARABONBA_PTR_FROM_JSON(AlertLevel, alertLevel_);
      DARABONBA_PTR_FROM_JSON(AlertRule, alertRule_);
      DARABONBA_PTR_FROM_JSON(AlertTitle, alertTitle_);
      DARABONBA_PTR_FROM_JSON(AlertType, alertType_);
      DARABONBA_PTR_FROM_JSON(AlertVersion, alertVersion_);
      DARABONBA_PTR_FROM_JSON(AlertWays, alertWays_);
      DARABONBA_PTR_FROM_JSON(Config, config_);
      DARABONBA_PTR_FROM_JSON(ContactGroupIdList, contactGroupIdList_);
      DARABONBA_PTR_FROM_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(HostByAlertManager, hostByAlertManager_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MetricParam, metricParam_);
      DARABONBA_PTR_FROM_JSON(Notice, notice_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskStatus, taskStatus_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    SearchAlertRulesResponseBodyPageBeanAlertRules() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRules(const SearchAlertRulesResponseBodyPageBeanAlertRules &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRules(SearchAlertRulesResponseBodyPageBeanAlertRules &&) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAlertRulesResponseBodyPageBeanAlertRules() = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRules& operator=(const SearchAlertRulesResponseBodyPageBeanAlertRules &) = default ;
    SearchAlertRulesResponseBodyPageBeanAlertRules& operator=(SearchAlertRulesResponseBodyPageBeanAlertRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmContext_ != nullptr
        && this->alertLevel_ != nullptr && this->alertRule_ != nullptr && this->alertTitle_ != nullptr && this->alertType_ != nullptr && this->alertVersion_ != nullptr
        && this->alertWays_ != nullptr && this->config_ != nullptr && this->contactGroupIdList_ != nullptr && this->contactGroupIds_ != nullptr && this->createTime_ != nullptr
        && this->hostByAlertManager_ != nullptr && this->id_ != nullptr && this->metricParam_ != nullptr && this->notice_ != nullptr && this->regionId_ != nullptr
        && this->resourceGroupId_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->taskStatus_ != nullptr && this->title_ != nullptr
        && this->updateTime_ != nullptr && this->userId_ != nullptr; };
    // alarmContext Field Functions 
    bool hasAlarmContext() const { return this->alarmContext_ != nullptr;};
    void deleteAlarmContext() { this->alarmContext_ = nullptr;};
    inline const Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext & alarmContext() const { DARABONBA_PTR_GET_CONST(alarmContext_, Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext) };
    inline Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext alarmContext() { DARABONBA_PTR_GET(alarmContext_, Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlarmContext(const Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext & alarmContext) { DARABONBA_PTR_SET_VALUE(alarmContext_, alarmContext) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlarmContext(Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext && alarmContext) { DARABONBA_PTR_SET_RVALUE(alarmContext_, alarmContext) };


    // alertLevel Field Functions 
    bool hasAlertLevel() const { return this->alertLevel_ != nullptr;};
    void deleteAlertLevel() { this->alertLevel_ = nullptr;};
    inline string alertLevel() const { DARABONBA_PTR_GET_DEFAULT(alertLevel_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlertLevel(string alertLevel) { DARABONBA_PTR_SET_VALUE(alertLevel_, alertLevel) };


    // alertRule Field Functions 
    bool hasAlertRule() const { return this->alertRule_ != nullptr;};
    void deleteAlertRule() { this->alertRule_ = nullptr;};
    inline const Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule & alertRule() const { DARABONBA_PTR_GET_CONST(alertRule_, Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule) };
    inline Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule alertRule() { DARABONBA_PTR_GET(alertRule_, Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlertRule(const Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule & alertRule) { DARABONBA_PTR_SET_VALUE(alertRule_, alertRule) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlertRule(Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule && alertRule) { DARABONBA_PTR_SET_RVALUE(alertRule_, alertRule) };


    // alertTitle Field Functions 
    bool hasAlertTitle() const { return this->alertTitle_ != nullptr;};
    void deleteAlertTitle() { this->alertTitle_ = nullptr;};
    inline string alertTitle() const { DARABONBA_PTR_GET_DEFAULT(alertTitle_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlertTitle(string alertTitle) { DARABONBA_PTR_SET_VALUE(alertTitle_, alertTitle) };


    // alertType Field Functions 
    bool hasAlertType() const { return this->alertType_ != nullptr;};
    void deleteAlertType() { this->alertType_ = nullptr;};
    inline int32_t alertType() const { DARABONBA_PTR_GET_DEFAULT(alertType_, 0) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlertType(int32_t alertType) { DARABONBA_PTR_SET_VALUE(alertType_, alertType) };


    // alertVersion Field Functions 
    bool hasAlertVersion() const { return this->alertVersion_ != nullptr;};
    void deleteAlertVersion() { this->alertVersion_ = nullptr;};
    inline int32_t alertVersion() const { DARABONBA_PTR_GET_DEFAULT(alertVersion_, 0) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlertVersion(int32_t alertVersion) { DARABONBA_PTR_SET_VALUE(alertVersion_, alertVersion) };


    // alertWays Field Functions 
    bool hasAlertWays() const { return this->alertWays_ != nullptr;};
    void deleteAlertWays() { this->alertWays_ = nullptr;};
    inline const vector<string> & alertWays() const { DARABONBA_PTR_GET_CONST(alertWays_, vector<string>) };
    inline vector<string> alertWays() { DARABONBA_PTR_GET(alertWays_, vector<string>) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlertWays(const vector<string> & alertWays) { DARABONBA_PTR_SET_VALUE(alertWays_, alertWays) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setAlertWays(vector<string> && alertWays) { DARABONBA_PTR_SET_RVALUE(alertWays_, alertWays) };


    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline string config() const { DARABONBA_PTR_GET_DEFAULT(config_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setConfig(string config) { DARABONBA_PTR_SET_VALUE(config_, config) };


    // contactGroupIdList Field Functions 
    bool hasContactGroupIdList() const { return this->contactGroupIdList_ != nullptr;};
    void deleteContactGroupIdList() { this->contactGroupIdList_ = nullptr;};
    inline string contactGroupIdList() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIdList_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setContactGroupIdList(string contactGroupIdList) { DARABONBA_PTR_SET_VALUE(contactGroupIdList_, contactGroupIdList) };


    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline string contactGroupIds() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIds_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setContactGroupIds(string contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // hostByAlertManager Field Functions 
    bool hasHostByAlertManager() const { return this->hostByAlertManager_ != nullptr;};
    void deleteHostByAlertManager() { this->hostByAlertManager_ = nullptr;};
    inline bool hostByAlertManager() const { DARABONBA_PTR_GET_DEFAULT(hostByAlertManager_, false) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setHostByAlertManager(bool hostByAlertManager) { DARABONBA_PTR_SET_VALUE(hostByAlertManager_, hostByAlertManager) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // metricParam Field Functions 
    bool hasMetricParam() const { return this->metricParam_ != nullptr;};
    void deleteMetricParam() { this->metricParam_ = nullptr;};
    inline const Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam & metricParam() const { DARABONBA_PTR_GET_CONST(metricParam_, Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam) };
    inline Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam metricParam() { DARABONBA_PTR_GET(metricParam_, Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setMetricParam(const Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam & metricParam) { DARABONBA_PTR_SET_VALUE(metricParam_, metricParam) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setMetricParam(Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam && metricParam) { DARABONBA_PTR_SET_RVALUE(metricParam_, metricParam) };


    // notice Field Functions 
    bool hasNotice() const { return this->notice_ != nullptr;};
    void deleteNotice() { this->notice_ = nullptr;};
    inline const Models::SearchAlertRulesResponseBodyPageBeanAlertRulesNotice & notice() const { DARABONBA_PTR_GET_CONST(notice_, Models::SearchAlertRulesResponseBodyPageBeanAlertRulesNotice) };
    inline Models::SearchAlertRulesResponseBodyPageBeanAlertRulesNotice notice() { DARABONBA_PTR_GET(notice_, Models::SearchAlertRulesResponseBodyPageBeanAlertRulesNotice) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setNotice(const Models::SearchAlertRulesResponseBodyPageBeanAlertRulesNotice & notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setNotice(Models::SearchAlertRulesResponseBodyPageBeanAlertRulesNotice && notice) { DARABONBA_PTR_SET_RVALUE(notice_, notice) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskStatus Field Functions 
    bool hasTaskStatus() const { return this->taskStatus_ != nullptr;};
    void deleteTaskStatus() { this->taskStatus_ = nullptr;};
    inline string taskStatus() const { DARABONBA_PTR_GET_DEFAULT(taskStatus_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setTaskStatus(string taskStatus) { DARABONBA_PTR_SET_VALUE(taskStatus_, taskStatus) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline SearchAlertRulesResponseBodyPageBeanAlertRules& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The format of the alert notification.
    std::shared_ptr<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlarmContext> alarmContext_ = nullptr;
    // The severity of the alerts. Only the value `WARN` is supported.
    std::shared_ptr<string> alertLevel_ = nullptr;
    // The conditions of the alert rule. Multiple conditions are separated by the AND or OR logical operators.
    std::shared_ptr<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesAlertRule> alertRule_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> alertTitle_ = nullptr;
    // The type of the alert rule. Valid values:
    // 
    // *   `1`: custom alert rules that are used to monitor drill-down data sets
    // *   `3`: custom alert rules that are used to monitor tiled data sets
    // *   `4`: alert rules that are used to monitor the browser, including the default frontend alert rules
    // *   `5`: alert rules that are used to monitor applications, including the default application alert rules
    // *   `6`: the default browser alert rules
    // *   `7`: the default application alert rules
    // *   `8`: Tracing Analysis alert rules
    // *   `101`: Prometheus alert rules
    std::shared_ptr<int32_t> alertType_ = nullptr;
    // The version of the alert rule. Default value: `1`.
    std::shared_ptr<int32_t> alertVersion_ = nullptr;
    // Sending method of alarm notification.
    std::shared_ptr<vector<string>> alertWays_ = nullptr;
    // The configuration items of the alert rule. The value is a JSON string.
    // 
    // The configuration item **continuous** indicates whether alert notifications are continuously sent. Valid values:
    // 
    // *   `true`: Alert notifications are sent every minute.
    // *   `false`: The alert silence feature is enabled.
    // 
    // The configuration item **dataRevision** indicates the data revision policy that is used if no data is obtained or the data is null. Default value: 2. Valid values:
    // 
    // *   `0`: overwrites the data by using the value 0
    // *   `1`: overwrites the data by using the value 1
    // *   `2`: overwrites the data by using the value null. This value indicates that no alert is triggered if no data exists
    std::shared_ptr<string> config_ = nullptr;
    // The ID of the contact group. Multiple IDs are separated by commas (,).
    std::shared_ptr<string> contactGroupIdList_ = nullptr;
    // The IDs of the alert contact groups. The value is a JSON array.
    std::shared_ptr<string> contactGroupIds_ = nullptr;
    // The timestamp that shows when the alert rule was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether the alert is sent through the alert center. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> hostByAlertManager_ = nullptr;
    // The ID of the alert rule.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The information about the application that is associated with the alert rule.
    std::shared_ptr<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesMetricParam> metricParam_ = nullptr;
    // The time ranges when the alert rule takes effect and when alert notifications are sent.
    std::shared_ptr<Models::SearchAlertRulesResponseBodyPageBeanAlertRulesNotice> notice_ = nullptr;
    // The ID of the region to which the alert rule belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the alert rule. `RUNNING`: The alert rule is enabled. `STOPPED`: The alert rule is disabled.
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the Application Real-Time Monitoring Service (ARMS) task that is associated with the alert rule.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The status of the task. This parameter is hidden from users.
    std::shared_ptr<string> taskStatus_ = nullptr;
    // The name of the alert.
    std::shared_ptr<string> title_ = nullptr;
    // The timestamp that shows when the alert rule was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the user to which the alert rule belongs.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
