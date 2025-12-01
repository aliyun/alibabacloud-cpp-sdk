// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGAUTOSPEECHCONFIGLLMPENDING_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGAUTOSPEECHCONFIGLLMPENDING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AIAgentOutboundCallConfigAutoSpeechConfigLlmPendingMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfigAutoSpeechConfigLlmPending : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfigAutoSpeechConfigLlmPending& obj) { 
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfigAutoSpeechConfigLlmPending& obj) { 
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
    };
    AIAgentOutboundCallConfigAutoSpeechConfigLlmPending() = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigLlmPending(const AIAgentOutboundCallConfigAutoSpeechConfigLlmPending &) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigLlmPending(AIAgentOutboundCallConfigAutoSpeechConfigLlmPending &&) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigLlmPending(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfigAutoSpeechConfigLlmPending() = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigLlmPending& operator=(const AIAgentOutboundCallConfigAutoSpeechConfigLlmPending &) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigLlmPending& operator=(AIAgentOutboundCallConfigAutoSpeechConfigLlmPending &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr
        && return this->waitTime_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPendingMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPendingMessages>) };
    inline vector<Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPendingMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPendingMessages>) };
    inline AIAgentOutboundCallConfigAutoSpeechConfigLlmPending& setMessages(const vector<Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPendingMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline AIAgentOutboundCallConfigAutoSpeechConfigLlmPending& setMessages(vector<Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPendingMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline int32_t waitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0) };
    inline AIAgentOutboundCallConfigAutoSpeechConfigLlmPending& setWaitTime(int32_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    std::shared_ptr<vector<Models::AIAgentOutboundCallConfigAutoSpeechConfigLlmPendingMessages>> messages_ = nullptr;
    std::shared_ptr<int32_t> waitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
