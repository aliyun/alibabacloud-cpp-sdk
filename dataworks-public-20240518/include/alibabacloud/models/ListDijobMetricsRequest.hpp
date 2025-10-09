// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDIJOBMETRICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDIJOBMETRICSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDIJobMetricsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDIJobMetricsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListDIJobMetricsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DIJobId, DIJobId_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    ListDIJobMetricsRequest() = default ;
    ListDIJobMetricsRequest(const ListDIJobMetricsRequest &) = default ;
    ListDIJobMetricsRequest(ListDIJobMetricsRequest &&) = default ;
    ListDIJobMetricsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDIJobMetricsRequest() = default ;
    ListDIJobMetricsRequest& operator=(const ListDIJobMetricsRequest &) = default ;
    ListDIJobMetricsRequest& operator=(ListDIJobMetricsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DIJobId_ != nullptr
        && this->endTime_ != nullptr && this->metricName_ != nullptr && this->startTime_ != nullptr; };
    // DIJobId Field Functions 
    bool hasDIJobId() const { return this->DIJobId_ != nullptr;};
    void deleteDIJobId() { this->DIJobId_ = nullptr;};
    inline int64_t DIJobId() const { DARABONBA_PTR_GET_DEFAULT(DIJobId_, 0L) };
    inline ListDIJobMetricsRequest& setDIJobId(int64_t DIJobId) { DARABONBA_PTR_SET_VALUE(DIJobId_, DIJobId) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListDIJobMetricsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline const vector<string> & metricName() const { DARABONBA_PTR_GET_CONST(metricName_, vector<string>) };
    inline vector<string> metricName() { DARABONBA_PTR_GET(metricName_, vector<string>) };
    inline ListDIJobMetricsRequest& setMetricName(const vector<string> & metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };
    inline ListDIJobMetricsRequest& setMetricName(vector<string> && metricName) { DARABONBA_PTR_SET_RVALUE(metricName_, metricName) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListDIJobMetricsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> DIJobId_ = nullptr;
    // The end of the time range to query.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The metrics that you want to query.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> metricName_ = nullptr;
    // The beginning of the time range to query.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
