// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPPEERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPPEERSRESPONSEBODY_HPP_
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
  class DescribeBgpPeersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpPeersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BgpPeers, bgpPeers_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpPeersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpPeers, bgpPeers_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBgpPeersResponseBody() = default ;
    DescribeBgpPeersResponseBody(const DescribeBgpPeersResponseBody &) = default ;
    DescribeBgpPeersResponseBody(DescribeBgpPeersResponseBody &&) = default ;
    DescribeBgpPeersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpPeersResponseBody() = default ;
    DescribeBgpPeersResponseBody& operator=(const DescribeBgpPeersResponseBody &) = default ;
    DescribeBgpPeersResponseBody& operator=(DescribeBgpPeersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BgpPeers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BgpPeers& obj) { 
        DARABONBA_PTR_TO_JSON(BgpPeer, bgpPeer_);
      };
      friend void from_json(const Darabonba::Json& j, BgpPeers& obj) { 
        DARABONBA_PTR_FROM_JSON(BgpPeer, bgpPeer_);
      };
      BgpPeers() = default ;
      BgpPeers(const BgpPeers &) = default ;
      BgpPeers(BgpPeers &&) = default ;
      BgpPeers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BgpPeers() = default ;
      BgpPeers& operator=(const BgpPeers &) = default ;
      BgpPeers& operator=(BgpPeers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BgpPeer : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BgpPeer& obj) { 
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
        friend void from_json(const Darabonba::Json& j, BgpPeer& obj) { 
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
        BgpPeer() = default ;
        BgpPeer(const BgpPeer &) = default ;
        BgpPeer(BgpPeer &&) = default ;
        BgpPeer(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BgpPeer() = default ;
        BgpPeer& operator=(const BgpPeer &) = default ;
        BgpPeer& operator=(BgpPeer &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->advertisedRouteCount_ == nullptr
        && this->authKey_ == nullptr && this->bfdMultiHop_ == nullptr && this->bgpGroupId_ == nullptr && this->bgpPeerId_ == nullptr && this->bgpStatus_ == nullptr
        && this->description_ == nullptr && this->enableBfd_ == nullptr && this->gmtModified_ == nullptr && this->hold_ == nullptr && this->ipVersion_ == nullptr
        && this->isFake_ == nullptr && this->keepalive_ == nullptr && this->localAsn_ == nullptr && this->name_ == nullptr && this->peerAsn_ == nullptr
        && this->peerIpAddress_ == nullptr && this->receivedRouteCount_ == nullptr && this->regionId_ == nullptr && this->routeLimit_ == nullptr && this->routerId_ == nullptr
        && this->status_ == nullptr; };
        // advertisedRouteCount Field Functions 
        bool hasAdvertisedRouteCount() const { return this->advertisedRouteCount_ != nullptr;};
        void deleteAdvertisedRouteCount() { this->advertisedRouteCount_ = nullptr;};
        inline int32_t getAdvertisedRouteCount() const { DARABONBA_PTR_GET_DEFAULT(advertisedRouteCount_, 0) };
        inline BgpPeer& setAdvertisedRouteCount(int32_t advertisedRouteCount) { DARABONBA_PTR_SET_VALUE(advertisedRouteCount_, advertisedRouteCount) };


        // authKey Field Functions 
        bool hasAuthKey() const { return this->authKey_ != nullptr;};
        void deleteAuthKey() { this->authKey_ = nullptr;};
        inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
        inline BgpPeer& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


        // bfdMultiHop Field Functions 
        bool hasBfdMultiHop() const { return this->bfdMultiHop_ != nullptr;};
        void deleteBfdMultiHop() { this->bfdMultiHop_ = nullptr;};
        inline int32_t getBfdMultiHop() const { DARABONBA_PTR_GET_DEFAULT(bfdMultiHop_, 0) };
        inline BgpPeer& setBfdMultiHop(int32_t bfdMultiHop) { DARABONBA_PTR_SET_VALUE(bfdMultiHop_, bfdMultiHop) };


        // bgpGroupId Field Functions 
        bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
        void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
        inline string getBgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
        inline BgpPeer& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


        // bgpPeerId Field Functions 
        bool hasBgpPeerId() const { return this->bgpPeerId_ != nullptr;};
        void deleteBgpPeerId() { this->bgpPeerId_ = nullptr;};
        inline string getBgpPeerId() const { DARABONBA_PTR_GET_DEFAULT(bgpPeerId_, "") };
        inline BgpPeer& setBgpPeerId(string bgpPeerId) { DARABONBA_PTR_SET_VALUE(bgpPeerId_, bgpPeerId) };


        // bgpStatus Field Functions 
        bool hasBgpStatus() const { return this->bgpStatus_ != nullptr;};
        void deleteBgpStatus() { this->bgpStatus_ = nullptr;};
        inline string getBgpStatus() const { DARABONBA_PTR_GET_DEFAULT(bgpStatus_, "") };
        inline BgpPeer& setBgpStatus(string bgpStatus) { DARABONBA_PTR_SET_VALUE(bgpStatus_, bgpStatus) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BgpPeer& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // enableBfd Field Functions 
        bool hasEnableBfd() const { return this->enableBfd_ != nullptr;};
        void deleteEnableBfd() { this->enableBfd_ = nullptr;};
        inline bool getEnableBfd() const { DARABONBA_PTR_GET_DEFAULT(enableBfd_, false) };
        inline BgpPeer& setEnableBfd(bool enableBfd) { DARABONBA_PTR_SET_VALUE(enableBfd_, enableBfd) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline BgpPeer& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // hold Field Functions 
        bool hasHold() const { return this->hold_ != nullptr;};
        void deleteHold() { this->hold_ = nullptr;};
        inline string getHold() const { DARABONBA_PTR_GET_DEFAULT(hold_, "") };
        inline BgpPeer& setHold(string hold) { DARABONBA_PTR_SET_VALUE(hold_, hold) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline BgpPeer& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // isFake Field Functions 
        bool hasIsFake() const { return this->isFake_ != nullptr;};
        void deleteIsFake() { this->isFake_ = nullptr;};
        inline bool getIsFake() const { DARABONBA_PTR_GET_DEFAULT(isFake_, false) };
        inline BgpPeer& setIsFake(bool isFake) { DARABONBA_PTR_SET_VALUE(isFake_, isFake) };


        // keepalive Field Functions 
        bool hasKeepalive() const { return this->keepalive_ != nullptr;};
        void deleteKeepalive() { this->keepalive_ = nullptr;};
        inline string getKeepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, "") };
        inline BgpPeer& setKeepalive(string keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


        // localAsn Field Functions 
        bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
        void deleteLocalAsn() { this->localAsn_ = nullptr;};
        inline string getLocalAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, "") };
        inline BgpPeer& setLocalAsn(string localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BgpPeer& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // peerAsn Field Functions 
        bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
        void deletePeerAsn() { this->peerAsn_ = nullptr;};
        inline string getPeerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
        inline BgpPeer& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


        // peerIpAddress Field Functions 
        bool hasPeerIpAddress() const { return this->peerIpAddress_ != nullptr;};
        void deletePeerIpAddress() { this->peerIpAddress_ = nullptr;};
        inline string getPeerIpAddress() const { DARABONBA_PTR_GET_DEFAULT(peerIpAddress_, "") };
        inline BgpPeer& setPeerIpAddress(string peerIpAddress) { DARABONBA_PTR_SET_VALUE(peerIpAddress_, peerIpAddress) };


        // receivedRouteCount Field Functions 
        bool hasReceivedRouteCount() const { return this->receivedRouteCount_ != nullptr;};
        void deleteReceivedRouteCount() { this->receivedRouteCount_ = nullptr;};
        inline int32_t getReceivedRouteCount() const { DARABONBA_PTR_GET_DEFAULT(receivedRouteCount_, 0) };
        inline BgpPeer& setReceivedRouteCount(int32_t receivedRouteCount) { DARABONBA_PTR_SET_VALUE(receivedRouteCount_, receivedRouteCount) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline BgpPeer& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // routeLimit Field Functions 
        bool hasRouteLimit() const { return this->routeLimit_ != nullptr;};
        void deleteRouteLimit() { this->routeLimit_ = nullptr;};
        inline string getRouteLimit() const { DARABONBA_PTR_GET_DEFAULT(routeLimit_, "") };
        inline BgpPeer& setRouteLimit(string routeLimit) { DARABONBA_PTR_SET_VALUE(routeLimit_, routeLimit) };


        // routerId Field Functions 
        bool hasRouterId() const { return this->routerId_ != nullptr;};
        void deleteRouterId() { this->routerId_ = nullptr;};
        inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
        inline BgpPeer& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BgpPeer& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The number of advertised routes.
        shared_ptr<int32_t> advertisedRouteCount_ {};
        // The authentication key of the BGP group.
        shared_ptr<string> authKey_ {};
        // The Bidirectional Forwarding Detection (BFD) hop count.
        shared_ptr<int32_t> bfdMultiHop_ {};
        // The ID of the BGP group.
        shared_ptr<string> bgpGroupId_ {};
        // The ID of the BGP peer.
        shared_ptr<string> bgpPeerId_ {};
        // The status of the BGP connection. Valid values:
        // 
        // *   **Idle**: The BGP connection is not used.
        // *   **Connect**: The BGP connection is used.
        // *   **Active**: The BGP connection is available.
        // *   **Established**: The BGP connection is established.
        // *   **Down**: The BGP connection is unavailable.
        shared_ptr<string> bgpStatus_ {};
        // The description of the BGP group.
        shared_ptr<string> description_ {};
        // Indicates whether BFD is enabled. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> enableBfd_ {};
        // The time when the BGP peer is modified.
        // 
        // Use the UTC time format: yyyy-MM-ddTHH:mmZ
        shared_ptr<string> gmtModified_ {};
        // The hold time.
        shared_ptr<string> hold_ {};
        // The version of the IP address.
        shared_ptr<string> ipVersion_ {};
        // Indicates whether a fake autonomous system number (ASN) is used. Valid values:
        // 
        // *   **true**
        // *   **false**
        shared_ptr<bool> isFake_ {};
        // The Keepalive interval.
        shared_ptr<string> keepalive_ {};
        // The ASN of the device on the Alibaba Cloud side.
        shared_ptr<string> localAsn_ {};
        // The name of the BGP peer.
        shared_ptr<string> name_ {};
        // The autonomous system number (ASN)of the BGP peer.
        shared_ptr<string> peerAsn_ {};
        // The IP address of the BGP peer.
        shared_ptr<string> peerIpAddress_ {};
        // The number of received routes.
        shared_ptr<int32_t> receivedRouteCount_ {};
        // The ID of the region to which the BGP group belongs.
        shared_ptr<string> regionId_ {};
        // The maximum number of routes.
        shared_ptr<string> routeLimit_ {};
        // The Router ID.
        shared_ptr<string> routerId_ {};
        // The status of the BGP peer. Valid values:
        // 
        // *   **Pending**
        // *   **Available**
        // *   **Modifying**
        // *   **Deleting**
        // *   **Deleted**
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->bgpPeer_ == nullptr; };
      // bgpPeer Field Functions 
      bool hasBgpPeer() const { return this->bgpPeer_ != nullptr;};
      void deleteBgpPeer() { this->bgpPeer_ = nullptr;};
      inline const vector<BgpPeers::BgpPeer> & getBgpPeer() const { DARABONBA_PTR_GET_CONST(bgpPeer_, vector<BgpPeers::BgpPeer>) };
      inline vector<BgpPeers::BgpPeer> getBgpPeer() { DARABONBA_PTR_GET(bgpPeer_, vector<BgpPeers::BgpPeer>) };
      inline BgpPeers& setBgpPeer(const vector<BgpPeers::BgpPeer> & bgpPeer) { DARABONBA_PTR_SET_VALUE(bgpPeer_, bgpPeer) };
      inline BgpPeers& setBgpPeer(vector<BgpPeers::BgpPeer> && bgpPeer) { DARABONBA_PTR_SET_RVALUE(bgpPeer_, bgpPeer) };


    protected:
      shared_ptr<vector<BgpPeers::BgpPeer>> bgpPeer_ {};
    };

    virtual bool empty() const override { return this->bgpPeers_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bgpPeers Field Functions 
    bool hasBgpPeers() const { return this->bgpPeers_ != nullptr;};
    void deleteBgpPeers() { this->bgpPeers_ = nullptr;};
    inline const DescribeBgpPeersResponseBody::BgpPeers & getBgpPeers() const { DARABONBA_PTR_GET_CONST(bgpPeers_, DescribeBgpPeersResponseBody::BgpPeers) };
    inline DescribeBgpPeersResponseBody::BgpPeers getBgpPeers() { DARABONBA_PTR_GET(bgpPeers_, DescribeBgpPeersResponseBody::BgpPeers) };
    inline DescribeBgpPeersResponseBody& setBgpPeers(const DescribeBgpPeersResponseBody::BgpPeers & bgpPeers) { DARABONBA_PTR_SET_VALUE(bgpPeers_, bgpPeers) };
    inline DescribeBgpPeersResponseBody& setBgpPeers(DescribeBgpPeersResponseBody::BgpPeers && bgpPeers) { DARABONBA_PTR_SET_RVALUE(bgpPeers_, bgpPeers) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBgpPeersResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBgpPeersResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBgpPeersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBgpPeersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The information about the BGP peer.
    shared_ptr<DescribeBgpPeersResponseBody::BgpPeers> bgpPeers_ {};
    // The page number.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
