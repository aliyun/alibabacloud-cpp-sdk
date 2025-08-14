// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(GroupIpAddress, groupIpAddress_);
      DARABONBA_PTR_TO_JSON(IsGroupMember, isGroupMember_);
      DARABONBA_PTR_TO_JSON(IsGroupSource, isGroupSource_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerTransitRouterMulticastDomains, peerTransitRouterMulticastDomains_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(GroupIpAddress, groupIpAddress_);
      DARABONBA_PTR_FROM_JSON(IsGroupMember, isGroupMember_);
      DARABONBA_PTR_FROM_JSON(IsGroupSource, isGroupSource_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NetworkInterfaceIds, networkInterfaceIds_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerTransitRouterMulticastDomains, peerTransitRouterMulticastDomains_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
    };
    ListTransitRouterMulticastGroupsRequest() = default ;
    ListTransitRouterMulticastGroupsRequest(const ListTransitRouterMulticastGroupsRequest &) = default ;
    ListTransitRouterMulticastGroupsRequest(ListTransitRouterMulticastGroupsRequest &&) = default ;
    ListTransitRouterMulticastGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastGroupsRequest() = default ;
    ListTransitRouterMulticastGroupsRequest& operator=(const ListTransitRouterMulticastGroupsRequest &) = default ;
    ListTransitRouterMulticastGroupsRequest& operator=(ListTransitRouterMulticastGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->groupIpAddress_ != nullptr && this->isGroupMember_ != nullptr && this->isGroupSource_ != nullptr && this->maxResults_ != nullptr && this->networkInterfaceIds_ != nullptr
        && this->nextToken_ != nullptr && this->ownerAccount_ != nullptr && this->ownerId_ != nullptr && this->peerTransitRouterMulticastDomains_ != nullptr && this->resourceId_ != nullptr
        && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourceType_ != nullptr && this->transitRouterAttachmentId_ != nullptr && this->transitRouterMulticastDomainId_ != nullptr
        && this->vSwitchIds_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // groupIpAddress Field Functions 
    bool hasGroupIpAddress() const { return this->groupIpAddress_ != nullptr;};
    void deleteGroupIpAddress() { this->groupIpAddress_ = nullptr;};
    inline string groupIpAddress() const { DARABONBA_PTR_GET_DEFAULT(groupIpAddress_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setGroupIpAddress(string groupIpAddress) { DARABONBA_PTR_SET_VALUE(groupIpAddress_, groupIpAddress) };


    // isGroupMember Field Functions 
    bool hasIsGroupMember() const { return this->isGroupMember_ != nullptr;};
    void deleteIsGroupMember() { this->isGroupMember_ = nullptr;};
    inline bool isGroupMember() const { DARABONBA_PTR_GET_DEFAULT(isGroupMember_, false) };
    inline ListTransitRouterMulticastGroupsRequest& setIsGroupMember(bool isGroupMember) { DARABONBA_PTR_SET_VALUE(isGroupMember_, isGroupMember) };


    // isGroupSource Field Functions 
    bool hasIsGroupSource() const { return this->isGroupSource_ != nullptr;};
    void deleteIsGroupSource() { this->isGroupSource_ = nullptr;};
    inline bool isGroupSource() const { DARABONBA_PTR_GET_DEFAULT(isGroupSource_, false) };
    inline ListTransitRouterMulticastGroupsRequest& setIsGroupSource(bool isGroupSource) { DARABONBA_PTR_SET_VALUE(isGroupSource_, isGroupSource) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListTransitRouterMulticastGroupsRequest& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // networkInterfaceIds Field Functions 
    bool hasNetworkInterfaceIds() const { return this->networkInterfaceIds_ != nullptr;};
    void deleteNetworkInterfaceIds() { this->networkInterfaceIds_ = nullptr;};
    inline const vector<string> & networkInterfaceIds() const { DARABONBA_PTR_GET_CONST(networkInterfaceIds_, vector<string>) };
    inline vector<string> networkInterfaceIds() { DARABONBA_PTR_GET(networkInterfaceIds_, vector<string>) };
    inline ListTransitRouterMulticastGroupsRequest& setNetworkInterfaceIds(const vector<string> & networkInterfaceIds) { DARABONBA_PTR_SET_VALUE(networkInterfaceIds_, networkInterfaceIds) };
    inline ListTransitRouterMulticastGroupsRequest& setNetworkInterfaceIds(vector<string> && networkInterfaceIds) { DARABONBA_PTR_SET_RVALUE(networkInterfaceIds_, networkInterfaceIds) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListTransitRouterMulticastGroupsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerTransitRouterMulticastDomains Field Functions 
    bool hasPeerTransitRouterMulticastDomains() const { return this->peerTransitRouterMulticastDomains_ != nullptr;};
    void deletePeerTransitRouterMulticastDomains() { this->peerTransitRouterMulticastDomains_ = nullptr;};
    inline const vector<string> & peerTransitRouterMulticastDomains() const { DARABONBA_PTR_GET_CONST(peerTransitRouterMulticastDomains_, vector<string>) };
    inline vector<string> peerTransitRouterMulticastDomains() { DARABONBA_PTR_GET(peerTransitRouterMulticastDomains_, vector<string>) };
    inline ListTransitRouterMulticastGroupsRequest& setPeerTransitRouterMulticastDomains(const vector<string> & peerTransitRouterMulticastDomains) { DARABONBA_PTR_SET_VALUE(peerTransitRouterMulticastDomains_, peerTransitRouterMulticastDomains) };
    inline ListTransitRouterMulticastGroupsRequest& setPeerTransitRouterMulticastDomains(vector<string> && peerTransitRouterMulticastDomains) { DARABONBA_PTR_SET_RVALUE(peerTransitRouterMulticastDomains_, peerTransitRouterMulticastDomains) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterMulticastGroupsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline ListTransitRouterMulticastGroupsRequest& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline const vector<string> & vSwitchIds() const { DARABONBA_PTR_GET_CONST(vSwitchIds_, vector<string>) };
    inline vector<string> vSwitchIds() { DARABONBA_PTR_GET(vSwitchIds_, vector<string>) };
    inline ListTransitRouterMulticastGroupsRequest& setVSwitchIds(const vector<string> & vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };
    inline ListTransitRouterMulticastGroupsRequest& setVSwitchIds(vector<string> && vSwitchIds) { DARABONBA_PTR_SET_RVALUE(vSwitchIds_, vSwitchIds) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that it is unique among all requests. The token can contain only ASCII characters.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The IP address of the multicast group.
    // 
    // Each multicast group is identified by its IP address.
    std::shared_ptr<string> groupIpAddress_ = nullptr;
    // Specified whether to query the multicast members. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // >- This parameter must be specified together with the IsGroupMember parameter.
    // >- If you do not set IsGroupMember or IsGroupSource, both the multicast sources and members are queried.
    // >- If you set only one of them or both of them, the specified values prevail.
    std::shared_ptr<bool> isGroupMember_ = nullptr;
    // Specifies whether to query the multicast sources. Valid values:
    // 
    // *   **false**
    // *   **true**
    // 
    // > - This parameter must be specified together with the IsGroupMember parameter.
    // > *   If you do not specify IsGroupMember or IsGroupSource, both the multicast sources and members are queried.
    // > *   If you specify only one of them or both of them, the specified values prevail.
    std::shared_ptr<bool> isGroupSource_ = nullptr;
    // The number of entries to return on each page. Default value: **20**.
    std::shared_ptr<int64_t> maxResults_ = nullptr;
    // The IDs of ENIs.
    std::shared_ptr<vector<string>> networkInterfaceIds_ = nullptr;
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If this is your first query and no next queries are to be sent, ignore this parameter.
    // *   If a subsequent query is to be sent, set the parameter to the value of NextToken that is returned from the last call.
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The ID of the inter-region multicast domain.
    std::shared_ptr<vector<string>> peerTransitRouterMulticastDomains_ = nullptr;
    // The ID of the resource associated with the multicast resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The type of the multicast resource. Valid values:
    // 
    // *   **VPC**: queries multicast resources by VPC.
    // *   **TR**: queries multicast resources that are also deployed in a different region.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The ID of the network instance connection
    // 
    // You must configure one of the TransitRouterMulticastDomainId and TransitRouterAttachmentId parameters.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the multicast domain.
    // 
    // You must configure one of the TransitRouterMulticastDomainId and TransitRouterAttachmentId parameters.
    std::shared_ptr<string> transitRouterMulticastDomainId_ = nullptr;
    // The vSwitch IDs.
    std::shared_ptr<vector<string>> vSwitchIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
