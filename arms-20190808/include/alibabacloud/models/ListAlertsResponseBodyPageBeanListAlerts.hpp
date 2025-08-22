// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYPAGEBEANLISTALERTS_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTSRESPONSEBODYPAGEBEANLISTALERTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAlertsResponseBodyPageBeanListAlertsActivities.hpp>
#include <alibabacloud/models/ListAlertsResponseBodyPageBeanListAlertsAlertEvents.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListAlertsResponseBodyPageBeanListAlerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertsResponseBodyPageBeanListAlerts& obj) { 
      DARABONBA_PTR_TO_JSON(AcknowledgeTime, acknowledgeTime_);
      DARABONBA_PTR_TO_JSON(Activities, activities_);
      DARABONBA_PTR_TO_JSON(AlertEvents, alertEvents_);
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(AlertName, alertName_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Describe, describe_);
      DARABONBA_PTR_TO_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_TO_JSON(DispatchRuleName, dispatchRuleName_);
      DARABONBA_PTR_TO_JSON(Handler, handler_);
      DARABONBA_PTR_TO_JSON(NotifyRobots, notifyRobots_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(RecoverTime, recoverTime_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(Solution, solution_);
      DARABONBA_PTR_TO_JSON(State, state_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertsResponseBodyPageBeanListAlerts& obj) { 
      DARABONBA_PTR_FROM_JSON(AcknowledgeTime, acknowledgeTime_);
      DARABONBA_PTR_FROM_JSON(Activities, activities_);
      DARABONBA_PTR_FROM_JSON(AlertEvents, alertEvents_);
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(AlertName, alertName_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Describe, describe_);
      DARABONBA_PTR_FROM_JSON(DispatchRuleId, dispatchRuleId_);
      DARABONBA_PTR_FROM_JSON(DispatchRuleName, dispatchRuleName_);
      DARABONBA_PTR_FROM_JSON(Handler, handler_);
      DARABONBA_PTR_FROM_JSON(NotifyRobots, notifyRobots_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(RecoverTime, recoverTime_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(Solution, solution_);
      DARABONBA_PTR_FROM_JSON(State, state_);
    };
    ListAlertsResponseBodyPageBeanListAlerts() = default ;
    ListAlertsResponseBodyPageBeanListAlerts(const ListAlertsResponseBodyPageBeanListAlerts &) = default ;
    ListAlertsResponseBodyPageBeanListAlerts(ListAlertsResponseBodyPageBeanListAlerts &&) = default ;
    ListAlertsResponseBodyPageBeanListAlerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertsResponseBodyPageBeanListAlerts() = default ;
    ListAlertsResponseBodyPageBeanListAlerts& operator=(const ListAlertsResponseBodyPageBeanListAlerts &) = default ;
    ListAlertsResponseBodyPageBeanListAlerts& operator=(ListAlertsResponseBodyPageBeanListAlerts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acknowledgeTime_ != nullptr
        && this->activities_ != nullptr && this->alertEvents_ != nullptr && this->alertId_ != nullptr && this->alertName_ != nullptr && this->createTime_ != nullptr
        && this->describe_ != nullptr && this->dispatchRuleId_ != nullptr && this->dispatchRuleName_ != nullptr && this->handler_ != nullptr && this->notifyRobots_ != nullptr
        && this->owner_ != nullptr && this->recoverTime_ != nullptr && this->severity_ != nullptr && this->solution_ != nullptr && this->state_ != nullptr; };
    // acknowledgeTime Field Functions 
    bool hasAcknowledgeTime() const { return this->acknowledgeTime_ != nullptr;};
    void deleteAcknowledgeTime() { this->acknowledgeTime_ = nullptr;};
    inline int64_t acknowledgeTime() const { DARABONBA_PTR_GET_DEFAULT(acknowledgeTime_, 0L) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setAcknowledgeTime(int64_t acknowledgeTime) { DARABONBA_PTR_SET_VALUE(acknowledgeTime_, acknowledgeTime) };


    // activities Field Functions 
    bool hasActivities() const { return this->activities_ != nullptr;};
    void deleteActivities() { this->activities_ = nullptr;};
    inline const vector<Models::ListAlertsResponseBodyPageBeanListAlertsActivities> & activities() const { DARABONBA_PTR_GET_CONST(activities_, vector<Models::ListAlertsResponseBodyPageBeanListAlertsActivities>) };
    inline vector<Models::ListAlertsResponseBodyPageBeanListAlertsActivities> activities() { DARABONBA_PTR_GET(activities_, vector<Models::ListAlertsResponseBodyPageBeanListAlertsActivities>) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setActivities(const vector<Models::ListAlertsResponseBodyPageBeanListAlertsActivities> & activities) { DARABONBA_PTR_SET_VALUE(activities_, activities) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setActivities(vector<Models::ListAlertsResponseBodyPageBeanListAlertsActivities> && activities) { DARABONBA_PTR_SET_RVALUE(activities_, activities) };


    // alertEvents Field Functions 
    bool hasAlertEvents() const { return this->alertEvents_ != nullptr;};
    void deleteAlertEvents() { this->alertEvents_ = nullptr;};
    inline const vector<Models::ListAlertsResponseBodyPageBeanListAlertsAlertEvents> & alertEvents() const { DARABONBA_PTR_GET_CONST(alertEvents_, vector<Models::ListAlertsResponseBodyPageBeanListAlertsAlertEvents>) };
    inline vector<Models::ListAlertsResponseBodyPageBeanListAlertsAlertEvents> alertEvents() { DARABONBA_PTR_GET(alertEvents_, vector<Models::ListAlertsResponseBodyPageBeanListAlertsAlertEvents>) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setAlertEvents(const vector<Models::ListAlertsResponseBodyPageBeanListAlertsAlertEvents> & alertEvents) { DARABONBA_PTR_SET_VALUE(alertEvents_, alertEvents) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setAlertEvents(vector<Models::ListAlertsResponseBodyPageBeanListAlertsAlertEvents> && alertEvents) { DARABONBA_PTR_SET_RVALUE(alertEvents_, alertEvents) };


    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // alertName Field Functions 
    bool hasAlertName() const { return this->alertName_ != nullptr;};
    void deleteAlertName() { this->alertName_ = nullptr;};
    inline string alertName() const { DARABONBA_PTR_GET_DEFAULT(alertName_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setAlertName(string alertName) { DARABONBA_PTR_SET_VALUE(alertName_, alertName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // describe Field Functions 
    bool hasDescribe() const { return this->describe_ != nullptr;};
    void deleteDescribe() { this->describe_ = nullptr;};
    inline string describe() const { DARABONBA_PTR_GET_DEFAULT(describe_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setDescribe(string describe) { DARABONBA_PTR_SET_VALUE(describe_, describe) };


    // dispatchRuleId Field Functions 
    bool hasDispatchRuleId() const { return this->dispatchRuleId_ != nullptr;};
    void deleteDispatchRuleId() { this->dispatchRuleId_ = nullptr;};
    inline float dispatchRuleId() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleId_, 0.0) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setDispatchRuleId(float dispatchRuleId) { DARABONBA_PTR_SET_VALUE(dispatchRuleId_, dispatchRuleId) };


    // dispatchRuleName Field Functions 
    bool hasDispatchRuleName() const { return this->dispatchRuleName_ != nullptr;};
    void deleteDispatchRuleName() { this->dispatchRuleName_ = nullptr;};
    inline string dispatchRuleName() const { DARABONBA_PTR_GET_DEFAULT(dispatchRuleName_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setDispatchRuleName(string dispatchRuleName) { DARABONBA_PTR_SET_VALUE(dispatchRuleName_, dispatchRuleName) };


    // handler Field Functions 
    bool hasHandler() const { return this->handler_ != nullptr;};
    void deleteHandler() { this->handler_ = nullptr;};
    inline string handler() const { DARABONBA_PTR_GET_DEFAULT(handler_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setHandler(string handler) { DARABONBA_PTR_SET_VALUE(handler_, handler) };


    // notifyRobots Field Functions 
    bool hasNotifyRobots() const { return this->notifyRobots_ != nullptr;};
    void deleteNotifyRobots() { this->notifyRobots_ = nullptr;};
    inline string notifyRobots() const { DARABONBA_PTR_GET_DEFAULT(notifyRobots_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setNotifyRobots(string notifyRobots) { DARABONBA_PTR_SET_VALUE(notifyRobots_, notifyRobots) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // recoverTime Field Functions 
    bool hasRecoverTime() const { return this->recoverTime_ != nullptr;};
    void deleteRecoverTime() { this->recoverTime_ = nullptr;};
    inline int64_t recoverTime() const { DARABONBA_PTR_GET_DEFAULT(recoverTime_, 0L) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setRecoverTime(int64_t recoverTime) { DARABONBA_PTR_SET_VALUE(recoverTime_, recoverTime) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // solution Field Functions 
    bool hasSolution() const { return this->solution_ != nullptr;};
    void deleteSolution() { this->solution_ = nullptr;};
    inline string solution() const { DARABONBA_PTR_GET_DEFAULT(solution_, "") };
    inline ListAlertsResponseBodyPageBeanListAlerts& setSolution(string solution) { DARABONBA_PTR_SET_VALUE(solution_, solution) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline int64_t state() const { DARABONBA_PTR_GET_DEFAULT(state_, 0L) };
    inline ListAlertsResponseBodyPageBeanListAlerts& setState(int64_t state) { DARABONBA_PTR_SET_VALUE(state_, state) };


  protected:
    // Time to claim the alarm.
    std::shared_ptr<int64_t> acknowledgeTime_ = nullptr;
    // The list of activities.
    std::shared_ptr<vector<Models::ListAlertsResponseBodyPageBeanListAlertsActivities>> activities_ = nullptr;
    // The list of events.
    std::shared_ptr<vector<Models::ListAlertsResponseBodyPageBeanListAlertsAlertEvents>> alertEvents_ = nullptr;
    // The alert ID.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The name of the alert rule.
    std::shared_ptr<string> alertName_ = nullptr;
    // The time when the alert was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of a event execution status.
    std::shared_ptr<string> describe_ = nullptr;
    // The ID of the notification policy.
    std::shared_ptr<float> dispatchRuleId_ = nullptr;
    // The name of the notification policy.
    std::shared_ptr<string> dispatchRuleName_ = nullptr;
    // Alarm handler.
    std::shared_ptr<string> handler_ = nullptr;
    // The contact card of an instant messaging app.
    std::shared_ptr<string> notifyRobots_ = nullptr;
    // The notification object configured in the notification policy, responsible for handling alerts.
    std::shared_ptr<string> owner_ = nullptr;
    // Alarm recovery time.
    std::shared_ptr<int64_t> recoverTime_ = nullptr;
    // The severity level of the alert. Valid values: P6, P5, P4, P3, P2, and P1. The preceding values are listed in ascending order of severity.
    std::shared_ptr<string> severity_ = nullptr;
    // The Alert solution.
    std::shared_ptr<string> solution_ = nullptr;
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
