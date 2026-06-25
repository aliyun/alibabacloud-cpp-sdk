// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMEAGENTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMEAGENTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class ResumeAgentTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeAgentTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdditionalPrompt, additionalPrompt_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeAgentTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPrompt, additionalPrompt_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
    };
    ResumeAgentTaskRequest() = default ;
    ResumeAgentTaskRequest(const ResumeAgentTaskRequest &) = default ;
    ResumeAgentTaskRequest(ResumeAgentTaskRequest &&) = default ;
    ResumeAgentTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeAgentTaskRequest() = default ;
    ResumeAgentTaskRequest& operator=(const ResumeAgentTaskRequest &) = default ;
    ResumeAgentTaskRequest& operator=(ResumeAgentTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->additionalPrompt_ == nullptr
        && this->taskIds_ == nullptr; };
    // additionalPrompt Field Functions 
    bool hasAdditionalPrompt() const { return this->additionalPrompt_ != nullptr;};
    void deleteAdditionalPrompt() { this->additionalPrompt_ = nullptr;};
    inline string getAdditionalPrompt() const { DARABONBA_PTR_GET_DEFAULT(additionalPrompt_, "") };
    inline ResumeAgentTaskRequest& setAdditionalPrompt(string additionalPrompt) { DARABONBA_PTR_SET_VALUE(additionalPrompt_, additionalPrompt) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline ResumeAgentTaskRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ResumeAgentTaskRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


  protected:
    // An additional prompt to guide the task. This parameter applies only when a task is in the `PAUSED` state, for example, while waiting for user input.
    shared_ptr<string> additionalPrompt_ {};
    // A list of task IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> taskIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
