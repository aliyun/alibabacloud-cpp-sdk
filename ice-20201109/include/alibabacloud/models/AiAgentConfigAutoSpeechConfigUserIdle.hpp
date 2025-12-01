// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGAUTOSPEECHCONFIGUSERIDLE_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGAUTOSPEECHCONFIGUSERIDLE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AIAgentConfigAutoSpeechConfigUserIdleMessages.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigAutoSpeechConfigUserIdle : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigAutoSpeechConfigUserIdle& obj) { 
      DARABONBA_PTR_TO_JSON(MaxRepeats, maxRepeats_);
      DARABONBA_PTR_TO_JSON(Messages, messages_);
      DARABONBA_PTR_TO_JSON(WaitTime, waitTime_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigAutoSpeechConfigUserIdle& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxRepeats, maxRepeats_);
      DARABONBA_PTR_FROM_JSON(Messages, messages_);
      DARABONBA_PTR_FROM_JSON(WaitTime, waitTime_);
    };
    AIAgentConfigAutoSpeechConfigUserIdle() = default ;
    AIAgentConfigAutoSpeechConfigUserIdle(const AIAgentConfigAutoSpeechConfigUserIdle &) = default ;
    AIAgentConfigAutoSpeechConfigUserIdle(AIAgentConfigAutoSpeechConfigUserIdle &&) = default ;
    AIAgentConfigAutoSpeechConfigUserIdle(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigAutoSpeechConfigUserIdle() = default ;
    AIAgentConfigAutoSpeechConfigUserIdle& operator=(const AIAgentConfigAutoSpeechConfigUserIdle &) = default ;
    AIAgentConfigAutoSpeechConfigUserIdle& operator=(AIAgentConfigAutoSpeechConfigUserIdle &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxRepeats_ == nullptr
        && return this->messages_ == nullptr && return this->waitTime_ == nullptr; };
    // maxRepeats Field Functions 
    bool hasMaxRepeats() const { return this->maxRepeats_ != nullptr;};
    void deleteMaxRepeats() { this->maxRepeats_ = nullptr;};
    inline int32_t maxRepeats() const { DARABONBA_PTR_GET_DEFAULT(maxRepeats_, 0) };
    inline AIAgentConfigAutoSpeechConfigUserIdle& setMaxRepeats(int32_t maxRepeats) { DARABONBA_PTR_SET_VALUE(maxRepeats_, maxRepeats) };


    // messages Field Functions 
    bool hasMessages() const { return this->messages_ != nullptr;};
    void deleteMessages() { this->messages_ = nullptr;};
    inline const vector<Models::AIAgentConfigAutoSpeechConfigUserIdleMessages> & messages() const { DARABONBA_PTR_GET_CONST(messages_, vector<Models::AIAgentConfigAutoSpeechConfigUserIdleMessages>) };
    inline vector<Models::AIAgentConfigAutoSpeechConfigUserIdleMessages> messages() { DARABONBA_PTR_GET(messages_, vector<Models::AIAgentConfigAutoSpeechConfigUserIdleMessages>) };
    inline AIAgentConfigAutoSpeechConfigUserIdle& setMessages(const vector<Models::AIAgentConfigAutoSpeechConfigUserIdleMessages> & messages) { DARABONBA_PTR_SET_VALUE(messages_, messages) };
    inline AIAgentConfigAutoSpeechConfigUserIdle& setMessages(vector<Models::AIAgentConfigAutoSpeechConfigUserIdleMessages> && messages) { DARABONBA_PTR_SET_RVALUE(messages_, messages) };


    // waitTime Field Functions 
    bool hasWaitTime() const { return this->waitTime_ != nullptr;};
    void deleteWaitTime() { this->waitTime_ = nullptr;};
    inline int32_t waitTime() const { DARABONBA_PTR_GET_DEFAULT(waitTime_, 0) };
    inline AIAgentConfigAutoSpeechConfigUserIdle& setWaitTime(int32_t waitTime) { DARABONBA_PTR_SET_VALUE(waitTime_, waitTime) };


  protected:
    std::shared_ptr<int32_t> maxRepeats_ = nullptr;
    std::shared_ptr<vector<Models::AIAgentConfigAutoSpeechConfigUserIdleMessages>> messages_ = nullptr;
    std::shared_ptr<int32_t> waitTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
