// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTONGYICONVERSATIONLOGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTONGYICONVERSATIONLOGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListTongyiConversationLogsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTongyiConversationLogsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_TO_JSON(RobotInstanceId, robotInstanceId_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListTongyiConversationLogsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AgentKey, agentKey_);
      DARABONBA_PTR_FROM_JSON(RobotInstanceId, robotInstanceId_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
    };
    ListTongyiConversationLogsRequest() = default ;
    ListTongyiConversationLogsRequest(const ListTongyiConversationLogsRequest &) = default ;
    ListTongyiConversationLogsRequest(ListTongyiConversationLogsRequest &&) = default ;
    ListTongyiConversationLogsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTongyiConversationLogsRequest() = default ;
    ListTongyiConversationLogsRequest& operator=(const ListTongyiConversationLogsRequest &) = default ;
    ListTongyiConversationLogsRequest& operator=(ListTongyiConversationLogsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->agentKey_ != nullptr
        && this->robotInstanceId_ != nullptr && this->sessionId_ != nullptr; };
    // agentKey Field Functions 
    bool hasAgentKey() const { return this->agentKey_ != nullptr;};
    void deleteAgentKey() { this->agentKey_ = nullptr;};
    inline string agentKey() const { DARABONBA_PTR_GET_DEFAULT(agentKey_, "") };
    inline ListTongyiConversationLogsRequest& setAgentKey(string agentKey) { DARABONBA_PTR_SET_VALUE(agentKey_, agentKey) };


    // robotInstanceId Field Functions 
    bool hasRobotInstanceId() const { return this->robotInstanceId_ != nullptr;};
    void deleteRobotInstanceId() { this->robotInstanceId_ = nullptr;};
    inline string robotInstanceId() const { DARABONBA_PTR_GET_DEFAULT(robotInstanceId_, "") };
    inline ListTongyiConversationLogsRequest& setRobotInstanceId(string robotInstanceId) { DARABONBA_PTR_SET_VALUE(robotInstanceId_, robotInstanceId) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ListTongyiConversationLogsRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


  protected:
    std::shared_ptr<string> agentKey_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> robotInstanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
