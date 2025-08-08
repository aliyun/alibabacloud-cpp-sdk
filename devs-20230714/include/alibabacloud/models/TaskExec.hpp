// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TASKEXEC_HPP_
#define ALIBABACLOUD_MODELS_TASKEXEC_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Devs20230714.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class TaskExec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TaskExec& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(runAfters, runAfters_);
      DARABONBA_PTR_TO_JSON(taskTemplate, taskTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, TaskExec& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(runAfters, runAfters_);
      DARABONBA_PTR_FROM_JSON(taskTemplate, taskTemplate_);
    };
    TaskExec() = default ;
    TaskExec(const TaskExec &) = default ;
    TaskExec(TaskExec &&) = default ;
    TaskExec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TaskExec() = default ;
    TaskExec& operator=(const TaskExec &) = default ;
    TaskExec& operator=(TaskExec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->name_ != nullptr && this->runAfters_ != nullptr && this->taskTemplate_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Context & context() const { DARABONBA_PTR_GET_CONST(context_, Context) };
    inline Context context() { DARABONBA_PTR_GET(context_, Context) };
    inline TaskExec& setContext(const Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline TaskExec& setContext(Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline TaskExec& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // runAfters Field Functions 
    bool hasRunAfters() const { return this->runAfters_ != nullptr;};
    void deleteRunAfters() { this->runAfters_ = nullptr;};
    inline const vector<RunAfter> & runAfters() const { DARABONBA_PTR_GET_CONST(runAfters_, vector<RunAfter>) };
    inline vector<RunAfter> runAfters() { DARABONBA_PTR_GET(runAfters_, vector<RunAfter>) };
    inline TaskExec& setRunAfters(const vector<RunAfter> & runAfters) { DARABONBA_PTR_SET_VALUE(runAfters_, runAfters) };
    inline TaskExec& setRunAfters(vector<RunAfter> && runAfters) { DARABONBA_PTR_SET_RVALUE(runAfters_, runAfters) };


    // taskTemplate Field Functions 
    bool hasTaskTemplate() const { return this->taskTemplate_ != nullptr;};
    void deleteTaskTemplate() { this->taskTemplate_ = nullptr;};
    inline string taskTemplate() const { DARABONBA_PTR_GET_DEFAULT(taskTemplate_, "") };
    inline TaskExec& setTaskTemplate(string taskTemplate) { DARABONBA_PTR_SET_VALUE(taskTemplate_, taskTemplate) };


  protected:
    std::shared_ptr<Context> context_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<RunAfter>> runAfters_ = nullptr;
    std::shared_ptr<string> taskTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
