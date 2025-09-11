// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITHTMLTRANSLATETASKREQUESTEXT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITHTMLTRANSLATETASKREQUESTEXT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitHtmlTranslateTaskRequestExtExamples.hpp>
#include <alibabacloud/models/SubmitHtmlTranslateTaskRequestExtTerminologies.hpp>
#include <alibabacloud/models/SubmitHtmlTranslateTaskRequestExtTextTransform.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AnyTrans20250707
{
namespace Models
{
  class SubmitHtmlTranslateTaskRequestExt : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitHtmlTranslateTaskRequestExt& obj) { 
      DARABONBA_PTR_TO_JSON(domainHint, domainHint_);
      DARABONBA_PTR_TO_JSON(examples, examples_);
      DARABONBA_PTR_TO_JSON(sensitives, sensitives_);
      DARABONBA_PTR_TO_JSON(terminologies, terminologies_);
      DARABONBA_PTR_TO_JSON(textTransform, textTransform_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitHtmlTranslateTaskRequestExt& obj) { 
      DARABONBA_PTR_FROM_JSON(domainHint, domainHint_);
      DARABONBA_PTR_FROM_JSON(examples, examples_);
      DARABONBA_PTR_FROM_JSON(sensitives, sensitives_);
      DARABONBA_PTR_FROM_JSON(terminologies, terminologies_);
      DARABONBA_PTR_FROM_JSON(textTransform, textTransform_);
    };
    SubmitHtmlTranslateTaskRequestExt() = default ;
    SubmitHtmlTranslateTaskRequestExt(const SubmitHtmlTranslateTaskRequestExt &) = default ;
    SubmitHtmlTranslateTaskRequestExt(SubmitHtmlTranslateTaskRequestExt &&) = default ;
    SubmitHtmlTranslateTaskRequestExt(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitHtmlTranslateTaskRequestExt() = default ;
    SubmitHtmlTranslateTaskRequestExt& operator=(const SubmitHtmlTranslateTaskRequestExt &) = default ;
    SubmitHtmlTranslateTaskRequestExt& operator=(SubmitHtmlTranslateTaskRequestExt &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainHint_ != nullptr
        && this->examples_ != nullptr && this->sensitives_ != nullptr && this->terminologies_ != nullptr && this->textTransform_ != nullptr; };
    // domainHint Field Functions 
    bool hasDomainHint() const { return this->domainHint_ != nullptr;};
    void deleteDomainHint() { this->domainHint_ = nullptr;};
    inline string domainHint() const { DARABONBA_PTR_GET_DEFAULT(domainHint_, "") };
    inline SubmitHtmlTranslateTaskRequestExt& setDomainHint(string domainHint) { DARABONBA_PTR_SET_VALUE(domainHint_, domainHint) };


    // examples Field Functions 
    bool hasExamples() const { return this->examples_ != nullptr;};
    void deleteExamples() { this->examples_ = nullptr;};
    inline const vector<Models::SubmitHtmlTranslateTaskRequestExtExamples> & examples() const { DARABONBA_PTR_GET_CONST(examples_, vector<Models::SubmitHtmlTranslateTaskRequestExtExamples>) };
    inline vector<Models::SubmitHtmlTranslateTaskRequestExtExamples> examples() { DARABONBA_PTR_GET(examples_, vector<Models::SubmitHtmlTranslateTaskRequestExtExamples>) };
    inline SubmitHtmlTranslateTaskRequestExt& setExamples(const vector<Models::SubmitHtmlTranslateTaskRequestExtExamples> & examples) { DARABONBA_PTR_SET_VALUE(examples_, examples) };
    inline SubmitHtmlTranslateTaskRequestExt& setExamples(vector<Models::SubmitHtmlTranslateTaskRequestExtExamples> && examples) { DARABONBA_PTR_SET_RVALUE(examples_, examples) };


    // sensitives Field Functions 
    bool hasSensitives() const { return this->sensitives_ != nullptr;};
    void deleteSensitives() { this->sensitives_ = nullptr;};
    inline const vector<string> & sensitives() const { DARABONBA_PTR_GET_CONST(sensitives_, vector<string>) };
    inline vector<string> sensitives() { DARABONBA_PTR_GET(sensitives_, vector<string>) };
    inline SubmitHtmlTranslateTaskRequestExt& setSensitives(const vector<string> & sensitives) { DARABONBA_PTR_SET_VALUE(sensitives_, sensitives) };
    inline SubmitHtmlTranslateTaskRequestExt& setSensitives(vector<string> && sensitives) { DARABONBA_PTR_SET_RVALUE(sensitives_, sensitives) };


    // terminologies Field Functions 
    bool hasTerminologies() const { return this->terminologies_ != nullptr;};
    void deleteTerminologies() { this->terminologies_ = nullptr;};
    inline const vector<Models::SubmitHtmlTranslateTaskRequestExtTerminologies> & terminologies() const { DARABONBA_PTR_GET_CONST(terminologies_, vector<Models::SubmitHtmlTranslateTaskRequestExtTerminologies>) };
    inline vector<Models::SubmitHtmlTranslateTaskRequestExtTerminologies> terminologies() { DARABONBA_PTR_GET(terminologies_, vector<Models::SubmitHtmlTranslateTaskRequestExtTerminologies>) };
    inline SubmitHtmlTranslateTaskRequestExt& setTerminologies(const vector<Models::SubmitHtmlTranslateTaskRequestExtTerminologies> & terminologies) { DARABONBA_PTR_SET_VALUE(terminologies_, terminologies) };
    inline SubmitHtmlTranslateTaskRequestExt& setTerminologies(vector<Models::SubmitHtmlTranslateTaskRequestExtTerminologies> && terminologies) { DARABONBA_PTR_SET_RVALUE(terminologies_, terminologies) };


    // textTransform Field Functions 
    bool hasTextTransform() const { return this->textTransform_ != nullptr;};
    void deleteTextTransform() { this->textTransform_ = nullptr;};
    inline const Models::SubmitHtmlTranslateTaskRequestExtTextTransform & textTransform() const { DARABONBA_PTR_GET_CONST(textTransform_, Models::SubmitHtmlTranslateTaskRequestExtTextTransform) };
    inline Models::SubmitHtmlTranslateTaskRequestExtTextTransform textTransform() { DARABONBA_PTR_GET(textTransform_, Models::SubmitHtmlTranslateTaskRequestExtTextTransform) };
    inline SubmitHtmlTranslateTaskRequestExt& setTextTransform(const Models::SubmitHtmlTranslateTaskRequestExtTextTransform & textTransform) { DARABONBA_PTR_SET_VALUE(textTransform_, textTransform) };
    inline SubmitHtmlTranslateTaskRequestExt& setTextTransform(Models::SubmitHtmlTranslateTaskRequestExtTextTransform && textTransform) { DARABONBA_PTR_SET_RVALUE(textTransform_, textTransform) };


  protected:
    std::shared_ptr<string> domainHint_ = nullptr;
    std::shared_ptr<vector<Models::SubmitHtmlTranslateTaskRequestExtExamples>> examples_ = nullptr;
    std::shared_ptr<vector<string>> sensitives_ = nullptr;
    std::shared_ptr<vector<Models::SubmitHtmlTranslateTaskRequestExtTerminologies>> terminologies_ = nullptr;
    std::shared_ptr<Models::SubmitHtmlTranslateTaskRequestExtTextTransform> textTransform_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AnyTrans20250707
#endif
