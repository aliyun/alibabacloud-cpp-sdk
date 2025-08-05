// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTJOBMETRICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTJOBMETRICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListJobMetricRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListJobMetricRequest& obj) { 
      DARABONBA_PTR_TO_JSON(group, group_);
      DARABONBA_PTR_TO_JSON(metric, metric_);
      DARABONBA_PTR_TO_JSON(period, period_);
      DARABONBA_PTR_TO_JSON(project, project_);
      DARABONBA_PTR_TO_JSON(quota, quota_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListJobMetricRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(group, group_);
      DARABONBA_PTR_FROM_JSON(metric, metric_);
      DARABONBA_PTR_FROM_JSON(period, period_);
      DARABONBA_PTR_FROM_JSON(project, project_);
      DARABONBA_PTR_FROM_JSON(quota, quota_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    ListJobMetricRequest() = default ;
    ListJobMetricRequest(const ListJobMetricRequest &) = default ;
    ListJobMetricRequest(ListJobMetricRequest &&) = default ;
    ListJobMetricRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListJobMetricRequest() = default ;
    ListJobMetricRequest& operator=(const ListJobMetricRequest &) = default ;
    ListJobMetricRequest& operator=(ListJobMetricRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->group_ != nullptr
        && this->metric_ != nullptr && this->period_ != nullptr && this->project_ != nullptr && this->quota_ != nullptr && this->type_ != nullptr
        && this->endTime_ != nullptr && this->startTime_ != nullptr; };
    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListJobMetricRequest& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // metric Field Functions 
    bool hasMetric() const { return this->metric_ != nullptr;};
    void deleteMetric() { this->metric_ = nullptr;};
    inline string metric() const { DARABONBA_PTR_GET_DEFAULT(metric_, "") };
    inline ListJobMetricRequest& setMetric(string metric) { DARABONBA_PTR_SET_VALUE(metric_, metric) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline ListJobMetricRequest& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline const vector<string> & project() const { DARABONBA_PTR_GET_CONST(project_, vector<string>) };
    inline vector<string> project() { DARABONBA_PTR_GET(project_, vector<string>) };
    inline ListJobMetricRequest& setProject(const vector<string> & project) { DARABONBA_PTR_SET_VALUE(project_, project) };
    inline ListJobMetricRequest& setProject(vector<string> && project) { DARABONBA_PTR_SET_RVALUE(project_, project) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline const vector<string> & quota() const { DARABONBA_PTR_GET_CONST(quota_, vector<string>) };
    inline vector<string> quota() { DARABONBA_PTR_GET(quota_, vector<string>) };
    inline ListJobMetricRequest& setQuota(const vector<string> & quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };
    inline ListJobMetricRequest& setQuota(vector<string> && quota) { DARABONBA_PTR_SET_RVALUE(quota_, quota) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListJobMetricRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListJobMetricRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListJobMetricRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Grouping basis.
    // 
    // > Available values: project, quota, type, status. Meanings:
    // >- project: Group and aggregate by project;
    // >- quota: Group and aggregate by quota;
    // >- type: Group and aggregate by job type;
    // >- status: Group and aggregate by job status.
    std::shared_ptr<string> group_ = nullptr;
    // The name of observation metric.
    std::shared_ptr<string> metric_ = nullptr;
    // The monitoring statistical period.Unit:Second(s).
    std::shared_ptr<int64_t> period_ = nullptr;
    // The name of MaxCompute projects (for filtering).
    std::shared_ptr<vector<string>> project_ = nullptr;
    // The nickname of computing Quota nickname used by the job (for filtering).
    std::shared_ptr<vector<string>> quota_ = nullptr;
    // The type of observation metric.
    std::shared_ptr<string> type_ = nullptr;
    // The end time for the observation interval.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The start time for the observation interval.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
