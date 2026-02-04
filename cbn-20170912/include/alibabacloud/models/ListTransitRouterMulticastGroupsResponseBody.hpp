// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTGROUPSRESPONSEBODY_HPP_
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
  class ListTransitRouterMulticastGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TransitRouterMulticastGroups, transitRouterMulticastGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TransitRouterMulticastGroups, transitRouterMulticastGroups_);
    };
    ListTransitRouterMulticastGroupsResponseBody() = default ;
    ListTransitRouterMulticastGroupsResponseBody(const ListTransitRouterMulticastGroupsResponseBody &) = default ;
    ListTransitRouterMulticastGroupsResponseBody(ListTransitRouterMulticastGroupsResponseBody &&) = default ;
    ListTransitRouterMulticastGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastGroupsResponseBody() = default ;
    ListTransitRouterMulticastGroupsResponseBody& operator=(const ListTransitRouterMulticastGroupsResponseBody &) = default ;
    ListTransitRouterMulticastGroupsResponseBody& operator=(ListTransitRouterMulticastGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TransitRouterMulticastGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TransitRouterMulticastGroups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupIpAddress, groupIpAddress_);
        DARABONBA_PTR_TO_JSON(GroupMember, groupMember_);
        DARABONBA_PTR_TO_JSON(GroupSource, groupSource_);
        DARABONBA_PTR_TO_JSON(MemberType, memberType_);
        DARABONBA_PTR_TO_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_TO_JSON(PeerTransitRouterMulticastDomainId, peerTransitRouterMulticastDomainId_);
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_TO_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      };
      friend void from_json(const Darabonba::Json& j, TransitRouterMulticastGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupIpAddress, groupIpAddress_);
        DARABONBA_PTR_FROM_JSON(GroupMember, groupMember_);
        DARABONBA_PTR_FROM_JSON(GroupSource, groupSource_);
        DARABONBA_PTR_FROM_JSON(MemberType, memberType_);
        DARABONBA_PTR_FROM_JSON(NetworkInterfaceId, networkInterfaceId_);
        DARABONBA_PTR_FROM_JSON(PeerTransitRouterMulticastDomainId, peerTransitRouterMulticastDomainId_);
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TransitRouterAttachmentId, transitRouterAttachmentId_);
        DARABONBA_PTR_FROM_JSON(TransitRouterMulticastDomainId, transitRouterMulticastDomainId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      };
      TransitRouterMulticastGroups() = default ;
      TransitRouterMulticastGroups(const TransitRouterMulticastGroups &) = default ;
      TransitRouterMulticastGroups(TransitRouterMulticastGroups &&) = default ;
      TransitRouterMulticastGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TransitRouterMulticastGroups() = default ;
      TransitRouterMulticastGroups& operator=(const TransitRouterMulticastGroups &) = default ;
      TransitRouterMulticastGroups& operator=(TransitRouterMulticastGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->groupIpAddress_ == nullptr
        && this->groupMember_ == nullptr && this->groupSource_ == nullptr && this->memberType_ == nullptr && this->networkInterfaceId_ == nullptr && this->peerTransitRouterMulticastDomainId_ == nullptr
        && this->resourceId_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr && this->sourceType_ == nullptr && this->status_ == nullptr
        && this->transitRouterAttachmentId_ == nullptr && this->transitRouterMulticastDomainId_ == nullptr && this->vSwitchId_ == nullptr; };
      // groupIpAddress Field Functions 
      bool hasGroupIpAddress() const { return this->groupIpAddress_ != nullptr;};
      void deleteGroupIpAddress() { this->groupIpAddress_ = nullptr;};
      inline string getGroupIpAddress() const { DARABONBA_PTR_GET_DEFAULT(groupIpAddress_, "") };
      inline TransitRouterMulticastGroups& setGroupIpAddress(string groupIpAddress) { DARABONBA_PTR_SET_VALUE(groupIpAddress_, groupIpAddress) };


      // groupMember Field Functions 
      bool hasGroupMember() const { return this->groupMember_ != nullptr;};
      void deleteGroupMember() { this->groupMember_ = nullptr;};
      inline bool getGroupMember() const { DARABONBA_PTR_GET_DEFAULT(groupMember_, false) };
      inline TransitRouterMulticastGroups& setGroupMember(bool groupMember) { DARABONBA_PTR_SET_VALUE(groupMember_, groupMember) };


      // groupSource Field Functions 
      bool hasGroupSource() const { return this->groupSource_ != nullptr;};
      void deleteGroupSource() { this->groupSource_ = nullptr;};
      inline bool getGroupSource() const { DARABONBA_PTR_GET_DEFAULT(groupSource_, false) };
      inline TransitRouterMulticastGroups& setGroupSource(bool groupSource) { DARABONBA_PTR_SET_VALUE(groupSource_, groupSource) };


      // memberType Field Functions 
      bool hasMemberType() const { return this->memberType_ != nullptr;};
      void deleteMemberType() { this->memberType_ = nullptr;};
      inline string getMemberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
      inline TransitRouterMulticastGroups& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


      // networkInterfaceId Field Functions 
      bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
      void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
      inline string getNetworkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
      inline TransitRouterMulticastGroups& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


      // peerTransitRouterMulticastDomainId Field Functions 
      bool hasPeerTransitRouterMulticastDomainId() const { return this->peerTransitRouterMulticastDomainId_ != nullptr;};
      void deletePeerTransitRouterMulticastDomainId() { this->peerTransitRouterMulticastDomainId_ = nullptr;};
      inline string getPeerTransitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterMulticastDomainId_, "") };
      inline TransitRouterMulticastGroups& setPeerTransitRouterMulticastDomainId(string peerTransitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterMulticastDomainId_, peerTransitRouterMulticastDomainId) };


      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline TransitRouterMulticastGroups& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceOwnerId Field Functions 
      bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
      void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
      inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
      inline TransitRouterMulticastGroups& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline TransitRouterMulticastGroups& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // sourceType Field Functions 
      bool hasSourceType() const { return this->sourceType_ != nullptr;};
      void deleteSourceType() { this->sourceType_ = nullptr;};
      inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
      inline TransitRouterMulticastGroups& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline TransitRouterMulticastGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // transitRouterAttachmentId Field Functions 
      bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
      void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
      inline string getTransitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
      inline TransitRouterMulticastGroups& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


      // transitRouterMulticastDomainId Field Functions 
      bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
      void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
      inline string getTransitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
      inline TransitRouterMulticastGroups& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline TransitRouterMulticastGroups& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    protected:
      // The IP address of the multicast group to which the multicast resource belongs.
      shared_ptr<string> groupIpAddress_ {};
      // Indicates whether the multicast resource is a multicast member. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> groupMember_ {};
      // Indicates whether the multicast resource is a multicast source. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> groupSource_ {};
      // The type of the multicast source.
      // 
      // If the value is **Static**, the multicast source is manually specified.
      shared_ptr<string> memberType_ {};
      // The ID of the ENI, which is a multicast resource.
      shared_ptr<string> networkInterfaceId_ {};
      // The ID of the multicast domain associated with the multicast resource that is deployed across regions.
      shared_ptr<string> peerTransitRouterMulticastDomainId_ {};
      // The ID of the resource associated with the multicast resource.
      shared_ptr<string> resourceId_ {};
      // The ID of the Alibaba Cloud account to which the multicast resource belongs.
      shared_ptr<int64_t> resourceOwnerId_ {};
      // The type of the multicast resource. Valid values:
      // 
      // *   **VPC**: The multicast resource is in a VPC.
      // *   **TR**: The multicast resource is deployed across regions.
      shared_ptr<string> resourceType_ {};
      // The type of the multicast member.
      // 
      // If the value is **Static**, the multicast member is manually specified.
      shared_ptr<string> sourceType_ {};
      // The status of the multicast resource. Valid values:
      // 
      // *   **Registering**: being created
      // *   **Registered**: available
      // *   **Deregistering**: being deleted
      shared_ptr<string> status_ {};
      // The ID of the network instance connection.
      shared_ptr<string> transitRouterAttachmentId_ {};
      // The ID of the multicast domain.
      shared_ptr<string> transitRouterMulticastDomainId_ {};
      // The ID of the vSwitch to which the multicast resource belongs.
      shared_ptr<string> vSwitchId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->transitRouterMulticastGroups_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTransitRouterMulticastGroupsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTransitRouterMulticastGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTransitRouterMulticastGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTransitRouterMulticastGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // transitRouterMulticastGroups Field Functions 
    bool hasTransitRouterMulticastGroups() const { return this->transitRouterMulticastGroups_ != nullptr;};
    void deleteTransitRouterMulticastGroups() { this->transitRouterMulticastGroups_ = nullptr;};
    inline const vector<ListTransitRouterMulticastGroupsResponseBody::TransitRouterMulticastGroups> & getTransitRouterMulticastGroups() const { DARABONBA_PTR_GET_CONST(transitRouterMulticastGroups_, vector<ListTransitRouterMulticastGroupsResponseBody::TransitRouterMulticastGroups>) };
    inline vector<ListTransitRouterMulticastGroupsResponseBody::TransitRouterMulticastGroups> getTransitRouterMulticastGroups() { DARABONBA_PTR_GET(transitRouterMulticastGroups_, vector<ListTransitRouterMulticastGroupsResponseBody::TransitRouterMulticastGroups>) };
    inline ListTransitRouterMulticastGroupsResponseBody& setTransitRouterMulticastGroups(const vector<ListTransitRouterMulticastGroupsResponseBody::TransitRouterMulticastGroups> & transitRouterMulticastGroups) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastGroups_, transitRouterMulticastGroups) };
    inline ListTransitRouterMulticastGroupsResponseBody& setTransitRouterMulticastGroups(vector<ListTransitRouterMulticastGroupsResponseBody::TransitRouterMulticastGroups> && transitRouterMulticastGroups) { DARABONBA_PTR_SET_RVALUE(transitRouterMulticastGroups_, transitRouterMulticastGroups) };


  protected:
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token that determines the start point of the query. Valid values:
    // 
    // *   If **NextToken** was not returned, it indicates that no additional results exist.
    // *   If **NextToken** was returned in the previous query, specify the value to obtain the next set of results.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // A list of multicast groups.
    shared_ptr<vector<ListTransitRouterMulticastGroupsResponseBody::TransitRouterMulticastGroups>> transitRouterMulticastGroups_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
