// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICDATASHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICDATASHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DescribeJobMetricDataShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndexShrink_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(MetricName, metricName_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMetricDataShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndexShrink_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(MetricName, metricName_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeJobMetricDataShrinkRequest() = default ;
    DescribeJobMetricDataShrinkRequest(const DescribeJobMetricDataShrinkRequest &) = default ;
    DescribeJobMetricDataShrinkRequest(DescribeJobMetricDataShrinkRequest &&) = default ;
    DescribeJobMetricDataShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMetricDataShrinkRequest() = default ;
    DescribeJobMetricDataShrinkRequest& operator=(const DescribeJobMetricDataShrinkRequest &) = default ;
    DescribeJobMetricDataShrinkRequest& operator=(DescribeJobMetricDataShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arrayIndexShrink_ == nullptr
        && this->jobId_ == nullptr && this->metricName_ == nullptr && this->taskName_ == nullptr; };
    // arrayIndexShrink Field Functions 
    bool hasArrayIndexShrink() const { return this->arrayIndexShrink_ != nullptr;};
    void deleteArrayIndexShrink() { this->arrayIndexShrink_ = nullptr;};
    inline string getArrayIndexShrink() const { DARABONBA_PTR_GET_DEFAULT(arrayIndexShrink_, "") };
    inline DescribeJobMetricDataShrinkRequest& setArrayIndexShrink(string arrayIndexShrink) { DARABONBA_PTR_SET_VALUE(arrayIndexShrink_, arrayIndexShrink) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobMetricDataShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // metricName Field Functions 
    bool hasMetricName() const { return this->metricName_ != nullptr;};
    void deleteMetricName() { this->metricName_ = nullptr;};
    inline string getMetricName() const { DARABONBA_PTR_GET_DEFAULT(metricName_, "") };
    inline DescribeJobMetricDataShrinkRequest& setMetricName(string metricName) { DARABONBA_PTR_SET_VALUE(metricName_, metricName) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string getTaskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeJobMetricDataShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    // The list of array job indexes.
    shared_ptr<string> arrayIndexShrink_ {};
    // The job ID.
    shared_ptr<string> jobId_ {};
    // The metrics of the job.
    shared_ptr<string> metricName_ {};
    // The name of the task.
    shared_ptr<string> taskName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
