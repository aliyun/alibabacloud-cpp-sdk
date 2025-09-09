// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSRESPONSEBODYVPCPEERCONNECTS_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCPEERCONNECTIONSRESPONSEBODYVPCPEERCONNECTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListVpcPeerConnectionsResponseBodyVpcPeerConnectsAcceptingVpc.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcPeerConnectionsResponseBodyVpcPeerConnectsTags.hpp>
#include <alibabacloud/models/ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VpcPeer20220101
{
namespace Models
{
  class ListVpcPeerConnectionsResponseBodyVpcPeerConnects : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcPeerConnectionsResponseBodyVpcPeerConnects& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptingOwnerUid, acceptingOwnerUid_);
      DARABONBA_PTR_TO_JSON(AcceptingRegionId, acceptingRegionId_);
      DARABONBA_PTR_TO_JSON(AcceptingVpc, acceptingVpc_);
      DARABONBA_PTR_TO_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_TO_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LinkType, linkType_);
      DARABONBA_PTR_TO_JSON(ManagedService, managedService_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Vpc, vpc_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcPeerConnectionsResponseBodyVpcPeerConnects& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptingOwnerUid, acceptingOwnerUid_);
      DARABONBA_PTR_FROM_JSON(AcceptingRegionId, acceptingRegionId_);
      DARABONBA_PTR_FROM_JSON(AcceptingVpc, acceptingVpc_);
      DARABONBA_PTR_FROM_JSON(Bandwidth, bandwidth_);
      DARABONBA_PTR_FROM_JSON(BizStatus, bizStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LinkType, linkType_);
      DARABONBA_PTR_FROM_JSON(ManagedService, managedService_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
    };
    ListVpcPeerConnectionsResponseBodyVpcPeerConnects() = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnects(const ListVpcPeerConnectionsResponseBodyVpcPeerConnects &) = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnects(ListVpcPeerConnectionsResponseBodyVpcPeerConnects &&) = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnects(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcPeerConnectionsResponseBodyVpcPeerConnects() = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnects& operator=(const ListVpcPeerConnectionsResponseBodyVpcPeerConnects &) = default ;
    ListVpcPeerConnectionsResponseBodyVpcPeerConnects& operator=(ListVpcPeerConnectionsResponseBodyVpcPeerConnects &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptingOwnerUid_ != nullptr
        && this->acceptingRegionId_ != nullptr && this->acceptingVpc_ != nullptr && this->bandwidth_ != nullptr && this->bizStatus_ != nullptr && this->description_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtExpired_ != nullptr && this->gmtModified_ != nullptr && this->instanceId_ != nullptr && this->linkType_ != nullptr
        && this->managedService_ != nullptr && this->name_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->resourceGroupId_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr && this->vpc_ != nullptr; };
    // acceptingOwnerUid Field Functions 
    bool hasAcceptingOwnerUid() const { return this->acceptingOwnerUid_ != nullptr;};
    void deleteAcceptingOwnerUid() { this->acceptingOwnerUid_ = nullptr;};
    inline int64_t acceptingOwnerUid() const { DARABONBA_PTR_GET_DEFAULT(acceptingOwnerUid_, 0L) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setAcceptingOwnerUid(int64_t acceptingOwnerUid) { DARABONBA_PTR_SET_VALUE(acceptingOwnerUid_, acceptingOwnerUid) };


    // acceptingRegionId Field Functions 
    bool hasAcceptingRegionId() const { return this->acceptingRegionId_ != nullptr;};
    void deleteAcceptingRegionId() { this->acceptingRegionId_ = nullptr;};
    inline string acceptingRegionId() const { DARABONBA_PTR_GET_DEFAULT(acceptingRegionId_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setAcceptingRegionId(string acceptingRegionId) { DARABONBA_PTR_SET_VALUE(acceptingRegionId_, acceptingRegionId) };


    // acceptingVpc Field Functions 
    bool hasAcceptingVpc() const { return this->acceptingVpc_ != nullptr;};
    void deleteAcceptingVpc() { this->acceptingVpc_ = nullptr;};
    inline const Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsAcceptingVpc & acceptingVpc() const { DARABONBA_PTR_GET_CONST(acceptingVpc_, Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsAcceptingVpc) };
    inline Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsAcceptingVpc acceptingVpc() { DARABONBA_PTR_GET(acceptingVpc_, Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsAcceptingVpc) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setAcceptingVpc(const Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsAcceptingVpc & acceptingVpc) { DARABONBA_PTR_SET_VALUE(acceptingVpc_, acceptingVpc) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setAcceptingVpc(Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsAcceptingVpc && acceptingVpc) { DARABONBA_PTR_SET_RVALUE(acceptingVpc_, acceptingVpc) };


    // bandwidth Field Functions 
    bool hasBandwidth() const { return this->bandwidth_ != nullptr;};
    void deleteBandwidth() { this->bandwidth_ = nullptr;};
    inline int32_t bandwidth() const { DARABONBA_PTR_GET_DEFAULT(bandwidth_, 0) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setBandwidth(int32_t bandwidth) { DARABONBA_PTR_SET_VALUE(bandwidth_, bandwidth) };


    // bizStatus Field Functions 
    bool hasBizStatus() const { return this->bizStatus_ != nullptr;};
    void deleteBizStatus() { this->bizStatus_ = nullptr;};
    inline string bizStatus() const { DARABONBA_PTR_GET_DEFAULT(bizStatus_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setBizStatus(string bizStatus) { DARABONBA_PTR_SET_VALUE(bizStatus_, bizStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtExpired Field Functions 
    bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
    void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
    inline string gmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // linkType Field Functions 
    bool hasLinkType() const { return this->linkType_ != nullptr;};
    void deleteLinkType() { this->linkType_ = nullptr;};
    inline string linkType() const { DARABONBA_PTR_GET_DEFAULT(linkType_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setLinkType(string linkType) { DARABONBA_PTR_SET_VALUE(linkType_, linkType) };


    // managedService Field Functions 
    bool hasManagedService() const { return this->managedService_ != nullptr;};
    void deleteManagedService() { this->managedService_ = nullptr;};
    inline string managedService() const { DARABONBA_PTR_GET_DEFAULT(managedService_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setManagedService(string managedService) { DARABONBA_PTR_SET_VALUE(managedService_, managedService) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsTags>) };
    inline vector<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsTags>) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setTags(const vector<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setTags(vector<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline const Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc & vpc() const { DARABONBA_PTR_GET_CONST(vpc_, Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc) };
    inline Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc vpc() { DARABONBA_PTR_GET(vpc_, Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setVpc(const Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
    inline ListVpcPeerConnectionsResponseBodyVpcPeerConnects& setVpc(Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


  protected:
    // The ID of the Alibaba Cloud account to which the accepter VPC belongs.
    std::shared_ptr<int64_t> acceptingOwnerUid_ = nullptr;
    // The region ID of the accepter VPC.
    std::shared_ptr<string> acceptingRegionId_ = nullptr;
    // The details of the accepter VPC.
    std::shared_ptr<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsAcceptingVpc> acceptingVpc_ = nullptr;
    // The bandwidth of the VPC peering connection. Unit: Mbit/s. The value is an integer greater than 0.
    // 
    // >  If the value is set to -1, it indicates that no limit is imposed on the bandwidth.
    // 
    // Default value:
    // 
    // *   The default bandwidth of an inter-region VPC peering connection is **1024** Mbit/s.
    // *   The default bandwidth of an intra-region VPC peering connection is **-1** Mbit/s.
    std::shared_ptr<int32_t> bandwidth_ = nullptr;
    // The business status of the VPC peering connection. Valid values:
    // 
    // *   **Normal**
    // *   **FinancialLocked**
    std::shared_ptr<string> bizStatus_ = nullptr;
    // The description of the VPC peering connection.
    std::shared_ptr<string> description_ = nullptr;
    // The time when the VPC peering connection was created. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format in UTC.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The expiration time of the VPC peering connection. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format in UTC.
    // 
    // The expiration time is returned only when the **Status** of the VPC peering connection is **Accepting** or **Expired**. Otherwise, **null** is returned.
    std::shared_ptr<string> gmtExpired_ = nullptr;
    // The time when the VPC peering connection was modified. The time is displayed in the `YYYY-MM-DDThh:mm:ssZ` format in UTC.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The ID of the VPC peering connection.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The link type of the VPC peering connection.
    std::shared_ptr<string> linkType_ = nullptr;
    std::shared_ptr<string> managedService_ = nullptr;
    // The name of the VPC peering connection.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the Alibaba Cloud account to which the requester VPC belongs.
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The region ID of the requester VPC.
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The status of the VPC peering connection. Valid values:
    // 
    // *   **Creating**
    // *   **Accepting**
    // *   **Updating**
    // *   **Rejected**
    // *   **Expired**
    // *   **Activated**
    // *   **Deleting**
    // *   **Deleted**
    // 
    // For more information about the status of VPC peering connections, see [Overview of VPC peering connections](https://help.aliyun.com/document_detail/418507.html).
    std::shared_ptr<string> status_ = nullptr;
    // The tag list.
    std::shared_ptr<vector<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsTags>> tags_ = nullptr;
    // The details of the requester VPC.
    std::shared_ptr<Models::ListVpcPeerConnectionsResponseBodyVpcPeerConnectsVpc> vpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VpcPeer20220101
#endif
