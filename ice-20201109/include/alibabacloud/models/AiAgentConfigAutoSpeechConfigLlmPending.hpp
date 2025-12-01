// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGAUTOSPEECHCONFIGLLMPENDING_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGAUTOSPEECHCONFIGLLMPENDING_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AIAgentConfigAutoSpeechConfigLlmPendingMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigAutoSpeechConfigLlmPending : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigAutoSpeechConfigLlmPending& obj) { 
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigAutoSpeechConfigLlmPending& obj) { 
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
    };
    AIAgentConfigAutoSpeechConfigLlmPending() = default ;
    AIAgentConfigAutoSpeechConfigLlmPending(const AIAgentConfigAutoSpeechConfigLlmPending &) = default ;
    AIAgentConfigAutoSpeechConfigLlmPending(AIAgentConfigAutoSpeechConfigLlmPending &&) = default ;
    AIAgentConfigAutoSpeechConfigLlmPending(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigAutoSpeechConfigLlmPending() = default ;
    AIAgentConfigAutoSpeechConfigLlmPending& operator=(const AIAgentConfigAutoSpeechConfigLlmPending &) = default ;
    AIAgentConfigAutoSpeechConfigLlmPending& operator=(AIAgentConfigAutoSpeechConfigLlmPending &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->messages_ == nullptr
        && return this->waitTime_ == nullptr; };
    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::AIAgentConfigAutoSpeechConfigLlmPendingMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::AIAgentConfigAutoSpeechConfigLlmPendingMessages>) };
    inline vector<Models::AIAgentConfigAutoSpeechConfigLlmPendingMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::AIAgentConfigAutoSpeechConfigLlmPendingMessages>) };
    inline AIAgentConfigAutoSpeechConfigLlmPending& setMessages(const vector<Models::AIAgentConfigAutoSpeechConfigLlmPendingMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline AIAgentConfigAutoSpeechConfigLlmPending& setMessages(vector<Models::AIAgentConfigAutoSpeechConfigLlmPendingMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline int32_t waitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0) };
    inline AIAgentConfigAutoSpeechConfigLlmPending& setWaitTime(int32_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    std::shared_ptr<vector<Models::AIAgentConfigAutoSpeechConfigLlmPendingMessages>> messages_ = nullptr;
    std::shared_ptr<int32_t> waitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
