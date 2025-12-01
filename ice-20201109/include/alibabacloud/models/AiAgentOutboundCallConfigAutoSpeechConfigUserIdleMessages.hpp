// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGAUTOSPEECHCONFIGUSERIDLEMESSAGES_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGAUTOSPEECHCONFIGUSERIDLEMESSAGES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages& obj) { 
      DARABONBA_PTR_TO_JSON(Probability, probability_);
      DARABONBA_PTR_TO_JSON(Text, text_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages& obj) { 
      DARABONBA_PTR_FROM_JSON(Probability, probability_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
    };
    AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages() = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages(const AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages &) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages(AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages &&) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages() = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages& operator=(const AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages &) = default ;
    AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages& operator=(AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->probability_ == nullptr
        && return this->text_ == nullptr; };
    // probability Field Functions 
    bool hasProbability() const { return this->probability_ != nullptr;};
    void deleteProbability() { this->probability_ = nullptr;};
    inline double probability() const { DARABONBA_PTR_GET_DEFAULT(probability_, 0.0) };
    inline AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages& setProbability(double probability) { DARABONBA_PTR_SET_VALUE(probability_, probability) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline AIAgentOutboundCallConfigAutoSpeechConfigUserIdleMessages& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


  protected:
    std::shared_ptr<double> probability_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
