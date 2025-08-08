// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKTEMPLATESPEC_HPP_
#define ALIBABACLOUD_MODELS_TASKTEMPLATESPEC_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TaskTemplateSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskTemplateSpec& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(executeCondition, executeCondition_);
      DARABONBA_PTR_TO_JSON(worker, worker_);
    };
    friend void from_json(const Darabonba::Json& j, TaskTemplateSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(executeCondition, executeCondition_);
      DARABONBA_PTR_FROM_JSON(worker, worker_);
    };
    TaskTemplateSpec() = default ;
    TaskTemplateSpec(const TaskTemplateSpec &) = default ;
    TaskTemplateSpec(TaskTemplateSpec &&) = default ;
    TaskTemplateSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskTemplateSpec() = default ;
    TaskTemplateSpec& operator=(const TaskTemplateSpec &) = default ;
    TaskTemplateSpec& operator=(TaskTemplateSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->description_ != nullptr && this->executeCondition_ != nullptr && this->worker_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Context & context() const { DARABONBA_PTR_GET_CONST(context_, Context) };
    inline Context context() { DARABONBA_PTR_GET(context_, Context) };
    inline TaskTemplateSpec& setContext(const Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline TaskTemplateSpec& setContext(Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline TaskTemplateSpec& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // executeCondition Field Functions 
    bool hasExecuteCondition() const { return this->executeCondition_ != nullptr;};
    void deleteExecuteCondition() { this->executeCondition_ = nullptr;};
    inline const Condition & executeCondition() const { DARABONBA_PTR_GET_CONST(executeCondition_, Condition) };
    inline Condition executeCondition() { DARABONBA_PTR_GET(executeCondition_, Condition) };
    inline TaskTemplateSpec& setExecuteCondition(const Condition & executeCondition) { DARABONBA_PTR_SET_VALUE(executeCondition_, executeCondition) };
    inline TaskTemplateSpec& setExecuteCondition(Condition && executeCondition) { DARABONBA_PTR_SET_RVALUE(executeCondition_, executeCondition) };


    // worker Field Functions 
    bool hasWorker() const { return this->worker_ != nullptr;};
    void deleteWorker() { this->worker_ = nullptr;};
    inline const TaskWorker & worker() const { DARABONBA_PTR_GET_CONST(worker_, TaskWorker) };
    inline TaskWorker worker() { DARABONBA_PTR_GET(worker_, TaskWorker) };
    inline TaskTemplateSpec& setWorker(const TaskWorker & worker) { DARABONBA_PTR_SET_VALUE(worker_, worker) };
    inline TaskTemplateSpec& setWorker(TaskWorker && worker) { DARABONBA_PTR_SET_RVALUE(worker_, worker) };


  protected:
    std::shared_ptr<Context> context_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<Condition> executeCondition_ = nullptr;
    std::shared_ptr<TaskWorker> worker_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
