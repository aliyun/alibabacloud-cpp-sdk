// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DescribeJobMetricDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMetricDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMetricDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeJobMetricDataRequest() = default ;
    DescribeJobMetricDataRequest(const DescribeJobMetricDataRequest &) = default ;
    DescribeJobMetricDataRequest(DescribeJobMetricDataRequest &&) = default ;
    DescribeJobMetricDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMetricDataRequest() = default ;
    DescribeJobMetricDataRequest& operator=(const DescribeJobMetricDataRequest &) = default ;
    DescribeJobMetricDataRequest& operator=(DescribeJobMetricDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrayIndex_ != nullptr
        && this->jobId_ != nullptr && this->metricName_ != nullptr && this->taskName_ != nullptr; };
    // arrayIndex Field Functions 
    bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
    void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
    inline const vector<int32_t> & arrayIndex() const { DARABONBA_PTR_GET_CONST(arrayIndex_, vector<int32_t>) };
    inline vector<int32_t> arrayIndex() { DARABONBA_PTR_GET(arrayIndex_, vector<int32_t>) };
    inline DescribeJobMetricDataRequest& setArrayIndex(const vector<int32_t> & arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };
    inline DescribeJobMetricDataRequest& setArrayIndex(vector<int32_t> && arrayIndex) { DARABONBA_PTR_SET_RVALUE(arrayIndex_, arrayIndex) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobMetricDataRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string metricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeJobMetricDataRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeJobMetricDataRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<vector<int32_t>> arrayIndex_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> metricName_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
