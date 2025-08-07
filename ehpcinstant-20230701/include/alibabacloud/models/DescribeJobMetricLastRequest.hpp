// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICLASTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBMETRICLASTREQUEST_HPP_
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
  class DescribeJobMetricLastRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobMetricLastRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobMetricLastRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArrayIndex, arrayIndex_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    DescribeJobMetricLastRequest() = default ;
    DescribeJobMetricLastRequest(const DescribeJobMetricLastRequest &) = default ;
    DescribeJobMetricLastRequest(DescribeJobMetricLastRequest &&) = default ;
    DescribeJobMetricLastRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobMetricLastRequest() = default ;
    DescribeJobMetricLastRequest& operator=(const DescribeJobMetricLastRequest &) = default ;
    DescribeJobMetricLastRequest& operator=(DescribeJobMetricLastRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->arrayIndex_ != nullptr
        && this->jobId_ != nullptr && this->taskName_ != nullptr; };
    // arrayIndex Field Functions 
    bool hasArrayIndex() const { return this->arrayIndex_ != nullptr;};
    void deleteArrayIndex() { this->arrayIndex_ = nullptr;};
    inline const vector<int32_t> & arrayIndex() const { DARABONBA_PTR_GET_CONST(arrayIndex_, vector<int32_t>) };
    inline vector<int32_t> arrayIndex() { DARABONBA_PTR_GET(arrayIndex_, vector<int32_t>) };
    inline DescribeJobMetricLastRequest& setArrayIndex(const vector<int32_t> & arrayIndex) { DARABONBA_PTR_SET_VALUE(arrayIndex_, arrayIndex) };
    inline DescribeJobMetricLastRequest& setArrayIndex(vector<int32_t> && arrayIndex) { DARABONBA_PTR_SET_RVALUE(arrayIndex_, arrayIndex) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeJobMetricLastRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline DescribeJobMetricLastRequest& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<vector<int32_t>> arrayIndex_ = nullptr;
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
