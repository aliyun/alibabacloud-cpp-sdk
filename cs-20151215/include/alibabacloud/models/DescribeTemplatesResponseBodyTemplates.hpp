// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATESRESPONSEBODYTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTemplatesResponseBodyTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(acl, acl_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(template_type, templateType_);
      DARABONBA_PTR_TO_JSON(template_with_hist_id, templateWithHistId_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplatesResponseBodyTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(acl, acl_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(template_type, templateType_);
      DARABONBA_PTR_FROM_JSON(template_with_hist_id, templateWithHistId_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeTemplatesResponseBodyTemplates() = default ;
    DescribeTemplatesResponseBodyTemplates(const DescribeTemplatesResponseBodyTemplates &) = default ;
    DescribeTemplatesResponseBodyTemplates(DescribeTemplatesResponseBodyTemplates &&) = default ;
    DescribeTemplatesResponseBodyTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplatesResponseBodyTemplates() = default ;
    DescribeTemplatesResponseBodyTemplates& operator=(const DescribeTemplatesResponseBodyTemplates &) = default ;
    DescribeTemplatesResponseBodyTemplates& operator=(DescribeTemplatesResponseBodyTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acl_ == nullptr
        && return this->created_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->tags_ == nullptr
        && return this->template_ == nullptr && return this->templateType_ == nullptr && return this->templateWithHistId_ == nullptr && return this->updated_ == nullptr; };
    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string acl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // templateWithHistId Field Functions 
    bool hasTemplateWithHistId() const { return this->templateWithHistId_ != nullptr;};
    void deleteTemplateWithHistId() { this->templateWithHistId_ = nullptr;};
    inline string templateWithHistId() const { DARABONBA_PTR_GET_DEFAULT(templateWithHistId_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setTemplateWithHistId(string templateWithHistId) { DARABONBA_PTR_SET_VALUE(templateWithHistId_, templateWithHistId) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeTemplatesResponseBodyTemplates& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The access control policy of the template. Valid values:
    // 
    // *   `private`: The template is private.
    // *   `public`: The template is public.
    // *   `shared`: The template can be shared.
    // 
    // Default value: `private`.
    std::shared_ptr<string> acl_ = nullptr;
    // The time when the template was created.
    std::shared_ptr<string> created_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the template.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The label of the template. By default, the value is the name of the template.
    std::shared_ptr<string> tags_ = nullptr;
    // The template content in the YAML format.
    std::shared_ptr<string> template_ = nullptr;
    // The type of template. This parameter can be set to a custom value.
    // 
    // *   If the parameter is set to `kubernetes`, the template is displayed on the Templates page in the console.
    // *   If the parameter is set to `compose`, the template is displayed on the Container Service - Swarm page in the console. However, Container Service for Swarm is deprecated.
    std::shared_ptr<string> templateType_ = nullptr;
    // The ID of the parent template. The value of `template_with_hist_id` is the same for each template version. This allows you to manage different template versions.
    std::shared_ptr<string> templateWithHistId_ = nullptr;
    // The time when the template was updated.
    std::shared_ptr<string> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
