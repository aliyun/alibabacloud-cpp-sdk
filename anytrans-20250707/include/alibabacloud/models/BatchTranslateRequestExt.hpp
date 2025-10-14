// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHTRANSLATEREQUESTEXT_HPP_
#define ALIBABACLOUD_MODELS_BATCHTRANSLATEREQUESTEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchTranslateRequestExtConfig.hpp>
#include <vector>
#include <alibabacloud/models/BatchTranslateRequestExtExamples.hpp>
#include <alibabacloud/models/BatchTranslateRequestExtTerminologies.hpp>
#include <alibabacloud/models/BatchTranslateRequestExtTextTransform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class BatchTranslateRequestExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchTranslateRequestExt& obj) { 
      DARABONBA_PTR_TO_JSON(config, config_);
      DARABONBA_PTR_TO_JSON(domainHint, domainHint_);
      DARABONBA_PTR_TO_JSON(examples, examples_);
      DARABONBA_PTR_TO_JSON(sensitives, sensitives_);
      DARABONBA_PTR_TO_JSON(terminologies, terminologies_);
      DARABONBA_PTR_TO_JSON(textTransform, textTransform_);
    };
    friend void from_json(const Darabonba::Json& j, BatchTranslateRequestExt& obj) { 
      DARABONBA_PTR_FROM_JSON(config, config_);
      DARABONBA_PTR_FROM_JSON(domainHint, domainHint_);
      DARABONBA_PTR_FROM_JSON(examples, examples_);
      DARABONBA_PTR_FROM_JSON(sensitives, sensitives_);
      DARABONBA_PTR_FROM_JSON(terminologies, terminologies_);
      DARABONBA_PTR_FROM_JSON(textTransform, textTransform_);
    };
    BatchTranslateRequestExt() = default ;
    BatchTranslateRequestExt(const BatchTranslateRequestExt &) = default ;
    BatchTranslateRequestExt(BatchTranslateRequestExt &&) = default ;
    BatchTranslateRequestExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchTranslateRequestExt() = default ;
    BatchTranslateRequestExt& operator=(const BatchTranslateRequestExt &) = default ;
    BatchTranslateRequestExt& operator=(BatchTranslateRequestExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->config_ == nullptr
        && return this->domainHint_ == nullptr && return this->examples_ == nullptr && return this->sensitives_ == nullptr && return this->terminologies_ == nullptr && return this->textTransform_ == nullptr; };
    // config Field Functions 
    bool hasConfig() const { return this->config_ != nullptr;};
    void deleteConfig() { this->config_ = nullptr;};
    inline const Models::BatchTranslateRequestExtConfig & config() const { DARABONBA_PTR_GET_CONST(config_, Models::BatchTranslateRequestExtConfig) };
    inline Models::BatchTranslateRequestExtConfig config() { DARABONBA_PTR_GET(config_, Models::BatchTranslateRequestExtConfig) };
    inline BatchTranslateRequestExt& setConfig(const Models::BatchTranslateRequestExtConfig & config) { DARABONBA_PTR_SET_VALUE(config_, config) };
    inline BatchTranslateRequestExt& setConfig(Models::BatchTranslateRequestExtConfig && config) { DARABONBA_PTR_SET_RVALUE(config_, config) };


    // domainHint Field Functions 
    bool hasDomainHint() const { return this->domainHint_ != nullptr;};
    void deleteDomainHint() { this->domainHint_ = nullptr;};
    inline string domainHint() const { DARABONBA_PTR_GET_DEFAULT(domainHint_, "") };
    inline BatchTranslateRequestExt& setDomainHint(string domainHint) { DARABONBA_PTR_SET_VALUE(domainHint_, domainHint) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<Models::BatchTranslateRequestExtExamples> & examples() const { DARABONBA_PTR_GET_CONST(examples_, vector<Models::BatchTranslateRequestExtExamples>) };
    inline vector<Models::BatchTranslateRequestExtExamples> examples() { DARABONBA_PTR_GET(examples_, vector<Models::BatchTranslateRequestExtExamples>) };
    inline BatchTranslateRequestExt& setExamples(const vector<Models::BatchTranslateRequestExtExamples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline BatchTranslateRequestExt& setExamples(vector<Models::BatchTranslateRequestExtExamples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // sensitives Field Functions 
    bool hasSensitives() const { return this->sensitives_ != nullptr;};
    void deleteSensitives() { this->sensitives_ = nullptr;};
    inline const vector<string> & sensitives() const { DARABONBA_PTR_GET_CONST(sensitives_, vector<string>) };
    inline vector<string> sensitives() { DARABONBA_PTR_GET(sensitives_, vector<string>) };
    inline BatchTranslateRequestExt& setSensitives(const vector<string> & sensitives) { DARABONBA_PTR_SET_VALUE(sensitives_, sensitives) };
    inline BatchTranslateRequestExt& setSensitives(vector<string> && sensitives) { DARABONBA_PTR_SET_RVALUE(sensitives_, sensitives) };


    // terminologies Field Functions 
    bool hasTerminologies() const { return this->terminologies_ != nullptr;};
    void deleteTerminologies() { this->terminologies_ = nullptr;};
    inline const vector<Models::BatchTranslateRequestExtTerminologies> & terminologies() const { DARABONBA_PTR_GET_CONST(terminologies_, vector<Models::BatchTranslateRequestExtTerminologies>) };
    inline vector<Models::BatchTranslateRequestExtTerminologies> terminologies() { DARABONBA_PTR_GET(terminologies_, vector<Models::BatchTranslateRequestExtTerminologies>) };
    inline BatchTranslateRequestExt& setTerminologies(const vector<Models::BatchTranslateRequestExtTerminologies> & terminologies) { DARABONBA_PTR_SET_VALUE(terminologies_, terminologies) };
    inline BatchTranslateRequestExt& setTerminologies(vector<Models::BatchTranslateRequestExtTerminologies> && terminologies) { DARABONBA_PTR_SET_RVALUE(terminologies_, terminologies) };


    // textTransform Field Functions 
    bool hasTextTransform() const { return this->textTransform_ != nullptr;};
    void deleteTextTransform() { this->textTransform_ = nullptr;};
    inline const Models::BatchTranslateRequestExtTextTransform & textTransform() const { DARABONBA_PTR_GET_CONST(textTransform_, Models::BatchTranslateRequestExtTextTransform) };
    inline Models::BatchTranslateRequestExtTextTransform textTransform() { DARABONBA_PTR_GET(textTransform_, Models::BatchTranslateRequestExtTextTransform) };
    inline BatchTranslateRequestExt& setTextTransform(const Models::BatchTranslateRequestExtTextTransform & textTransform) { DARABONBA_PTR_SET_VALUE(textTransform_, textTransform) };
    inline BatchTranslateRequestExt& setTextTransform(Models::BatchTranslateRequestExtTextTransform && textTransform) { DARABONBA_PTR_SET_RVALUE(textTransform_, textTransform) };


  protected:
    std::shared_ptr<Models::BatchTranslateRequestExtConfig> config_ = nullptr;
    std::shared_ptr<string> domainHint_ = nullptr;
    std::shared_ptr<vector<Models::BatchTranslateRequestExtExamples>> examples_ = nullptr;
    std::shared_ptr<vector<string>> sensitives_ = nullptr;
    std::shared_ptr<vector<Models::BatchTranslateRequestExtTerminologies>> terminologies_ = nullptr;
    std::shared_ptr<Models::BatchTranslateRequestExtTextTransform> textTransform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
