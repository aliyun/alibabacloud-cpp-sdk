// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKS_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBREQUESTTASKS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateJobRequestTasksExecutorPolicy.hpp>
#include <alibabacloud/models/CreateJobRequestTasksTaskSpec.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class CreateJobRequestTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobRequestTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorPolicy, executorPolicy_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
      DARABONBA_PTR_TO_JSON(TaskSpec, taskSpec_);
      DARABONBA_PTR_TO_JSON(TaskSustainable, taskSustainable_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobRequestTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorPolicy, executorPolicy_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
      DARABONBA_PTR_FROM_JSON(TaskSpec, taskSpec_);
      DARABONBA_PTR_FROM_JSON(TaskSustainable, taskSustainable_);
    };
    CreateJobRequestTasks() = default ;
    CreateJobRequestTasks(const CreateJobRequestTasks &) = default ;
    CreateJobRequestTasks(CreateJobRequestTasks &&) = default ;
    CreateJobRequestTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobRequestTasks() = default ;
    CreateJobRequestTasks& operator=(const CreateJobRequestTasks &) = default ;
    CreateJobRequestTasks& operator=(CreateJobRequestTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executorPolicy_ != nullptr
        && this->taskName_ != nullptr && this->taskSpec_ != nullptr && this->taskSustainable_ != nullptr; };
    // executorPolicy Field Functions 
    bool hasExecutorPolicy() const { return this->executorPolicy_ != nullptr;};
    void deleteExecutorPolicy() { this->executorPolicy_ = nullptr;};
    inline const Models::CreateJobRequestTasksExecutorPolicy & executorPolicy() const { DARABONBA_PTR_GET_CONST(executorPolicy_, Models::CreateJobRequestTasksExecutorPolicy) };
    inline Models::CreateJobRequestTasksExecutorPolicy executorPolicy() { DARABONBA_PTR_GET(executorPolicy_, Models::CreateJobRequestTasksExecutorPolicy) };
    inline CreateJobRequestTasks& setExecutorPolicy(const Models::CreateJobRequestTasksExecutorPolicy & executorPolicy) { DARABONBA_PTR_SET_VALUE(executorPolicy_, executorPolicy) };
    inline CreateJobRequestTasks& setExecutorPolicy(Models::CreateJobRequestTasksExecutorPolicy && executorPolicy) { DARABONBA_PTR_SET_RVALUE(executorPolicy_, executorPolicy) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateJobRequestTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


    // taskSpec Field Functions 
    bool hasTaskSpec() const { return this->taskSpec_ != nullptr;};
    void deleteTaskSpec() { this->taskSpec_ = nullptr;};
    inline const Models::CreateJobRequestTasksTaskSpec & taskSpec() const { DARABONBA_PTR_GET_CONST(taskSpec_, Models::CreateJobRequestTasksTaskSpec) };
    inline Models::CreateJobRequestTasksTaskSpec taskSpec() { DARABONBA_PTR_GET(taskSpec_, Models::CreateJobRequestTasksTaskSpec) };
    inline CreateJobRequestTasks& setTaskSpec(const Models::CreateJobRequestTasksTaskSpec & taskSpec) { DARABONBA_PTR_SET_VALUE(taskSpec_, taskSpec) };
    inline CreateJobRequestTasks& setTaskSpec(Models::CreateJobRequestTasksTaskSpec && taskSpec) { DARABONBA_PTR_SET_RVALUE(taskSpec_, taskSpec) };


    // taskSustainable Field Functions 
    bool hasTaskSustainable() const { return this->taskSustainable_ != nullptr;};
    void deleteTaskSustainable() { this->taskSustainable_ = nullptr;};
    inline bool taskSustainable() const { DARABONBA_PTR_GET_DEFAULT(taskSustainable_, false) };
    inline CreateJobRequestTasks& setTaskSustainable(bool taskSustainable) { DARABONBA_PTR_SET_VALUE(taskSustainable_, taskSustainable) };


  protected:
    std::shared_ptr<Models::CreateJobRequestTasksExecutorPolicy> executorPolicy_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
    std::shared_ptr<Models::CreateJobRequestTasksTaskSpec> taskSpec_ = nullptr;
    std::shared_ptr<bool> taskSustainable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
