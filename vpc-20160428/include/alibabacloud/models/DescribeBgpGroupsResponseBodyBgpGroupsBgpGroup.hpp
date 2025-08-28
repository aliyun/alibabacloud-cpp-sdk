// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBGPGROUPSRESPONSEBODYBGPGROUPSBGPGROUP_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBGPGROUPSRESPONSEBODYBGPGROUPSBGPGROUP_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& obj) { 
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
    DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup() = default ;
    DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup(const DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup &) = default ;
    DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup(DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup &&) = default ;
    DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup() = default ;
    DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& operator=(const DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup &) = default ;
    DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& operator=(DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->authKey_ != nullptr
        && this->bgpGroupId_ != nullptr && this->description_ != nullptr && this->hold_ != nullptr && this->ipVersion_ != nullptr && this->isFake_ != nullptr
        && this->keepalive_ != nullptr && this->localAsn_ != nullptr && this->name_ != nullptr && this->peerAsn_ != nullptr && this->regionId_ != nullptr
        && this->routeLimit_ != nullptr && this->routerId_ != nullptr && this->status_ != nullptr; };
    // authKey Field Functions 
    bool hasAuthKey() const { return this->authKey_ != nullptr;};
    void deleteAuthKey() { this->authKey_ = nullptr;};
    inline string authKey() const { DARABONBA_PTR_GET_DEFAULT(authKey_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setAuthKey(string authKey) { DARABONBA_PTR_SET_VALUE(authKey_, authKey) };


    // bgpGroupId Field Functions 
    bool hasBgpGroupId() const { return this->bgpGroupId_ != nullptr;};
    void deleteBgpGroupId() { this->bgpGroupId_ = nullptr;};
    inline string bgpGroupId() const { DARABONBA_PTR_GET_DEFAULT(bgpGroupId_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setBgpGroupId(string bgpGroupId) { DARABONBA_PTR_SET_VALUE(bgpGroupId_, bgpGroupId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // hold Field Functions 
    bool hasHold() const { return this->hold_ != nullptr;};
    void deleteHold() { this->hold_ = nullptr;};
    inline string hold() const { DARABONBA_PTR_GET_DEFAULT(hold_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setHold(string hold) { DARABONBA_PTR_SET_VALUE(hold_, hold) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // isFake Field Functions 
    bool hasIsFake() const { return this->isFake_ != nullptr;};
    void deleteIsFake() { this->isFake_ = nullptr;};
    inline string isFake() const { DARABONBA_PTR_GET_DEFAULT(isFake_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setIsFake(string isFake) { DARABONBA_PTR_SET_VALUE(isFake_, isFake) };


    // keepalive Field Functions 
    bool hasKeepalive() const { return this->keepalive_ != nullptr;};
    void deleteKeepalive() { this->keepalive_ = nullptr;};
    inline string keepalive() const { DARABONBA_PTR_GET_DEFAULT(keepalive_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setKeepalive(string keepalive) { DARABONBA_PTR_SET_VALUE(keepalive_, keepalive) };


    // localAsn Field Functions 
    bool hasLocalAsn() const { return this->localAsn_ != nullptr;};
    void deleteLocalAsn() { this->localAsn_ = nullptr;};
    inline string localAsn() const { DARABONBA_PTR_GET_DEFAULT(localAsn_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setLocalAsn(string localAsn) { DARABONBA_PTR_SET_VALUE(localAsn_, localAsn) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // peerAsn Field Functions 
    bool hasPeerAsn() const { return this->peerAsn_ != nullptr;};
    void deletePeerAsn() { this->peerAsn_ = nullptr;};
    inline string peerAsn() const { DARABONBA_PTR_GET_DEFAULT(peerAsn_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setPeerAsn(string peerAsn) { DARABONBA_PTR_SET_VALUE(peerAsn_, peerAsn) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // routeLimit Field Functions 
    bool hasRouteLimit() const { return this->routeLimit_ != nullptr;};
    void deleteRouteLimit() { this->routeLimit_ = nullptr;};
    inline string routeLimit() const { DARABONBA_PTR_GET_DEFAULT(routeLimit_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setRouteLimit(string routeLimit) { DARABONBA_PTR_SET_VALUE(routeLimit_, routeLimit) };


    // routerId Field Functions 
    bool hasRouterId() const { return this->routerId_ != nullptr;};
    void deleteRouterId() { this->routerId_ = nullptr;};
    inline string routerId() const { DARABONBA_PTR_GET_DEFAULT(routerId_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setRouterId(string routerId) { DARABONBA_PTR_SET_VALUE(routerId_, routerId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeBgpGroupsResponseBodyBgpGroupsBgpGroup& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The key used by the BGP group.
    std::shared_ptr<string> authKey_ = nullptr;
    // The ID of the BGP group.
    std::shared_ptr<string> bgpGroupId_ = nullptr;
    // The description of the BGP group.
    std::shared_ptr<string> description_ = nullptr;
    // The hold time to receive BGP messages. Unit: seconds.
    // 
    // >  If no message is received within the hold time, the BGP peer is considered disconnected.
    std::shared_ptr<string> hold_ = nullptr;
    // The IP version of the BGP group. Valid values:
    // 
    // *   **ipv4**: IPv4
    // *   **ipv6**: IPv6. IPv6 is supported only if the VBR of the BGP group has IPv6 enabled.
    std::shared_ptr<string> ipVersion_ = nullptr;
    // Indicates whether the ASN is fake. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<string> isFake_ = nullptr;
    // The keepalive time. Unit: seconds.
    std::shared_ptr<string> keepalive_ = nullptr;
    // The ASN of the device on the Alibaba Cloud side.
    std::shared_ptr<string> localAsn_ = nullptr;
    // The name of the BGP group.
    std::shared_ptr<string> name_ = nullptr;
    // The autonomous system number (ASN) of the on-premises device in the data center.
    std::shared_ptr<string> peerAsn_ = nullptr;
    // The ID of the region to which the BGP group belongs.
    std::shared_ptr<string> regionId_ = nullptr;
    // The maximum number of route entries for BGP dynamic route learning.
    std::shared_ptr<string> routeLimit_ = nullptr;
    // The ID of the VBR.
    std::shared_ptr<string> routerId_ = nullptr;
    // The status of the BGP group.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
