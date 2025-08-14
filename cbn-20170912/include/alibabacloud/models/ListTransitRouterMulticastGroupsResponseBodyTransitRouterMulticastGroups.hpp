// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTGROUPSRESPONSEBODYTRANSITROUTERMULTICASTGROUPS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSITROUTERMULTICASTGROUPSRESPONSEBODYTRANSITROUTERMULTICASTGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& obj) { 
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
    ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups() = default ;
    ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups(const ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups &) = default ;
    ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups(ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups &&) = default ;
    ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups() = default ;
    ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& operator=(const ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups &) = default ;
    ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& operator=(ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->groupIpAddress_ != nullptr
        && this->groupMember_ != nullptr && this->groupSource_ != nullptr && this->memberType_ != nullptr && this->networkInterfaceId_ != nullptr && this->peerTransitRouterMulticastDomainId_ != nullptr
        && this->resourceId_ != nullptr && this->resourceOwnerId_ != nullptr && this->resourceType_ != nullptr && this->sourceType_ != nullptr && this->status_ != nullptr
        && this->transitRouterAttachmentId_ != nullptr && this->transitRouterMulticastDomainId_ != nullptr && this->vSwitchId_ != nullptr; };
    // groupIpAddress Field Functions 
    bool hasGroupIpAddress() const { return this->groupIpAddress_ != nullptr;};
    void deleteGroupIpAddress() { this->groupIpAddress_ = nullptr;};
    inline string groupIpAddress() const { DARABONBA_PTR_GET_DEFAULT(groupIpAddress_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setGroupIpAddress(string groupIpAddress) { DARABONBA_PTR_SET_VALUE(groupIpAddress_, groupIpAddress) };


    // groupMember Field Functions 
    bool hasGroupMember() const { return this->groupMember_ != nullptr;};
    void deleteGroupMember() { this->groupMember_ = nullptr;};
    inline bool groupMember() const { DARABONBA_PTR_GET_DEFAULT(groupMember_, false) };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setGroupMember(bool groupMember) { DARABONBA_PTR_SET_VALUE(groupMember_, groupMember) };


    // groupSource Field Functions 
    bool hasGroupSource() const { return this->groupSource_ != nullptr;};
    void deleteGroupSource() { this->groupSource_ = nullptr;};
    inline bool groupSource() const { DARABONBA_PTR_GET_DEFAULT(groupSource_, false) };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setGroupSource(bool groupSource) { DARABONBA_PTR_SET_VALUE(groupSource_, groupSource) };


    // memberType Field Functions 
    bool hasMemberType() const { return this->memberType_ != nullptr;};
    void deleteMemberType() { this->memberType_ = nullptr;};
    inline string memberType() const { DARABONBA_PTR_GET_DEFAULT(memberType_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setMemberType(string memberType) { DARABONBA_PTR_SET_VALUE(memberType_, memberType) };


    // networkInterfaceId Field Functions 
    bool hasNetworkInterfaceId() const { return this->networkInterfaceId_ != nullptr;};
    void deleteNetworkInterfaceId() { this->networkInterfaceId_ = nullptr;};
    inline string networkInterfaceId() const { DARABONBA_PTR_GET_DEFAULT(networkInterfaceId_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setNetworkInterfaceId(string networkInterfaceId) { DARABONBA_PTR_SET_VALUE(networkInterfaceId_, networkInterfaceId) };


    // peerTransitRouterMulticastDomainId Field Functions 
    bool hasPeerTransitRouterMulticastDomainId() const { return this->peerTransitRouterMulticastDomainId_ != nullptr;};
    void deletePeerTransitRouterMulticastDomainId() { this->peerTransitRouterMulticastDomainId_ = nullptr;};
    inline string peerTransitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(peerTransitRouterMulticastDomainId_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setPeerTransitRouterMulticastDomainId(string peerTransitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(peerTransitRouterMulticastDomainId_, peerTransitRouterMulticastDomainId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // transitRouterAttachmentId Field Functions 
    bool hasTransitRouterAttachmentId() const { return this->transitRouterAttachmentId_ != nullptr;};
    void deleteTransitRouterAttachmentId() { this->transitRouterAttachmentId_ = nullptr;};
    inline string transitRouterAttachmentId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterAttachmentId_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setTransitRouterAttachmentId(string transitRouterAttachmentId) { DARABONBA_PTR_SET_VALUE(transitRouterAttachmentId_, transitRouterAttachmentId) };


    // transitRouterMulticastDomainId Field Functions 
    bool hasTransitRouterMulticastDomainId() const { return this->transitRouterMulticastDomainId_ != nullptr;};
    void deleteTransitRouterMulticastDomainId() { this->transitRouterMulticastDomainId_ = nullptr;};
    inline string transitRouterMulticastDomainId() const { DARABONBA_PTR_GET_DEFAULT(transitRouterMulticastDomainId_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setTransitRouterMulticastDomainId(string transitRouterMulticastDomainId) { DARABONBA_PTR_SET_VALUE(transitRouterMulticastDomainId_, transitRouterMulticastDomainId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListTransitRouterMulticastGroupsResponseBodyTransitRouterMulticastGroups& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    // The IP address of the multicast group to which the multicast resource belongs.
    std::shared_ptr<string> groupIpAddress_ = nullptr;
    // Indicates whether the multicast resource is a multicast member. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> groupMember_ = nullptr;
    // Indicates whether the multicast resource is a multicast source. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> groupSource_ = nullptr;
    // The type of the multicast source.
    // 
    // If the value is **Static**, the multicast source is manually specified.
    std::shared_ptr<string> memberType_ = nullptr;
    // The ID of the ENI, which is a multicast resource.
    std::shared_ptr<string> networkInterfaceId_ = nullptr;
    // The ID of the multicast domain associated with the multicast resource that is deployed across regions.
    std::shared_ptr<string> peerTransitRouterMulticastDomainId_ = nullptr;
    // The ID of the resource associated with the multicast resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The ID of the Alibaba Cloud account to which the multicast resource belongs.
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The type of the multicast resource. Valid values:
    // 
    // *   **VPC**: The multicast resource is in a VPC.
    // *   **TR**: The multicast resource is deployed across regions.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The type of the multicast member.
    // 
    // If the value is **Static**, the multicast member is manually specified.
    std::shared_ptr<string> sourceType_ = nullptr;
    // The status of the multicast resource. Valid values:
    // 
    // *   **Registering**: being created
    // *   **Registered**: available
    // *   **Deregistering**: being deleted
    std::shared_ptr<string> status_ = nullptr;
    // The ID of the network instance connection.
    std::shared_ptr<string> transitRouterAttachmentId_ = nullptr;
    // The ID of the multicast domain.
    std::shared_ptr<string> transitRouterMulticastDomainId_ = nullptr;
    // The ID of the vSwitch to which the multicast resource belongs.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
