// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_AIAGENTCONFIGASRCONFIG_HPP_
#define ALIBABACLOUD_MODELS_AIAGENTCONFIGASRCONFIG_HPP_
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
  class AIAgentConfigAsrConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AIAgentConfigAsrConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AsrHotWords, asrHotWords_);
      DARABONBA_PTR_TO_JSON(AsrLanguageId, asrLanguageId_);
      DARABONBA_PTR_TO_JSON(AsrMaxSilence, asrMaxSilence_);
      DARABONBA_PTR_TO_JSON(CustomParams, customParams_);
      DARABONBA_PTR_TO_JSON(VadDuration, vadDuration_);
      DARABONBA_PTR_TO_JSON(VadLevel, vadLevel_);
    };
    friend void from_json(const Darabonba::Json& j, AIAgentConfigAsrConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AsrHotWords, asrHotWords_);
      DARABONBA_PTR_FROM_JSON(AsrLanguageId, asrLanguageId_);
      DARABONBA_PTR_FROM_JSON(AsrMaxSilence, asrMaxSilence_);
      DARABONBA_PTR_FROM_JSON(CustomParams, customParams_);
      DARABONBA_PTR_FROM_JSON(VadDuration, vadDuration_);
      DARABONBA_PTR_FROM_JSON(VadLevel, vadLevel_);
    };
    AIAgentConfigAsrConfig() = default ;
    AIAgentConfigAsrConfig(const AIAgentConfigAsrConfig &) = default ;
    AIAgentConfigAsrConfig(AIAgentConfigAsrConfig &&) = default ;
    AIAgentConfigAsrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AIAgentConfigAsrConfig() = default ;
    AIAgentConfigAsrConfig& operator=(const AIAgentConfigAsrConfig &) = default ;
    AIAgentConfigAsrConfig& operator=(AIAgentConfigAsrConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->asrHotWords_ != nullptr
        && this->asrLanguageId_ != nullptr && this->asrMaxSilence_ != nullptr && this->customParams_ != nullptr && this->vadDuration_ != nullptr && this->vadLevel_ != nullptr; };
    // asrHotWords Field Functions 
    bool hasAsrHotWords() const { return this->asrHotWords_ != nullptr;};
    void deleteAsrHotWords() { this->asrHotWords_ = nullptr;};
    inline const vector<string> & asrHotWords() const { DARABONBA_PTR_GET_CONST(asrHotWords_, vector<string>) };
    inline vector<string> asrHotWords() { DARABONBA_PTR_GET(asrHotWords_, vector<string>) };
    inline AIAgentConfigAsrConfig& setAsrHotWords(const vector<string> & asrHotWords) { DARABONBA_PTR_SET_VALUE(asrHotWords_, asrHotWords) };
    inline AIAgentConfigAsrConfig& setAsrHotWords(vector<string> && asrHotWords) { DARABONBA_PTR_SET_RVALUE(asrHotWords_, asrHotWords) };


    // asrLanguageId Field Functions 
    bool hasAsrLanguageId() const { return this->asrLanguageId_ != nullptr;};
    void deleteAsrLanguageId() { this->asrLanguageId_ = nullptr;};
    inline string asrLanguageId() const { DARABONBA_PTR_GET_DEFAULT(asrLanguageId_, "") };
    inline AIAgentConfigAsrConfig& setAsrLanguageId(string asrLanguageId) { DARABONBA_PTR_SET_VALUE(asrLanguageId_, asrLanguageId) };


    // asrMaxSilence Field Functions 
    bool hasAsrMaxSilence() const { return this->asrMaxSilence_ != nullptr;};
    void deleteAsrMaxSilence() { this->asrMaxSilence_ = nullptr;};
    inline int32_t asrMaxSilence() const { DARABONBA_PTR_GET_DEFAULT(asrMaxSilence_, 0) };
    inline AIAgentConfigAsrConfig& setAsrMaxSilence(int32_t asrMaxSilence) { DARABONBA_PTR_SET_VALUE(asrMaxSilence_, asrMaxSilence) };


    // customParams Field Functions 
    bool hasCustomParams() const { return this->customParams_ != nullptr;};
    void deleteCustomParams() { this->customParams_ = nullptr;};
    inline string customParams() const { DARABONBA_PTR_GET_DEFAULT(customParams_, "") };
    inline AIAgentConfigAsrConfig& setCustomParams(string customParams) { DARABONBA_PTR_SET_VALUE(customParams_, customParams) };


    // vadDuration Field Functions 
    bool hasVadDuration() const { return this->vadDuration_ != nullptr;};
    void deleteVadDuration() { this->vadDuration_ = nullptr;};
    inline int32_t vadDuration() const { DARABONBA_PTR_GET_DEFAULT(vadDuration_, 0) };
    inline AIAgentConfigAsrConfig& setVadDuration(int32_t vadDuration) { DARABONBA_PTR_SET_VALUE(vadDuration_, vadDuration) };


    // vadLevel Field Functions 
    bool hasVadLevel() const { return this->vadLevel_ != nullptr;};
    void deleteVadLevel() { this->vadLevel_ = nullptr;};
    inline int32_t vadLevel() const { DARABONBA_PTR_GET_DEFAULT(vadLevel_, 0) };
    inline AIAgentConfigAsrConfig& setVadLevel(int32_t vadLevel) { DARABONBA_PTR_SET_VALUE(vadLevel_, vadLevel) };


  protected:
    std::shared_ptr<vector<string>> asrHotWords_ = nullptr;
    std::shared_ptr<string> asrLanguageId_ = nullptr;
    std::shared_ptr<int32_t> asrMaxSilence_ = nullptr;
    std::shared_ptr<string> customParams_ = nullptr;
    std::shared_ptr<int32_t> vadDuration_ = nullptr;
    std::shared_ptr<int32_t> vadLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
