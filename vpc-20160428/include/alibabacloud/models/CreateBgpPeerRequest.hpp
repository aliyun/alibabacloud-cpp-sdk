// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBGPPEERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBGPPEERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class CreateBgpPeerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBgpPeerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BfdMultiHop, bfdMultiHop_);
      DARABONBA_PTR_TO_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableBfd, enableBfd_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerIpAddress, peerIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBgpPeerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BfdMultiHop, bfdMultiHop_);
      DARABONBA_PTR_FROM_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableBfd, enableBfd_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerIpAddress, peerIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CreateBgpPeerRequest() = default ;
    CreateBgpPeerRequest(const CreateBgpPeerRequest &) = default ;
    CreateBgpPeerRequest(CreateBgpPeerRequest &&) = default ;
    CreateBgpPeerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBgpPeerRequest() = default ;
    CreateBgpPeerRequest& operator=(const CreateBgpPeerRequest &) = default ;
    CreateBgpPeerRequest& operator=(CreateBgpPeerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bfdMultiHop_ == nullptr
        && this->bgpGroupId_ == nullptr && this->clientToken_ == nullptr && this->enableBfd_ == nullptr && this->ipVersion_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->peerIpAddress_ == nullptr && this->regionId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // bfdMultiHop Field Functions 
    bool hasBfdMultiHop() const { return this->bfdMultiHop_ != nullptr;};
    void deleteBfdMultiHop() { this->bfdMultiHop_ = nullptr;};
    inline int32_t getBfdMultiHop() const { DARABONBA_PTR_GET_DEFAULT(bfdMultiHop_, 0) };
    inline CreateBgpPeerRequest& setBfdMultiHop(int32_t bfdMultiHop) { DARABONBA_PTR_SET_VALUE(bfdMultiHop_, bfdMultiHop) };


    // bgpGroupId Field Functions 
    bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
    void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
    inline string getBgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
    inline CreateBgpPeerRequest& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateBgpPeerRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableBfd Field Functions 
    bool hasEnableBfd() const { return this->enableBfd_ != nullptr;};
    void deleteEnableBfd() { this->enableBfd_ = nullptr;};
    inline bool getEnableBfd() const { DARABONBA_PTR_GET_DEFAULT(enableBfd_, false) };
    inline CreateBgpPeerRequest& setEnableBfd(bool enableBfd) { DARABONBA_PTR_SET_VALUE(enableBfd_, enableBfd) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline CreateBgpPeerRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline CreateBgpPeerRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CreateBgpPeerRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerIpAddress Field Functions 
    bool hasPeerIpAddress() const { return this->peerIpAddress_ != nullptr;};
    void deletePeerIpAddress() { this->peerIpAddress_ = nullptr;};
    inline string getPeerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(peerIpAddress_, "") };
    inline CreateBgpPeerRequest& setPeerIpAddress(string peerIpAddress) { DARABONBA_PTR_SET_VALUE(peerIpAddress_, peerIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateBgpPeerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CreateBgpPeerRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CreateBgpPeerRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The BFD hop count. Valid values: **1** to **255**.
    // 
    // This parameter is required only if you enable BFD. The parameter specifies the maximum number of network devices that a packet can traverse from the source to the destination. Set a value based on your network topology.
    // 
    // > If you use BFD in a multi-cloud environment or a fiber-optic direct connection network without any bridge device, you need to change the default BFD hop count from **255** to **1**.
    shared_ptr<int32_t> bfdMultiHop_ {};
    // The ID of the BGP group.
    // 
    // This parameter is required.
    shared_ptr<string> bgpGroupId_ {};
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the value, but you must make sure that the value is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // >  If you do not set this parameter, the system uses the value of **RequestId** as **ClientToken**. The value of **RequestId** for each API request is different.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to enable the Bidirectional Forwarding Detection (BFD) feature. Valid values:
    // 
    // *   **true**: enables BFD.
    // *   **false**: disables BFD.
    shared_ptr<bool> enableBfd_ {};
    // The IP version. Valid values:
    // 
    // *   **IPv4**: This is the default value.
    // *   **IPv6**: IPv6 is supported only if the VBR for which you want to create the BGP group has IPv6 enabled.
    shared_ptr<string> ipVersion_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The IP address of the BGP peer.
    shared_ptr<string> peerIpAddress_ {};
    // The ID of the region to which the BGP group belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
