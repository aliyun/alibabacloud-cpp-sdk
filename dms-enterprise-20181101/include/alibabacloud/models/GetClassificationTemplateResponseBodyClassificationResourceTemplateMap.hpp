// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLASSIFICATIONTEMPLATERESPONSEBODYCLASSIFICATIONRESOURCETEMPLATEMAP_HPP_
#define ALIBABACLOUD_MODELS_GETCLASSIFICATIONTEMPLATERESPONSEBODYCLASSIFICATIONRESOURCETEMPLATEMAP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetClassificationTemplateResponseBodyClassificationResourceTemplateMap : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClassificationTemplateResponseBodyClassificationResourceTemplateMap& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
    };
    friend void from_json(const Darabonba::Json& j, GetClassificationTemplateResponseBodyClassificationResourceTemplateMap& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
    };
    GetClassificationTemplateResponseBodyClassificationResourceTemplateMap() = default ;
    GetClassificationTemplateResponseBodyClassificationResourceTemplateMap(const GetClassificationTemplateResponseBodyClassificationResourceTemplateMap &) = default ;
    GetClassificationTemplateResponseBodyClassificationResourceTemplateMap(GetClassificationTemplateResponseBodyClassificationResourceTemplateMap &&) = default ;
    GetClassificationTemplateResponseBodyClassificationResourceTemplateMap(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClassificationTemplateResponseBodyClassificationResourceTemplateMap() = default ;
    GetClassificationTemplateResponseBodyClassificationResourceTemplateMap& operator=(const GetClassificationTemplateResponseBodyClassificationResourceTemplateMap &) = default ;
    GetClassificationTemplateResponseBodyClassificationResourceTemplateMap& operator=(GetClassificationTemplateResponseBodyClassificationResourceTemplateMap &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->resourceType_ == nullptr && return this->templateId_ == nullptr && return this->templateType_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline int64_t resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
    inline GetClassificationTemplateResponseBodyClassificationResourceTemplateMap& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetClassificationTemplateResponseBodyClassificationResourceTemplateMap& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline int64_t templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
    inline GetClassificationTemplateResponseBodyClassificationResourceTemplateMap& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateType Field Functions 
    bool hasTemplateType() const { return this->templateType_ != nullptr;};
    void deleteTemplateType() { this->templateType_ = nullptr;};
    inline string templateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
    inline GetClassificationTemplateResponseBodyClassificationResourceTemplateMap& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


  protected:
    // The ID of the resource. The supported resource type is INSTANCE. The resource ID corresponds to the value of InstanceId. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) operation to obtain the value of InstanceId.
    std::shared_ptr<int64_t> resourceId_ = nullptr;
    // The resource type. The value is fixed as **INSTANCE**.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the classification and grading template.
    std::shared_ptr<int64_t> templateId_ = nullptr;
    // The type of the classification and grading template. Valid values:
    // 
    // *   **INNER**: a built-in template.
    // *   **USER_DEFINE**: a custom template.
    std::shared_ptr<string> templateType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
