// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFLASHSMSTEMPLATESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTFLASHSMSTEMPLATESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class ListFlashSmsTemplatesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFlashSmsTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateDetails, templateDetails_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListFlashSmsTemplatesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateDetails, templateDetails_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ListFlashSmsTemplatesResponseBodyData() = default ;
    ListFlashSmsTemplatesResponseBodyData(const ListFlashSmsTemplatesResponseBodyData &) = default ;
    ListFlashSmsTemplatesResponseBodyData(ListFlashSmsTemplatesResponseBodyData &&) = default ;
    ListFlashSmsTemplatesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFlashSmsTemplatesResponseBodyData() = default ;
    ListFlashSmsTemplatesResponseBodyData& operator=(const ListFlashSmsTemplatesResponseBodyData &) = default ;
    ListFlashSmsTemplatesResponseBodyData& operator=(ListFlashSmsTemplatesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateDetails_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // templateDetails Field Functions 
    bool hasTemplateDetails() const { return this->templateDetails_ != nullptr;};
    void deleteTemplateDetails() { this->templateDetails_ = nullptr;};
    inline string templateDetails() const { DARABONBA_PTR_GET_DEFAULT(templateDetails_, "") };
    inline ListFlashSmsTemplatesResponseBodyData& setTemplateDetails(string templateDetails) { DARABONBA_PTR_SET_VALUE(templateDetails_, templateDetails) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListFlashSmsTemplatesResponseBodyData& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListFlashSmsTemplatesResponseBodyData& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> templateDetails_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
