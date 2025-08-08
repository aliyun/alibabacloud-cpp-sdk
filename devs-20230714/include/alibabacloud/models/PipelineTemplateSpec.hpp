// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PIPELINETEMPLATESPEC_HPP_
#define ALIBABACLOUD_MODELS_PIPELINETEMPLATESPEC_HPP_
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
  class PipelineTemplateSpec : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PipelineTemplateSpec& obj) { 
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(tasks, tasks_);
    };
    friend void from_json(const Darabonba::Json& j, PipelineTemplateSpec& obj) { 
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(tasks, tasks_);
    };
    PipelineTemplateSpec() = default ;
    PipelineTemplateSpec(const PipelineTemplateSpec &) = default ;
    PipelineTemplateSpec(PipelineTemplateSpec &&) = default ;
    PipelineTemplateSpec(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PipelineTemplateSpec() = default ;
    PipelineTemplateSpec& operator=(const PipelineTemplateSpec &) = default ;
    PipelineTemplateSpec& operator=(PipelineTemplateSpec &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->context_ != nullptr
        && this->tasks_ != nullptr; };
    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline const Context & context() const { DARABONBA_PTR_GET_CONST(context_, Context) };
    inline Context context() { DARABONBA_PTR_GET(context_, Context) };
    inline PipelineTemplateSpec& setContext(const Context & context) { DARABONBA_PTR_SET_VALUE(context_, context) };
    inline PipelineTemplateSpec& setContext(Context && context) { DARABONBA_PTR_SET_RVALUE(context_, context) };


    // tasks Field Functions 
    bool hasTasks() const { return this->tasks_ != nullptr;};
    void deleteTasks() { this->tasks_ = nullptr;};
    inline const vector<TaskExec> & tasks() const { DARABONBA_PTR_GET_CONST(tasks_, vector<TaskExec>) };
    inline vector<TaskExec> tasks() { DARABONBA_PTR_GET(tasks_, vector<TaskExec>) };
    inline PipelineTemplateSpec& setTasks(const vector<TaskExec> & tasks) { DARABONBA_PTR_SET_VALUE(tasks_, tasks) };
    inline PipelineTemplateSpec& setTasks(vector<TaskExec> && tasks) { DARABONBA_PTR_SET_RVALUE(tasks_, tasks) };


  protected:
    std::shared_ptr<Context> context_ = nullptr;
    std::shared_ptr<vector<TaskExec>> tasks_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
