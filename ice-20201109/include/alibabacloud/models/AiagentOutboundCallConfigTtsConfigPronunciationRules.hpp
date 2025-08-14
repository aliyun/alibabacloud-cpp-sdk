// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGTTSCONFIGPRONUNCIATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTOUTBOUNDCALLCONFIGTTSCONFIGPRONUNCIATIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentOutboundCallConfigTtsConfigPronunciationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentOutboundCallConfigTtsConfigPronunciationRules& obj) { 
      DARABONBA_PTR_TO_JSON(Pronunciation, pronunciation_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentOutboundCallConfigTtsConfigPronunciationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Pronunciation, pronunciation_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    AIAgentOutboundCallConfigTtsConfigPronunciationRules() = default ;
    AIAgentOutboundCallConfigTtsConfigPronunciationRules(const AIAgentOutboundCallConfigTtsConfigPronunciationRules &) = default ;
    AIAgentOutboundCallConfigTtsConfigPronunciationRules(AIAgentOutboundCallConfigTtsConfigPronunciationRules &&) = default ;
    AIAgentOutboundCallConfigTtsConfigPronunciationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentOutboundCallConfigTtsConfigPronunciationRules() = default ;
    AIAgentOutboundCallConfigTtsConfigPronunciationRules& operator=(const AIAgentOutboundCallConfigTtsConfigPronunciationRules &) = default ;
    AIAgentOutboundCallConfigTtsConfigPronunciationRules& operator=(AIAgentOutboundCallConfigTtsConfigPronunciationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pronunciation_ != nullptr
        && this->type_ != nullptr && this->word_ != nullptr; };
    // pronunciation Field Functions 
    bool hasPronunciation() const { return this->pronunciation_ != nullptr;};
    void deletePronunciation() { this->pronunciation_ = nullptr;};
    inline string pronunciation() const { DARABONBA_PTR_GET_DEFAULT(pronunciation_, "") };
    inline AIAgentOutboundCallConfigTtsConfigPronunciationRules& setPronunciation(string pronunciation) { DARABONBA_PTR_SET_VALUE(pronunciation_, pronunciation) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AIAgentOutboundCallConfigTtsConfigPronunciationRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline AIAgentOutboundCallConfigTtsConfigPronunciationRules& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    std::shared_ptr<string> pronunciation_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
