// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODYAVAILABLEINDUSTRY_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODYAVAILABLEINDUSTRY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTextTemplateResponseBodyAvailableIndustryTextModeTypes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetTextTemplateResponseBodyAvailableIndustry : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextTemplateResponseBodyAvailableIndustry& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(textModeTypes, textModeTypes_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextTemplateResponseBodyAvailableIndustry& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(textModeTypes, textModeTypes_);
    };
    GetTextTemplateResponseBodyAvailableIndustry() = default ;
    GetTextTemplateResponseBodyAvailableIndustry(const GetTextTemplateResponseBodyAvailableIndustry &) = default ;
    GetTextTemplateResponseBodyAvailableIndustry(GetTextTemplateResponseBodyAvailableIndustry &&) = default ;
    GetTextTemplateResponseBodyAvailableIndustry(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextTemplateResponseBodyAvailableIndustry() = default ;
    GetTextTemplateResponseBodyAvailableIndustry& operator=(const GetTextTemplateResponseBodyAvailableIndustry &) = default ;
    GetTextTemplateResponseBodyAvailableIndustry& operator=(GetTextTemplateResponseBodyAvailableIndustry &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->textModeTypes_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTextTemplateResponseBodyAvailableIndustry& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // textModeTypes Field Functions 
    bool hasTextModeTypes() const { return this->textModeTypes_ != nullptr;};
    void deleteTextModeTypes() { this->textModeTypes_ = nullptr;};
    inline const vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypes> & textModeTypes() const { DARABONBA_PTR_GET_CONST(textModeTypes_, vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypes>) };
    inline vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypes> textModeTypes() { DARABONBA_PTR_GET(textModeTypes_, vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypes>) };
    inline GetTextTemplateResponseBodyAvailableIndustry& setTextModeTypes(const vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypes> & textModeTypes) { DARABONBA_PTR_SET_VALUE(textModeTypes_, textModeTypes) };
    inline GetTextTemplateResponseBodyAvailableIndustry& setTextModeTypes(vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypes> && textModeTypes) { DARABONBA_PTR_SET_RVALUE(textModeTypes_, textModeTypes) };


  protected:
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<Models::GetTextTemplateResponseBodyAvailableIndustryTextModeTypes>> textModeTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
