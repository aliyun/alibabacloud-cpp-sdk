// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCETYPESRESPONSEBODY_HPP_
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
  class ListResourceTypesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTypeSummaries, resourceTypeSummaries_);
      DARABONBA_PTR_TO_JSON(ResourceTypes, resourceTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceTypesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeSummaries, resourceTypeSummaries_);
      DARABONBA_PTR_FROM_JSON(ResourceTypes, resourceTypes_);
    };
    ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody(ListResourceTypesResponseBody &&) = default ;
    ListResourceTypesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceTypesResponseBody() = default ;
    ListResourceTypesResponseBody& operator=(const ListResourceTypesResponseBody &) = default ;
    ListResourceTypesResponseBody& operator=(ListResourceTypesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTypeSummaries : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTypeSummaries& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ResourceTypeSummaries& obj) { 
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
      ResourceTypeSummaries() = default ;
      ResourceTypeSummaries(const ResourceTypeSummaries &) = default ;
      ResourceTypeSummaries(ResourceTypeSummaries &&) = default ;
      ResourceTypeSummaries(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTypeSummaries() = default ;
      ResourceTypeSummaries& operator=(const ResourceTypeSummaries &) = default ;
      ResourceTypeSummaries& operator=(ResourceTypeSummaries &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->defaultVersionId_ == nullptr && this->description_ == nullptr && this->entityType_ == nullptr && this->latestVersionId_ == nullptr && this->provider_ == nullptr
        && this->resourceType_ == nullptr && this->totalVersionCount_ == nullptr && this->updateTime_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ResourceTypeSummaries& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // defaultVersionId Field Functions 
      bool hasDefaultVersionId() const { return this->defaultVersionId_ != nullptr;};
      void deleteDefaultVersionId() { this->defaultVersionId_ = nullptr;};
      inline string getDefaultVersionId() const { DARABONBA_PTR_GET_DEFAULT(defaultVersionId_, "") };
      inline ResourceTypeSummaries& setDefaultVersionId(string defaultVersionId) { DARABONBA_PTR_SET_VALUE(defaultVersionId_, defaultVersionId) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline ResourceTypeSummaries& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // entityType Field Functions 
      bool hasEntityType() const { return this->entityType_ != nullptr;};
      void deleteEntityType() { this->entityType_ = nullptr;};
      inline string getEntityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
      inline ResourceTypeSummaries& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


      // latestVersionId Field Functions 
      bool hasLatestVersionId() const { return this->latestVersionId_ != nullptr;};
      void deleteLatestVersionId() { this->latestVersionId_ = nullptr;};
      inline string getLatestVersionId() const { DARABONBA_PTR_GET_DEFAULT(latestVersionId_, "") };
      inline ResourceTypeSummaries& setLatestVersionId(string latestVersionId) { DARABONBA_PTR_SET_VALUE(latestVersionId_, latestVersionId) };


      // provider Field Functions 
      bool hasProvider() const { return this->provider_ != nullptr;};
      void deleteProvider() { this->provider_ = nullptr;};
      inline string getProvider() const { DARABONBA_PTR_GET_DEFAULT(provider_, "") };
      inline ResourceTypeSummaries& setProvider(string provider) { DARABONBA_PTR_SET_VALUE(provider_, provider) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceTypeSummaries& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // totalVersionCount Field Functions 
      bool hasTotalVersionCount() const { return this->totalVersionCount_ != nullptr;};
      void deleteTotalVersionCount() { this->totalVersionCount_ = nullptr;};
      inline int32_t getTotalVersionCount() const { DARABONBA_PTR_GET_DEFAULT(totalVersionCount_, 0) };
      inline ResourceTypeSummaries& setTotalVersionCount(int32_t totalVersionCount) { DARABONBA_PTR_SET_VALUE(totalVersionCount_, totalVersionCount) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ResourceTypeSummaries& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The creation time. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
      shared_ptr<string> createTime_ {};
      // The ID of the default version.
      shared_ptr<string> defaultVersionId_ {};
      // The description of the resource type.
      shared_ptr<string> description_ {};
      // The entity type. Valid values:
      // 
      // *   Resource: regular resources.
      // *   DataSource: DataSource resources.
      // *   Module: modules.
      shared_ptr<string> entityType_ {};
      // The ID of the latest version.
      shared_ptr<string> latestVersionId_ {};
      // The provider of the resource type. Valid values:
      // 
      // *   ROS: The resource type is provided by ROS.
      // *   Self: The resource type is provided by you.
      shared_ptr<string> provider_ {};
      // The resource type.
      shared_ptr<string> resourceType_ {};
      // The number of versions.
      shared_ptr<int32_t> totalVersionCount_ {};
      // The update time. The time is displayed in UTC. The time follows the ISO 8601 standard in the YYYY-MM-DDThh:mm:ss format.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceTypeSummaries_ == nullptr && this->resourceTypes_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceTypesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTypeSummaries Field Functions 
    bool hasResourceTypeSummaries() const { return this->resourceTypeSummaries_ != nullptr;};
    void deleteResourceTypeSummaries() { this->resourceTypeSummaries_ = nullptr;};
    inline const vector<ListResourceTypesResponseBody::ResourceTypeSummaries> & getResourceTypeSummaries() const { DARABONBA_PTR_GET_CONST(resourceTypeSummaries_, vector<ListResourceTypesResponseBody::ResourceTypeSummaries>) };
    inline vector<ListResourceTypesResponseBody::ResourceTypeSummaries> getResourceTypeSummaries() { DARABONBA_PTR_GET(resourceTypeSummaries_, vector<ListResourceTypesResponseBody::ResourceTypeSummaries>) };
    inline ListResourceTypesResponseBody& setResourceTypeSummaries(const vector<ListResourceTypesResponseBody::ResourceTypeSummaries> & resourceTypeSummaries) { DARABONBA_PTR_SET_VALUE(resourceTypeSummaries_, resourceTypeSummaries) };
    inline ListResourceTypesResponseBody& setResourceTypeSummaries(vector<ListResourceTypesResponseBody::ResourceTypeSummaries> && resourceTypeSummaries) { DARABONBA_PTR_SET_RVALUE(resourceTypeSummaries_, resourceTypeSummaries) };


    // resourceTypes Field Functions 
    bool hasResourceTypes() const { return this->resourceTypes_ != nullptr;};
    void deleteResourceTypes() { this->resourceTypes_ = nullptr;};
    inline const vector<string> & getResourceTypes() const { DARABONBA_PTR_GET_CONST(resourceTypes_, vector<string>) };
    inline vector<string> getResourceTypes() { DARABONBA_PTR_GET(resourceTypes_, vector<string>) };
    inline ListResourceTypesResponseBody& setResourceTypes(const vector<string> & resourceTypes) { DARABONBA_PTR_SET_VALUE(resourceTypes_, resourceTypes) };
    inline ListResourceTypesResponseBody& setResourceTypes(vector<string> && resourceTypes) { DARABONBA_PTR_SET_RVALUE(resourceTypes_, resourceTypes) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The resource type summaries.
    shared_ptr<vector<ListResourceTypesResponseBody::ResourceTypeSummaries>> resourceTypeSummaries_ {};
    // The array of resource types.
    shared_ptr<vector<string>> resourceTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
