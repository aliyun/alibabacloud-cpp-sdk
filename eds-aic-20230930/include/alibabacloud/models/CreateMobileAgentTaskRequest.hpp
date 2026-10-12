// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMOBILEAGENTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEMOBILEAGENTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class CreateMobileAgentTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMobileAgentTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(InputParam, inputParam_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMobileAgentTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(InputParam, inputParam_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateMobileAgentTaskRequest() = default ;
    CreateMobileAgentTaskRequest(const CreateMobileAgentTaskRequest &) = default ;
    CreateMobileAgentTaskRequest(CreateMobileAgentTaskRequest &&) = default ;
    CreateMobileAgentTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMobileAgentTaskRequest() = default ;
    CreateMobileAgentTaskRequest& operator=(const CreateMobileAgentTaskRequest &) = default ;
    CreateMobileAgentTaskRequest& operator=(CreateMobileAgentTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->inputParam_ == nullptr && this->name_ == nullptr && this->nodeIds_ == nullptr && this->sessionId_ == nullptr && this->type_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline CreateMobileAgentTaskRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // inputParam Field Functions 
    bool hasInputParam() const { return this->inputParam_ != nullptr;};
    void deleteInputParam() { this->inputParam_ = nullptr;};
    inline string getInputParam() const { DARABONBA_PTR_GET_DEFAULT(inputParam_, "") };
    inline CreateMobileAgentTaskRequest& setInputParam(string inputParam) { DARABONBA_PTR_SET_VALUE(inputParam_, inputParam) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateMobileAgentTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline string getNodeIds() const { DARABONBA_PTR_GET_DEFAULT(nodeIds_, "") };
    inline CreateMobileAgentTaskRequest& setNodeIds(string nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline CreateMobileAgentTaskRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateMobileAgentTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The agent ID.
    shared_ptr<string> agentId_ {};
    // The task input.
    shared_ptr<string> inputParam_ {};
    // The task name.
    shared_ptr<string> name_ {};
    // The list of node IDs.
    shared_ptr<string> nodeIds_ {};
    // The session ID. Tasks with the same session ID share the same context.
    shared_ptr<string> sessionId_ {};
    // The task type.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
