// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMTEMPLATERESPONSEBODYCUSTOMTEMPLATEFRONTENDHINT_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMTEMPLATERESPONSEBODYCUSTOMTEMPLATEFRONTENDHINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCustomTemplateResponseBodyCustomTemplateFrontendHintTranscodeTemplateHint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCustomTemplateResponseBodyCustomTemplateFrontendHint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomTemplateResponseBodyCustomTemplateFrontendHint& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeTemplateHint, transcodeTemplateHint_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomTemplateResponseBodyCustomTemplateFrontendHint& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateHint, transcodeTemplateHint_);
    };
    GetCustomTemplateResponseBodyCustomTemplateFrontendHint() = default ;
    GetCustomTemplateResponseBodyCustomTemplateFrontendHint(const GetCustomTemplateResponseBodyCustomTemplateFrontendHint &) = default ;
    GetCustomTemplateResponseBodyCustomTemplateFrontendHint(GetCustomTemplateResponseBodyCustomTemplateFrontendHint &&) = default ;
    GetCustomTemplateResponseBodyCustomTemplateFrontendHint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomTemplateResponseBodyCustomTemplateFrontendHint() = default ;
    GetCustomTemplateResponseBodyCustomTemplateFrontendHint& operator=(const GetCustomTemplateResponseBodyCustomTemplateFrontendHint &) = default ;
    GetCustomTemplateResponseBodyCustomTemplateFrontendHint& operator=(GetCustomTemplateResponseBodyCustomTemplateFrontendHint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->transcodeTemplateHint_ != nullptr; };
    // transcodeTemplateHint Field Functions 
    bool hasTranscodeTemplateHint() const { return this->transcodeTemplateHint_ != nullptr;};
    void deleteTranscodeTemplateHint() { this->transcodeTemplateHint_ = nullptr;};
    inline const Models::GetCustomTemplateResponseBodyCustomTemplateFrontendHintTranscodeTemplateHint & transcodeTemplateHint() const { DARABONBA_PTR_GET_CONST(transcodeTemplateHint_, Models::GetCustomTemplateResponseBodyCustomTemplateFrontendHintTranscodeTemplateHint) };
    inline Models::GetCustomTemplateResponseBodyCustomTemplateFrontendHintTranscodeTemplateHint transcodeTemplateHint() { DARABONBA_PTR_GET(transcodeTemplateHint_, Models::GetCustomTemplateResponseBodyCustomTemplateFrontendHintTranscodeTemplateHint) };
    inline GetCustomTemplateResponseBodyCustomTemplateFrontendHint& setTranscodeTemplateHint(const Models::GetCustomTemplateResponseBodyCustomTemplateFrontendHintTranscodeTemplateHint & transcodeTemplateHint) { DARABONBA_PTR_SET_VALUE(transcodeTemplateHint_, transcodeTemplateHint) };
    inline GetCustomTemplateResponseBodyCustomTemplateFrontendHint& setTranscodeTemplateHint(Models::GetCustomTemplateResponseBodyCustomTemplateFrontendHintTranscodeTemplateHint && transcodeTemplateHint) { DARABONBA_PTR_SET_RVALUE(transcodeTemplateHint_, transcodeTemplateHint) };


  protected:
    std::shared_ptr<Models::GetCustomTemplateResponseBodyCustomTemplateFrontendHintTranscodeTemplateHint> transcodeTemplateHint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
