// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUESTASRCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPAGENTTEMPLATEREQUESTASRCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppAgentTemplateRequestAsrConfigVadConfig.hpp>
#include <vector>
#include <alibabacloud/models/CreateAppAgentTemplateRequestAsrConfigWordWeights.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppAgentTemplateRequestAsrConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppAgentTemplateRequestAsrConfig& obj) { 
      DARABONBA_PTR_TO_JSON(MaxSentenceSilence, maxSentenceSilence_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VadConfig, vadConfig_);
      DARABONBA_PTR_TO_JSON(WordWeights, wordWeights_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppAgentTemplateRequestAsrConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxSentenceSilence, maxSentenceSilence_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VadConfig, vadConfig_);
      DARABONBA_PTR_FROM_JSON(WordWeights, wordWeights_);
    };
    CreateAppAgentTemplateRequestAsrConfig() = default ;
    CreateAppAgentTemplateRequestAsrConfig(const CreateAppAgentTemplateRequestAsrConfig &) = default ;
    CreateAppAgentTemplateRequestAsrConfig(CreateAppAgentTemplateRequestAsrConfig &&) = default ;
    CreateAppAgentTemplateRequestAsrConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppAgentTemplateRequestAsrConfig() = default ;
    CreateAppAgentTemplateRequestAsrConfig& operator=(const CreateAppAgentTemplateRequestAsrConfig &) = default ;
    CreateAppAgentTemplateRequestAsrConfig& operator=(CreateAppAgentTemplateRequestAsrConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxSentenceSilence_ == nullptr
        && return this->name_ == nullptr && return this->vadConfig_ == nullptr && return this->wordWeights_ == nullptr; };
    // maxSentenceSilence Field Functions 
    bool hasMaxSentenceSilence() const { return this->maxSentenceSilence_ != nullptr;};
    void deleteMaxSentenceSilence() { this->maxSentenceSilence_ = nullptr;};
    inline int32_t maxSentenceSilence() const { DARABONBA_PTR_GET_DEFAULT(maxSentenceSilence_, 0) };
    inline CreateAppAgentTemplateRequestAsrConfig& setMaxSentenceSilence(int32_t maxSentenceSilence) { DARABONBA_PTR_SET_VALUE(maxSentenceSilence_, maxSentenceSilence) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateAppAgentTemplateRequestAsrConfig& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vadConfig Field Functions 
    bool hasVadConfig() const { return this->vadConfig_ != nullptr;};
    void deleteVadConfig() { this->vadConfig_ = nullptr;};
    inline const Models::CreateAppAgentTemplateRequestAsrConfigVadConfig & vadConfig() const { DARABONBA_PTR_GET_CONST(vadConfig_, Models::CreateAppAgentTemplateRequestAsrConfigVadConfig) };
    inline Models::CreateAppAgentTemplateRequestAsrConfigVadConfig vadConfig() { DARABONBA_PTR_GET(vadConfig_, Models::CreateAppAgentTemplateRequestAsrConfigVadConfig) };
    inline CreateAppAgentTemplateRequestAsrConfig& setVadConfig(const Models::CreateAppAgentTemplateRequestAsrConfigVadConfig & vadConfig) { DARABONBA_PTR_SET_VALUE(vadConfig_, vadConfig) };
    inline CreateAppAgentTemplateRequestAsrConfig& setVadConfig(Models::CreateAppAgentTemplateRequestAsrConfigVadConfig && vadConfig) { DARABONBA_PTR_SET_RVALUE(vadConfig_, vadConfig) };


    // wordWeights Field Functions 
    bool hasWordWeights() const { return this->wordWeights_ != nullptr;};
    void deleteWordWeights() { this->wordWeights_ = nullptr;};
    inline const vector<Models::CreateAppAgentTemplateRequestAsrConfigWordWeights> & wordWeights() const { DARABONBA_PTR_GET_CONST(wordWeights_, vector<Models::CreateAppAgentTemplateRequestAsrConfigWordWeights>) };
    inline vector<Models::CreateAppAgentTemplateRequestAsrConfigWordWeights> wordWeights() { DARABONBA_PTR_GET(wordWeights_, vector<Models::CreateAppAgentTemplateRequestAsrConfigWordWeights>) };
    inline CreateAppAgentTemplateRequestAsrConfig& setWordWeights(const vector<Models::CreateAppAgentTemplateRequestAsrConfigWordWeights> & wordWeights) { DARABONBA_PTR_SET_VALUE(wordWeights_, wordWeights) };
    inline CreateAppAgentTemplateRequestAsrConfig& setWordWeights(vector<Models::CreateAppAgentTemplateRequestAsrConfigWordWeights> && wordWeights) { DARABONBA_PTR_SET_RVALUE(wordWeights_, wordWeights) };


  protected:
    std::shared_ptr<int32_t> maxSentenceSilence_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::CreateAppAgentTemplateRequestAsrConfigVadConfig> vadConfig_ = nullptr;
    std::shared_ptr<vector<Models::CreateAppAgentTemplateRequestAsrConfigWordWeights>> wordWeights_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
