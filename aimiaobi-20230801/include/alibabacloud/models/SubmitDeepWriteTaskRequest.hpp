// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITDEEPWRITETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitDeepWriteTaskRequestAgentOrchestration.hpp>
#include <vector>
#include <alibabacloud/models/SubmitDeepWriteTaskRequestFiles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitDeepWriteTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitDeepWriteTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentOrchestration, agentOrchestration_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Instructions, instructions_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitDeepWriteTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentOrchestration, agentOrchestration_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Instructions, instructions_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    SubmitDeepWriteTaskRequest() = default ;
    SubmitDeepWriteTaskRequest(const SubmitDeepWriteTaskRequest &) = default ;
    SubmitDeepWriteTaskRequest(SubmitDeepWriteTaskRequest &&) = default ;
    SubmitDeepWriteTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitDeepWriteTaskRequest() = default ;
    SubmitDeepWriteTaskRequest& operator=(const SubmitDeepWriteTaskRequest &) = default ;
    SubmitDeepWriteTaskRequest& operator=(SubmitDeepWriteTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentOrchestration_ == nullptr
        && return this->files_ == nullptr && return this->input_ == nullptr && return this->instructions_ == nullptr && return this->workspaceId_ == nullptr; };
    // agentOrchestration Field Functions 
    bool hasAgentOrchestration() const { return this->agentOrchestration_ != nullptr;};
    void deleteAgentOrchestration() { this->agentOrchestration_ = nullptr;};
    inline const SubmitDeepWriteTaskRequestAgentOrchestration & agentOrchestration() const { DARABONBA_PTR_GET_CONST(agentOrchestration_, SubmitDeepWriteTaskRequestAgentOrchestration) };
    inline SubmitDeepWriteTaskRequestAgentOrchestration agentOrchestration() { DARABONBA_PTR_GET(agentOrchestration_, SubmitDeepWriteTaskRequestAgentOrchestration) };
    inline SubmitDeepWriteTaskRequest& setAgentOrchestration(const SubmitDeepWriteTaskRequestAgentOrchestration & agentOrchestration) { DARABONBA_PTR_SET_VALUE(agentOrchestration_, agentOrchestration) };
    inline SubmitDeepWriteTaskRequest& setAgentOrchestration(SubmitDeepWriteTaskRequestAgentOrchestration && agentOrchestration) { DARABONBA_PTR_SET_RVALUE(agentOrchestration_, agentOrchestration) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<SubmitDeepWriteTaskRequestFiles> & files() const { DARABONBA_PTR_GET_CONST(files_, vector<SubmitDeepWriteTaskRequestFiles>) };
    inline vector<SubmitDeepWriteTaskRequestFiles> files() { DARABONBA_PTR_GET(files_, vector<SubmitDeepWriteTaskRequestFiles>) };
    inline SubmitDeepWriteTaskRequest& setFiles(const vector<SubmitDeepWriteTaskRequestFiles> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SubmitDeepWriteTaskRequest& setFiles(vector<SubmitDeepWriteTaskRequestFiles> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string input() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitDeepWriteTaskRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // instructions Field Functions 
    bool hasInstructions() const { return this->instructions_ != nullptr;};
    void deleteInstructions() { this->instructions_ = nullptr;};
    inline string instructions() const { DARABONBA_PTR_GET_DEFAULT(instructions_, "") };
    inline SubmitDeepWriteTaskRequest& setInstructions(string instructions) { DARABONBA_PTR_SET_VALUE(instructions_, instructions) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline SubmitDeepWriteTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<SubmitDeepWriteTaskRequestAgentOrchestration> agentOrchestration_ = nullptr;
    std::shared_ptr<vector<SubmitDeepWriteTaskRequestFiles>> files_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> input_ = nullptr;
    std::shared_ptr<string> instructions_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
