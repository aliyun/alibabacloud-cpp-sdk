// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEXTTRANSLATEREQUESTEXT_HPP_
#define ALIBABACLOUD_MODELS_TEXTTRANSLATEREQUESTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/TextTranslateRequestExtConfig.hpp>
#include <vector>
#include <alibabacloud/models/TextTranslateRequestExtExamples.hpp>
#include <alibabacloud/models/TextTranslateRequestExtTerminologies.hpp>
#include <alibabacloud/models/TextTranslateRequestExtTextTransform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class TextTranslateRequestExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TextTranslateRequestExt& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(domainHint, domainHint_);
      DARABONBA_PTR_TO_JSON(examples, examples_);
      DARABONBA_PTR_TO_JSON(sensitives, sensitives_);
      DARABONBA_PTR_TO_JSON(terminologies, terminologies_);
      DARABONBA_PTR_TO_JSON(textTransform, textTransform_);
    };
    friend void from_json(const Darabonba::Json& j, TextTranslateRequestExt& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(domainHint, domainHint_);
      DARABONBA_PTR_FROM_JSON(examples, examples_);
      DARABONBA_PTR_FROM_JSON(sensitives, sensitives_);
      DARABONBA_PTR_FROM_JSON(terminologies, terminologies_);
      DARABONBA_PTR_FROM_JSON(textTransform, textTransform_);
    };
    TextTranslateRequestExt() = default ;
    TextTranslateRequestExt(const TextTranslateRequestExt &) = default ;
    TextTranslateRequestExt(TextTranslateRequestExt &&) = default ;
    TextTranslateRequestExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TextTranslateRequestExt() = default ;
    TextTranslateRequestExt& operator=(const TextTranslateRequestExt &) = default ;
    TextTranslateRequestExt& operator=(TextTranslateRequestExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->config_ != nullptr
        && this->domainHint_ != nullptr && this->examples_ != nullptr && this->sensitives_ != nullptr && this->terminologies_ != nullptr && this->textTransform_ != nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::TextTranslateRequestExtConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::TextTranslateRequestExtConfig) };
    inline Models::TextTranslateRequestExtConfig config() { DARABONBA_PTR_GET(config_, Models::TextTranslateRequestExtConfig) };
    inline TextTranslateRequestExt& setConfig(const Models::TextTranslateRequestExtConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline TextTranslateRequestExt& setConfig(Models::TextTranslateRequestExtConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // domainHint Field Functions 
    bool hasDomainHint() const { return this->domainHint_ != nullptr;};
    void deleteDomainHint() { this->domainHint_ = nullptr;};
    inline string domainHint() const { DARABONBA_PTR_GET_DEFAULT(domainHint_, "") };
    inline TextTranslateRequestExt& setDomainHint(string domainHint) { DARABONBA_PTR_SET_VALUE(domainHint_, domainHint) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<Models::TextTranslateRequestExtExamples> & examples() const { DARABONBA_PTR_GET_CONST(examples_, vector<Models::TextTranslateRequestExtExamples>) };
    inline vector<Models::TextTranslateRequestExtExamples> examples() { DARABONBA_PTR_GET(examples_, vector<Models::TextTranslateRequestExtExamples>) };
    inline TextTranslateRequestExt& setExamples(const vector<Models::TextTranslateRequestExtExamples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline TextTranslateRequestExt& setExamples(vector<Models::TextTranslateRequestExtExamples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // sensitives Field Functions 
    bool hasSensitives() const { return this->sensitives_ != nullptr;};
    void deleteSensitives() { this->sensitives_ = nullptr;};
    inline const vector<string> & sensitives() const { DARABONBA_PTR_GET_CONST(sensitives_, vector<string>) };
    inline vector<string> sensitives() { DARABONBA_PTR_GET(sensitives_, vector<string>) };
    inline TextTranslateRequestExt& setSensitives(const vector<string> & sensitives) { DARABONBA_PTR_SET_VALUE(sensitives_, sensitives) };
    inline TextTranslateRequestExt& setSensitives(vector<string> && sensitives) { DARABONBA_PTR_SET_RVALUE(sensitives_, sensitives) };


    // terminologies Field Functions 
    bool hasTerminologies() const { return this->terminologies_ != nullptr;};
    void deleteTerminologies() { this->terminologies_ = nullptr;};
    inline const vector<Models::TextTranslateRequestExtTerminologies> & terminologies() const { DARABONBA_PTR_GET_CONST(terminologies_, vector<Models::TextTranslateRequestExtTerminologies>) };
    inline vector<Models::TextTranslateRequestExtTerminologies> terminologies() { DARABONBA_PTR_GET(terminologies_, vector<Models::TextTranslateRequestExtTerminologies>) };
    inline TextTranslateRequestExt& setTerminologies(const vector<Models::TextTranslateRequestExtTerminologies> & terminologies) { DARABONBA_PTR_SET_VALUE(terminologies_, terminologies) };
    inline TextTranslateRequestExt& setTerminologies(vector<Models::TextTranslateRequestExtTerminologies> && terminologies) { DARABONBA_PTR_SET_RVALUE(terminologies_, terminologies) };


    // textTransform Field Functions 
    bool hasTextTransform() const { return this->textTransform_ != nullptr;};
    void deleteTextTransform() { this->textTransform_ = nullptr;};
    inline const Models::TextTranslateRequestExtTextTransform & textTransform() const { DARABONBA_PTR_GET_CONST(textTransform_, Models::TextTranslateRequestExtTextTransform) };
    inline Models::TextTranslateRequestExtTextTransform textTransform() { DARABONBA_PTR_GET(textTransform_, Models::TextTranslateRequestExtTextTransform) };
    inline TextTranslateRequestExt& setTextTransform(const Models::TextTranslateRequestExtTextTransform & textTransform) { DARABONBA_PTR_SET_VALUE(textTransform_, textTransform) };
    inline TextTranslateRequestExt& setTextTransform(Models::TextTranslateRequestExtTextTransform && textTransform) { DARABONBA_PTR_SET_RVALUE(textTransform_, textTransform) };


  protected:
    std::shared_ptr<Models::TextTranslateRequestExtConfig> config_ = nullptr;
    std::shared_ptr<string> domainHint_ = nullptr;
    std::shared_ptr<vector<Models::TextTranslateRequestExtExamples>> examples_ = nullptr;
    std::shared_ptr<vector<string>> sensitives_ = nullptr;
    std::shared_ptr<vector<Models::TextTranslateRequestExtTerminologies>> terminologies_ = nullptr;
    std::shared_ptr<Models::TextTranslateRequestExtTextTransform> textTransform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
