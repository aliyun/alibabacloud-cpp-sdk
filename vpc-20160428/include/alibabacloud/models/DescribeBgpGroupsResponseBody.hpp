// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPGROUPSRESPONSEBODY_HPP_
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
  class DescribeBgpGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BgpGroups, bgpGroups_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBgpGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BgpGroups, bgpGroups_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeBgpGroupsResponseBody() = default ;
    DescribeBgpGroupsResponseBody(const DescribeBgpGroupsResponseBody &) = default ;
    DescribeBgpGroupsResponseBody(DescribeBgpGroupsResponseBody &&) = default ;
    DescribeBgpGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpGroupsResponseBody() = default ;
    DescribeBgpGroupsResponseBody& operator=(const DescribeBgpGroupsResponseBody &) = default ;
    DescribeBgpGroupsResponseBody& operator=(DescribeBgpGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class BgpGroups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const BgpGroups& obj) { 
        DARABONBA_PTR_TO_JSON(BgpGroup, bgpGroup_);
      };
      friend void from_json(const Darabonba::Json& j, BgpGroups& obj) { 
        DARABONBA_PTR_FROM_JSON(BgpGroup, bgpGroup_);
      };
      BgpGroups() = default ;
      BgpGroups(const BgpGroups &) = default ;
      BgpGroups(BgpGroups &&) = default ;
      BgpGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~BgpGroups() = default ;
      BgpGroups& operator=(const BgpGroups &) = default ;
      BgpGroups& operator=(BgpGroups &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class BgpGroup : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BgpGroup& obj) { 
          DARABONBA_PTR_TO_JSON(AuthKey, authKey_);
          DARABONBA_PTR_TO_JSON(BgpGroupId, bgpGroupId_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Hold, hold_);
          DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_TO_JSON(IsFake, isFake_);
          DARABONBA_PTR_TO_JSON(Keepalive, keepalive_);
          DARABONBA_PTR_TO_JSON(LocalAsn, localAsn_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(PeerAsn, peerAsn_);
          DARABONBA_PTR_TO_JSON(RegionId, regionId_);
          DARABONBA_PTR_TO_JSON(RouteLimit, routeLimit_);
          DARABONBA_PTR_TO_JSON(RouterId, routerId_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, BgpGroup& obj) { 
          DARABONBA_PTR_FROM_JSON(AuthKey, authKey_);
          DARABONBA_PTR_FROM_JSON(BgpGroupId, bgpGroupId_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Hold, hold_);
          DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
          DARABONBA_PTR_FROM_JSON(IsFake, isFake_);
          DARABONBA_PTR_FROM_JSON(Keepalive, keepalive_);
          DARABONBA_PTR_FROM_JSON(LocalAsn, localAsn_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(PeerAsn, peerAsn_);
          DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
          DARABONBA_PTR_FROM_JSON(RouteLimit, routeLimit_);
          DARABONBA_PTR_FROM_JSON(RouterId, routerId_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        BgpGroup() = default ;
        BgpGroup(const BgpGroup &) = default ;
        BgpGroup(BgpGroup &&) = default ;
        BgpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BgpGroup() = default ;
        BgpGroup& operator=(const BgpGroup &) = default ;
        BgpGroup& operator=(BgpGroup &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->authKey_ == nullptr
        && this->bgpGroupId_ == nullptr && this->description_ == nullptr && this->hold_ == nullptr && this->ipVersion_ == nullptr && this->isFake_ == nullptr
        && this->keepalive_ == nullptr && this->localAsn_ == nullptr && this->name_ == nullptr && this->peerAsn_ == nullptr && this->regionId_ == nullptr
        && this->routeLimit_ == nullptr && this->routerId_ == nullptr && this->status_ == nullptr; };
        // authKey Field Functions 
        bool hasAuthKey() const { return this->authKey_ != nullptr;};
        void deleteAuthKey() { this->authKey_ = nullptr;};
        inline string getAuthKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
        inline BgpGroup& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


        // bgpGroupId Field Functions 
        bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
        void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
        inline string getBgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
        inline BgpGroup& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline BgpGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // hold Field Functions 
        bool hasHold() const { return this->hold_ != nullptr;};
        void deleteHold() { this->hold_ = nullptr;};
        inline string getHold() const { DARABONBA_PTR_GET_DEFAULT(hold_, "") };
        inline BgpGroup& setHold(string hold) { DARABONBA_PTR_SET_VALUE(hold_, hold) };


        // ipVersion Field Functions 
        bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
        void deleteIpVersion() { this->ipVersion_ = nullptr;};
        inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
        inline BgpGroup& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


        // isFake Field Functions 
        bool hasIsFake() const { return this->isFake_ != nullptr;};
        void deleteIsFake() { this->isFake_ = nullptr;};
        inline string getIsFake() const { DARABONBA_PTR_GET_DEFAULT(isFake_, "") };
        inline BgpGroup& setIsFake(string isFake) { DARABONBA_PTR_SET_VALUE(isFake_, isFake) };


        // keepalive Field Functions 
        bool hasKeepalive() const { return this->keepalive_ != nullptr;};
        void deleteKeepalive() { this->keepalive_ = nullptr;};
        inline string getKeepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, "") };
        inline BgpGroup& setKeepalive(string keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


        // localAsn Field Functions 
        bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
        void deleteLocalAsn() { this->localAsn_ = nullptr;};
        inline string getLocalAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, "") };
        inline BgpGroup& setLocalAsn(string localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline BgpGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // peerAsn Field Functions 
        bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
        void deletePeerAsn() { this->peerAsn_ = nullptr;};
        inline string getPeerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
        inline BgpGroup& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


        // regionId Field Functions 
        bool hasRegionId() const { return this->regionId_ != nullptr;};
        void deleteRegionId() { this->regionId_ = nullptr;};
        inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
        inline BgpGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


        // routeLimit Field Functions 
        bool hasRouteLimit() const { return this->routeLimit_ != nullptr;};
        void deleteRouteLimit() { this->routeLimit_ = nullptr;};
        inline string getRouteLimit() const { DARABONBA_PTR_GET_DEFAULT(routeLimit_, "") };
        inline BgpGroup& setRouteLimit(string routeLimit) { DARABONBA_PTR_SET_VALUE(routeLimit_, routeLimit) };


        // routerId Field Functions 
        bool hasRouterId() const { return this->routerId_ != nullptr;};
        void deleteRouterId() { this->routerId_ = nullptr;};
        inline string getRouterId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
        inline BgpGroup& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline BgpGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The key used by the BGP group.
        shared_ptr<string> authKey_ {};
        // The ID of the BGP group.
        shared_ptr<string> bgpGroupId_ {};
        // The description of the BGP group.
        shared_ptr<string> description_ {};
        // The hold time to receive BGP messages. Unit: seconds.
        // 
        // >  If no message is received within the hold time, the BGP peer is considered disconnected.
        shared_ptr<string> hold_ {};
        // The IP version of the BGP group. Valid values:
        // 
        // *   **ipv4**: IPv4
        // *   **ipv6**: IPv6. IPv6 is supported only if the VBR of the BGP group has IPv6 enabled.
        shared_ptr<string> ipVersion_ {};
        // Indicates whether the ASN is fake. Valid values:
        // 
        // *   **false**
        // *   **true**
        shared_ptr<string> isFake_ {};
        // The keepalive time. Unit: seconds.
        shared_ptr<string> keepalive_ {};
        // The ASN of the device on the Alibaba Cloud side.
        shared_ptr<string> localAsn_ {};
        // The name of the BGP group.
        shared_ptr<string> name_ {};
        // The autonomous system number (ASN) of the on-premises device in the data center.
        shared_ptr<string> peerAsn_ {};
        // The ID of the region to which the BGP group belongs.
        shared_ptr<string> regionId_ {};
        // The maximum number of route entries for BGP dynamic route learning.
        shared_ptr<string> routeLimit_ {};
        // The ID of the VBR.
        shared_ptr<string> routerId_ {};
        // The status of the BGP group.
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->bgpGroup_ == nullptr; };
      // bgpGroup Field Functions 
      bool hasBgpGroup() const { return this->bgpGroup_ != nullptr;};
      void deleteBgpGroup() { this->bgpGroup_ = nullptr;};
      inline const vector<BgpGroups::BgpGroup> & getBgpGroup() const { DARABONBA_PTR_GET_CONST(bgpGroup_, vector<BgpGroups::BgpGroup>) };
      inline vector<BgpGroups::BgpGroup> getBgpGroup() { DARABONBA_PTR_GET(bgpGroup_, vector<BgpGroups::BgpGroup>) };
      inline BgpGroups& setBgpGroup(const vector<BgpGroups::BgpGroup> & bgpGroup) { DARABONBA_PTR_SET_VALUE(bgpGroup_, bgpGroup) };
      inline BgpGroups& setBgpGroup(vector<BgpGroups::BgpGroup> && bgpGroup) { DARABONBA_PTR_SET_RVALUE(bgpGroup_, bgpGroup) };


    protected:
      shared_ptr<vector<BgpGroups::BgpGroup>> bgpGroup_ {};
    };

    virtual bool empty() const override { return this->bgpGroups_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // bgpGroups Field Functions 
    bool hasBgpGroups() const { return this->bgpGroups_ != nullptr;};
    void deleteBgpGroups() { this->bgpGroups_ = nullptr;};
    inline const DescribeBgpGroupsResponseBody::BgpGroups & getBgpGroups() const { DARABONBA_PTR_GET_CONST(bgpGroups_, DescribeBgpGroupsResponseBody::BgpGroups) };
    inline DescribeBgpGroupsResponseBody::BgpGroups getBgpGroups() { DARABONBA_PTR_GET(bgpGroups_, DescribeBgpGroupsResponseBody::BgpGroups) };
    inline DescribeBgpGroupsResponseBody& setBgpGroups(const DescribeBgpGroupsResponseBody::BgpGroups & bgpGroups) { DARABONBA_PTR_SET_VALUE(bgpGroups_, bgpGroups) };
    inline DescribeBgpGroupsResponseBody& setBgpGroups(DescribeBgpGroupsResponseBody::BgpGroups && bgpGroups) { DARABONBA_PTR_SET_RVALUE(bgpGroups_, bgpGroups) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeBgpGroupsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeBgpGroupsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBgpGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeBgpGroupsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The detailed information about the BGP group.
    shared_ptr<DescribeBgpGroupsResponseBody::BgpGroups> bgpGroups_ {};
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
