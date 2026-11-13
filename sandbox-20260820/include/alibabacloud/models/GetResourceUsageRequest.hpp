// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCEUSAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCEUSAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sandbox20260820
{
namespace Models
{
  class GetResourceUsageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceUsageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(granularity, granularity_);
      DARABONBA_PTR_TO_JSON(groupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(sandboxPlan, sandboxPlan_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(teamID, teamID_);
      DARABONBA_PTR_TO_JSON(templateID, templateID_);
      DARABONBA_PTR_TO_JSON(usageNames, usageNames_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceUsageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(groupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(sandboxPlan, sandboxPlan_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(teamID, teamID_);
      DARABONBA_PTR_FROM_JSON(templateID, templateID_);
      DARABONBA_PTR_FROM_JSON(usageNames, usageNames_);
    };
    GetResourceUsageRequest() = default ;
    GetResourceUsageRequest(const GetResourceUsageRequest &) = default ;
    GetResourceUsageRequest(GetResourceUsageRequest &&) = default ;
    GetResourceUsageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceUsageRequest() = default ;
    GetResourceUsageRequest& operator=(const GetResourceUsageRequest &) = default ;
    GetResourceUsageRequest& operator=(GetResourceUsageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->granularity_ == nullptr && this->groupBy_ == nullptr && this->sandboxPlan_ == nullptr && this->startTime_ == nullptr && this->teamID_ == nullptr
        && this->templateID_ == nullptr && this->usageNames_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetResourceUsageRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline GetResourceUsageRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline const vector<string> & getGroupBy() const { DARABONBA_PTR_GET_CONST(groupBy_, vector<string>) };
    inline vector<string> getGroupBy() { DARABONBA_PTR_GET(groupBy_, vector<string>) };
    inline GetResourceUsageRequest& setGroupBy(const vector<string> & groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };
    inline GetResourceUsageRequest& setGroupBy(vector<string> && groupBy) { DARABONBA_PTR_SET_RVALUE(groupBy_, groupBy) };


    // sandboxPlan Field Functions 
    bool hasSandboxPlan() const { return this->sandboxPlan_ != nullptr;};
    void deleteSandboxPlan() { this->sandboxPlan_ = nullptr;};
    inline string getSandboxPlan() const { DARABONBA_PTR_GET_DEFAULT(sandboxPlan_, "") };
    inline GetResourceUsageRequest& setSandboxPlan(string sandboxPlan) { DARABONBA_PTR_SET_VALUE(sandboxPlan_, sandboxPlan) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetResourceUsageRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // teamID Field Functions 
    bool hasTeamID() const { return this->teamID_ != nullptr;};
    void deleteTeamID() { this->teamID_ = nullptr;};
    inline string getTeamID() const { DARABONBA_PTR_GET_DEFAULT(teamID_, "") };
    inline GetResourceUsageRequest& setTeamID(string teamID) { DARABONBA_PTR_SET_VALUE(teamID_, teamID) };


    // templateID Field Functions 
    bool hasTemplateID() const { return this->templateID_ != nullptr;};
    void deleteTemplateID() { this->templateID_ = nullptr;};
    inline string getTemplateID() const { DARABONBA_PTR_GET_DEFAULT(templateID_, "") };
    inline GetResourceUsageRequest& setTemplateID(string templateID) { DARABONBA_PTR_SET_VALUE(templateID_, templateID) };


    // usageNames Field Functions 
    bool hasUsageNames() const { return this->usageNames_ != nullptr;};
    void deleteUsageNames() { this->usageNames_ = nullptr;};
    inline const vector<string> & getUsageNames() const { DARABONBA_PTR_GET_CONST(usageNames_, vector<string>) };
    inline vector<string> getUsageNames() { DARABONBA_PTR_GET(usageNames_, vector<string>) };
    inline GetResourceUsageRequest& setUsageNames(const vector<string> & usageNames) { DARABONBA_PTR_SET_VALUE(usageNames_, usageNames) };
    inline GetResourceUsageRequest& setUsageNames(vector<string> && usageNames) { DARABONBA_PTR_SET_RVALUE(usageNames_, usageNames) };


  protected:
    // The end time of the query. This time is exclusive. Specify the time on the hour in UTC. The latest allowed end time is the start of the current hour. You can query data for a maximum of 7 days at a time. The end time must be later than the start time.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The granularity at which usage data is aggregated. Set this parameter to All to view the cumulative usage over the entire query interval, to Hour to view the hourly usage, or to Day to aggregate the usage every 24 hours from the start time. The last interval can be less than 24 hours.
    // 
    // This parameter is required.
    shared_ptr<string> granularity_ {};
    // The grouping keys. You can group the results by any combination of teamID, templateID, and sandboxPlan. Each key can be specified only once. If you do not specify this parameter, the results are aggregated over the entire query scope.
    shared_ptr<vector<string>> groupBy_ {};
    // The sandbox edition to query. Valid values: eco, std, pro, and ent.
    shared_ptr<string> sandboxPlan_ {};
    // The start time of the query. This time is inclusive. Specify the time on the hour in UTC, such as 00:00 UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The ID of the team to query. If you do not specify this parameter, the usage of the current account is queried.
    shared_ptr<string> teamID_ {};
    // The ID of the template to query. You must also specify the teamID to which the template belongs.
    shared_ptr<string> templateID_ {};
    // The usage items to query. You can query 1 to 6 different usage items at a time. CPU usage items include cpuActive and cpuIdle. Memory usage items include memoryActive and memoryIdle. Disk usage items include disk and diskDeepSleep. The disk item includes the usage of disks in deep sleep mode.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> usageNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sandbox20260820
#endif
