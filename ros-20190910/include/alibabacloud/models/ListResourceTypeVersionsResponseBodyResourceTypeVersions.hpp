// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPEVERSIONSRESPONSEBODYRESOURCETYPEVERSIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPEVERSIONSRESPONSEBODYRESOURCETYPEVERSIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypeVersionsResponseBodyResourceTypeVersions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypeVersionsResponseBodyResourceTypeVersions& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(IsDefaultVersion, isDefaultVersion_);
      DARABONBA_PTR_TO_JSON(Provider, provider_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypeVersionsResponseBodyResourceTypeVersions& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(IsDefaultVersion, isDefaultVersion_);
      DARABONBA_PTR_FROM_JSON(Provider, provider_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    ListResourceTypeVersionsResponseBodyResourceTypeVersions() = default ;
    ListResourceTypeVersionsResponseBodyResourceTypeVersions(const ListResourceTypeVersionsResponseBodyResourceTypeVersions &) = default ;
    ListResourceTypeVersionsResponseBodyResourceTypeVersions(ListResourceTypeVersionsResponseBodyResourceTypeVersions &&) = default ;
    ListResourceTypeVersionsResponseBodyResourceTypeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypeVersionsResponseBodyResourceTypeVersions() = default ;
    ListResourceTypeVersionsResponseBodyResourceTypeVersions& operator=(const ListResourceTypeVersionsResponseBodyResourceTypeVersions &) = default ;
    ListResourceTypeVersionsResponseBodyResourceTypeVersions& operator=(ListResourceTypeVersionsResponseBodyResourceTypeVersions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->description_ != nullptr && this->entityType_ != nullptr && this->isDefaultVersion_ != nullptr && this->provider_ != nullptr && this->resourceType_ != nullptr
        && this->updateTime_ != nullptr && this->versionId_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListResourceTypeVersionsResponseBodyResourceTypeVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListResourceTypeVersionsResponseBodyResourceTypeVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline ListResourceTypeVersionsResponseBodyResourceTypeVersions& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // isDefaultVersion Field Functions 
    bool hasIsDefaultVersion() const { return this->isDefaultVersion_ != nullptr;};
    void deleteIsDefaultVersion() { this->isDefaultVersion_ = nullptr;};
    inline bool isDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(isDefaultVersion_, false) };
    inline ListResourceTypeVersionsResponseBodyResourceTypeVersions& setIsDefaultVersion(bool isDefaultVersion) { DARABONBA_PTR_SET_VALUE(isDefaultVersion_, isDefaultVersion) };


    // provider Field Functions 
    bool hasProvider() const { return this->provider_ != nullptr;};
    void deleteProvider() { this->provider_ = nullptr;};
    inline string provider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
    inline ListResourceTypeVersionsResponseBodyResourceTypeVersions& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListResourceTypeVersionsResponseBodyResourceTypeVersions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListResourceTypeVersionsResponseBodyResourceTypeVersions& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline ListResourceTypeVersionsResponseBodyResourceTypeVersions& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The time when the version was created. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the version.
    std::shared_ptr<string> description_ = nullptr;
    // The entity type. Only Module may be returned.
    std::shared_ptr<string> entityType_ = nullptr;
    // Indicates whether the version is the default version. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> isDefaultVersion_ = nullptr;
    // The provider of the resource type. Valid values:
    // 
    // *   ROS: ROS
    // *   Self: yourself
    std::shared_ptr<string> provider_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The time when the version was updated. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The version ID.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
