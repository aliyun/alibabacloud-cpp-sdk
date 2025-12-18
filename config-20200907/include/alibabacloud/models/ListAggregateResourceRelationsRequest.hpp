// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCERELATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCERELATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateResourceRelationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourceRelationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(RelationType, relationType_);
      DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TargetResourceId, targetResourceId_);
      DARABONBA_PTR_TO_JSON(TargetResourceType, targetResourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourceRelationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(RelationType, relationType_);
      DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TargetResourceId, targetResourceId_);
      DARABONBA_PTR_FROM_JSON(TargetResourceType, targetResourceType_);
    };
    ListAggregateResourceRelationsRequest() = default ;
    ListAggregateResourceRelationsRequest(const ListAggregateResourceRelationsRequest &) = default ;
    ListAggregateResourceRelationsRequest(ListAggregateResourceRelationsRequest &&) = default ;
    ListAggregateResourceRelationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourceRelationsRequest() = default ;
    ListAggregateResourceRelationsRequest& operator=(const ListAggregateResourceRelationsRequest &) = default ;
    ListAggregateResourceRelationsRequest& operator=(ListAggregateResourceRelationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->region_ == nullptr && return this->relationType_ == nullptr && return this->resourceAccountId_ == nullptr
        && return this->resourceId_ == nullptr && return this->resourceType_ == nullptr && return this->targetResourceId_ == nullptr && return this->targetResourceType_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string aggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline ListAggregateResourceRelationsRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAggregateResourceRelationsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAggregateResourceRelationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListAggregateResourceRelationsRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // relationType Field Functions 
    bool hasRelationType() const { return this->relationType_ != nullptr;};
    void deleteRelationType() { this->relationType_ = nullptr;};
    inline string relationType() const { DARABONBA_PTR_GET_DEFAULT(relationType_, "") };
    inline ListAggregateResourceRelationsRequest& setRelationType(string relationType) { DARABONBA_PTR_SET_VALUE(relationType_, relationType) };


    // resourceAccountId Field Functions 
    bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
    void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
    inline int64_t resourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
    inline ListAggregateResourceRelationsRequest& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListAggregateResourceRelationsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListAggregateResourceRelationsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // targetResourceId Field Functions 
    bool hasTargetResourceId() const { return this->targetResourceId_ != nullptr;};
    void deleteTargetResourceId() { this->targetResourceId_ = nullptr;};
    inline string targetResourceId() const { DARABONBA_PTR_GET_DEFAULT(targetResourceId_, "") };
    inline ListAggregateResourceRelationsRequest& setTargetResourceId(string targetResourceId) { DARABONBA_PTR_SET_VALUE(targetResourceId_, targetResourceId) };


    // targetResourceType Field Functions 
    bool hasTargetResourceType() const { return this->targetResourceType_ != nullptr;};
    void deleteTargetResourceType() { this->targetResourceType_ = nullptr;};
    inline string targetResourceType() const { DARABONBA_PTR_GET_DEFAULT(targetResourceType_, "") };
    inline ListAggregateResourceRelationsRequest& setTargetResourceType(string targetResourceType) { DARABONBA_PTR_SET_VALUE(targetResourceType_, targetResourceType) };


  protected:
    // The ID of the account group.
    // 
    // This parameter is required.
    std::shared_ptr<string> aggregatorId_ = nullptr;
    // The maximum number of entries to return for a single request. Valid values: 1 to 1000.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request. You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the region in which the resource resides.
    // 
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    // The type of the relationship between the resource and the object.
    // 
    // Valid values:
    // 
    // *   IsContained: The object is included as part of the resource.
    // *   IsAttachedTo: The object is added to the resource.
    // *   IsAssociatedIn: The object is associated with the resource.
    // *   Contains: The object contains the resource.
    std::shared_ptr<string> relationType_ = nullptr;
    // The ID of the Alibaba Cloud account to which the resources in the account group belong.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> resourceAccountId_ = nullptr;
    // The resource ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The type of the resource.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the resource that is associated with the object.
    std::shared_ptr<string> targetResourceId_ = nullptr;
    // The type of the resource that is associated with the object.
    std::shared_ptr<string> targetResourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
