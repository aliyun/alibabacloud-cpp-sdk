// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTTEMPLATESRESPONSEBODYTEMPLATEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTemplatesResponseBodyTemplateDataTemplate.hpp>
#include <alibabacloud/models/ListTemplatesResponseBodyTemplateDataTemplateTag.hpp>
#include <alibabacloud/models/ListTemplatesResponseBodyTemplateDataTemplateType.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20210202
{
namespace Models
{
  class ListTemplatesResponseBodyTemplateData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTemplatesResponseBodyTemplateData& obj) { 
      DARABONBA_PTR_TO_JSON(Template, template_);
      DARABONBA_PTR_TO_JSON(TemplateTag, templateTag_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTemplatesResponseBodyTemplateData& obj) { 
      DARABONBA_PTR_FROM_JSON(Template, template_);
      DARABONBA_PTR_FROM_JSON(TemplateTag, templateTag_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    ListTemplatesResponseBodyTemplateData() = default ;
    ListTemplatesResponseBodyTemplateData(const ListTemplatesResponseBodyTemplateData &) = default ;
    ListTemplatesResponseBodyTemplateData(ListTemplatesResponseBodyTemplateData &&) = default ;
    ListTemplatesResponseBodyTemplateData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTemplatesResponseBodyTemplateData() = default ;
    ListTemplatesResponseBodyTemplateData& operator=(const ListTemplatesResponseBodyTemplateData &) = default ;
    ListTemplatesResponseBodyTemplateData& operator=(ListTemplatesResponseBodyTemplateData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->template_ == nullptr
        && return this->templateTag_ == nullptr && return this->templateType_ == nullptr; };
    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const Models::ListTemplatesResponseBodyTemplateDataTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, Models::ListTemplatesResponseBodyTemplateDataTemplate) };
    inline Models::ListTemplatesResponseBodyTemplateDataTemplate _template() { DARABONBA_PTR_GET(template_, Models::ListTemplatesResponseBodyTemplateDataTemplate) };
    inline ListTemplatesResponseBodyTemplateData& setTemplate(const Models::ListTemplatesResponseBodyTemplateDataTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline ListTemplatesResponseBodyTemplateData& setTemplate(Models::ListTemplatesResponseBodyTemplateDataTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


    // templateTag Field Functions 
    bool hasTemplateTag() const { return this->templateTag_ != nullptr;};
    void deleteTemplateTag() { this->templateTag_ = nullptr;};
    inline const Models::ListTemplatesResponseBodyTemplateDataTemplateTag & templateTag() const { DARABONBA_PTR_GET_CONST(templateTag_, Models::ListTemplatesResponseBodyTemplateDataTemplateTag) };
    inline Models::ListTemplatesResponseBodyTemplateDataTemplateTag templateTag() { DARABONBA_PTR_GET(templateTag_, Models::ListTemplatesResponseBodyTemplateDataTemplateTag) };
    inline ListTemplatesResponseBodyTemplateData& setTemplateTag(const Models::ListTemplatesResponseBodyTemplateDataTemplateTag & templateTag) { DARABONBA_PTR_SET_VALUE(templateTag_, templateTag) };
    inline ListTemplatesResponseBodyTemplateData& setTemplateTag(Models::ListTemplatesResponseBodyTemplateDataTemplateTag && templateTag) { DARABONBA_PTR_SET_RVALUE(templateTag_, templateTag) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline const Models::ListTemplatesResponseBodyTemplateDataTemplateType & templateType() const { DARABONBA_PTR_GET_CONST(templateType_, Models::ListTemplatesResponseBodyTemplateDataTemplateType) };
    inline Models::ListTemplatesResponseBodyTemplateDataTemplateType templateType() { DARABONBA_PTR_GET(templateType_, Models::ListTemplatesResponseBodyTemplateDataTemplateType) };
    inline ListTemplatesResponseBodyTemplateData& setTemplateType(const Models::ListTemplatesResponseBodyTemplateDataTemplateType & templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };
    inline ListTemplatesResponseBodyTemplateData& setTemplateType(Models::ListTemplatesResponseBodyTemplateDataTemplateType && templateType) { DARABONBA_PTR_SET_RVALUE(templateType_, templateType) };


  protected:
    std::shared_ptr<Models::ListTemplatesResponseBodyTemplateDataTemplate> template_ = nullptr;
    std::shared_ptr<Models::ListTemplatesResponseBodyTemplateDataTemplateTag> templateTag_ = nullptr;
    std::shared_ptr<Models::ListTemplatesResponseBodyTemplateDataTemplateType> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20210202
#endif
