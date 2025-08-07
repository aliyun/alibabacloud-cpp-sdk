// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKS_HPP_
#define ALIBABACLOUD_MODELS_GETJOBRESPONSEBODYJOBINFOTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksExecutorPolicy.hpp>
#include <vector>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksExecutorStatus.hpp>
#include <alibabacloud/models/GetJobResponseBodyJobInfoTasksTaskSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class GetJobResponseBodyJobInfoTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetJobResponseBodyJobInfoTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorPolicy, executorPolicy_);
      DARABONBA_PTR_TO_JSON(ExecutorStatus, executorStatus_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskSpec, taskSpec_);
      DARABONBA_PTR_TO_JSON(TaskSustainable, taskSustainable_);
    };
    friend void from_json(const Darabonba::Json& j, GetJobResponseBodyJobInfoTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorPolicy, executorPolicy_);
      DARABONBA_PTR_FROM_JSON(ExecutorStatus, executorStatus_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskSpec, taskSpec_);
      DARABONBA_PTR_FROM_JSON(TaskSustainable, taskSustainable_);
    };
    GetJobResponseBodyJobInfoTasks() = default ;
    GetJobResponseBodyJobInfoTasks(const GetJobResponseBodyJobInfoTasks &) = default ;
    GetJobResponseBodyJobInfoTasks(GetJobResponseBodyJobInfoTasks &&) = default ;
    GetJobResponseBodyJobInfoTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetJobResponseBodyJobInfoTasks() = default ;
    GetJobResponseBodyJobInfoTasks& operator=(const GetJobResponseBodyJobInfoTasks &) = default ;
    GetJobResponseBodyJobInfoTasks& operator=(GetJobResponseBodyJobInfoTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executorPolicy_ != nullptr
        && this->executorStatus_ != nullptr && this->taskName_ != nullptr && this->taskSpec_ != nullptr && this->taskSustainable_ != nullptr; };
    // executorPolicy Field Functions 
    bool hasExecutorPolicy() const { return this->executorPolicy_ != nullptr;};
    void deleteExecutorPolicy() { this->executorPolicy_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoTasksExecutorPolicy & executorPolicy() const { DARABONBA_PTR_GET_CONST(executorPolicy_, Models::GetJobResponseBodyJobInfoTasksExecutorPolicy) };
    inline Models::GetJobResponseBodyJobInfoTasksExecutorPolicy executorPolicy() { DARABONBA_PTR_GET(executorPolicy_, Models::GetJobResponseBodyJobInfoTasksExecutorPolicy) };
    inline GetJobResponseBodyJobInfoTasks& setExecutorPolicy(const Models::GetJobResponseBodyJobInfoTasksExecutorPolicy & executorPolicy) { DARABONBA_PTR_SET_VALUE(executorPolicy_, executorPolicy) };
    inline GetJobResponseBodyJobInfoTasks& setExecutorPolicy(Models::GetJobResponseBodyJobInfoTasksExecutorPolicy && executorPolicy) { DARABONBA_PTR_SET_RVALUE(executorPolicy_, executorPolicy) };


    // executorStatus Field Functions 
    bool hasExecutorStatus() const { return this->executorStatus_ != nullptr;};
    void deleteExecutorStatus() { this->executorStatus_ = nullptr;};
    inline const vector<Models::GetJobResponseBodyJobInfoTasksExecutorStatus> & executorStatus() const { DARABONBA_PTR_GET_CONST(executorStatus_, vector<Models::GetJobResponseBodyJobInfoTasksExecutorStatus>) };
    inline vector<Models::GetJobResponseBodyJobInfoTasksExecutorStatus> executorStatus() { DARABONBA_PTR_GET(executorStatus_, vector<Models::GetJobResponseBodyJobInfoTasksExecutorStatus>) };
    inline GetJobResponseBodyJobInfoTasks& setExecutorStatus(const vector<Models::GetJobResponseBodyJobInfoTasksExecutorStatus> & executorStatus) { DARABONBA_PTR_SET_VALUE(executorStatus_, executorStatus) };
    inline GetJobResponseBodyJobInfoTasks& setExecutorStatus(vector<Models::GetJobResponseBodyJobInfoTasksExecutorStatus> && executorStatus) { DARABONBA_PTR_SET_RVALUE(executorStatus_, executorStatus) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline GetJobResponseBodyJobInfoTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskSpec Field Functions 
    bool hasTaskSpec() const { return this->taskSpec_ != nullptr;};
    void deleteTaskSpec() { this->taskSpec_ = nullptr;};
    inline const Models::GetJobResponseBodyJobInfoTasksTaskSpec & taskSpec() const { DARABONBA_PTR_GET_CONST(taskSpec_, Models::GetJobResponseBodyJobInfoTasksTaskSpec) };
    inline Models::GetJobResponseBodyJobInfoTasksTaskSpec taskSpec() { DARABONBA_PTR_GET(taskSpec_, Models::GetJobResponseBodyJobInfoTasksTaskSpec) };
    inline GetJobResponseBodyJobInfoTasks& setTaskSpec(const Models::GetJobResponseBodyJobInfoTasksTaskSpec & taskSpec) { DARABONBA_PTR_SET_VALUE(taskSpec_, taskSpec) };
    inline GetJobResponseBodyJobInfoTasks& setTaskSpec(Models::GetJobResponseBodyJobInfoTasksTaskSpec && taskSpec) { DARABONBA_PTR_SET_RVALUE(taskSpec_, taskSpec) };


    // taskSustainable Field Functions 
    bool hasTaskSustainable() const { return this->taskSustainable_ != nullptr;};
    void deleteTaskSustainable() { this->taskSustainable_ = nullptr;};
    inline bool taskSustainable() const { DARABONBA_PTR_GET_DEFAULT(taskSustainable_, false) };
    inline GetJobResponseBodyJobInfoTasks& setTaskSustainable(bool taskSustainable) { DARABONBA_PTR_SET_VALUE(taskSustainable_, taskSustainable) };


  protected:
    std::shared_ptr<Models::GetJobResponseBodyJobInfoTasksExecutorPolicy> executorPolicy_ = nullptr;
    std::shared_ptr<vector<Models::GetJobResponseBodyJobInfoTasksExecutorStatus>> executorStatus_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<Models::GetJobResponseBodyJobInfoTasksTaskSpec> taskSpec_ = nullptr;
    std::shared_ptr<bool> taskSustainable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
