// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ChatShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(IntentName, intentName_);
      DARABONBA_PTR_TO_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_TO_JSON(Perspective, perspectiveShrink_);
      DARABONBA_PTR_TO_JSON(SandBox, sandBox_);
      DARABONBA_PTR_TO_JSON(SenderId, senderId_);
      DARABONBA_PTR_TO_JSON(SenderNick, senderNick_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Utterance, utterance_);
      DARABONBA_PTR_TO_JSON(VendorParam, vendorParam_);
    };
    friend void from_json(const Darabonba::Json& j, ChatShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(IntentName, intentName_);
      DARABONBA_PTR_FROM_JSON(KnowledgeId, knowledgeId_);
      DARABONBA_PTR_FROM_JSON(Perspective, perspectiveShrink_);
      DARABONBA_PTR_FROM_JSON(SandBox, sandBox_);
      DARABONBA_PTR_FROM_JSON(SenderId, senderId_);
      DARABONBA_PTR_FROM_JSON(SenderNick, senderNick_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Utterance, utterance_);
      DARABONBA_PTR_FROM_JSON(VendorParam, vendorParam_);
    };
    ChatShrinkRequest() = default ;
    ChatShrinkRequest(const ChatShrinkRequest &) = default ;
    ChatShrinkRequest(ChatShrinkRequest &&) = default ;
    ChatShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChatShrinkRequest() = default ;
    ChatShrinkRequest& operator=(const ChatShrinkRequest &) = default ;
    ChatShrinkRequest& operator=(ChatShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->agentKey_ == nullptr
        && this->instanceId_ == nullptr && this->intentName_ == nullptr && this->knowledgeId_ == nullptr && this->perspectiveShrink_ == nullptr && this->sandBox_ == nullptr
        && this->senderId_ == nullptr && this->senderNick_ == nullptr && this->sessionId_ == nullptr && this->utterance_ == nullptr && this->vendorParam_ == nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string getAgentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ChatShrinkRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ChatShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // intentName Field Functions 
    bool hasIntentName() const { return this->intentName_ != nullptr;};
    void deleteIntentName() { this->intentName_ = nullptr;};
    inline string getIntentName() const { DARABONBA_PTR_GET_DEFAULT(intentName_, "") };
    inline ChatShrinkRequest& setIntentName(string intentName) { DARABONBA_PTR_SET_VALUE(intentName_, intentName) };


    // knowledgeId Field Functions 
    bool hasKnowledgeId() const { return this->knowledgeId_ != nullptr;};
    void deleteKnowledgeId() { this->knowledgeId_ = nullptr;};
    inline string getKnowledgeId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeId_, "") };
    inline ChatShrinkRequest& setKnowledgeId(string knowledgeId) { DARABONBA_PTR_SET_VALUE(knowledgeId_, knowledgeId) };


    // perspectiveShrink Field Functions 
    bool hasPerspectiveShrink() const { return this->perspectiveShrink_ != nullptr;};
    void deletePerspectiveShrink() { this->perspectiveShrink_ = nullptr;};
    inline string getPerspectiveShrink() const { DARABONBA_PTR_GET_DEFAULT(perspectiveShrink_, "") };
    inline ChatShrinkRequest& setPerspectiveShrink(string perspectiveShrink) { DARABONBA_PTR_SET_VALUE(perspectiveShrink_, perspectiveShrink) };


    // sandBox Field Functions 
    bool hasSandBox() const { return this->sandBox_ != nullptr;};
    void deleteSandBox() { this->sandBox_ = nullptr;};
    inline bool getSandBox() const { DARABONBA_PTR_GET_DEFAULT(sandBox_, false) };
    inline ChatShrinkRequest& setSandBox(bool sandBox) { DARABONBA_PTR_SET_VALUE(sandBox_, sandBox) };


    // senderId Field Functions 
    bool hasSenderId() const { return this->senderId_ != nullptr;};
    void deleteSenderId() { this->senderId_ = nullptr;};
    inline string getSenderId() const { DARABONBA_PTR_GET_DEFAULT(senderId_, "") };
    inline ChatShrinkRequest& setSenderId(string senderId) { DARABONBA_PTR_SET_VALUE(senderId_, senderId) };


    // senderNick Field Functions 
    bool hasSenderNick() const { return this->senderNick_ != nullptr;};
    void deleteSenderNick() { this->senderNick_ = nullptr;};
    inline string getSenderNick() const { DARABONBA_PTR_GET_DEFAULT(senderNick_, "") };
    inline ChatShrinkRequest& setSenderNick(string senderNick) { DARABONBA_PTR_SET_VALUE(senderNick_, senderNick) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatShrinkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // utterance Field Functions 
    bool hasUtterance() const { return this->utterance_ != nullptr;};
    void deleteUtterance() { this->utterance_ = nullptr;};
    inline string getUtterance() const { DARABONBA_PTR_GET_DEFAULT(utterance_, "") };
    inline ChatShrinkRequest& setUtterance(string utterance) { DARABONBA_PTR_SET_VALUE(utterance_, utterance) };


    // vendorParam Field Functions 
    bool hasVendorParam() const { return this->vendorParam_ != nullptr;};
    void deleteVendorParam() { this->vendorParam_ = nullptr;};
    inline string getVendorParam() const { DARABONBA_PTR_GET_DEFAULT(vendorParam_, "") };
    inline ChatShrinkRequest& setVendorParam(string vendorParam) { DARABONBA_PTR_SET_VALUE(vendorParam_, vendorParam) };


  protected:
    // The key for the business space. If omitted, the request is routed to the default business space. You can get this key from the **Business Management** page of your main account.
    shared_ptr<string> agentKey_ {};
    // The unique ID of the chatbot instance. To get this ID, log in to the Alibaba Cloud Chatbot console and go to **Chatbot Details** > **Session API**.
    shared_ptr<string> instanceId_ {};
    // The name of an intent within a dialog flow. If specified, the chatbot directly activates this intent to process the user\\"s request.
    shared_ptr<string> intentName_ {};
    // The ID of an entry in the knowledge base. If you specify this ID, the chatbot directly returns the corresponding answer.
    shared_ptr<string> knowledgeId_ {};
    // An array of perspective codes. Use these codes to retrieve answers from different perspectives for the same knowledge entry. Example: `Perspective=["FZJBY3raWr"]`. When using an SDK, refer to its parameter definitions.
    shared_ptr<string> perspectiveShrink_ {};
    // Specifies the environment to use. The default value is `false`, which indicates the production environment.
    // 
    // - `true`: The test environment. This environment is for testing only. Do not use it in production due to potential instability and QPS limitations.
    // 
    // - `false`: The production environment.
    shared_ptr<bool> sandBox_ {};
    // The unique ID of the user in the current session.
    shared_ptr<string> senderId_ {};
    // The nickname of the user in the current session.
    shared_ptr<string> senderNick_ {};
    // The session ID, used to identify a user session and maintain context. For a new user, omit this parameter in the first call to the `Chat` API. The chatbot automatically starts a session and returns the `SessionId` in the response. To continue the conversation, include this `SessionId` in all subsequent requests. The maximum length is 64 characters.
    shared_ptr<string> sessionId_ {};
    // The user\\"s input text.
    shared_ptr<string> utterance_ {};
    // A JSON-formatted string containing custom parameters to pass to various dialog engines.
    shared_ptr<string> vendorParam_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
