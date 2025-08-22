// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(Page, page_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(ShowActivities, showActivities_);
      DARABONBA_PTR_TO_JSON(ShowEvents, showEvents_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(IntegrationType, integrationType_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(Page, page_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(ShowActivities, showActivities_);
      DARABONBA_PTR_FROM_JSON(ShowEvents, showEvents_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListAlertsRequest() = default ;
    ListAlertsRequest(const ListAlertsRequest &) = default ;
    ListAlertsRequest(ListAlertsRequest &&) = default ;
    ListAlertsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsRequest() = default ;
    ListAlertsRequest& operator=(const ListAlertsRequest &) = default ;
    ListAlertsRequest& operator=(ListAlertsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertName_ != nullptr
        && this->dispatchRuleId_ != nullptr && this->endTime_ != nullptr && this->integrationType_ != nullptr && this->owner_ != nullptr && this->page_ != nullptr
        && this->regionId_ != nullptr && this->severity_ != nullptr && this->showActivities_ != nullptr && this->showEvents_ != nullptr && this->size_ != nullptr
        && this->startTime_ != nullptr && this->state_ != nullptr; };
    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline ListAlertsRequest& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // dispatchRuleId Field Functions 
    bool hasDispatchRuleId() const { return this->dispatchRuleId_ != nullptr;};
    void deleteDispatchRuleId() { this->dispatchRuleId_ = nullptr;};
    inline int64_t dispatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleId_, 0L) };
    inline ListAlertsRequest& setDispatchRuleId(int64_t dispatchRuleId) { DARABONBA_PTR_SET_VALUE(dispatchRuleId_, dispatchRuleId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListAlertsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // integrationType Field Functions 
    bool hasIntegrationType() const { return this->integrationType_ != nullptr;};
    void deleteIntegrationType() { this->integrationType_ = nullptr;};
    inline string integrationType() const { DARABONBA_PTR_GET_DEFAULT(integrationType_, "") };
    inline ListAlertsRequest& setIntegrationType(string integrationType) { DARABONBA_PTR_SET_VALUE(integrationType_, integrationType) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListAlertsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // page Field Functions 
    bool hasPage() const { return this->page_ != nullptr;};
    void deletePage() { this->page_ = nullptr;};
    inline int64_t page() const { DARABONBA_PTR_GET_DEFAULT(page_, 0L) };
    inline ListAlertsRequest& setPage(int64_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAlertsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListAlertsRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // showActivities Field Functions 
    bool hasShowActivities() const { return this->showActivities_ != nullptr;};
    void deleteShowActivities() { this->showActivities_ = nullptr;};
    inline bool showActivities() const { DARABONBA_PTR_GET_DEFAULT(showActivities_, false) };
    inline ListAlertsRequest& setShowActivities(bool showActivities) { DARABONBA_PTR_SET_VALUE(showActivities_, showActivities) };


    // showEvents Field Functions 
    bool hasShowEvents() const { return this->showEvents_ != nullptr;};
    void deleteShowEvents() { this->showEvents_ = nullptr;};
    inline bool showEvents() const { DARABONBA_PTR_GET_DEFAULT(showEvents_, false) };
    inline ListAlertsRequest& setShowEvents(bool showEvents) { DARABONBA_PTR_SET_VALUE(showEvents_, showEvents) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int64_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0L) };
    inline ListAlertsRequest& setSize(int64_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ListAlertsRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int64_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
    inline ListAlertsRequest& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // The name of the alert rule.
    std::shared_ptr<string> alertName_ = nullptr;
    // The ID of the notification policy.
    std::shared_ptr<int64_t> dispatchRuleId_ = nullptr;
    // The end time of the alert sending history that you want to query. Specify the time in the `YYYY-MM-DD HH:mm:ss` format.
    std::shared_ptr<string> endTime_ = nullptr;
    // The integration type.
    // 
    // *   ARMS
    // *   CLOUD_MONITOR
    // *   MSE
    // *   ARMS_CLOUD_DIALTEST
    // *   PROMETHEUS
    // *   LOG_SERVICE
    // *   CUSTOM
    // *   ARMS_PROMETHEUS
    // *   ARMS_APP_MON
    // *   ARMS_FRONT_MON
    // *   ARMS_CUSTOM
    // *   XTRACE
    // *   GRAFANA
    // *   ZABBIX
    // *   SKYWALKING
    // *   EVENT_BRIDGE
    // *   NAGIOS
    // *   OPENFALCON
    // *   ARMS_INSIGHTS
    std::shared_ptr<string> integrationType_ = nullptr;
    // The notification object configured in the notification policy, responsible for handling alerts.
    std::shared_ptr<string> owner_ = nullptr;
    // The number of the page to return.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> page_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The severity level of the alert. Valid values: P6, P5, P4, P3, P2, and P1. The preceding values are listed in ascending order of severity.
    std::shared_ptr<string> severity_ = nullptr;
    // Specifies whether to query the activities that correspond to alerts. Valid values:
    // 
    // *   `false` (default value): The activities are not queried.
    // *   `true`: The activities in the last three days are queried.
    std::shared_ptr<bool> showActivities_ = nullptr;
    // Specifies whether to query the events that correspond to alerts. Valid values:
    // 
    // *   `false` (default value): The events are not queried.
    // *   `true`: The events are queried.
    std::shared_ptr<bool> showEvents_ = nullptr;
    // The number of alerts to return on each page.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> size_ = nullptr;
    // The start time of the alert sending history that you want to query. Specify the time in the `YYYY-MM-DD HH:mm:ss` format.
    std::shared_ptr<string> startTime_ = nullptr;
    // The status of the alert. Valid values:
    // 
    // *   0: The alert is pending.
    // *   1: The alert is being handled.
    // *   2: The alert is handled.
    std::shared_ptr<int64_t> state_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
