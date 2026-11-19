// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETRICDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETMETRICDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class GetMetricDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(groupBy, groupByShrink_);
      DARABONBA_PTR_TO_JSON(metricNames, metricNamesShrink_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_TO_JSON(sandboxPlan, sandboxPlan_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(time, time_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupByShrink_);
      DARABONBA_PTR_FROM_JSON(metricNames, metricNamesShrink_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(sandboxID, sandboxID_);
      DARABONBA_PTR_FROM_JSON(sandboxPlan, sandboxPlan_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(time, time_);
    };
    GetMetricDataShrinkRequest() = default ;
    GetMetricDataShrinkRequest(const GetMetricDataShrinkRequest &) = default ;
    GetMetricDataShrinkRequest(GetMetricDataShrinkRequest &&) = default ;
    GetMetricDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetricDataShrinkRequest() = default ;
    GetMetricDataShrinkRequest& operator=(const GetMetricDataShrinkRequest &) = default ;
    GetMetricDataShrinkRequest& operator=(GetMetricDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->groupByShrink_ == nullptr && this->metricNamesShrink_ == nullptr && this->period_ == nullptr && this->sandboxID_ == nullptr && this->sandboxPlan_ == nullptr
        && this->startTime_ == nullptr && this->teamID_ == nullptr && this->templateID_ == nullptr && this->time_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetMetricDataShrinkRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // groupByShrink Field Functions 
    bool hasGroupByShrink() const { return this->groupByShrink_ != nullptr;};
    void deleteGroupByShrink() { this->groupByShrink_ = nullptr;};
    inline string getGroupByShrink() const { DARABONBA_PTR_GET_DEFAULT(groupByShrink_, "") };
    inline GetMetricDataShrinkRequest& setGroupByShrink(string groupByShrink) { DARABONBA_PTR_SET_VALUE(groupByShrink_, groupByShrink) };


    // metricNamesShrink Field Functions 
    bool hasMetricNamesShrink() const { return this->metricNamesShrink_ != nullptr;};
    void deleteMetricNamesShrink() { this->metricNamesShrink_ = nullptr;};
    inline string getMetricNamesShrink() const { DARABONBA_PTR_GET_DEFAULT(metricNamesShrink_, "") };
    inline GetMetricDataShrinkRequest& setMetricNamesShrink(string metricNamesShrink) { DARABONBA_PTR_SET_VALUE(metricNamesShrink_, metricNamesShrink) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int32_t getPeriod() const { DARABONBA_PTR_GET_DEFAULT(period_, 0) };
    inline GetMetricDataShrinkRequest& setPeriod(int32_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // sandboxID Field Functions 
    bool hasSandboxID() const { return this->sandboxID_ != nullptr;};
    void deleteSandboxID() { this->sandboxID_ = nullptr;};
    inline string getSandboxID() const { DARABONBA_PTR_GET_DEFAULT(sandboxID_, "") };
    inline GetMetricDataShrinkRequest& setSandboxID(string sandboxID) { DARABONBA_PTR_SET_VALUE(sandboxID_, sandboxID) };


    // sandboxPlan Field Functions 
    bool hasSandboxPlan() const { return this->sandboxPlan_ != nullptr;};
    void deleteSandboxPlan() { this->sandboxPlan_ = nullptr;};
    inline string getSandboxPlan() const { DARABONBA_PTR_GET_DEFAULT(sandboxPlan_, "") };
    inline GetMetricDataShrinkRequest& setSandboxPlan(string sandboxPlan) { DARABONBA_PTR_SET_VALUE(sandboxPlan_, sandboxPlan) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMetricDataShrinkRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline GetMetricDataShrinkRequest& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline GetMetricDataShrinkRequest& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline GetMetricDataShrinkRequest& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The end time of the time series query. This time is exclusive. Specify a UTC time accurate to seconds. The end time must be later than the start time. You can query metrics for a maximum of 7 days at a time. The time range must include at least one time point aligned with the period, and these time points cannot be later than the current time.
    shared_ptr<string> endTime_ {};
    // Groups metrics by a specific key. For example, you can group metrics by teamID to view the metrics of each team separately. You can combine up to four different grouping keys. The available keys vary by metric. If you do not specify this parameter, the overall results within the query scope are returned.
    shared_ptr<string> groupByShrink_ {};
    // The names of the metrics to query. You can query 1 to 16 different metrics at a time. For available metrics and query scopes, refer to the metric catalog.
    // 
    // This parameter is required.
    shared_ptr<string> metricNamesShrink_ {};
    // The time interval for time series queries, in seconds. Valid values: 60, 300, 900, 1800, 3600, and 86400. A value of 60 corresponds to exact minutes, and 86400 corresponds to 00:00:00 UTC every day. The calculation duration of some statistical metrics varies with the interval.
    // 
    // This parameter is required.
    shared_ptr<int32_t> period_ {};
    // The ID of the sandbox to query. You must also specify the teamID and templateID to which the sandbox belongs, and select a metric that supports sandbox-level queries.
    shared_ptr<string> sandboxID_ {};
    // Queries the number of sandboxes by sandbox plan. This parameter applies only to the sandboxCount metric. Valid values: eco, std, pro, and ent.
    shared_ptr<string> sandboxPlan_ {};
    // The start time of the time series query. This time is inclusive. Specify a UTC time accurate to seconds, and also specify the endTime parameter.
    shared_ptr<string> startTime_ {};
    // The ID of the team to query. If you leave this parameter empty, the metrics of the current account are queried.
    shared_ptr<string> teamID_ {};
    // The ID of the template to query. You must also specify the teamID to which the template belongs.
    shared_ptr<string> templateID_ {};
    // The specific point in time to query. If you query metrics at a specific point in time, specify only this parameter. Specify a current or past UTC time accurate to seconds. If you omit all time parameters, the metrics at the current time are queried.
    shared_ptr<string> time_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
