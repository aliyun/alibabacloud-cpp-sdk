// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETRAFFICMIRRORSESSIONATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETRAFFICMIRRORSESSIONATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class UpdateTrafficMirrorSessionAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTrafficMirrorSessionAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PacketLength, packetLength_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionDescription, trafficMirrorSessionDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionId, trafficMirrorSessionId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionName, trafficMirrorSessionName_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorTargetId, trafficMirrorTargetId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorTargetType, trafficMirrorTargetType_);
      DARABONBA_PTR_TO_JSON(VirtualNetworkId, virtualNetworkId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTrafficMirrorSessionAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PacketLength, packetLength_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionDescription, trafficMirrorSessionDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionId, trafficMirrorSessionId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionName, trafficMirrorSessionName_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorTargetId, trafficMirrorTargetId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorTargetType, trafficMirrorTargetType_);
      DARABONBA_PTR_FROM_JSON(VirtualNetworkId, virtualNetworkId_);
    };
    UpdateTrafficMirrorSessionAttributeRequest() = default ;
    UpdateTrafficMirrorSessionAttributeRequest(const UpdateTrafficMirrorSessionAttributeRequest &) = default ;
    UpdateTrafficMirrorSessionAttributeRequest(UpdateTrafficMirrorSessionAttributeRequest &&) = default ;
    UpdateTrafficMirrorSessionAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTrafficMirrorSessionAttributeRequest() = default ;
    UpdateTrafficMirrorSessionAttributeRequest& operator=(const UpdateTrafficMirrorSessionAttributeRequest &) = default ;
    UpdateTrafficMirrorSessionAttributeRequest& operator=(UpdateTrafficMirrorSessionAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->enabled_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->packetLength_ == nullptr
        && this->priority_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->trafficMirrorFilterId_ == nullptr
        && this->trafficMirrorSessionDescription_ == nullptr && this->trafficMirrorSessionId_ == nullptr && this->trafficMirrorSessionName_ == nullptr && this->trafficMirrorTargetId_ == nullptr && this->trafficMirrorTargetType_ == nullptr
        && this->virtualNetworkId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline UpdateTrafficMirrorSessionAttributeRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateTrafficMirrorSessionAttributeRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateTrafficMirrorSessionAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packetLength Field Functions 
    bool hasPacketLength() const { return this->packetLength_ != nullptr;};
    void deletePacketLength() { this->packetLength_ = nullptr;};
    inline int32_t getPacketLength() const { DARABONBA_PTR_GET_DEFAULT(packetLength_, 0) };
    inline UpdateTrafficMirrorSessionAttributeRequest& setPacketLength(int32_t packetLength) { DARABONBA_PTR_SET_VALUE(packetLength_, packetLength) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline UpdateTrafficMirrorSessionAttributeRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline UpdateTrafficMirrorSessionAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


    // trafficMirrorSessionDescription Field Functions 
    bool hasTrafficMirrorSessionDescription() const { return this->trafficMirrorSessionDescription_ != nullptr;};
    void deleteTrafficMirrorSessionDescription() { this->trafficMirrorSessionDescription_ = nullptr;};
    inline string getTrafficMirrorSessionDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionDescription_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setTrafficMirrorSessionDescription(string trafficMirrorSessionDescription) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionDescription_, trafficMirrorSessionDescription) };


    // trafficMirrorSessionId Field Functions 
    bool hasTrafficMirrorSessionId() const { return this->trafficMirrorSessionId_ != nullptr;};
    void deleteTrafficMirrorSessionId() { this->trafficMirrorSessionId_ = nullptr;};
    inline string getTrafficMirrorSessionId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionId_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setTrafficMirrorSessionId(string trafficMirrorSessionId) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionId_, trafficMirrorSessionId) };


    // trafficMirrorSessionName Field Functions 
    bool hasTrafficMirrorSessionName() const { return this->trafficMirrorSessionName_ != nullptr;};
    void deleteTrafficMirrorSessionName() { this->trafficMirrorSessionName_ = nullptr;};
    inline string getTrafficMirrorSessionName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionName_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setTrafficMirrorSessionName(string trafficMirrorSessionName) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionName_, trafficMirrorSessionName) };


    // trafficMirrorTargetId Field Functions 
    bool hasTrafficMirrorTargetId() const { return this->trafficMirrorTargetId_ != nullptr;};
    void deleteTrafficMirrorTargetId() { this->trafficMirrorTargetId_ = nullptr;};
    inline string getTrafficMirrorTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetId_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setTrafficMirrorTargetId(string trafficMirrorTargetId) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetId_, trafficMirrorTargetId) };


    // trafficMirrorTargetType Field Functions 
    bool hasTrafficMirrorTargetType() const { return this->trafficMirrorTargetType_ != nullptr;};
    void deleteTrafficMirrorTargetType() { this->trafficMirrorTargetType_ = nullptr;};
    inline string getTrafficMirrorTargetType() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetType_, "") };
    inline UpdateTrafficMirrorSessionAttributeRequest& setTrafficMirrorTargetType(string trafficMirrorTargetType) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetType_, trafficMirrorTargetType) };


    // virtualNetworkId Field Functions 
    bool hasVirtualNetworkId() const { return this->virtualNetworkId_ != nullptr;};
    void deleteVirtualNetworkId() { this->virtualNetworkId_ = nullptr;};
    inline int32_t getVirtualNetworkId() const { DARABONBA_PTR_GET_DEFAULT(virtualNetworkId_, 0) };
    inline UpdateTrafficMirrorSessionAttributeRequest& setVirtualNetworkId(int32_t virtualNetworkId) { DARABONBA_PTR_SET_VALUE(virtualNetworkId_, virtualNetworkId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run, without performing the actual request. The system checks the request for potential issues, including missing parameter values, incorrect request syntax, and service limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false**: sends the request. If the request passes the check, a 2xx HTTP status code is returned and the operation is performed. This is the default value.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable the traffic mirror session. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The maximum transmission unit (MTU).
    // 
    // Valid values: **64 to 9600**. Default value: **1500**.
    shared_ptr<int32_t> packetLength_ {};
    // The new priority of the traffic mirror session. Valid values: **1** to **32766**.
    // 
    // A smaller value indicates a higher priority. You cannot specify identical priorities for traffic mirror sessions that are created in the same region by using the same account.
    shared_ptr<int32_t> priority_ {};
    // The region ID of the traffic mirror session. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about the regions that support traffic mirror, see [Overview of traffic mirror](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The ID of the traffic mirror filter.
    shared_ptr<string> trafficMirrorFilterId_ {};
    // The new description of the traffic mirror session.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> trafficMirrorSessionDescription_ {};
    // The ID of the traffic mirror session.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMirrorSessionId_ {};
    // The new name of the traffic mirror session.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> trafficMirrorSessionName_ {};
    // The ID of the traffic mirror destination.
    shared_ptr<string> trafficMirrorTargetId_ {};
    // The new type of the traffic mirror destination. Valid values:
    // 
    // *   **NetworkInterface**: an elastic network interface (ENI)
    // *   **SLB**: an internal-facing Server Load Balancer (SLB) instance
    shared_ptr<string> trafficMirrorTargetType_ {};
    // The VXLAN network identifier (VNI) that is used to distinguish different mirrored traffic. Valid values: **0** to **16777215**.
    // 
    // You can use VNIs to identify mirrored traffic from different sessions at the traffic mirror destination. If you do not specify a VNI, the system randomly allocates a VNI. If you want the system to randomly allocate a VNI, ignore this parameter.
    shared_ptr<int32_t> virtualNetworkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
