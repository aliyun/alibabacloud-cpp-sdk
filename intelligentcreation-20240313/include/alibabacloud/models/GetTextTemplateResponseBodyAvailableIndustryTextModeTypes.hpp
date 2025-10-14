// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODYAVAILABLEINDUSTRYTEXTMODETYPES_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODYAVAILABLEINDUSTRYTEXTMODETYPES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetTextTemplateResponseBodyAvailableIndustryTextModeTypes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextTemplateResponseBodyAvailableIndustryTextModeTypes& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(textStyles, textStyles_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextTemplateResponseBodyAvailableIndustryTextModeTypes& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(textStyles, textStyles_);
    };
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypes() = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypes(const GetTextTemplateResponseBodyAvailableIndustryTextModeTypes &) = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypes(GetTextTemplateResponseBodyAvailableIndustryTextModeTypes &&) = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextTemplateResponseBodyAvailableIndustryTextModeTypes() = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypes& operator=(const GetTextTemplateResponseBodyAvailableIndustryTextModeTypes &) = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypes& operator=(GetTextTemplateResponseBodyAvailableIndustryTextModeTypes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->textStyles_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTextTemplateResponseBodyAvailableIndustryTextModeTypes& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // textStyles Field Functions 
    bool hasTextStyles() const { return this->textStyles_ != nullptr;};
    void deleteTextStyles() { this->textStyles_ = nullptr;};
    inline const vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles> & textStyles() const { DARABONBA_PTR_GET_CONST(textStyles_, vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles>) };
    inline vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles> textStyles() { DARABONBA_PTR_GET(textStyles_, vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles>) };
    inline GetTextTemplateResponseBodyAvailableIndustryTextModeTypes& setTextStyles(const vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles> & textStyles) { DARABONBA_PTR_SET_VALUE(textStyles_, textStyles) };
    inline GetTextTemplateResponseBodyAvailableIndustryTextModeTypes& setTextStyles(vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles> && textStyles) { DARABONBA_PTR_SET_RVALUE(textStyles_, textStyles) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles>> textStyles_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
