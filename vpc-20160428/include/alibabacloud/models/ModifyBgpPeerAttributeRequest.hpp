// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBGPPEERATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBGPPEERATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ModifyBgpPeerAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBgpPeerAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BfdMultiHop, bfdMultiHop_);
      DARABONBA_PTR_TO_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_TO_JSON(BgpPeerId, bgpPeerId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(EnableBfd, enableBfd_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PeerIpAddress, peerIpAddress_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBgpPeerAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BfdMultiHop, bfdMultiHop_);
      DARABONBA_PTR_FROM_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_FROM_JSON(BgpPeerId, bgpPeerId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(EnableBfd, enableBfd_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PeerIpAddress, peerIpAddress_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    ModifyBgpPeerAttributeRequest() = default ;
    ModifyBgpPeerAttributeRequest(const ModifyBgpPeerAttributeRequest &) = default ;
    ModifyBgpPeerAttributeRequest(ModifyBgpPeerAttributeRequest &&) = default ;
    ModifyBgpPeerAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBgpPeerAttributeRequest() = default ;
    ModifyBgpPeerAttributeRequest& operator=(const ModifyBgpPeerAttributeRequest &) = default ;
    ModifyBgpPeerAttributeRequest& operator=(ModifyBgpPeerAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bfdMultiHop_ != nullptr
        && this->bgpGroupId_ != nullptr && this->bgpPeerId_ != nullptr && this->clientToken_ != nullptr && this->enableBfd_ != nullptr && this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->peerIpAddress_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr; };
    // bfdMultiHop Field Functions 
    bool hasBfdMultiHop() const { return this->bfdMultiHop_ != nullptr;};
    void deleteBfdMultiHop() { this->bfdMultiHop_ = nullptr;};
    inline int32_t bfdMultiHop() const { DARABONBA_PTR_GET_DEFAULT(bfdMultiHop_, 0) };
    inline ModifyBgpPeerAttributeRequest& setBfdMultiHop(int32_t bfdMultiHop) { DARABONBA_PTR_SET_VALUE(bfdMultiHop_, bfdMultiHop) };


    // bgpGroupId Field Functions 
    bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
    void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
    inline string bgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
    inline ModifyBgpPeerAttributeRequest& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


    // bgpPeerId Field Functions 
    bool hasBgpPeerId() const { return this->bgpPeerId_ != nullptr;};
    void deleteBgpPeerId() { this->bgpPeerId_ = nullptr;};
    inline string bgpPeerId() const { DARABONBA_PTR_GET_DEFAULT(bgpPeerId_, "") };
    inline ModifyBgpPeerAttributeRequest& setBgpPeerId(string bgpPeerId) { DARABONBA_PTR_SET_VALUE(bgpPeerId_, bgpPeerId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyBgpPeerAttributeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // enableBfd Field Functions 
    bool hasEnableBfd() const { return this->enableBfd_ != nullptr;};
    void deleteEnableBfd() { this->enableBfd_ = nullptr;};
    inline bool enableBfd() const { DARABONBA_PTR_GET_DEFAULT(enableBfd_, false) };
    inline ModifyBgpPeerAttributeRequest& setEnableBfd(bool enableBfd) { DARABONBA_PTR_SET_VALUE(enableBfd_, enableBfd) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyBgpPeerAttributeRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyBgpPeerAttributeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // peerIpAddress Field Functions 
    bool hasPeerIpAddress() const { return this->peerIpAddress_ != nullptr;};
    void deletePeerIpAddress() { this->peerIpAddress_ = nullptr;};
    inline string peerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(peerIpAddress_, "") };
    inline ModifyBgpPeerAttributeRequest& setPeerIpAddress(string peerIpAddress) { DARABONBA_PTR_SET_VALUE(peerIpAddress_, peerIpAddress) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyBgpPeerAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyBgpPeerAttributeRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyBgpPeerAttributeRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    // The BFD hop count. Valid values: **1** to **255**.
    // 
    // This parameter is required only if you enable BFD. The parameter specifies the maximum number of network devices that a packet can traverse from the source to the destination. Set a value based on your network topology.
    std::shared_ptr<int32_t> bfdMultiHop_ = nullptr;
    // The ID of the BGP group to which the BGP peer that you want to modify belongs.
    std::shared_ptr<string> bgpGroupId_ = nullptr;
    // The ID of the BGP peer that you want to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> bgpPeerId_ = nullptr;
    // The client token that is used to ensure the idempotence of the request.
    // 
    // You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    // 
    // >  If you do not specify this parameter, the system automatically uses the **request ID** as the **client token**. The **request ID** may be different for each request.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to enable the Bidirectional Forwarding Detection (BFD) feature. Valid values:
    // 
    // *   **true**
    // *   **false** (default)
    std::shared_ptr<bool> enableBfd_ = nullptr;
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The IP address of the BGP peer that you want to modify.
    std::shared_ptr<string> peerIpAddress_ = nullptr;
    // The region ID of the BGP group to which the BGP peer that you want to modify belongs.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/36063.html) operation to query the most recent region list.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
