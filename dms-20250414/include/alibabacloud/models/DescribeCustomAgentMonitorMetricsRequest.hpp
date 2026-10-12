// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTMONITORMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMAGENTMONITORMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class DescribeCustomAgentMonitorMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomAgentMonitorMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Granularity, granularity_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomAgentMonitorMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomAgentId, customAgentId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Granularity, granularity_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    DescribeCustomAgentMonitorMetricsRequest() = default ;
    DescribeCustomAgentMonitorMetricsRequest(const DescribeCustomAgentMonitorMetricsRequest &) = default ;
    DescribeCustomAgentMonitorMetricsRequest(DescribeCustomAgentMonitorMetricsRequest &&) = default ;
    DescribeCustomAgentMonitorMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomAgentMonitorMetricsRequest() = default ;
    DescribeCustomAgentMonitorMetricsRequest& operator=(const DescribeCustomAgentMonitorMetricsRequest &) = default ;
    DescribeCustomAgentMonitorMetricsRequest& operator=(DescribeCustomAgentMonitorMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customAgentId_ == nullptr
        && this->endTime_ == nullptr && this->granularity_ == nullptr && this->queryType_ == nullptr && this->startTime_ == nullptr && this->workspaceId_ == nullptr; };
    // customAgentId Field Functions 
    bool hasCustomAgentId() const { return this->customAgentId_ != nullptr;};
    void deleteCustomAgentId() { this->customAgentId_ = nullptr;};
    inline string getCustomAgentId() const { DARABONBA_PTR_GET_DEFAULT(customAgentId_, "") };
    inline DescribeCustomAgentMonitorMetricsRequest& setCustomAgentId(string customAgentId) { DARABONBA_PTR_SET_VALUE(customAgentId_, customAgentId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeCustomAgentMonitorMetricsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // granularity Field Functions 
    bool hasGranularity() const { return this->granularity_ != nullptr;};
    void deleteGranularity() { this->granularity_ = nullptr;};
    inline string getGranularity() const { DARABONBA_PTR_GET_DEFAULT(granularity_, "") };
    inline DescribeCustomAgentMonitorMetricsRequest& setGranularity(string granularity) { DARABONBA_PTR_SET_VALUE(granularity_, granularity) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string getQueryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeCustomAgentMonitorMetricsRequest& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeCustomAgentMonitorMetricsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline DescribeCustomAgentMonitorMetricsRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The custom agent ID.
    // - Required only when QueryType is set to CustomAgent.
    shared_ptr<string> customAgentId_ {};
    // The end time of the statistical period (epoch millis).
    // - Note: The maximum time range is 3 months.
    shared_ptr<int64_t> endTime_ {};
    // The aggregation granularity. Valid values:
    // - DAY: daily. The maximum supported time range is 3 months.
    // - HOUR: hourly. The maximum supported time range is 72 hours.
    shared_ptr<string> granularity_ {};
    // The statistical scope. Default value: All. Valid values:
    // - Default: default DataAgent sessions.
    // - CustomAgent: specified custom agent sessions.
    // - All: all sessions in the workspace.
    shared_ptr<string> queryType_ {};
    // The start time of the statistical period (epoch millis).
    // - Note: The maximum time range is 3 months.
    shared_ptr<int64_t> startTime_ {};
    // The workspace ID.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
