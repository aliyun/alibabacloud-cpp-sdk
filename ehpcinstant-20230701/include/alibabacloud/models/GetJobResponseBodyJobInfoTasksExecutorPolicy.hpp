// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSEXECUTORPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKSEXECUTORPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasksExecutorPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasksExecutorPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ArraySpec, arraySpec_);
      DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasksExecutorPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ArraySpec, arraySpec_);
      DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
    };
    GetJobResponseBodyJobInfoTasksExecutorPolicy() = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicy(const GetJobResponseBodyJobInfoTasksExecutorPolicy &) = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicy(GetJobResponseBodyJobInfoTasksExecutorPolicy &&) = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasksExecutorPolicy() = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicy& operator=(const GetJobResponseBodyJobInfoTasksExecutorPolicy &) = default ;
    GetJobResponseBodyJobInfoTasksExecutorPolicy& operator=(GetJobResponseBodyJobInfoTasksExecutorPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arraySpec_ == nullptr
        && return this->maxCount_ == nullptr; };
    // arraySpec Field Functions 
    bool hasArraySpec() const { return this->arraySpec_ != nullptr;};
    void deleteArraySpec() { this->arraySpec_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec & arraySpec() const { DARABONBA_PTR_GET_CONST(arraySpec_, Models::GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec) };
    inline Models::GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec arraySpec() { DARABONBA_PTR_GET(arraySpec_, Models::GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec) };
    inline GetJobResponseBodyJobInfoTasksExecutorPolicy& setArraySpec(const Models::GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec & arraySpec) { DARABONBA_PTR_SET_VALUE(arraySpec_, arraySpec) };
    inline GetJobResponseBodyJobInfoTasksExecutorPolicy& setArraySpec(Models::GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec && arraySpec) { DARABONBA_PTR_SET_RVALUE(arraySpec_, arraySpec) };


    // maxCount Field Functions 
    bool hasMaxCount() const { return this->maxCount_ != nullptr;};
    void deleteMaxCount() { this->maxCount_ = nullptr;};
    inline int32_t maxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
    inline GetJobResponseBodyJobInfoTasksExecutorPolicy& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


  protected:
    // The details of the array job.
    std::shared_ptr<Models::GetJobResponseBodyJobInfoTasksExecutorPolicyArraySpec> arraySpec_ = nullptr;
    // The maximum number of nodes to run the job.
    std::shared_ptr<int32_t> maxCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
