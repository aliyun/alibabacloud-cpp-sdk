// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitDeepWriteTaskShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDeepWriteTaskShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentOrchestration, agentOrchestrationShrink_);
      DARABONBA_PTR_TO_JSON(Files, filesShrink_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Instructions, instructions_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDeepWriteTaskShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentOrchestration, agentOrchestrationShrink_);
      DARABONBA_PTR_FROM_JSON(Files, filesShrink_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitDeepWriteTaskShrinkRequest() = default ;
    SubmitDeepWriteTaskShrinkRequest(const SubmitDeepWriteTaskShrinkRequest &) = default ;
    SubmitDeepWriteTaskShrinkRequest(SubmitDeepWriteTaskShrinkRequest &&) = default ;
    SubmitDeepWriteTaskShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDeepWriteTaskShrinkRequest() = default ;
    SubmitDeepWriteTaskShrinkRequest& operator=(const SubmitDeepWriteTaskShrinkRequest &) = default ;
    SubmitDeepWriteTaskShrinkRequest& operator=(SubmitDeepWriteTaskShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentOrchestrationShrink_ == nullptr
        && this->filesShrink_ == nullptr && this->input_ == nullptr && this->instructions_ == nullptr && this->workspaceId_ == nullptr; };
    // agentOrchestrationShrink Field Functions 
    bool hasAgentOrchestrationShrink() const { return this->agentOrchestrationShrink_ != nullptr;};
    void deleteAgentOrchestrationShrink() { this->agentOrchestrationShrink_ = nullptr;};
    inline string getAgentOrchestrationShrink() const { DARABONBA_PTR_GET_DEFAULT(agentOrchestrationShrink_, "") };
    inline SubmitDeepWriteTaskShrinkRequest& setAgentOrchestrationShrink(string agentOrchestrationShrink) { DARABONBA_PTR_SET_VALUE(agentOrchestrationShrink_, agentOrchestrationShrink) };


    // filesShrink Field Functions 
    bool hasFilesShrink() const { return this->filesShrink_ != nullptr;};
    void deleteFilesShrink() { this->filesShrink_ = nullptr;};
    inline string getFilesShrink() const { DARABONBA_PTR_GET_DEFAULT(filesShrink_, "") };
    inline SubmitDeepWriteTaskShrinkRequest& setFilesShrink(string filesShrink) { DARABONBA_PTR_SET_VALUE(filesShrink_, filesShrink) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitDeepWriteTaskShrinkRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string getInstructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline SubmitDeepWriteTaskShrinkRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitDeepWriteTaskShrinkRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<string> agentOrchestrationShrink_ {};
    shared_ptr<string> filesShrink_ {};
    // This parameter is required.
    shared_ptr<string> input_ {};
    shared_ptr<string> instructions_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
