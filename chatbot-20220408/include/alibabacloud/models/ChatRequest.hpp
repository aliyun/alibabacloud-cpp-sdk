// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(Perspective, perspective_);
      DARABONBA_PTR_TO_JSON(SandBox, sandBox_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(SenderNick, senderNick_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
      DARABONBA_PTR_TO_JSON(VendorParam, vendorParam_);
    };
    friend void from_json(const Darabonba::Json& j, ChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(Perspective, perspective_);
      DARABONBA_PTR_FROM_JSON(SandBox, sandBox_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(SenderNick, senderNick_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
      DARABONBA_PTR_FROM_JSON(VendorParam, vendorParam_);
    };
    ChatRequest() = default ;
    ChatRequest(const ChatRequest &) = default ;
    ChatRequest(ChatRequest &&) = default ;
    ChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatRequest() = default ;
    ChatRequest& operator=(const ChatRequest &) = default ;
    ChatRequest& operator=(ChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->instanceId_ != nullptr && this->intentName_ != nullptr && this->knowledgeId_ != nullptr && this->perspective_ != nullptr && this->sandBox_ != nullptr
        && this->senderId_ != nullptr && this->senderNick_ != nullptr && this->sessionId_ != nullptr && this->utterance_ != nullptr && this->vendorParam_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ChatRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ChatRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string intentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline ChatRequest& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline string knowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
    inline ChatRequest& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // perspective Field Functions 
    bool hasPerspective() const { return this->perspective_ != nullptr;};
    void deletePerspective() { this->perspective_ = nullptr;};
    inline const vector<string> & perspective() const { DARABONBA_PTR_GET_CONST(perspective_, vector<string>) };
    inline vector<string> perspective() { DARABONBA_PTR_GET(perspective_, vector<string>) };
    inline ChatRequest& setPerspective(const vector<string> & perspective) { DARABONBA_PTR_SET_VALUE(perspective_, perspective) };
    inline ChatRequest& setPerspective(vector<string> && perspective) { DARABONBA_PTR_SET_RVALUE(perspective_, perspective) };


    // sandBox Field Functions 
    bool hasSandBox() const { return this->sandBox_ != nullptr;};
    void deleteSandBox() { this->sandBox_ = nullptr;};
    inline bool sandBox() const { DARABONBA_PTR_GET_DEFAULT(sandBox_, false) };
    inline ChatRequest& setSandBox(bool sandBox) { DARABONBA_PTR_SET_VALUE(sandBox_, sandBox) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string senderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline ChatRequest& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // senderNick Field Functions 
    bool hasSenderNick() const { return this->senderNick_ != nullptr;};
    void deleteSenderNick() { this->senderNick_ = nullptr;};
    inline string senderNick() const { DARABONBA_PTR_GET_DEFAULT(senderNick_, "") };
    inline ChatRequest& setSenderNick(string senderNick) { DARABONBA_PTR_SET_VALUE(senderNick_, senderNick) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string utterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline ChatRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


    // vendorParam Field Functions 
    bool hasVendorParam() const { return this->vendorParam_ != nullptr;};
    void deleteVendorParam() { this->vendorParam_ = nullptr;};
    inline string vendorParam() const { DARABONBA_PTR_GET_DEFAULT(vendorParam_, "") };
    inline ChatRequest& setVendorParam(string vendorParam) { DARABONBA_PTR_SET_VALUE(vendorParam_, vendorParam) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> intentName_ = nullptr;
    std::shared_ptr<string> knowledgeId_ = nullptr;
    std::shared_ptr<vector<string>> perspective_ = nullptr;
    std::shared_ptr<bool> sandBox_ = nullptr;
    std::shared_ptr<string> senderId_ = nullptr;
    std::shared_ptr<string> senderNick_ = nullptr;
    std::shared_ptr<string> sessionId_ = nullptr;
    std::shared_ptr<string> utterance_ = nullptr;
    std::shared_ptr<string> vendorParam_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
