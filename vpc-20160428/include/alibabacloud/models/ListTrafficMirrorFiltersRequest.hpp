// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICMIRRORFILTERSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListTrafficMirrorFiltersRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListTrafficMirrorFiltersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficMirrorFiltersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterIds, trafficMirrorFilterIds_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficMirrorFiltersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterIds, trafficMirrorFilterIds_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterName, trafficMirrorFilterName_);
    };
    ListTrafficMirrorFiltersRequest() = default ;
    ListTrafficMirrorFiltersRequest(const ListTrafficMirrorFiltersRequest &) = default ;
    ListTrafficMirrorFiltersRequest(ListTrafficMirrorFiltersRequest &&) = default ;
    ListTrafficMirrorFiltersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficMirrorFiltersRequest() = default ;
    ListTrafficMirrorFiltersRequest& operator=(const ListTrafficMirrorFiltersRequest &) = default ;
    ListTrafficMirrorFiltersRequest& operator=(ListTrafficMirrorFiltersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tags_ != nullptr && this->trafficMirrorFilterIds_ != nullptr && this->trafficMirrorFilterName_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTrafficMirrorFiltersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTrafficMirrorFiltersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTrafficMirrorFiltersRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTrafficMirrorFiltersRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListTrafficMirrorFiltersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListTrafficMirrorFiltersRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTrafficMirrorFiltersRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTrafficMirrorFiltersRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListTrafficMirrorFiltersRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListTrafficMirrorFiltersRequestTags>) };
    inline vector<ListTrafficMirrorFiltersRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListTrafficMirrorFiltersRequestTags>) };
    inline ListTrafficMirrorFiltersRequest& setTags(const vector<ListTrafficMirrorFiltersRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTrafficMirrorFiltersRequest& setTags(vector<ListTrafficMirrorFiltersRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // trafficMirrorFilterIds Field Functions 
    bool hasTrafficMirrorFilterIds() const { return this->trafficMirrorFilterIds_ != nullptr;};
    void deleteTrafficMirrorFilterIds() { this->trafficMirrorFilterIds_ = nullptr;};
    inline const vector<string> & trafficMirrorFilterIds() const { DARABONBA_PTR_GET_CONST(trafficMirrorFilterIds_, vector<string>) };
    inline vector<string> trafficMirrorFilterIds() { DARABONBA_PTR_GET(trafficMirrorFilterIds_, vector<string>) };
    inline ListTrafficMirrorFiltersRequest& setTrafficMirrorFilterIds(const vector<string> & trafficMirrorFilterIds) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterIds_, trafficMirrorFilterIds) };
    inline ListTrafficMirrorFiltersRequest& setTrafficMirrorFilterIds(vector<string> && trafficMirrorFilterIds) { DARABONBA_PTR_SET_RVALUE(trafficMirrorFilterIds_, trafficMirrorFilterIds) };


    // trafficMirrorFilterName Field Functions 
    bool hasTrafficMirrorFilterName() const { return this->trafficMirrorFilterName_ != nullptr;};
    void deleteTrafficMirrorFilterName() { this->trafficMirrorFilterName_ = nullptr;};
    inline string trafficMirrorFilterName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterName_, "") };
    inline ListTrafficMirrorFiltersRequest& setTrafficMirrorFilterName(string trafficMirrorFilterName) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterName_, trafficMirrorFilterName) };


  protected:
    // The maximum number of entries to return.
    // 
    // Valid values: **1** to **100**. Default value: **10**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region to which the mirrored traffic belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about regions that support traffic mirror, see [Overview of traffic mirror](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the mirrored traffic belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<ListTrafficMirrorFiltersRequestTags>> tags_ = nullptr;
    // The ID of the traffic mirror filter. The maximum value of **N** is **100**, which specifies that you can query up to 100 filters at a time.
    std::shared_ptr<vector<string>> trafficMirrorFilterIds_ = nullptr;
    // The name of the filter.
    std::shared_ptr<string> trafficMirrorFilterName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
