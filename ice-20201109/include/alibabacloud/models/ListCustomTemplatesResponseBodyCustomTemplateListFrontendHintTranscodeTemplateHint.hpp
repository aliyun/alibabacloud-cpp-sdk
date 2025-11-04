// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESRESPONSEBODYCUSTOMTEMPLATELISTFRONTENDHINTTRANSCODETEMPLATEHINT_HPP_
#define ALIBABACLOUD_MODELS_LISTCUSTOMTEMPLATESRESPONSEBODYCUSTOMTEMPLATELISTFRONTENDHINTTRANSCODETEMPLATEHINT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint& obj) { 
      DARABONBA_PTR_TO_JSON(BitrateControlType, bitrateControlType_);
    };
    friend void from_json(const Darabonba::Json& j, ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint& obj) { 
      DARABONBA_PTR_FROM_JSON(BitrateControlType, bitrateControlType_);
    };
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint() = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint(const ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint &) = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint(ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint &&) = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint() = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint& operator=(const ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint &) = default ;
    ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint& operator=(ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrateControlType_ == nullptr; };
    // bitrateControlType Field Functions 
    bool hasBitrateControlType() const { return this->bitrateControlType_ != nullptr;};
    void deleteBitrateControlType() { this->bitrateControlType_ = nullptr;};
    inline string bitrateControlType() const { DARABONBA_PTR_GET_DEFAULT(bitrateControlType_, "") };
    inline ListCustomTemplatesResponseBodyCustomTemplateListFrontendHintTranscodeTemplateHint& setBitrateControlType(string bitrateControlType) { DARABONBA_PTR_SET_VALUE(bitrateControlType_, bitrateControlType) };


  protected:
    std::shared_ptr<string> bitrateControlType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
