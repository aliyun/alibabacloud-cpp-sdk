// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOUNTSGROUPBYREGIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceCountsGroupByRegionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceCountsGroupByRegionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_TO_JSON(FolderId, folderId_);
      DARABONBA_PTR_TO_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceCountsGroupByRegionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AggregatorId, aggregatorId_);
      DARABONBA_PTR_FROM_JSON(FolderId, folderId_);
      DARABONBA_PTR_FROM_JSON(ResourceAccountId, resourceAccountId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetAggregateResourceCountsGroupByRegionRequest() = default ;
    GetAggregateResourceCountsGroupByRegionRequest(const GetAggregateResourceCountsGroupByRegionRequest &) = default ;
    GetAggregateResourceCountsGroupByRegionRequest(GetAggregateResourceCountsGroupByRegionRequest &&) = default ;
    GetAggregateResourceCountsGroupByRegionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceCountsGroupByRegionRequest() = default ;
    GetAggregateResourceCountsGroupByRegionRequest& operator=(const GetAggregateResourceCountsGroupByRegionRequest &) = default ;
    GetAggregateResourceCountsGroupByRegionRequest& operator=(GetAggregateResourceCountsGroupByRegionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregatorId_ == nullptr
        && this->folderId_ == nullptr && this->resourceAccountId_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr; };
    // aggregatorId Field Functions 
    bool hasAggregatorId() const { return this->aggregatorId_ != nullptr;};
    void deleteAggregatorId() { this->aggregatorId_ = nullptr;};
    inline string getAggregatorId() const { DARABONBA_PTR_GET_DEFAULT(aggregatorId_, "") };
    inline GetAggregateResourceCountsGroupByRegionRequest& setAggregatorId(string aggregatorId) { DARABONBA_PTR_SET_VALUE(aggregatorId_, aggregatorId) };


    // folderId Field Functions 
    bool hasFolderId() const { return this->folderId_ != nullptr;};
    void deleteFolderId() { this->folderId_ = nullptr;};
    inline string getFolderId() const { DARABONBA_PTR_GET_DEFAULT(folderId_, "") };
    inline GetAggregateResourceCountsGroupByRegionRequest& setFolderId(string folderId) { DARABONBA_PTR_SET_VALUE(folderId_, folderId) };


    // resourceAccountId Field Functions 
    bool hasResourceAccountId() const { return this->resourceAccountId_ != nullptr;};
    void deleteResourceAccountId() { this->resourceAccountId_ = nullptr;};
    inline int64_t getResourceAccountId() const { DARABONBA_PTR_GET_DEFAULT(resourceAccountId_, 0L) };
    inline GetAggregateResourceCountsGroupByRegionRequest& setResourceAccountId(int64_t resourceAccountId) { DARABONBA_PTR_SET_VALUE(resourceAccountId_, resourceAccountId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline GetAggregateResourceCountsGroupByRegionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetAggregateResourceCountsGroupByRegionRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The ID of the account group.
    // 
    // For more information about how to obtain the ID of an account group, see [ListAggregators](https://help.aliyun.com/document_detail/255797.html).
    // 
    // This parameter is required.
    shared_ptr<string> aggregatorId_ {};
    // The ID of the folder in the resource directory. For more information about how to obtain the ID of a folder, see [View the basic information of a folder](https://help.aliyun.com/document_detail/111223.html).
    shared_ptr<string> folderId_ {};
    // The ID of the Alibaba Cloud account to which the resources in the account group belong.
    // 
    // > You can use either the ResourceAccountId or ResourceOwnerId parameter. We recommend that you use the ResourceAccountId parameter.
    shared_ptr<int64_t> resourceAccountId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The resource type.
    // 
    // For more information about how to obtain the type of a resource, see [ListAggregateDiscoveredResources](https://help.aliyun.com/document_detail/265983.html).
    shared_ptr<string> resourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
