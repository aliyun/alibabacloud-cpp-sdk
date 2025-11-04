// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGTTSCONFIGPRONUNCIATIONRULES_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGTTSCONFIGPRONUNCIATIONRULES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class AIAgentConfigTtsConfigPronunciationRules : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigTtsConfigPronunciationRules& obj) { 
      DARABONBA_PTR_TO_JSON(Pronunciation, pronunciation_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Word, word_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigTtsConfigPronunciationRules& obj) { 
      DARABONBA_PTR_FROM_JSON(Pronunciation, pronunciation_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Word, word_);
    };
    AIAgentConfigTtsConfigPronunciationRules() = default ;
    AIAgentConfigTtsConfigPronunciationRules(const AIAgentConfigTtsConfigPronunciationRules &) = default ;
    AIAgentConfigTtsConfigPronunciationRules(AIAgentConfigTtsConfigPronunciationRules &&) = default ;
    AIAgentConfigTtsConfigPronunciationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigTtsConfigPronunciationRules() = default ;
    AIAgentConfigTtsConfigPronunciationRules& operator=(const AIAgentConfigTtsConfigPronunciationRules &) = default ;
    AIAgentConfigTtsConfigPronunciationRules& operator=(AIAgentConfigTtsConfigPronunciationRules &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pronunciation_ == nullptr
        && return this->type_ == nullptr && return this->word_ == nullptr; };
    // pronunciation Field Functions 
    bool hasPronunciation() const { return this->pronunciation_ != nullptr;};
    void deletePronunciation() { this->pronunciation_ = nullptr;};
    inline string pronunciation() const { DARABONBA_PTR_GET_DEFAULT(pronunciation_, "") };
    inline AIAgentConfigTtsConfigPronunciationRules& setPronunciation(string pronunciation) { DARABONBA_PTR_SET_VALUE(pronunciation_, pronunciation) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AIAgentConfigTtsConfigPronunciationRules& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // word Field Functions 
    bool hasWord() const { return this->word_ != nullptr;};
    void deleteWord() { this->word_ = nullptr;};
    inline string word() const { DARABONBA_PTR_GET_DEFAULT(word_, "") };
    inline AIAgentConfigTtsConfigPronunciationRules& setWord(string word) { DARABONBA_PTR_SET_VALUE(word_, word) };


  protected:
    std::shared_ptr<string> pronunciation_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> word_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
