// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATETRAFFICMIRRORSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateTrafficMirrorSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTrafficMirrorSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PacketLength, packetLength_);
      DARABONBA_PTR_TO_JSON(Priority, priority_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionDescription, trafficMirrorSessionDescription_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSessionName, trafficMirrorSessionName_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorSourceIds, trafficMirrorSourceIds_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorTargetId, trafficMirrorTargetId_);
      DARABONBA_PTR_TO_JSON(TrafficMirrorTargetType, trafficMirrorTargetType_);
      DARABONBA_PTR_TO_JSON(VirtualNetworkId, virtualNetworkId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTrafficMirrorSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PacketLength, packetLength_);
      DARABONBA_PTR_FROM_JSON(Priority, priority_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorFilterId, trafficMirrorFilterId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionDescription, trafficMirrorSessionDescription_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSessionName, trafficMirrorSessionName_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorSourceIds, trafficMirrorSourceIds_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorTargetId, trafficMirrorTargetId_);
      DARABONBA_PTR_FROM_JSON(TrafficMirrorTargetType, trafficMirrorTargetType_);
      DARABONBA_PTR_FROM_JSON(VirtualNetworkId, virtualNetworkId_);
    };
    CreateTrafficMirrorSessionRequest() = default ;
    CreateTrafficMirrorSessionRequest(const CreateTrafficMirrorSessionRequest &) = default ;
    CreateTrafficMirrorSessionRequest(CreateTrafficMirrorSessionRequest &&) = default ;
    CreateTrafficMirrorSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTrafficMirrorSessionRequest() = default ;
    CreateTrafficMirrorSessionRequest& operator=(const CreateTrafficMirrorSessionRequest &) = default ;
    CreateTrafficMirrorSessionRequest& operator=(CreateTrafficMirrorSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key. You can specify at most 20 tag keys. The tag key cannot be an empty string.
      // 
      // The tag key can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> key_ {};
      // The tag value. You can specify at most 20 tag values. The tag value can be an empty string.
      // 
      // The tag value can be up to 128 characters in length. It cannot start with `aliyun` or `acs:`, and cannot contain `http://` or `https://`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dryRun_ == nullptr && this->enabled_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->packetLength_ == nullptr
        && this->priority_ == nullptr && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->tag_ == nullptr && this->trafficMirrorFilterId_ == nullptr && this->trafficMirrorSessionDescription_ == nullptr && this->trafficMirrorSessionName_ == nullptr && this->trafficMirrorSourceIds_ == nullptr
        && this->trafficMirrorTargetId_ == nullptr && this->trafficMirrorTargetType_ == nullptr && this->virtualNetworkId_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateTrafficMirrorSessionRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline CreateTrafficMirrorSessionRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateTrafficMirrorSessionRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateTrafficMirrorSessionRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateTrafficMirrorSessionRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // packetLength Field Functions 
    bool hasPacketLength() const { return this->packetLength_ != nullptr;};
    void deletePacketLength() { this->packetLength_ = nullptr;};
    inline int32_t getPacketLength() const { DARABONBA_PTR_GET_DEFAULT(packetLength_, 0) };
    inline CreateTrafficMirrorSessionRequest& setPacketLength(int32_t packetLength) { DARABONBA_PTR_SET_VALUE(packetLength_, packetLength) };


    // priority Field Functions 
    bool hasPriority() const { return this->priority_ != nullptr;};
    void deletePriority() { this->priority_ = nullptr;};
    inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
    inline CreateTrafficMirrorSessionRequest& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateTrafficMirrorSessionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateTrafficMirrorSessionRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateTrafficMirrorSessionRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateTrafficMirrorSessionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateTrafficMirrorSessionRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateTrafficMirrorSessionRequest::Tag>) };
    inline vector<CreateTrafficMirrorSessionRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<CreateTrafficMirrorSessionRequest::Tag>) };
    inline CreateTrafficMirrorSessionRequest& setTag(const vector<CreateTrafficMirrorSessionRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateTrafficMirrorSessionRequest& setTag(vector<CreateTrafficMirrorSessionRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // trafficMirrorFilterId Field Functions 
    bool hasTrafficMirrorFilterId() const { return this->trafficMirrorFilterId_ != nullptr;};
    void deleteTrafficMirrorFilterId() { this->trafficMirrorFilterId_ = nullptr;};
    inline string getTrafficMirrorFilterId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorFilterId_, "") };
    inline CreateTrafficMirrorSessionRequest& setTrafficMirrorFilterId(string trafficMirrorFilterId) { DARABONBA_PTR_SET_VALUE(trafficMirrorFilterId_, trafficMirrorFilterId) };


    // trafficMirrorSessionDescription Field Functions 
    bool hasTrafficMirrorSessionDescription() const { return this->trafficMirrorSessionDescription_ != nullptr;};
    void deleteTrafficMirrorSessionDescription() { this->trafficMirrorSessionDescription_ = nullptr;};
    inline string getTrafficMirrorSessionDescription() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionDescription_, "") };
    inline CreateTrafficMirrorSessionRequest& setTrafficMirrorSessionDescription(string trafficMirrorSessionDescription) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionDescription_, trafficMirrorSessionDescription) };


    // trafficMirrorSessionName Field Functions 
    bool hasTrafficMirrorSessionName() const { return this->trafficMirrorSessionName_ != nullptr;};
    void deleteTrafficMirrorSessionName() { this->trafficMirrorSessionName_ = nullptr;};
    inline string getTrafficMirrorSessionName() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorSessionName_, "") };
    inline CreateTrafficMirrorSessionRequest& setTrafficMirrorSessionName(string trafficMirrorSessionName) { DARABONBA_PTR_SET_VALUE(trafficMirrorSessionName_, trafficMirrorSessionName) };


    // trafficMirrorSourceIds Field Functions 
    bool hasTrafficMirrorSourceIds() const { return this->trafficMirrorSourceIds_ != nullptr;};
    void deleteTrafficMirrorSourceIds() { this->trafficMirrorSourceIds_ = nullptr;};
    inline const vector<string> & getTrafficMirrorSourceIds() const { DARABONBA_PTR_GET_CONST(trafficMirrorSourceIds_, vector<string>) };
    inline vector<string> getTrafficMirrorSourceIds() { DARABONBA_PTR_GET(trafficMirrorSourceIds_, vector<string>) };
    inline CreateTrafficMirrorSessionRequest& setTrafficMirrorSourceIds(const vector<string> & trafficMirrorSourceIds) { DARABONBA_PTR_SET_VALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };
    inline CreateTrafficMirrorSessionRequest& setTrafficMirrorSourceIds(vector<string> && trafficMirrorSourceIds) { DARABONBA_PTR_SET_RVALUE(trafficMirrorSourceIds_, trafficMirrorSourceIds) };


    // trafficMirrorTargetId Field Functions 
    bool hasTrafficMirrorTargetId() const { return this->trafficMirrorTargetId_ != nullptr;};
    void deleteTrafficMirrorTargetId() { this->trafficMirrorTargetId_ = nullptr;};
    inline string getTrafficMirrorTargetId() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetId_, "") };
    inline CreateTrafficMirrorSessionRequest& setTrafficMirrorTargetId(string trafficMirrorTargetId) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetId_, trafficMirrorTargetId) };


    // trafficMirrorTargetType Field Functions 
    bool hasTrafficMirrorTargetType() const { return this->trafficMirrorTargetType_ != nullptr;};
    void deleteTrafficMirrorTargetType() { this->trafficMirrorTargetType_ = nullptr;};
    inline string getTrafficMirrorTargetType() const { DARABONBA_PTR_GET_DEFAULT(trafficMirrorTargetType_, "") };
    inline CreateTrafficMirrorSessionRequest& setTrafficMirrorTargetType(string trafficMirrorTargetType) { DARABONBA_PTR_SET_VALUE(trafficMirrorTargetType_, trafficMirrorTargetType) };


    // virtualNetworkId Field Functions 
    bool hasVirtualNetworkId() const { return this->virtualNetworkId_ != nullptr;};
    void deleteVirtualNetworkId() { this->virtualNetworkId_ = nullptr;};
    inline int32_t getVirtualNetworkId() const { DARABONBA_PTR_GET_DEFAULT(virtualNetworkId_, 0) };
    inline CreateTrafficMirrorSessionRequest& setVirtualNetworkId(int32_t virtualNetworkId) { DARABONBA_PTR_SET_VALUE(virtualNetworkId_, virtualNetworkId) };


  protected:
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must ensure that the value is unique among all requests. The client token can contain only ASCII characters.
    // 
    // >  If you do not set this parameter, the system uses **RequestId** as **ClientToken**. **RequestId** might be different for each API request.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform a dry run. Valid values:
    // 
    // *   **true**: performs a dry run. The system checks the required parameters, request format, and limits. If the request fails the dry run, an error message is returned. If the request passes the dry run, the `DryRunOperation` error code is returned.
    // *   **false** (default): performs a dry run and sends the request. If the request passes the dry run, the operation is performed.
    shared_ptr<bool> dryRun_ {};
    // Specifies whether to enable the traffic mirror session. Valid values:
    // 
    // *   **false** (default): does not enable the traffic mirror session.
    // *   **true**: enables the traffic mirror session.
    shared_ptr<bool> enabled_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The maximum transmission unit.
    // 
    // Valid values: **64 to 9600**. Default value: **1500**.
    shared_ptr<int32_t> packetLength_ {};
    // The priority of the traffic mirror session. Valid values: **1** to **32766**.
    // 
    // A smaller value indicates a higher priority. You cannot specify identical priorities for traffic mirror sessions that are created in the same region by using the same account.
    // 
    // This parameter is required.
    shared_ptr<int32_t> priority_ {};
    // The ID of the region to which the traffic mirror session belongs. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list. For more information about regions that support traffic mirror, see [Overview of traffic mirror](https://help.aliyun.com/document_detail/207513.html).
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group to which the mirrored traffic belongs.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tag of the resource.
    shared_ptr<vector<CreateTrafficMirrorSessionRequest::Tag>> tag_ {};
    // The ID of the filter.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMirrorFilterId_ {};
    // The description of the traffic mirror session.
    // 
    // The description must be 1 to 256 characters in length and cannot start with `http://` or `https://`.
    shared_ptr<string> trafficMirrorSessionDescription_ {};
    // The name of the traffic mirror session.
    // 
    // The name must be 1 to 128 characters in length, and cannot start with `http://` or `https://`.
    shared_ptr<string> trafficMirrorSessionName_ {};
    // The ID of the traffic mirror source. You can specify only an elastic network interface (ENI) as the traffic mirror source. The default value of **N** is **1**, which indicates that you can add only one traffic mirror source to a traffic mirror session.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> trafficMirrorSourceIds_ {};
    // The ID of the traffic mirror destination. You can specify only an elastic network interface (ENI) or a Server Load Balancer (SLB) instance as a traffic mirror destination.
    // 
    // This parameter is required.
    shared_ptr<string> trafficMirrorTargetId_ {};
    // The type of the traffic mirror destination. Valid values:
    // 
    // *   **NetworkInterface**: an ENI
    // *   **SLB**: an SLB instance
    // 
    // This parameter is required.
    shared_ptr<string> trafficMirrorTargetType_ {};
    // The VXLAN network identifier (VNI). Valid values: **0** to **16777215**.
    // 
    // You can use VNIs to identify mirrored traffic from different sessions at the traffic mirror destination. You can specify a custom VNI or use a random VNI allocated by the system. If you want the system to randomly allocate a VNI, do not enter a value.
    shared_ptr<int32_t> virtualNetworkId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
