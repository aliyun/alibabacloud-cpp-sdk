// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGASRCONFIG_HPP_
#define ALIBABACLOUD_MODELS_STARTAGENTREQUESTVOICECHATCONFIGASRCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/StartAgentRequestVoiceChatConfigASRConfigVadConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class StartAgentRequestVoiceChatConfigASRConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartAgentRequestVoiceChatConfigASRConfig& obj) { 
      DARABONBA_PTR_TO_JSON(LanguageHints, languageHints_);
      DARABONBA_PTR_TO_JSON(MaxSentenceSilence, maxSentenceSilence_);
      DARABONBA_PTR_TO_JSON(SemanticPunctuationEnabled, semanticPunctuationEnabled_);
      DARABONBA_PTR_TO_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_TO_JSON(VadConfig, vadConfig_);
      DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
    };
    friend void from_json(const Darabonba::Json& j, StartAgentRequestVoiceChatConfigASRConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(LanguageHints, languageHints_);
      DARABONBA_PTR_FROM_JSON(MaxSentenceSilence, maxSentenceSilence_);
      DARABONBA_PTR_FROM_JSON(SemanticPunctuationEnabled, semanticPunctuationEnabled_);
      DARABONBA_PTR_FROM_JSON(SourceLanguage, sourceLanguage_);
      DARABONBA_PTR_FROM_JSON(VadConfig, vadConfig_);
      DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
    };
    StartAgentRequestVoiceChatConfigASRConfig() = default ;
    StartAgentRequestVoiceChatConfigASRConfig(const StartAgentRequestVoiceChatConfigASRConfig &) = default ;
    StartAgentRequestVoiceChatConfigASRConfig(StartAgentRequestVoiceChatConfigASRConfig &&) = default ;
    StartAgentRequestVoiceChatConfigASRConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartAgentRequestVoiceChatConfigASRConfig() = default ;
    StartAgentRequestVoiceChatConfigASRConfig& operator=(const StartAgentRequestVoiceChatConfigASRConfig &) = default ;
    StartAgentRequestVoiceChatConfigASRConfig& operator=(StartAgentRequestVoiceChatConfigASRConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->languageHints_ == nullptr
        && return this->maxSentenceSilence_ == nullptr && return this->semanticPunctuationEnabled_ == nullptr && return this->sourceLanguage_ == nullptr && return this->vadConfig_ == nullptr && return this->vocabularyId_ == nullptr; };
    // languageHints Field Functions 
    bool hasLanguageHints() const { return this->languageHints_ != nullptr;};
    void deleteLanguageHints() { this->languageHints_ = nullptr;};
    inline const vector<string> & languageHints() const { DARABONBA_PTR_GET_CONST(languageHints_, vector<string>) };
    inline vector<string> languageHints() { DARABONBA_PTR_GET(languageHints_, vector<string>) };
    inline StartAgentRequestVoiceChatConfigASRConfig& setLanguageHints(const vector<string> & languageHints) { DARABONBA_PTR_SET_VALUE(languageHints_, languageHints) };
    inline StartAgentRequestVoiceChatConfigASRConfig& setLanguageHints(vector<string> && languageHints) { DARABONBA_PTR_SET_RVALUE(languageHints_, languageHints) };


    // maxSentenceSilence Field Functions 
    bool hasMaxSentenceSilence() const { return this->maxSentenceSilence_ != nullptr;};
    void deleteMaxSentenceSilence() { this->maxSentenceSilence_ = nullptr;};
    inline int32_t maxSentenceSilence() const { DARABONBA_PTR_GET_DEFAULT(maxSentenceSilence_, 0) };
    inline StartAgentRequestVoiceChatConfigASRConfig& setMaxSentenceSilence(int32_t maxSentenceSilence) { DARABONBA_PTR_SET_VALUE(maxSentenceSilence_, maxSentenceSilence) };


    // semanticPunctuationEnabled Field Functions 
    bool hasSemanticPunctuationEnabled() const { return this->semanticPunctuationEnabled_ != nullptr;};
    void deleteSemanticPunctuationEnabled() { this->semanticPunctuationEnabled_ = nullptr;};
    inline bool semanticPunctuationEnabled() const { DARABONBA_PTR_GET_DEFAULT(semanticPunctuationEnabled_, false) };
    inline StartAgentRequestVoiceChatConfigASRConfig& setSemanticPunctuationEnabled(bool semanticPunctuationEnabled) { DARABONBA_PTR_SET_VALUE(semanticPunctuationEnabled_, semanticPunctuationEnabled) };


    // sourceLanguage Field Functions 
    bool hasSourceLanguage() const { return this->sourceLanguage_ != nullptr;};
    void deleteSourceLanguage() { this->sourceLanguage_ = nullptr;};
    inline string sourceLanguage() const { DARABONBA_PTR_GET_DEFAULT(sourceLanguage_, "") };
    inline StartAgentRequestVoiceChatConfigASRConfig& setSourceLanguage(string sourceLanguage) { DARABONBA_PTR_SET_VALUE(sourceLanguage_, sourceLanguage) };


    // vadConfig Field Functions 
    bool hasVadConfig() const { return this->vadConfig_ != nullptr;};
    void deleteVadConfig() { this->vadConfig_ = nullptr;};
    inline const Models::StartAgentRequestVoiceChatConfigASRConfigVadConfig & vadConfig() const { DARABONBA_PTR_GET_CONST(vadConfig_, Models::StartAgentRequestVoiceChatConfigASRConfigVadConfig) };
    inline Models::StartAgentRequestVoiceChatConfigASRConfigVadConfig vadConfig() { DARABONBA_PTR_GET(vadConfig_, Models::StartAgentRequestVoiceChatConfigASRConfigVadConfig) };
    inline StartAgentRequestVoiceChatConfigASRConfig& setVadConfig(const Models::StartAgentRequestVoiceChatConfigASRConfigVadConfig & vadConfig) { DARABONBA_PTR_SET_VALUE(vadConfig_, vadConfig) };
    inline StartAgentRequestVoiceChatConfigASRConfig& setVadConfig(Models::StartAgentRequestVoiceChatConfigASRConfigVadConfig && vadConfig) { DARABONBA_PTR_SET_RVALUE(vadConfig_, vadConfig) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline StartAgentRequestVoiceChatConfigASRConfig& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


  protected:
    std::shared_ptr<vector<string>> languageHints_ = nullptr;
    std::shared_ptr<int32_t> maxSentenceSilence_ = nullptr;
    std::shared_ptr<bool> semanticPunctuationEnabled_ = nullptr;
    std::shared_ptr<string> sourceLanguage_ = nullptr;
    std::shared_ptr<Models::StartAgentRequestVoiceChatConfigASRConfigVadConfig> vadConfig_ = nullptr;
    std::shared_ptr<string> vocabularyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
