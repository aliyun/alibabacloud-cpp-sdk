// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGINTERRUPTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGINTERRUPTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigInterruptConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigInterruptConfig& obj) { 
      DARABONBA_PTR_TO_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
      DARABONBA_PTR_TO_JSON(InterruptWords, interruptWords_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigInterruptConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableVoiceInterrupt, enableVoiceInterrupt_);
      DARABONBA_PTR_FROM_JSON(InterruptWords, interruptWords_);
    };
    AIAgentConfigInterruptConfig() = default ;
    AIAgentConfigInterruptConfig(const AIAgentConfigInterruptConfig &) = default ;
    AIAgentConfigInterruptConfig(AIAgentConfigInterruptConfig &&) = default ;
    AIAgentConfigInterruptConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigInterruptConfig() = default ;
    AIAgentConfigInterruptConfig& operator=(const AIAgentConfigInterruptConfig &) = default ;
    AIAgentConfigInterruptConfig& operator=(AIAgentConfigInterruptConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->enableVoiceInterrupt_ != nullptr
        && this->interruptWords_ != nullptr; };
    // enableVoiceInterrupt Field Functions 
    bool hasEnableVoiceInterrupt() const { return this->enableVoiceInterrupt_ != nullptr;};
    void deleteEnableVoiceInterrupt() { this->enableVoiceInterrupt_ = nullptr;};
    inline bool enableVoiceInterrupt() const { DARABONBA_PTR_GET_DEFAULT(enableVoiceInterrupt_, false) };
    inline AIAgentConfigInterruptConfig& setEnableVoiceInterrupt(bool enableVoiceInterrupt) { DARABONBA_PTR_SET_VALUE(enableVoiceInterrupt_, enableVoiceInterrupt) };


    // interruptWords Field Functions 
    bool hasInterruptWords() const { return this->interruptWords_ != nullptr;};
    void deleteInterruptWords() { this->interruptWords_ = nullptr;};
    inline const vector<string> & interruptWords() const { DARABONBA_PTR_GET_CONST(interruptWords_, vector<string>) };
    inline vector<string> interruptWords() { DARABONBA_PTR_GET(interruptWords_, vector<string>) };
    inline AIAgentConfigInterruptConfig& setInterruptWords(const vector<string> & interruptWords) { DARABONBA_PTR_SET_VALUE(interruptWords_, interruptWords) };
    inline AIAgentConfigInterruptConfig& setInterruptWords(vector<string> && interruptWords) { DARABONBA_PTR_SET_RVALUE(interruptWords_, interruptWords) };


  protected:
    std::shared_ptr<bool> enableVoiceInterrupt_ = nullptr;
    std::shared_ptr<vector<string>> interruptWords_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
