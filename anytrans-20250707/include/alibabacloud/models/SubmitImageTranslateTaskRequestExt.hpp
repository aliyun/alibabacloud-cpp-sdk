// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKREQUESTEXT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITIMAGETRANSLATETASKREQUESTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitImageTranslateTaskRequestExtExamples.hpp>
#include <alibabacloud/models/SubmitImageTranslateTaskRequestExtTerminologies.hpp>
#include <alibabacloud/models/SubmitImageTranslateTaskRequestExtTextTransform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitImageTranslateTaskRequestExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitImageTranslateTaskRequestExt& obj) { 
      DARABONBA_PTR_TO_JSON(domainHint, domainHint_);
      DARABONBA_PTR_TO_JSON(examples, examples_);
      DARABONBA_PTR_TO_JSON(sensitives, sensitives_);
      DARABONBA_PTR_TO_JSON(terminologies, terminologies_);
      DARABONBA_PTR_TO_JSON(textTransform, textTransform_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitImageTranslateTaskRequestExt& obj) { 
      DARABONBA_PTR_FROM_JSON(domainHint, domainHint_);
      DARABONBA_PTR_FROM_JSON(examples, examples_);
      DARABONBA_PTR_FROM_JSON(sensitives, sensitives_);
      DARABONBA_PTR_FROM_JSON(terminologies, terminologies_);
      DARABONBA_PTR_FROM_JSON(textTransform, textTransform_);
    };
    SubmitImageTranslateTaskRequestExt() = default ;
    SubmitImageTranslateTaskRequestExt(const SubmitImageTranslateTaskRequestExt &) = default ;
    SubmitImageTranslateTaskRequestExt(SubmitImageTranslateTaskRequestExt &&) = default ;
    SubmitImageTranslateTaskRequestExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitImageTranslateTaskRequestExt() = default ;
    SubmitImageTranslateTaskRequestExt& operator=(const SubmitImageTranslateTaskRequestExt &) = default ;
    SubmitImageTranslateTaskRequestExt& operator=(SubmitImageTranslateTaskRequestExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainHint_ == nullptr
        && return this->examples_ == nullptr && return this->sensitives_ == nullptr && return this->terminologies_ == nullptr && return this->textTransform_ == nullptr; };
    // domainHint Field Functions 
    bool hasDomainHint() const { return this->domainHint_ != nullptr;};
    void deleteDomainHint() { this->domainHint_ = nullptr;};
    inline string domainHint() const { DARABONBA_PTR_GET_DEFAULT(domainHint_, "") };
    inline SubmitImageTranslateTaskRequestExt& setDomainHint(string domainHint) { DARABONBA_PTR_SET_VALUE(domainHint_, domainHint) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<Models::SubmitImageTranslateTaskRequestExtExamples> & examples() const { DARABONBA_PTR_GET_CONST(examples_, vector<Models::SubmitImageTranslateTaskRequestExtExamples>) };
    inline vector<Models::SubmitImageTranslateTaskRequestExtExamples> examples() { DARABONBA_PTR_GET(examples_, vector<Models::SubmitImageTranslateTaskRequestExtExamples>) };
    inline SubmitImageTranslateTaskRequestExt& setExamples(const vector<Models::SubmitImageTranslateTaskRequestExtExamples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline SubmitImageTranslateTaskRequestExt& setExamples(vector<Models::SubmitImageTranslateTaskRequestExtExamples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // sensitives Field Functions 
    bool hasSensitives() const { return this->sensitives_ != nullptr;};
    void deleteSensitives() { this->sensitives_ = nullptr;};
    inline const vector<string> & sensitives() const { DARABONBA_PTR_GET_CONST(sensitives_, vector<string>) };
    inline vector<string> sensitives() { DARABONBA_PTR_GET(sensitives_, vector<string>) };
    inline SubmitImageTranslateTaskRequestExt& setSensitives(const vector<string> & sensitives) { DARABONBA_PTR_SET_VALUE(sensitives_, sensitives) };
    inline SubmitImageTranslateTaskRequestExt& setSensitives(vector<string> && sensitives) { DARABONBA_PTR_SET_RVALUE(sensitives_, sensitives) };


    // terminologies Field Functions 
    bool hasTerminologies() const { return this->terminologies_ != nullptr;};
    void deleteTerminologies() { this->terminologies_ = nullptr;};
    inline const vector<Models::SubmitImageTranslateTaskRequestExtTerminologies> & terminologies() const { DARABONBA_PTR_GET_CONST(terminologies_, vector<Models::SubmitImageTranslateTaskRequestExtTerminologies>) };
    inline vector<Models::SubmitImageTranslateTaskRequestExtTerminologies> terminologies() { DARABONBA_PTR_GET(terminologies_, vector<Models::SubmitImageTranslateTaskRequestExtTerminologies>) };
    inline SubmitImageTranslateTaskRequestExt& setTerminologies(const vector<Models::SubmitImageTranslateTaskRequestExtTerminologies> & terminologies) { DARABONBA_PTR_SET_VALUE(terminologies_, terminologies) };
    inline SubmitImageTranslateTaskRequestExt& setTerminologies(vector<Models::SubmitImageTranslateTaskRequestExtTerminologies> && terminologies) { DARABONBA_PTR_SET_RVALUE(terminologies_, terminologies) };


    // textTransform Field Functions 
    bool hasTextTransform() const { return this->textTransform_ != nullptr;};
    void deleteTextTransform() { this->textTransform_ = nullptr;};
    inline const Models::SubmitImageTranslateTaskRequestExtTextTransform & textTransform() const { DARABONBA_PTR_GET_CONST(textTransform_, Models::SubmitImageTranslateTaskRequestExtTextTransform) };
    inline Models::SubmitImageTranslateTaskRequestExtTextTransform textTransform() { DARABONBA_PTR_GET(textTransform_, Models::SubmitImageTranslateTaskRequestExtTextTransform) };
    inline SubmitImageTranslateTaskRequestExt& setTextTransform(const Models::SubmitImageTranslateTaskRequestExtTextTransform & textTransform) { DARABONBA_PTR_SET_VALUE(textTransform_, textTransform) };
    inline SubmitImageTranslateTaskRequestExt& setTextTransform(Models::SubmitImageTranslateTaskRequestExtTextTransform && textTransform) { DARABONBA_PTR_SET_RVALUE(textTransform_, textTransform) };


  protected:
    std::shared_ptr<string> domainHint_ = nullptr;
    std::shared_ptr<vector<Models::SubmitImageTranslateTaskRequestExtExamples>> examples_ = nullptr;
    std::shared_ptr<vector<string>> sensitives_ = nullptr;
    std::shared_ptr<vector<Models::SubmitImageTranslateTaskRequestExtTerminologies>> terminologies_ = nullptr;
    std::shared_ptr<Models::SubmitImageTranslateTaskRequestExtTextTransform> textTransform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
