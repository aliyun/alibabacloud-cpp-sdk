// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPEVERSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPEVERSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListResourceTypeVersionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypeVersionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTypeVersions, resourceTypeVersions_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypeVersionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeVersions, resourceTypeVersions_);
    };
    ListResourceTypeVersionsResponseBody() = default ;
    ListResourceTypeVersionsResponseBody(const ListResourceTypeVersionsResponseBody &) = default ;
    ListResourceTypeVersionsResponseBody(ListResourceTypeVersionsResponseBody &&) = default ;
    ListResourceTypeVersionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypeVersionsResponseBody() = default ;
    ListResourceTypeVersionsResponseBody& operator=(const ListResourceTypeVersionsResponseBody &) = default ;
    ListResourceTypeVersionsResponseBody& operator=(ListResourceTypeVersionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTypeVersions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypeVersions& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(EntityType, entityType_);
        DARABONBA_PTR_TO_JSON(IsDefaultVersion, isDefaultVersion_);
        DARABONBA_PTR_TO_JSON(Provider, provider_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(VersionId, versionId_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTypeVersions& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
        DARABONBA_PTR_FROM_JSON(IsDefaultVersion, isDefaultVersion_);
        DARABONBA_PTR_FROM_JSON(Provider, provider_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
      };
      ResourceTypeVersions() = default ;
      ResourceTypeVersions(const ResourceTypeVersions &) = default ;
      ResourceTypeVersions(ResourceTypeVersions &&) = default ;
      ResourceTypeVersions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTypeVersions() = default ;
      ResourceTypeVersions& operator=(const ResourceTypeVersions &) = default ;
      ResourceTypeVersions& operator=(ResourceTypeVersions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->entityType_ == nullptr && this->isDefaultVersion_ == nullptr && this->provider_ == nullptr && this->resourceType_ == nullptr
        && this->updateTime_ == nullptr && this->versionId_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceTypeVersions& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResourceTypeVersions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline ResourceTypeVersions& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // isDefaultVersion Field Functions 
      bool hasIsDefaultVersion() const { return this->isDefaultVersion_ != nullptr;};
      void deleteIsDefaultVersion() { this->isDefaultVersion_ = nullptr;};
      inline bool getIsDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(isDefaultVersion_, false) };
      inline ResourceTypeVersions& setIsDefaultVersion(bool isDefaultVersion) { DARABONBA_PTR_SET_VALUE(isDefaultVersion_, isDefaultVersion) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline ResourceTypeVersions& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceTypeVersions& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ResourceTypeVersions& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // versionId Field Functions 
      bool hasVersionId() const { return this->versionId_ != nullptr;};
      void deleteVersionId() { this->versionId_ = nullptr;};
      inline string getVersionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
      inline ResourceTypeVersions& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


    protected:
      // The time when the version was created. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
      shared_ptr<string> createTime_ {};
      // The description of the version.
      shared_ptr<string> description_ {};
      // The entity type. Only Module may be returned.
      shared_ptr<string> entityType_ {};
      // Indicates whether the version is the default version. Valid values:
      // 
      // *   true
      // *   false
      shared_ptr<bool> isDefaultVersion_ {};
      // The provider of the resource type. Valid values:
      // 
      // *   ROS: ROS
      // *   Self: yourself
      shared_ptr<string> provider_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The time when the version was updated. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
      shared_ptr<string> updateTime_ {};
      // The version ID.
      shared_ptr<string> versionId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceTypeVersions_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypeVersionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypeVersions Field Functions 
    bool hasResourceTypeVersions() const { return this->resourceTypeVersions_ != nullptr;};
    void deleteResourceTypeVersions() { this->resourceTypeVersions_ = nullptr;};
    inline const vector<ListResourceTypeVersionsResponseBody::ResourceTypeVersions> & getResourceTypeVersions() const { DARABONBA_PTR_GET_CONST(resourceTypeVersions_, vector<ListResourceTypeVersionsResponseBody::ResourceTypeVersions>) };
    inline vector<ListResourceTypeVersionsResponseBody::ResourceTypeVersions> getResourceTypeVersions() { DARABONBA_PTR_GET(resourceTypeVersions_, vector<ListResourceTypeVersionsResponseBody::ResourceTypeVersions>) };
    inline ListResourceTypeVersionsResponseBody& setResourceTypeVersions(const vector<ListResourceTypeVersionsResponseBody::ResourceTypeVersions> & resourceTypeVersions) { DARABONBA_PTR_SET_VALUE(resourceTypeVersions_, resourceTypeVersions) };
    inline ListResourceTypeVersionsResponseBody& setResourceTypeVersions(vector<ListResourceTypeVersionsResponseBody::ResourceTypeVersions> && resourceTypeVersions) { DARABONBA_PTR_SET_RVALUE(resourceTypeVersions_, resourceTypeVersions) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The versions of the resource types.
    shared_ptr<vector<ListResourceTypeVersionsResponseBody::ResourceTypeVersions>> resourceTypeVersions_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
