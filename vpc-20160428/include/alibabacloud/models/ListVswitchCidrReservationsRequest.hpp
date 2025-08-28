// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVSWITCHCIDRRESERVATIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTVSWITCHCIDRRESERVATIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVSwitchCidrReservationsRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListVSwitchCidrReservationsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVSwitchCidrReservationsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationIds, vSwitchCidrReservationIds_);
      DARABONBA_PTR_TO_JSON(VSwitchCidrReservationType, vSwitchCidrReservationType_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, ListVSwitchCidrReservationsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationIds, vSwitchCidrReservationIds_);
      DARABONBA_PTR_FROM_JSON(VSwitchCidrReservationType, vSwitchCidrReservationType_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    ListVSwitchCidrReservationsRequest() = default ;
    ListVSwitchCidrReservationsRequest(const ListVSwitchCidrReservationsRequest &) = default ;
    ListVSwitchCidrReservationsRequest(ListVSwitchCidrReservationsRequest &&) = default ;
    ListVSwitchCidrReservationsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVSwitchCidrReservationsRequest() = default ;
    ListVSwitchCidrReservationsRequest& operator=(const ListVSwitchCidrReservationsRequest &) = default ;
    ListVSwitchCidrReservationsRequest& operator=(ListVSwitchCidrReservationsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ipVersion_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->tags_ != nullptr && this->vSwitchCidrReservationIds_ != nullptr && this->vSwitchCidrReservationType_ != nullptr
        && this->vSwitchId_ != nullptr; };
    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline ListVSwitchCidrReservationsRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListVSwitchCidrReservationsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVSwitchCidrReservationsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListVSwitchCidrReservationsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListVSwitchCidrReservationsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVSwitchCidrReservationsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListVSwitchCidrReservationsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListVSwitchCidrReservationsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ListVSwitchCidrReservationsRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ListVSwitchCidrReservationsRequestTags>) };
    inline vector<ListVSwitchCidrReservationsRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ListVSwitchCidrReservationsRequestTags>) };
    inline ListVSwitchCidrReservationsRequest& setTags(const vector<ListVSwitchCidrReservationsRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVSwitchCidrReservationsRequest& setTags(vector<ListVSwitchCidrReservationsRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vSwitchCidrReservationIds Field Functions 
    bool hasVSwitchCidrReservationIds() const { return this->vSwitchCidrReservationIds_ != nullptr;};
    void deleteVSwitchCidrReservationIds() { this->vSwitchCidrReservationIds_ = nullptr;};
    inline const vector<string> & vSwitchCidrReservationIds() const { DARABONBA_PTR_GET_CONST(vSwitchCidrReservationIds_, vector<string>) };
    inline vector<string> vSwitchCidrReservationIds() { DARABONBA_PTR_GET(vSwitchCidrReservationIds_, vector<string>) };
    inline ListVSwitchCidrReservationsRequest& setVSwitchCidrReservationIds(const vector<string> & vSwitchCidrReservationIds) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationIds_, vSwitchCidrReservationIds) };
    inline ListVSwitchCidrReservationsRequest& setVSwitchCidrReservationIds(vector<string> && vSwitchCidrReservationIds) { DARABONBA_PTR_SET_RVALUE(vSwitchCidrReservationIds_, vSwitchCidrReservationIds) };


    // vSwitchCidrReservationType Field Functions 
    bool hasVSwitchCidrReservationType() const { return this->vSwitchCidrReservationType_ != nullptr;};
    void deleteVSwitchCidrReservationType() { this->vSwitchCidrReservationType_ = nullptr;};
    inline string vSwitchCidrReservationType() const { DARABONBA_PTR_GET_DEFAULT(vSwitchCidrReservationType_, "") };
    inline ListVSwitchCidrReservationsRequest& setVSwitchCidrReservationType(string vSwitchCidrReservationType) { DARABONBA_PTR_SET_VALUE(vSwitchCidrReservationType_, vSwitchCidrReservationType) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListVSwitchCidrReservationsRequest& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The IP version of the reserved CIDR block. Valid values:
    // 
    // *   **IPv4** (default)
    // *   **IPv6**
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The number of entries to return on each page. Valid values: **1** to **100**. Default value: **10**.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   You do not need to specify this parameter for the first request.
    // *   You must specify the token that is obtained from the previous query as the value of NextToken.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the vSwitch.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The tags.
    std::shared_ptr<vector<ListVSwitchCidrReservationsRequestTags>> tags_ = nullptr;
    // The ID of the reserved CIDR block. You can specify at most 10 IDs.
    std::shared_ptr<vector<string>> vSwitchCidrReservationIds_ = nullptr;
    // The type of the reserved CIDR block. Set the value to **prefix**.
    // 
    // >  When you allocate CIDR blocks, or enable the service to automatically allocate CIDR blocks to elastic network interfaces (ENIs), the CIDR blocks to allocate must fall into the reserved CIDR block. If the reserved CIDR is exhausted, an error message is returned.
    std::shared_ptr<string> vSwitchCidrReservationType_ = nullptr;
    // The ID of the vSwitch for which you want to query reserved CIDR blocks.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
