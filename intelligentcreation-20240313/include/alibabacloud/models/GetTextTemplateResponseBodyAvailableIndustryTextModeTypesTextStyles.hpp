// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODYAVAILABLEINDUSTRYTEXTMODETYPESTEXTSTYLES_HPP_
#define ALIBABACLOUD_MODELS_GETTEXTTEMPLATERESPONSEBODYAVAILABLEINDUSTRYTEXTMODETYPESTEXTSTYLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles& obj) { 
      DARABONBA_PTR_TO_JSON(desc, desc_);
      DARABONBA_PTR_TO_JSON(disabled, disabled_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(templateKey, templateKey_);
    };
    friend void from_json(const Darabonba::Json& j, GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles& obj) { 
      DARABONBA_PTR_FROM_JSON(desc, desc_);
      DARABONBA_PTR_FROM_JSON(disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(templateKey, templateKey_);
    };
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles() = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles(const GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles &) = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles(GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles &&) = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles() = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles& operator=(const GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles &) = default ;
    GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles& operator=(GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->desc_ == nullptr
        && return this->disabled_ == nullptr && return this->name_ == nullptr && return this->templateKey_ == nullptr; };
    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // templateKey Field Functions 
    bool hasTemplateKey() const { return this->templateKey_ != nullptr;};
    void deleteTemplateKey() { this->templateKey_ = nullptr;};
    inline string templateKey() const { DARABONBA_PTR_GET_DEFAULT(templateKey_, "") };
    inline GetTextTemplateResponseBodyAvailableIndustryTextModeTypesTextStyles& setTemplateKey(string templateKey) { DARABONBA_PTR_SET_VALUE(templateKey_, templateKey) };


  protected:
    std::shared_ptr<string> desc_ = nullptr;
    std::shared_ptr<bool> disabled_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> templateKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
