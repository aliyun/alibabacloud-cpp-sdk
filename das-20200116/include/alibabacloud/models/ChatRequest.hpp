// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class ChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentId, agentId_);
      DARABONBA_PTR_TO_JSON(ForwardedProps, forwardedProps_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Resume, resume_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
    };
    friend void from_json(const Darabonba::Json& j, ChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentId, agentId_);
      DARABONBA_PTR_FROM_JSON(ForwardedProps, forwardedProps_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Resume, resume_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
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
    virtual bool empty() const override { return this->agentId_ == nullptr
        && this->forwardedProps_ == nullptr && this->message_ == nullptr && this->resume_ == nullptr && this->sessionId_ == nullptr && this->summary_ == nullptr; };
    // agentId Field Functions 
    bool hasAgentId() const { return this->agentId_ != nullptr;};
    void deleteAgentId() { this->agentId_ = nullptr;};
    inline string getAgentId() const { DARABONBA_PTR_GET_DEFAULT(agentId_, "") };
    inline ChatRequest& setAgentId(string agentId) { DARABONBA_PTR_SET_VALUE(agentId_, agentId) };


    // forwardedProps Field Functions 
    bool hasForwardedProps() const { return this->forwardedProps_ != nullptr;};
    void deleteForwardedProps() { this->forwardedProps_ = nullptr;};
    inline string getForwardedProps() const { DARABONBA_PTR_GET_DEFAULT(forwardedProps_, "") };
    inline ChatRequest& setForwardedProps(string forwardedProps) { DARABONBA_PTR_SET_VALUE(forwardedProps_, forwardedProps) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ChatRequest& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // resume Field Functions 
    bool hasResume() const { return this->resume_ != nullptr;};
    void deleteResume() { this->resume_ = nullptr;};
    inline string getResume() const { DARABONBA_PTR_GET_DEFAULT(resume_, "") };
    inline ChatRequest& setResume(string resume) { DARABONBA_PTR_SET_VALUE(resume_, resume) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ChatRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline ChatRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


  protected:
    // Optional. The agent ID used for the service. You can specify the agent generated after enabling the DAS Agent or a manually created agent. If not specified, the default agent is used.
    shared_ptr<string> agentId_ {};
    // The forwarded properties.
    shared_ptr<string> forwardedProps_ {};
    // The message.
    shared_ptr<string> message_ {};
    // The user interaction feedback.
    shared_ptr<string> resume_ {};
    // Optional. The session ID, which is a UUID string. If not specified, a new session is created by default. The same session ID must be maintained for contextual conversations.
    shared_ptr<string> sessionId_ {};
    // Specifies whether to output summary information.
    shared_ptr<string> summary_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
