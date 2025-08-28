// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIPV4GATEWAYSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListIpv4GatewaysRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListIpv4GatewaysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIpv4GatewaysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_TO_JSON(Ipv4GatewayName, ipv4GatewayName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIpv4GatewaysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayId, ipv4GatewayId_);
      DARABONBA_PTR_FROM_JSON(Ipv4GatewayName, ipv4GatewayName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ListIpv4GatewaysRequest() = default ;
    ListIpv4GatewaysRequest(const ListIpv4GatewaysRequest &) = default ;
    ListIpv4GatewaysRequest(ListIpv4GatewaysRequest &&) = default ;
    ListIpv4GatewaysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIpv4GatewaysRequest() = default ;
    ListIpv4GatewaysRequest& operator=(const ListIpv4GatewaysRequest &) = default ;
    ListIpv4GatewaysRequest& operator=(ListIpv4GatewaysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipv4GatewayId_ != nullptr
        && this->ipv4GatewayName_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr
        && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tags_ != nullptr
        && this->vpcId_ != nullptr; };
    // ipv4GatewayId Field Functions 
    bool hasIpv4GatewayId() const { return this->ipv4GatewayId_ != nullptr;};
    void deleteIpv4GatewayId() { this->ipv4GatewayId_ = nullptr;};
    inline string ipv4GatewayId() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayId_, "") };
    inline ListIpv4GatewaysRequest& setIpv4GatewayId(string ipv4GatewayId) { DARABONBA_PTR_SET_VALUE(ipv4GatewayId_, ipv4GatewayId) };


    // ipv4GatewayName Field Functions 
    bool hasIpv4GatewayName() const { return this->ipv4GatewayName_ != nullptr;};
    void deleteIpv4GatewayName() { this->ipv4GatewayName_ = nullptr;};
    inline string ipv4GatewayName() const { DARABONBA_PTR_GET_DEFAULT(ipv4GatewayName_, "") };
    inline ListIpv4GatewaysRequest& setIpv4GatewayName(string ipv4GatewayName) { DARABONBA_PTR_SET_VALUE(ipv4GatewayName_, ipv4GatewayName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIpv4GatewaysRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIpv4GatewaysRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListIpv4GatewaysRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListIpv4GatewaysRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListIpv4GatewaysRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListIpv4GatewaysRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListIpv4GatewaysRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListIpv4GatewaysRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListIpv4GatewaysRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListIpv4GatewaysRequestTags>) };
    inline vector<ListIpv4GatewaysRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListIpv4GatewaysRequestTags>) };
    inline ListIpv4GatewaysRequest& setTags(const vector<ListIpv4GatewaysRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListIpv4GatewaysRequest& setTags(vector<ListIpv4GatewaysRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListIpv4GatewaysRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the IPv4 gateway.
    std::shared_ptr<string> ipv4GatewayId_ = nullptr;
    // The name of the IPv4 gateway.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    std::shared_ptr<string> ipv4GatewayName_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **10**.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used for the next query. Valid values:
    // 
    // *   If this is your first query and no next queries are to be sent, ignore this parameter.
    // *   If a next query is to be sent, set the value to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the region where the IPv4 gateways to be queried are deployed.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group to which the IPv4 gateway belongs.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags of the resource.
    std::shared_ptr<vector<ListIpv4GatewaysRequestTags>> tags_ = nullptr;
    // The ID of the virtual private cloud (VPC) with which the IPv4 gateway is associated.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
