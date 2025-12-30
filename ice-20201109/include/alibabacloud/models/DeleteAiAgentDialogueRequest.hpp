// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAIAGENTDIALOGUEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAIAGENTDIALOGUEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class DeleteAIAgentDialogueRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAIAgentDialogueRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DialogueId, dialogueId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAIAgentDialogueRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DialogueId, dialogueId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    DeleteAIAgentDialogueRequest() = default ;
    DeleteAIAgentDialogueRequest(const DeleteAIAgentDialogueRequest &) = default ;
    DeleteAIAgentDialogueRequest(DeleteAIAgentDialogueRequest &&) = default ;
    DeleteAIAgentDialogueRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAIAgentDialogueRequest() = default ;
    DeleteAIAgentDialogueRequest& operator=(const DeleteAIAgentDialogueRequest &) = default ;
    DeleteAIAgentDialogueRequest& operator=(DeleteAIAgentDialogueRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dialogueId_ == nullptr
        && this->nodeId_ == nullptr && this->sessionId_ == nullptr; };
    // dialogueId Field Functions 
    bool hasDialogueId() const { return this->dialogueId_ != nullptr;};
    void deleteDialogueId() { this->dialogueId_ = nullptr;};
    inline string getDialogueId() const { DARABONBA_PTR_GET_DEFAULT(dialogueId_, "") };
    inline DeleteAIAgentDialogueRequest& setDialogueId(string dialogueId) { DARABONBA_PTR_SET_VALUE(dialogueId_, dialogueId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DeleteAIAgentDialogueRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline DeleteAIAgentDialogueRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    // The ID of the dialog that you want to delete.
    // 
    // This parameter is required.
    shared_ptr<string> dialogueId_ {};
    shared_ptr<string> nodeId_ {};
    // The session ID.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
