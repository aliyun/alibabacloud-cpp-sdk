// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPESUMMARIES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODYRESOURCETYPESUMMARIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypesResponseBodyResourceTypeSummaries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBodyResourceTypeSummaries& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DefaultVersionId, defaultVersionId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(LatestVersionId, latestVersionId_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TotalVersionCount, totalVersionCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBodyResourceTypeSummaries& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DefaultVersionId, defaultVersionId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(LatestVersionId, latestVersionId_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TotalVersionCount, totalVersionCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListResourceTypesResponseBodyResourceTypeSummaries() = default ;
    ListResourceTypesResponseBodyResourceTypeSummaries(const ListResourceTypesResponseBodyResourceTypeSummaries &) = default ;
    ListResourceTypesResponseBodyResourceTypeSummaries(ListResourceTypesResponseBodyResourceTypeSummaries &&) = default ;
    ListResourceTypesResponseBodyResourceTypeSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBodyResourceTypeSummaries() = default ;
    ListResourceTypesResponseBodyResourceTypeSummaries& operator=(const ListResourceTypesResponseBodyResourceTypeSummaries &) = default ;
    ListResourceTypesResponseBodyResourceTypeSummaries& operator=(ListResourceTypesResponseBodyResourceTypeSummaries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->defaultVersionId_ != nullptr && this->description_ != nullptr && this->entityType_ != nullptr && this->latestVersionId_ != nullptr && this->provider_ != nullptr
        && this->resourceType_ != nullptr && this->totalVersionCount_ != nullptr && this->updateTime_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // defaultVersionId Field Functions 
    bool hasDefaultVersionId() const { return this->defaultVersionId_ != nullptr;};
    void deleteDefaultVersionId() { this->defaultVersionId_ = nullptr;};
    inline string defaultVersionId() const { DARABONBA_PTR_GET_DEFAULT(defaultVersionId_, "") };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setDefaultVersionId(string defaultVersionId) { DARABONBA_PTR_SET_VALUE(defaultVersionId_, defaultVersionId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // latestVersionId Field Functions 
    bool hasLatestVersionId() const { return this->latestVersionId_ != nullptr;};
    void deleteLatestVersionId() { this->latestVersionId_ = nullptr;};
    inline string latestVersionId() const { DARABONBA_PTR_GET_DEFAULT(latestVersionId_, "") };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setLatestVersionId(string latestVersionId) { DARABONBA_PTR_SET_VALUE(latestVersionId_, latestVersionId) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // totalVersionCount Field Functions 
    bool hasTotalVersionCount() const { return this->totalVersionCount_ != nullptr;};
    void deleteTotalVersionCount() { this->totalVersionCount_ = nullptr;};
    inline int32_t totalVersionCount() const { DARABONBA_PTR_GET_DEFAULT(totalVersionCount_, 0) };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setTotalVersionCount(int32_t totalVersionCount) { DARABONBA_PTR_SET_VALUE(totalVersionCount_, totalVersionCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListResourceTypesResponseBodyResourceTypeSummaries& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The creation time. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the default version.
    std::shared_ptr<string> defaultVersionId_ = nullptr;
    // The description of the resource type.
    std::shared_ptr<string> description_ = nullptr;
    // The entity type. Valid values:
    // 
    // *   Resource: regular resources.
    // *   DataSource: DataSource resources.
    // *   Module: modules.
    std::shared_ptr<string> entityType_ = nullptr;
    // The ID of the latest version.
    std::shared_ptr<string> latestVersionId_ = nullptr;
    // The provider of the resource type. Valid values:
    // 
    // *   ROS: The resource type is provided by ROS.
    // *   Self: The resource type is provided by you.
    std::shared_ptr<string> provider_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The number of versions.
    std::shared_ptr<int32_t> totalVersionCount_ = nullptr;
    // The update time. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
