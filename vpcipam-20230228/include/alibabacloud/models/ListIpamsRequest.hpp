// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPAMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPAMSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpamsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcIpam20230228
{
namespace Models
{
  class ListIpamsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpamsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpamIds, ipamIds_);
      DARABONBA_PTR_TO_JSON(IpamName, ipamName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpamsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpamIds, ipamIds_);
      DARABONBA_PTR_FROM_JSON(IpamName, ipamName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    ListIpamsRequest() = default ;
    ListIpamsRequest(const ListIpamsRequest &) = default ;
    ListIpamsRequest(ListIpamsRequest &&) = default ;
    ListIpamsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpamsRequest() = default ;
    ListIpamsRequest& operator=(const ListIpamsRequest &) = default ;
    ListIpamsRequest& operator=(ListIpamsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipamIds_ == nullptr
        && return this->ipamName_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->ownerAccount_ == nullptr && return this->ownerId_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->resourceOwnerAccount_ == nullptr && return this->resourceOwnerId_ == nullptr && return this->tags_ == nullptr; };
    // ipamIds Field Functions 
    bool hasIpamIds() const { return this->ipamIds_ != nullptr;};
    void deleteIpamIds() { this->ipamIds_ = nullptr;};
    inline const vector<string> & ipamIds() const { DARABONBA_PTR_GET_CONST(ipamIds_, vector<string>) };
    inline vector<string> ipamIds() { DARABONBA_PTR_GET(ipamIds_, vector<string>) };
    inline ListIpamsRequest& setIpamIds(const vector<string> & ipamIds) { DARABONBA_PTR_SET_VALUE(ipamIds_, ipamIds) };
    inline ListIpamsRequest& setIpamIds(vector<string> && ipamIds) { DARABONBA_PTR_SET_RVALUE(ipamIds_, ipamIds) };


    // ipamName Field Functions 
    bool hasIpamName() const { return this->ipamName_ != nullptr;};
    void deleteIpamName() { this->ipamName_ = nullptr;};
    inline string ipamName() const { DARABONBA_PTR_GET_DEFAULT(ipamName_, "") };
    inline ListIpamsRequest& setIpamName(string ipamName) { DARABONBA_PTR_SET_VALUE(ipamName_, ipamName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListIpamsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpamsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListIpamsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpamsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpamsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpamsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListIpamsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpamsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListIpamsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListIpamsRequestTags>) };
    inline vector<ListIpamsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListIpamsRequestTags>) };
    inline ListIpamsRequest& setTags(const vector<ListIpamsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpamsRequest& setTags(vector<ListIpamsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The IDs of IPAMs. Valid values of N: 1 to 100. A maximum of 100 IPAMs can be queried at a time.
    std::shared_ptr<vector<string>> ipamIds_ = nullptr;
    // The name of the IPAM.
    // 
    // It must be 1 to 128 characters in length and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ipamName_ = nullptr;
    // The number of entries per page. Valid values: **1** to **100**. Default value: **10**.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the IPAM instance is hosted. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource group ID of the IPAM.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tag information.
    std::shared_ptr<vector<ListIpamsRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcIpam20230228
#endif
