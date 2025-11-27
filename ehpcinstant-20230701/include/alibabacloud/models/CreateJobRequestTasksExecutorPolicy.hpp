// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSEXECUTORPOLICY_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKSEXECUTORPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestTasksExecutorPolicyArraySpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasksExecutorPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasksExecutorPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ArraySpec, arraySpec_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasksExecutorPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ArraySpec, arraySpec_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
    };
    CreateJobRequestTasksExecutorPolicy() = default ;
    CreateJobRequestTasksExecutorPolicy(const CreateJobRequestTasksExecutorPolicy &) = default ;
    CreateJobRequestTasksExecutorPolicy(CreateJobRequestTasksExecutorPolicy &&) = default ;
    CreateJobRequestTasksExecutorPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasksExecutorPolicy() = default ;
    CreateJobRequestTasksExecutorPolicy& operator=(const CreateJobRequestTasksExecutorPolicy &) = default ;
    CreateJobRequestTasksExecutorPolicy& operator=(CreateJobRequestTasksExecutorPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arraySpec_ == nullptr
        && return this->maxCount_ == nullptr; };
    // arraySpec Field Functions 
    bool hasArraySpec() const { return this->arraySpec_ != nullptr;};
    void deleteArraySpec() { this->arraySpec_ = nullptr;};
    inline const Models::CreateJobRequestTasksExecutorPolicyArraySpec & arraySpec() const { DARABONBA_PTR_GET_CONST(arraySpec_, Models::CreateJobRequestTasksExecutorPolicyArraySpec) };
    inline Models::CreateJobRequestTasksExecutorPolicyArraySpec arraySpec() { DARABONBA_PTR_GET(arraySpec_, Models::CreateJobRequestTasksExecutorPolicyArraySpec) };
    inline CreateJobRequestTasksExecutorPolicy& setArraySpec(const Models::CreateJobRequestTasksExecutorPolicyArraySpec & arraySpec) { DARABONBA_PTR_SET_VALUE(arraySpec_, arraySpec) };
    inline CreateJobRequestTasksExecutorPolicy& setArraySpec(Models::CreateJobRequestTasksExecutorPolicyArraySpec && arraySpec) { DARABONBA_PTR_SET_RVALUE(arraySpec_, arraySpec) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline CreateJobRequestTasksExecutorPolicy& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


  protected:
    // The details of the array job. The index value of the sub-job is passed to the running environment through environment variables to support user business program reference. Environment variables include:
    // 
    // *   EHPC_JOB_NAME: the name of the job. This parameter corresponds to the JobName parameter.
    // *   EHPC_JOB_ID: The ID of the job.
    // *   EHPC_TASK_NAME: the name of the task. This parameter corresponds to the TaskName parameter.
    // *   EHPC_EXECUTOR_ID: The ID of the execution unit.
    // *   EHPC_ARRAY_TASK_ID: the sub-job index value.
    // *   EHPC_ARRAY_TASK_COUNT: the total number of sub-jobs.
    // *   EHPC_ARRAY_TASK_MAX: the maximum sub-job index, which corresponds to the IndexStart parameter.
    // *   EHPC_ARRAY_TASK_MIN: the minimum value of the sub-job index, which corresponds to the IndexEnd parameter.
    // *   EHPC_ARRAY_TASK_STEP: the index step size of the sub-job, which corresponds to the IndexStep parameter.
    std::shared_ptr<Models::CreateJobRequestTasksExecutorPolicyArraySpec> arraySpec_ = nullptr;
    // The maximum number of nodes to run the job.
    // 
    // > Follow the calculation formula: `MaxCount = (IndexEnd - IndexStart) / IndexStep +1`
    std::shared_ptr<int32_t> maxCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
