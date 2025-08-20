// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetResourceTypeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeResponseBody& obj) { 
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultVersionId, defaultVersionId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(IsDefaultVersion, isDefaultVersion_);
      DARABONBA_PTR_TO_JSON(LatestVersionId, latestVersionId_);
      DARABONBA_ANY_TO_JSON(Properties, properties_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SupportDriftDetection, supportDriftDetection_);
      DARABONBA_PTR_TO_JSON(SupportScratchDetection, supportScratchDetection_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TotalVersionCount, totalVersionCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeResponseBody& obj) { 
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultVersionId, defaultVersionId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(IsDefaultVersion, isDefaultVersion_);
      DARABONBA_PTR_FROM_JSON(LatestVersionId, latestVersionId_);
      DARABONBA_ANY_FROM_JSON(Properties, properties_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SupportDriftDetection, supportDriftDetection_);
      DARABONBA_PTR_FROM_JSON(SupportScratchDetection, supportScratchDetection_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TotalVersionCount, totalVersionCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    GetResourceTypeResponseBody() = default ;
    GetResourceTypeResponseBody(const GetResourceTypeResponseBody &) = default ;
    GetResourceTypeResponseBody(GetResourceTypeResponseBody &&) = default ;
    GetResourceTypeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeResponseBody() = default ;
    GetResourceTypeResponseBody& operator=(const GetResourceTypeResponseBody &) = default ;
    GetResourceTypeResponseBody& operator=(GetResourceTypeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->createTime_ != nullptr && this->defaultVersionId_ != nullptr && this->description_ != nullptr && this->entityType_ != nullptr && this->isDefaultVersion_ != nullptr
        && this->latestVersionId_ != nullptr && this->properties_ != nullptr && this->provider_ != nullptr && this->requestId_ != nullptr && this->resourceType_ != nullptr
        && this->supportDriftDetection_ != nullptr && this->supportScratchDetection_ != nullptr && this->templateBody_ != nullptr && this->totalVersionCount_ != nullptr && this->updateTime_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline GetResourceTypeResponseBody& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline GetResourceTypeResponseBody& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetResourceTypeResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultVersionId Field Functions 
    bool hasDefaultVersionId() const { return this->defaultVersionId_ != nullptr;};
    void deleteDefaultVersionId() { this->defaultVersionId_ = nullptr;};
    inline string defaultVersionId() const { DARABONBA_PTR_GET_DEFAULT(defaultVersionId_, "") };
    inline GetResourceTypeResponseBody& setDefaultVersionId(string defaultVersionId) { DARABONBA_PTR_SET_VALUE(defaultVersionId_, defaultVersionId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetResourceTypeResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline GetResourceTypeResponseBody& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // isDefaultVersion Field Functions 
    bool hasIsDefaultVersion() const { return this->isDefaultVersion_ != nullptr;};
    void deleteIsDefaultVersion() { this->isDefaultVersion_ = nullptr;};
    inline bool isDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(isDefaultVersion_, false) };
    inline GetResourceTypeResponseBody& setIsDefaultVersion(bool isDefaultVersion) { DARABONBA_PTR_SET_VALUE(isDefaultVersion_, isDefaultVersion) };


    // latestVersionId Field Functions 
    bool hasLatestVersionId() const { return this->latestVersionId_ != nullptr;};
    void deleteLatestVersionId() { this->latestVersionId_ = nullptr;};
    inline string latestVersionId() const { DARABONBA_PTR_GET_DEFAULT(latestVersionId_, "") };
    inline GetResourceTypeResponseBody& setLatestVersionId(string latestVersionId) { DARABONBA_PTR_SET_VALUE(latestVersionId_, latestVersionId) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline     const Darabonba::Json & properties() const { DARABONBA_GET(properties_) };
    Darabonba::Json & properties() { DARABONBA_GET(properties_) };
    inline GetResourceTypeResponseBody& setProperties(const Darabonba::Json & properties) { DARABONBA_SET_VALUE(properties_, properties) };
    inline GetResourceTypeResponseBody& setProperties(Darabonba::Json & properties) { DARABONBA_SET_RVALUE(properties_, properties) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline GetResourceTypeResponseBody& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceTypeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceTypeResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // supportDriftDetection Field Functions 
    bool hasSupportDriftDetection() const { return this->supportDriftDetection_ != nullptr;};
    void deleteSupportDriftDetection() { this->supportDriftDetection_ = nullptr;};
    inline bool supportDriftDetection() const { DARABONBA_PTR_GET_DEFAULT(supportDriftDetection_, false) };
    inline GetResourceTypeResponseBody& setSupportDriftDetection(bool supportDriftDetection) { DARABONBA_PTR_SET_VALUE(supportDriftDetection_, supportDriftDetection) };


    // supportScratchDetection Field Functions 
    bool hasSupportScratchDetection() const { return this->supportScratchDetection_ != nullptr;};
    void deleteSupportScratchDetection() { this->supportScratchDetection_ = nullptr;};
    inline bool supportScratchDetection() const { DARABONBA_PTR_GET_DEFAULT(supportScratchDetection_, false) };
    inline GetResourceTypeResponseBody& setSupportScratchDetection(bool supportScratchDetection) { DARABONBA_PTR_SET_VALUE(supportScratchDetection_, supportScratchDetection) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GetResourceTypeResponseBody& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // totalVersionCount Field Functions 
    bool hasTotalVersionCount() const { return this->totalVersionCount_ != nullptr;};
    void deleteTotalVersionCount() { this->totalVersionCount_ = nullptr;};
    inline int32_t totalVersionCount() const { DARABONBA_PTR_GET_DEFAULT(totalVersionCount_, 0) };
    inline GetResourceTypeResponseBody& setTotalVersionCount(int32_t totalVersionCount) { DARABONBA_PTR_SET_VALUE(totalVersionCount_, totalVersionCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetResourceTypeResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The type of the resource.
    Darabonba::Json attributes_ = nullptr;
    // The creation time. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> createTime_ = nullptr;
    // The default version ID.
    // 
    // > This parameter is returned only if the resource type is queried.
    std::shared_ptr<string> defaultVersionId_ = nullptr;
    // The description of the resource type.
    std::shared_ptr<string> description_ = nullptr;
    // The entity type. Valid values:
    // 
    // *   Resource: regular resource. For more information, see [Resources](https://help.aliyun.com/document_detail/28863.html).
    // *   DataSource: DataSource resource. For more information, see [DataSource resources](https://help.aliyun.com/document_detail/404753.html).
    // *   module: module.
    std::shared_ptr<string> entityType_ = nullptr;
    // Indicates whether the version is the default version. Valid values:
    // 
    // *   true
    // *   false
    // 
    // > This parameter is returned only if a specific version of the resource type is queried.
    std::shared_ptr<bool> isDefaultVersion_ = nullptr;
    // The latest version ID.
    // 
    // > This parameter is returned only if the resource type is queried.
    std::shared_ptr<string> latestVersionId_ = nullptr;
    // Indicates whether the resource supports drift detection. Default value: false. Valid values:
    // 
    // *   true: Drift detection is supported.
    // *   false: Drift detection is not supported.
    Darabonba::Json properties_ = nullptr;
    // The provider of the resource type. Valid values:
    // 
    // *   ROS: The resource type is provided by Resource Orchestration Service (ROS).
    // *   Self: The resource type is provided by you.
    std::shared_ptr<string> provider_ = nullptr;
    // The attributes of the resource.
    std::shared_ptr<string> requestId_ = nullptr;
    // The properties of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
    // Indicates whether the resource supports scratch detection. Default value: false. Valid values:
    // 
    // *   true: Scratch detection is supported.
    // *   false: Scratch detection is not supported.
    std::shared_ptr<bool> supportDriftDetection_ = nullptr;
    // The entity type. Valid values:
    // 
    // *   Resource: resources other than DataSource resources. For more information, see [Resources](https://help.aliyun.com/document_detail/28863.html).
    // *   DataSource: DataSource resources.
    std::shared_ptr<bool> supportScratchDetection_ = nullptr;
    // The template content in the module.
    // 
    // > This parameter is returned only if a specific version of the resource type is queried.
    std::shared_ptr<string> templateBody_ = nullptr;
    // The total number of versions.
    // 
    // > This parameter is returned only if the resource type is queried.
    std::shared_ptr<int32_t> totalVersionCount_ = nullptr;
    // The update time. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format. The time is displayed in UTC.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
