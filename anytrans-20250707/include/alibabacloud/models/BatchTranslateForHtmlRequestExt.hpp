// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATEFORHTMLREQUESTEXT_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATEFORHTMLREQUESTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchTranslateForHtmlRequestExtConfig.hpp>
#include <vector>
#include <alibabacloud/models/BatchTranslateForHtmlRequestExtExamples.hpp>
#include <alibabacloud/models/BatchTranslateForHtmlRequestExtTerminologies.hpp>
#include <alibabacloud/models/BatchTranslateForHtmlRequestExtTextTransform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateForHtmlRequestExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateForHtmlRequestExt& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(domainHint, domainHint_);
      DARABONBA_PTR_TO_JSON(examples, examples_);
      DARABONBA_PTR_TO_JSON(sensitives, sensitives_);
      DARABONBA_PTR_TO_JSON(terminologies, terminologies_);
      DARABONBA_PTR_TO_JSON(textTransform, textTransform_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateForHtmlRequestExt& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(domainHint, domainHint_);
      DARABONBA_PTR_FROM_JSON(examples, examples_);
      DARABONBA_PTR_FROM_JSON(sensitives, sensitives_);
      DARABONBA_PTR_FROM_JSON(terminologies, terminologies_);
      DARABONBA_PTR_FROM_JSON(textTransform, textTransform_);
    };
    BatchTranslateForHtmlRequestExt() = default ;
    BatchTranslateForHtmlRequestExt(const BatchTranslateForHtmlRequestExt &) = default ;
    BatchTranslateForHtmlRequestExt(BatchTranslateForHtmlRequestExt &&) = default ;
    BatchTranslateForHtmlRequestExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateForHtmlRequestExt() = default ;
    BatchTranslateForHtmlRequestExt& operator=(const BatchTranslateForHtmlRequestExt &) = default ;
    BatchTranslateForHtmlRequestExt& operator=(BatchTranslateForHtmlRequestExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->domainHint_ == nullptr && return this->examples_ == nullptr && return this->sensitives_ == nullptr && return this->terminologies_ == nullptr && return this->textTransform_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::BatchTranslateForHtmlRequestExtConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::BatchTranslateForHtmlRequestExtConfig) };
    inline Models::BatchTranslateForHtmlRequestExtConfig config() { DARABONBA_PTR_GET(config_, Models::BatchTranslateForHtmlRequestExtConfig) };
    inline BatchTranslateForHtmlRequestExt& setConfig(const Models::BatchTranslateForHtmlRequestExtConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline BatchTranslateForHtmlRequestExt& setConfig(Models::BatchTranslateForHtmlRequestExtConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // domainHint Field Functions 
    bool hasDomainHint() const { return this->domainHint_ != nullptr;};
    void deleteDomainHint() { this->domainHint_ = nullptr;};
    inline string domainHint() const { DARABONBA_PTR_GET_DEFAULT(domainHint_, "") };
    inline BatchTranslateForHtmlRequestExt& setDomainHint(string domainHint) { DARABONBA_PTR_SET_VALUE(domainHint_, domainHint) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<Models::BatchTranslateForHtmlRequestExtExamples> & examples() const { DARABONBA_PTR_GET_CONST(examples_, vector<Models::BatchTranslateForHtmlRequestExtExamples>) };
    inline vector<Models::BatchTranslateForHtmlRequestExtExamples> examples() { DARABONBA_PTR_GET(examples_, vector<Models::BatchTranslateForHtmlRequestExtExamples>) };
    inline BatchTranslateForHtmlRequestExt& setExamples(const vector<Models::BatchTranslateForHtmlRequestExtExamples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline BatchTranslateForHtmlRequestExt& setExamples(vector<Models::BatchTranslateForHtmlRequestExtExamples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // sensitives Field Functions 
    bool hasSensitives() const { return this->sensitives_ != nullptr;};
    void deleteSensitives() { this->sensitives_ = nullptr;};
    inline const vector<string> & sensitives() const { DARABONBA_PTR_GET_CONST(sensitives_, vector<string>) };
    inline vector<string> sensitives() { DARABONBA_PTR_GET(sensitives_, vector<string>) };
    inline BatchTranslateForHtmlRequestExt& setSensitives(const vector<string> & sensitives) { DARABONBA_PTR_SET_VALUE(sensitives_, sensitives) };
    inline BatchTranslateForHtmlRequestExt& setSensitives(vector<string> && sensitives) { DARABONBA_PTR_SET_RVALUE(sensitives_, sensitives) };


    // terminologies Field Functions 
    bool hasTerminologies() const { return this->terminologies_ != nullptr;};
    void deleteTerminologies() { this->terminologies_ = nullptr;};
    inline const vector<Models::BatchTranslateForHtmlRequestExtTerminologies> & terminologies() const { DARABONBA_PTR_GET_CONST(terminologies_, vector<Models::BatchTranslateForHtmlRequestExtTerminologies>) };
    inline vector<Models::BatchTranslateForHtmlRequestExtTerminologies> terminologies() { DARABONBA_PTR_GET(terminologies_, vector<Models::BatchTranslateForHtmlRequestExtTerminologies>) };
    inline BatchTranslateForHtmlRequestExt& setTerminologies(const vector<Models::BatchTranslateForHtmlRequestExtTerminologies> & terminologies) { DARABONBA_PTR_SET_VALUE(terminologies_, terminologies) };
    inline BatchTranslateForHtmlRequestExt& setTerminologies(vector<Models::BatchTranslateForHtmlRequestExtTerminologies> && terminologies) { DARABONBA_PTR_SET_RVALUE(terminologies_, terminologies) };


    // textTransform Field Functions 
    bool hasTextTransform() const { return this->textTransform_ != nullptr;};
    void deleteTextTransform() { this->textTransform_ = nullptr;};
    inline const Models::BatchTranslateForHtmlRequestExtTextTransform & textTransform() const { DARABONBA_PTR_GET_CONST(textTransform_, Models::BatchTranslateForHtmlRequestExtTextTransform) };
    inline Models::BatchTranslateForHtmlRequestExtTextTransform textTransform() { DARABONBA_PTR_GET(textTransform_, Models::BatchTranslateForHtmlRequestExtTextTransform) };
    inline BatchTranslateForHtmlRequestExt& setTextTransform(const Models::BatchTranslateForHtmlRequestExtTextTransform & textTransform) { DARABONBA_PTR_SET_VALUE(textTransform_, textTransform) };
    inline BatchTranslateForHtmlRequestExt& setTextTransform(Models::BatchTranslateForHtmlRequestExtTextTransform && textTransform) { DARABONBA_PTR_SET_RVALUE(textTransform_, textTransform) };


  protected:
    std::shared_ptr<Models::BatchTranslateForHtmlRequestExtConfig> config_ = nullptr;
    std::shared_ptr<string> domainHint_ = nullptr;
    std::shared_ptr<vector<Models::BatchTranslateForHtmlRequestExtExamples>> examples_ = nullptr;
    std::shared_ptr<vector<string>> sensitives_ = nullptr;
    std::shared_ptr<vector<Models::BatchTranslateForHtmlRequestExtTerminologies>> terminologies_ = nullptr;
    std::shared_ptr<Models::BatchTranslateForHtmlRequestExtTextTransform> textTransform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
