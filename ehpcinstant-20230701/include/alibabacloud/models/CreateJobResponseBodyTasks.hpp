// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEJOBRESPONSEBODYTASKS_HPP_
#define ALIBABACLOUD_MODELS_CREATEJOBRESPONSEBODYTASKS_HPP_
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
  class CreateJobResponseBodyTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateJobResponseBodyTasks& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_TO_JSON(TaskName, taskName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateJobResponseBodyTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutorIds, executorIds_);
      DARABONBA_PTR_FROM_JSON(TaskName, taskName_);
    };
    CreateJobResponseBodyTasks() = default ;
    CreateJobResponseBodyTasks(const CreateJobResponseBodyTasks &) = default ;
    CreateJobResponseBodyTasks(CreateJobResponseBodyTasks &&) = default ;
    CreateJobResponseBodyTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateJobResponseBodyTasks() = default ;
    CreateJobResponseBodyTasks& operator=(const CreateJobResponseBodyTasks &) = default ;
    CreateJobResponseBodyTasks& operator=(CreateJobResponseBodyTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->executorIds_ != nullptr
        && this->taskName_ != nullptr; };
    // executorIds Field Functions 
    bool hasExecutorIds() const { return this->executorIds_ != nullptr;};
    void deleteExecutorIds() { this->executorIds_ = nullptr;};
    inline const vector<string> & executorIds() const { DARABONBA_PTR_GET_CONST(executorIds_, vector<string>) };
    inline vector<string> executorIds() { DARABONBA_PTR_GET(executorIds_, vector<string>) };
    inline CreateJobResponseBodyTasks& setExecutorIds(const vector<string> & executorIds) { DARABONBA_PTR_SET_VALUE(executorIds_, executorIds) };
    inline CreateJobResponseBodyTasks& setExecutorIds(vector<string> && executorIds) { DARABONBA_PTR_SET_RVALUE(executorIds_, executorIds) };


    // taskName Field Functions 
    bool hasTaskName() const { return this->taskName_ != nullptr;};
    void deleteTaskName() { this->taskName_ = nullptr;};
    inline string taskName() const { DARABONBA_PTR_GET_DEFAULT(taskName_, "") };
    inline CreateJobResponseBodyTasks& setTaskName(string taskName) { DARABONBA_PTR_SET_VALUE(taskName_, taskName) };


  protected:
    std::shared_ptr<vector<string>> executorIds_ = nullptr;
    std::shared_ptr<string> taskName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
