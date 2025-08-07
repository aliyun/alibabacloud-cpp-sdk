// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICLASTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICLASTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class DescribeJobMetricLastShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMetricLastShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndexShrink_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMetricLastShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndexShrink_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeJobMetricLastShrinkRequest() = default ;
    DescribeJobMetricLastShrinkRequest(const DescribeJobMetricLastShrinkRequest &) = default ;
    DescribeJobMetricLastShrinkRequest(DescribeJobMetricLastShrinkRequest &&) = default ;
    DescribeJobMetricLastShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMetricLastShrinkRequest() = default ;
    DescribeJobMetricLastShrinkRequest& operator=(const DescribeJobMetricLastShrinkRequest &) = default ;
    DescribeJobMetricLastShrinkRequest& operator=(DescribeJobMetricLastShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrayIndexShrink_ != nullptr
        && this->jobId_ != nullptr && this->taskName_ != nullptr; };
    // arrayIndexShrink Field Functions 
    bool hasArrayIndexShrink() const { return this->arrayIndexShrink_ != nullptr;};
    void deleteArrayIndexShrink() { this->arrayIndexShrink_ = nullptr;};
    inline string arrayIndexShrink() const { DARABONBA_PTR_GET_DEFAULT(arrayIndexShrink_, "") };
    inline DescribeJobMetricLastShrinkRequest& setArrayIndexShrink(string arrayIndexShrink) { DARABONBA_PTR_SET_VALUE(arrayIndexShrink_, arrayIndexShrink) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobMetricLastShrinkRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeJobMetricLastShrinkRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<string> arrayIndexShrink_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
