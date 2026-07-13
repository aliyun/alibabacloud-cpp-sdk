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
      DARABONBA_PTR_TO_JSON(ClarificationAnswers, clarificationAnswers_);
      DARABONBA_PTR_TO_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_TO_JSON(ToolCallId, toolCallId_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeAgentTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdditionalPrompt, additionalPrompt_);
      DARABONBA_PTR_FROM_JSON(ClarificationAnswers, clarificationAnswers_);
      DARABONBA_PTR_FROM_JSON(TaskIds, taskIds_);
      DARABONBA_PTR_FROM_JSON(ToolCallId, toolCallId_);
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
    class ClarificationAnswers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClarificationAnswers& obj) { 
        DARABONBA_PTR_TO_JSON(CustomValue, customValue_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(SelectedIds, selectedIds_);
      };
      friend void from_json(const Darabonba::Json& j, ClarificationAnswers& obj) { 
        DARABONBA_PTR_FROM_JSON(CustomValue, customValue_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(SelectedIds, selectedIds_);
      };
      ClarificationAnswers() = default ;
      ClarificationAnswers(const ClarificationAnswers &) = default ;
      ClarificationAnswers(ClarificationAnswers &&) = default ;
      ClarificationAnswers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClarificationAnswers() = default ;
      ClarificationAnswers& operator=(const ClarificationAnswers &) = default ;
      ClarificationAnswers& operator=(ClarificationAnswers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->customValue_ == nullptr
        && this->id_ == nullptr && this->selectedIds_ == nullptr; };
      // customValue Field Functions 
      bool hasCustomValue() const { return this->customValue_ != nullptr;};
      void deleteCustomValue() { this->customValue_ = nullptr;};
      inline string getCustomValue() const { DARABONBA_PTR_GET_DEFAULT(customValue_, "") };
      inline ClarificationAnswers& setCustomValue(string customValue) { DARABONBA_PTR_SET_VALUE(customValue_, customValue) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline ClarificationAnswers& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // selectedIds Field Functions 
      bool hasSelectedIds() const { return this->selectedIds_ != nullptr;};
      void deleteSelectedIds() { this->selectedIds_ = nullptr;};
      inline const vector<string> & getSelectedIds() const { DARABONBA_PTR_GET_CONST(selectedIds_, vector<string>) };
      inline vector<string> getSelectedIds() { DARABONBA_PTR_GET(selectedIds_, vector<string>) };
      inline ClarificationAnswers& setSelectedIds(const vector<string> & selectedIds) { DARABONBA_PTR_SET_VALUE(selectedIds_, selectedIds) };
      inline ClarificationAnswers& setSelectedIds(vector<string> && selectedIds) { DARABONBA_PTR_SET_RVALUE(selectedIds_, selectedIds) };


    protected:
      shared_ptr<string> customValue_ {};
      shared_ptr<string> id_ {};
      shared_ptr<vector<string>> selectedIds_ {};
    };

    virtual bool empty() const override { return this->additionalPrompt_ == nullptr
        && this->clarificationAnswers_ == nullptr && this->taskIds_ == nullptr && this->toolCallId_ == nullptr; };
    // additionalPrompt Field Functions 
    bool hasAdditionalPrompt() const { return this->additionalPrompt_ != nullptr;};
    void deleteAdditionalPrompt() { this->additionalPrompt_ = nullptr;};
    inline string getAdditionalPrompt() const { DARABONBA_PTR_GET_DEFAULT(additionalPrompt_, "") };
    inline ResumeAgentTaskRequest& setAdditionalPrompt(string additionalPrompt) { DARABONBA_PTR_SET_VALUE(additionalPrompt_, additionalPrompt) };


    // clarificationAnswers Field Functions 
    bool hasClarificationAnswers() const { return this->clarificationAnswers_ != nullptr;};
    void deleteClarificationAnswers() { this->clarificationAnswers_ = nullptr;};
    inline const vector<ResumeAgentTaskRequest::ClarificationAnswers> & getClarificationAnswers() const { DARABONBA_PTR_GET_CONST(clarificationAnswers_, vector<ResumeAgentTaskRequest::ClarificationAnswers>) };
    inline vector<ResumeAgentTaskRequest::ClarificationAnswers> getClarificationAnswers() { DARABONBA_PTR_GET(clarificationAnswers_, vector<ResumeAgentTaskRequest::ClarificationAnswers>) };
    inline ResumeAgentTaskRequest& setClarificationAnswers(const vector<ResumeAgentTaskRequest::ClarificationAnswers> & clarificationAnswers) { DARABONBA_PTR_SET_VALUE(clarificationAnswers_, clarificationAnswers) };
    inline ResumeAgentTaskRequest& setClarificationAnswers(vector<ResumeAgentTaskRequest::ClarificationAnswers> && clarificationAnswers) { DARABONBA_PTR_SET_RVALUE(clarificationAnswers_, clarificationAnswers) };


    // taskIds Field Functions 
    bool hasTaskIds() const { return this->taskIds_ != nullptr;};
    void deleteTaskIds() { this->taskIds_ = nullptr;};
    inline const vector<string> & getTaskIds() const { DARABONBA_PTR_GET_CONST(taskIds_, vector<string>) };
    inline vector<string> getTaskIds() { DARABONBA_PTR_GET(taskIds_, vector<string>) };
    inline ResumeAgentTaskRequest& setTaskIds(const vector<string> & taskIds) { DARABONBA_PTR_SET_VALUE(taskIds_, taskIds) };
    inline ResumeAgentTaskRequest& setTaskIds(vector<string> && taskIds) { DARABONBA_PTR_SET_RVALUE(taskIds_, taskIds) };


    // toolCallId Field Functions 
    bool hasToolCallId() const { return this->toolCallId_ != nullptr;};
    void deleteToolCallId() { this->toolCallId_ = nullptr;};
    inline string getToolCallId() const { DARABONBA_PTR_GET_DEFAULT(toolCallId_, "") };
    inline ResumeAgentTaskRequest& setToolCallId(string toolCallId) { DARABONBA_PTR_SET_VALUE(toolCallId_, toolCallId) };


  protected:
    // The additional prompt to append. This parameter takes effect only when the task is passively paused, such as when the task is paused and waiting for user confirmation.
    shared_ptr<string> additionalPrompt_ {};
    shared_ptr<vector<ResumeAgentTaskRequest::ClarificationAnswers>> clarificationAnswers_ {};
    // The list of task IDs.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> taskIds_ {};
    shared_ptr<string> toolCallId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
