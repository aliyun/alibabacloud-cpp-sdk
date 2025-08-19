// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATEATTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATEATTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeTemplateAttributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateAttributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(acl, acl_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(template, template_);
      DARABONBA_PTR_TO_JSON(template_type, templateType_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(template_with_hist_id, templateWithHistId_);
      DARABONBA_PTR_TO_JSON(created, created_);
      DARABONBA_PTR_TO_JSON(updated, updated_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateAttributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(acl, acl_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(template, template_);
      DARABONBA_PTR_FROM_JSON(template_type, templateType_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(template_with_hist_id, templateWithHistId_);
      DARABONBA_PTR_FROM_JSON(created, created_);
      DARABONBA_PTR_FROM_JSON(updated, updated_);
    };
    DescribeTemplateAttributeResponseBody() = default ;
    DescribeTemplateAttributeResponseBody(const DescribeTemplateAttributeResponseBody &) = default ;
    DescribeTemplateAttributeResponseBody(DescribeTemplateAttributeResponseBody &&) = default ;
    DescribeTemplateAttributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateAttributeResponseBody() = default ;
    DescribeTemplateAttributeResponseBody& operator=(const DescribeTemplateAttributeResponseBody &) = default ;
    DescribeTemplateAttributeResponseBody& operator=(DescribeTemplateAttributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->acl_ != nullptr && this->name_ != nullptr && this->template_ != nullptr && this->templateType_ != nullptr && this->description_ != nullptr
        && this->tags_ != nullptr && this->templateWithHistId_ != nullptr && this->created_ != nullptr && this->updated_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTemplateAttributeResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // acl Field Functions 
    bool hasAcl() const { return this->acl_ != nullptr;};
    void deleteAcl() { this->acl_ = nullptr;};
    inline string acl() const { DARABONBA_PTR_GET_DEFAULT(acl_, "") };
    inline DescribeTemplateAttributeResponseBody& setAcl(string acl) { DARABONBA_PTR_SET_VALUE(acl_, acl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTemplateAttributeResponseBody& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline DescribeTemplateAttributeResponseBody& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline DescribeTemplateAttributeResponseBody& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeTemplateAttributeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline DescribeTemplateAttributeResponseBody& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // templateWithHistId Field Functions 
    bool hasTemplateWithHistId() const { return this->templateWithHistId_ != nullptr;};
    void deleteTemplateWithHistId() { this->templateWithHistId_ = nullptr;};
    inline string templateWithHistId() const { DARABONBA_PTR_GET_DEFAULT(templateWithHistId_, "") };
    inline DescribeTemplateAttributeResponseBody& setTemplateWithHistId(string templateWithHistId) { DARABONBA_PTR_SET_VALUE(templateWithHistId_, templateWithHistId) };


    // created Field Functions 
    bool hasCreated() const { return this->created_ != nullptr;};
    void deleteCreated() { this->created_ = nullptr;};
    inline string created() const { DARABONBA_PTR_GET_DEFAULT(created_, "") };
    inline DescribeTemplateAttributeResponseBody& setCreated(string created) { DARABONBA_PTR_SET_VALUE(created_, created) };


    // updated Field Functions 
    bool hasUpdated() const { return this->updated_ != nullptr;};
    void deleteUpdated() { this->updated_ = nullptr;};
    inline string updated() const { DARABONBA_PTR_GET_DEFAULT(updated_, "") };
    inline DescribeTemplateAttributeResponseBody& setUpdated(string updated) { DARABONBA_PTR_SET_VALUE(updated_, updated) };


  protected:
    // The ID of the template. When you update a template, a new template ID is generated.
    std::shared_ptr<string> id_ = nullptr;
    // The access control policy of the template.
    std::shared_ptr<string> acl_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The template content in the YAML format.
    std::shared_ptr<string> template_ = nullptr;
    // The type of template. The value can be a custom value.
    // 
    // *   If the parameter is set to `kubernetes`, the template is displayed on the Templates page in the console.
    // *   If the parameter is set to `compose`, the template is displayed on the Container Service - Swarm page in the console. Container Service for Swarm is deprecated.
    // *   If the value of the parameter is not `kubernetes`, the template is not displayed on the Templates page in the console. We recommend that you set the parameter to `kubernetes`.
    // 
    // Default value: `kubernetes`.
    std::shared_ptr<string> templateType_ = nullptr;
    // The description of the template.
    std::shared_ptr<string> description_ = nullptr;
    // The label of the template.
    std::shared_ptr<string> tags_ = nullptr;
    // The unique ID of the template. The value remains unchanged after the template is updated.
    std::shared_ptr<string> templateWithHistId_ = nullptr;
    // The time when the template was created.
    std::shared_ptr<string> created_ = nullptr;
    // The time when the template was updated.
    std::shared_ptr<string> updated_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
