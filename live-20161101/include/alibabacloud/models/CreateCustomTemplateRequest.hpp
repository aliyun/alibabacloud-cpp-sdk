// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECUSTOMTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CreateCustomTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCustomTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCustomTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomTemplate, customTemplate_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    CreateCustomTemplateRequest() = default ;
    CreateCustomTemplateRequest(const CreateCustomTemplateRequest &) = default ;
    CreateCustomTemplateRequest(CreateCustomTemplateRequest &&) = default ;
    CreateCustomTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCustomTemplateRequest() = default ;
    CreateCustomTemplateRequest& operator=(const CreateCustomTemplateRequest &) = default ;
    CreateCustomTemplateRequest& operator=(CreateCustomTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customTemplate_ != nullptr
        && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->template_ != nullptr; };
    // customTemplate Field Functions 
    bool hasCustomTemplate() const { return this->customTemplate_ != nullptr;};
    void deleteCustomTemplate() { this->customTemplate_ = nullptr;};
    inline string customTemplate() const { DARABONBA_PTR_GET_DEFAULT(customTemplate_, "") };
    inline CreateCustomTemplateRequest& setCustomTemplate(string customTemplate) { DARABONBA_PTR_SET_VALUE(customTemplate_, customTemplate) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateCustomTemplateRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateCustomTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline CreateCustomTemplateRequest& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The configuration of the template. The value is in the following JSON format: {height:xxx,scale:xxx,gop:xxx,bframes:xxx,cdesc:xxx}. All fields are required. If any field is left empty, the call fails.
    // 
    // >  For more information, see **Fields of the CustomTemplate parameter**.
    // 
    // This parameter is required.
    std::shared_ptr<string> customTemplate_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the template.
    // 
    // > Record the template name. The template name is required if you want to use, query, or delete the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
