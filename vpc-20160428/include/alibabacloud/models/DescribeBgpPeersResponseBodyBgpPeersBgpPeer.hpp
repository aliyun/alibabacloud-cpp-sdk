// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPPEERSRESPONSEBODYBGPPEERSBGPPEER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPPEERSRESPONSEBODYBGPPEERSBGPPEER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeBgpPeersResponseBodyBgpPeersBgpPeer : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpPeersResponseBodyBgpPeersBgpPeer& obj) { 
      DARABONBA_PTR_TO_JSON(AdvertisedRouteCount, advertisedRouteCount_);
      DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
      DARABONBA_PTR_TO_JSON(BfdMultiHop, bfdMultiHop_);
      DARABONBA_PTR_TO_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_TO_JSON(BgpPeerId, bgpPeerId_);
      DARABONBA_PTR_TO_JSON(BgpStatus, bgpStatus_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EnableBfd, enableBfd_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Hold, hold_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(IsFake, isFake_);
      DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_TO_JSON(PeerIpAddress, peerIpAddress_);
      DARABONBA_PTR_TO_JSON(ReceivedRouteCount, receivedRouteCount_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RouteLimit, routeLimit_);
      DARABONBA_PTR_TO_JSON(RouterId, routerId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpPeersResponseBodyBgpPeersBgpPeer& obj) { 
      DARABONBA_PTR_FROM_JSON(AdvertisedRouteCount, advertisedRouteCount_);
      DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
      DARABONBA_PTR_FROM_JSON(BfdMultiHop, bfdMultiHop_);
      DARABONBA_PTR_FROM_JSON(BgpGroupId, bgpGroupId_);
      DARABONBA_PTR_FROM_JSON(BgpPeerId, bgpPeerId_);
      DARABONBA_PTR_FROM_JSON(BgpStatus, bgpStatus_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EnableBfd, enableBfd_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Hold, hold_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(IsFake, isFake_);
      DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
      DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
      DARABONBA_PTR_FROM_JSON(PeerIpAddress, peerIpAddress_);
      DARABONBA_PTR_FROM_JSON(ReceivedRouteCount, receivedRouteCount_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RouteLimit, routeLimit_);
      DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeBgpPeersResponseBodyBgpPeersBgpPeer() = default ;
    DescribeBgpPeersResponseBodyBgpPeersBgpPeer(const DescribeBgpPeersResponseBodyBgpPeersBgpPeer &) = default ;
    DescribeBgpPeersResponseBodyBgpPeersBgpPeer(DescribeBgpPeersResponseBodyBgpPeersBgpPeer &&) = default ;
    DescribeBgpPeersResponseBodyBgpPeersBgpPeer(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpPeersResponseBodyBgpPeersBgpPeer() = default ;
    DescribeBgpPeersResponseBodyBgpPeersBgpPeer& operator=(const DescribeBgpPeersResponseBodyBgpPeersBgpPeer &) = default ;
    DescribeBgpPeersResponseBodyBgpPeersBgpPeer& operator=(DescribeBgpPeersResponseBodyBgpPeersBgpPeer &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advertisedRouteCount_ == nullptr
        && return this->authKey_ == nullptr && return this->bfdMultiHop_ == nullptr && return this->bgpGroupId_ == nullptr && return this->bgpPeerId_ == nullptr && return this->bgpStatus_ == nullptr
        && return this->description_ == nullptr && return this->enableBfd_ == nullptr && return this->gmtModified_ == nullptr && return this->hold_ == nullptr && return this->ipVersion_ == nullptr
        && return this->isFake_ == nullptr && return this->keepalive_ == nullptr && return this->localAsn_ == nullptr && return this->name_ == nullptr && return this->peerAsn_ == nullptr
        && return this->peerIpAddress_ == nullptr && return this->receivedRouteCount_ == nullptr && return this->regionId_ == nullptr && return this->routeLimit_ == nullptr && return this->routerId_ == nullptr
        && return this->status_ == nullptr; };
    // advertisedRouteCount Field Functions 
    bool hasAdvertisedRouteCount() const { return this->advertisedRouteCount_ != nullptr;};
    void deleteAdvertisedRouteCount() { this->advertisedRouteCount_ = nullptr;};
    inline int32_t advertisedRouteCount() const { DARABONBA_PTR_GET_DEFAULT(advertisedRouteCount_, 0) };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setAdvertisedRouteCount(int32_t advertisedRouteCount) { DARABONBA_PTR_SET_VALUE(advertisedRouteCount_, advertisedRouteCount) };


    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // bfdMultiHop Field Functions 
    bool hasBfdMultiHop() const { return this->bfdMultiHop_ != nullptr;};
    void deleteBfdMultiHop() { this->bfdMultiHop_ = nullptr;};
    inline int32_t bfdMultiHop() const { DARABONBA_PTR_GET_DEFAULT(bfdMultiHop_, 0) };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setBfdMultiHop(int32_t bfdMultiHop) { DARABONBA_PTR_SET_VALUE(bfdMultiHop_, bfdMultiHop) };


    // bgpGroupId Field Functions 
    bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
    void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
    inline string bgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


    // bgpPeerId Field Functions 
    bool hasBgpPeerId() const { return this->bgpPeerId_ != nullptr;};
    void deleteBgpPeerId() { this->bgpPeerId_ = nullptr;};
    inline string bgpPeerId() const { DARABONBA_PTR_GET_DEFAULT(bgpPeerId_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setBgpPeerId(string bgpPeerId) { DARABONBA_PTR_SET_VALUE(bgpPeerId_, bgpPeerId) };


    // bgpStatus Field Functions 
    bool hasBgpStatus() const { return this->bgpStatus_ != nullptr;};
    void deleteBgpStatus() { this->bgpStatus_ = nullptr;};
    inline string bgpStatus() const { DARABONBA_PTR_GET_DEFAULT(bgpStatus_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setBgpStatus(string bgpStatus) { DARABONBA_PTR_SET_VALUE(bgpStatus_, bgpStatus) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enableBfd Field Functions 
    bool hasEnableBfd() const { return this->enableBfd_ != nullptr;};
    void deleteEnableBfd() { this->enableBfd_ = nullptr;};
    inline bool enableBfd() const { DARABONBA_PTR_GET_DEFAULT(enableBfd_, false) };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setEnableBfd(bool enableBfd) { DARABONBA_PTR_SET_VALUE(enableBfd_, enableBfd) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // hold Field Functions 
    bool hasHold() const { return this->hold_ != nullptr;};
    void deleteHold() { this->hold_ = nullptr;};
    inline string hold() const { DARABONBA_PTR_GET_DEFAULT(hold_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setHold(string hold) { DARABONBA_PTR_SET_VALUE(hold_, hold) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isFake Field Functions 
    bool hasIsFake() const { return this->isFake_ != nullptr;};
    void deleteIsFake() { this->isFake_ = nullptr;};
    inline bool isFake() const { DARABONBA_PTR_GET_DEFAULT(isFake_, false) };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setIsFake(bool isFake) { DARABONBA_PTR_SET_VALUE(isFake_, isFake) };


    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline string keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setKeepalive(string keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline string localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setLocalAsn(string localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline string peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // peerIpAddress Field Functions 
    bool hasPeerIpAddress() const { return this->peerIpAddress_ != nullptr;};
    void deletePeerIpAddress() { this->peerIpAddress_ = nullptr;};
    inline string peerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(peerIpAddress_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setPeerIpAddress(string peerIpAddress) { DARABONBA_PTR_SET_VALUE(peerIpAddress_, peerIpAddress) };


    // receivedRouteCount Field Functions 
    bool hasReceivedRouteCount() const { return this->receivedRouteCount_ != nullptr;};
    void deleteReceivedRouteCount() { this->receivedRouteCount_ = nullptr;};
    inline int32_t receivedRouteCount() const { DARABONBA_PTR_GET_DEFAULT(receivedRouteCount_, 0) };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setReceivedRouteCount(int32_t receivedRouteCount) { DARABONBA_PTR_SET_VALUE(receivedRouteCount_, receivedRouteCount) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeLimit Field Functions 
    bool hasRouteLimit() const { return this->routeLimit_ != nullptr;};
    void deleteRouteLimit() { this->routeLimit_ = nullptr;};
    inline string routeLimit() const { DARABONBA_PTR_GET_DEFAULT(routeLimit_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setRouteLimit(string routeLimit) { DARABONBA_PTR_SET_VALUE(routeLimit_, routeLimit) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string routerId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBgpPeersResponseBodyBgpPeersBgpPeer& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The number of advertised routes.
    std::shared_ptr<int32_t> advertisedRouteCount_ = nullptr;
    // The authentication key of the BGP group.
    std::shared_ptr<string> authKey_ = nullptr;
    // The Bidirectional Forwarding Detection (BFD) hop count.
    std::shared_ptr<int32_t> bfdMultiHop_ = nullptr;
    // The ID of the BGP group.
    std::shared_ptr<string> bgpGroupId_ = nullptr;
    // The ID of the BGP peer.
    std::shared_ptr<string> bgpPeerId_ = nullptr;
    // The status of the BGP connection. Valid values:
    // 
    // *   **Idle**: The BGP connection is not used.
    // *   **Connect**: The BGP connection is used.
    // *   **Active**: The BGP connection is available.
    // *   **Established**: The BGP connection is established.
    // *   **Down**: The BGP connection is unavailable.
    std::shared_ptr<string> bgpStatus_ = nullptr;
    // The description of the BGP group.
    std::shared_ptr<string> description_ = nullptr;
    // Indicates whether BFD is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> enableBfd_ = nullptr;
    // The time when the BGP peer is modified.
    // 
    // Use the UTC time format: yyyy-MM-ddTHH:mmZ
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The hold time.
    std::shared_ptr<string> hold_ = nullptr;
    // The version of the IP address.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // Indicates whether a fake autonomous system number (ASN) is used. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isFake_ = nullptr;
    // The Keepalive interval.
    std::shared_ptr<string> keepalive_ = nullptr;
    // The ASN of the device on the Alibaba Cloud side.
    std::shared_ptr<string> localAsn_ = nullptr;
    // The name of the BGP peer.
    std::shared_ptr<string> name_ = nullptr;
    // The autonomous system number (ASN)of the BGP peer.
    std::shared_ptr<string> peerAsn_ = nullptr;
    // The IP address of the BGP peer.
    std::shared_ptr<string> peerIpAddress_ = nullptr;
    // The number of received routes.
    std::shared_ptr<int32_t> receivedRouteCount_ = nullptr;
    // The ID of the region to which the BGP group belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The maximum number of routes.
    std::shared_ptr<string> routeLimit_ = nullptr;
    // The Router ID.
    std::shared_ptr<string> routerId_ = nullptr;
    // The status of the BGP peer. Valid values:
    // 
    // *   **Pending**
    // *   **Available**
    // *   **Modifying**
    // *   **Deleting**
    // *   **Deleted**
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
