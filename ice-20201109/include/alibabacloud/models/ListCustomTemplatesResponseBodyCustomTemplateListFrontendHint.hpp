// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESRESPONSEBODYCUSTOMTEMPLATELISTFRONTENDHINT_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESRESPONSEBODYCUSTOMTEMPLATELISTFRONTENDHINT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint& obj) { 
      DARABONBA_PTR_TO_JSON(TranscodeTemplateHint, transcodeTemplateHint_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint& obj) { 
      DARABONBA_PTR_FROM_JSON(TranscodeTemplateHint, transcodeTemplateHint_);
    };
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint() = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint(const ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint &) = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint(ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint &&) = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint() = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint& operator=(const ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint &) = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint& operator=(ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transcodeTemplateHint_ == nullptr; };
    // transcodeTemplateHint Field Functions 
    bool hasTranscodeTemplateHint() const { return this->transcodeTemplateHint_ != nullptr;};
    void deleteTranscodeTemplateHint() { this->transcodeTemplateHint_ = nullptr;};
    inline const Models::ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint & transcodeTemplateHint() const { DARABONBA_PTR_GET_CONST(transcodeTemplateHint_, Models::ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint) };
    inline Models::ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint transcodeTemplateHint() { DARABONBA_PTR_GET(transcodeTemplateHint_, Models::ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint) };
    inline ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint& setTranscodeTemplateHint(const Models::ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint & transcodeTemplateHint) { DARABONBA_PTR_SET_VALUE(transcodeTemplateHint_, transcodeTemplateHint) };
    inline ListCustomTemplatesResponseBodyCustomTemplateListFrontendHint& setTranscodeTemplateHint(Models::ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint && transcodeTemplateHint) { DARABONBA_PTR_SET_RVALUE(transcodeTemplateHint_, transcodeTemplateHint) };


  protected:
    std::shared_ptr<Models::ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint> transcodeTemplateHint_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
