// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPAGENTTEMPLATEREQUESTASRCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPAGENTTEMPLATEREQUESTASRCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestAsrConfigVadConfig.hpp>
#include <vector>
#include <alibabacloud/models/ModifyAppAgentTemplateRequestAsrConfigWordWeights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppAgentTemplateRequestAsrConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppAgentTemplateRequestAsrConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MaxSentenceSilence, maxSentenceSilence_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VadConfig, vadConfig_);
      DARABONBA_PTR_TO_JSON(VocabularyId, vocabularyId_);
      DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppAgentTemplateRequestAsrConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxSentenceSilence, maxSentenceSilence_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VadConfig, vadConfig_);
      DARABONBA_PTR_FROM_JSON(VocabularyId, vocabularyId_);
      DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
    };
    ModifyAppAgentTemplateRequestAsrConfig() = default ;
    ModifyAppAgentTemplateRequestAsrConfig(const ModifyAppAgentTemplateRequestAsrConfig &) = default ;
    ModifyAppAgentTemplateRequestAsrConfig(ModifyAppAgentTemplateRequestAsrConfig &&) = default ;
    ModifyAppAgentTemplateRequestAsrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppAgentTemplateRequestAsrConfig() = default ;
    ModifyAppAgentTemplateRequestAsrConfig& operator=(const ModifyAppAgentTemplateRequestAsrConfig &) = default ;
    ModifyAppAgentTemplateRequestAsrConfig& operator=(ModifyAppAgentTemplateRequestAsrConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxSentenceSilence_ != nullptr
        && this->name_ != nullptr && this->vadConfig_ != nullptr && this->vocabularyId_ != nullptr && this->wordWeights_ != nullptr; };
    // maxSentenceSilence Field Functions 
    bool hasMaxSentenceSilence() const { return this->maxSentenceSilence_ != nullptr;};
    void deleteMaxSentenceSilence() { this->maxSentenceSilence_ = nullptr;};
    inline int32_t maxSentenceSilence() const { DARABONBA_PTR_GET_DEFAULT(maxSentenceSilence_, 0) };
    inline ModifyAppAgentTemplateRequestAsrConfig& setMaxSentenceSilence(int32_t maxSentenceSilence) { DARABONBA_PTR_SET_VALUE(maxSentenceSilence_, maxSentenceSilence) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyAppAgentTemplateRequestAsrConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vadConfig Field Functions 
    bool hasVadConfig() const { return this->vadConfig_ != nullptr;};
    void deleteVadConfig() { this->vadConfig_ = nullptr;};
    inline const Models::ModifyAppAgentTemplateRequestAsrConfigVadConfig & vadConfig() const { DARABONBA_PTR_GET_CONST(vadConfig_, Models::ModifyAppAgentTemplateRequestAsrConfigVadConfig) };
    inline Models::ModifyAppAgentTemplateRequestAsrConfigVadConfig vadConfig() { DARABONBA_PTR_GET(vadConfig_, Models::ModifyAppAgentTemplateRequestAsrConfigVadConfig) };
    inline ModifyAppAgentTemplateRequestAsrConfig& setVadConfig(const Models::ModifyAppAgentTemplateRequestAsrConfigVadConfig & vadConfig) { DARABONBA_PTR_SET_VALUE(vadConfig_, vadConfig) };
    inline ModifyAppAgentTemplateRequestAsrConfig& setVadConfig(Models::ModifyAppAgentTemplateRequestAsrConfigVadConfig && vadConfig) { DARABONBA_PTR_SET_RVALUE(vadConfig_, vadConfig) };


    // vocabularyId Field Functions 
    bool hasVocabularyId() const { return this->vocabularyId_ != nullptr;};
    void deleteVocabularyId() { this->vocabularyId_ = nullptr;};
    inline string vocabularyId() const { DARABONBA_PTR_GET_DEFAULT(vocabularyId_, "") };
    inline ModifyAppAgentTemplateRequestAsrConfig& setVocabularyId(string vocabularyId) { DARABONBA_PTR_SET_VALUE(vocabularyId_, vocabularyId) };


    // wordWeights Field Functions 
    bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
    void deleteWordWeights() { this->wordWeights_ = nullptr;};
    inline const vector<Models::ModifyAppAgentTemplateRequestAsrConfigWordWeights> & wordWeights() const { DARABONBA_PTR_GET_CONST(wordWeights_, vector<Models::ModifyAppAgentTemplateRequestAsrConfigWordWeights>) };
    inline vector<Models::ModifyAppAgentTemplateRequestAsrConfigWordWeights> wordWeights() { DARABONBA_PTR_GET(wordWeights_, vector<Models::ModifyAppAgentTemplateRequestAsrConfigWordWeights>) };
    inline ModifyAppAgentTemplateRequestAsrConfig& setWordWeights(const vector<Models::ModifyAppAgentTemplateRequestAsrConfigWordWeights> & wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };
    inline ModifyAppAgentTemplateRequestAsrConfig& setWordWeights(vector<Models::ModifyAppAgentTemplateRequestAsrConfigWordWeights> && wordWeights) { DARABONBA_PTR_SET_RVALUE(wordWeights_, wordWeights) };


  protected:
    std::shared_ptr<int32_t> maxSentenceSilence_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::ModifyAppAgentTemplateRequestAsrConfigVadConfig> vadConfig_ = nullptr;
    std::shared_ptr<string> vocabularyId_ = nullptr;
    std::shared_ptr<vector<Models::ModifyAppAgentTemplateRequestAsrConfigWordWeights>> wordWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
