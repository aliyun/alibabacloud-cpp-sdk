// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTZONESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListVpcEndpointZonesResponseBody() = default ;
    ListVpcEndpointZonesResponseBody(const ListVpcEndpointZonesResponseBody &) = default ;
    ListVpcEndpointZonesResponseBody(ListVpcEndpointZonesResponseBody &&) = default ;
    ListVpcEndpointZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointZonesResponseBody() = default ;
    ListVpcEndpointZonesResponseBody& operator=(const ListVpcEndpointZonesResponseBody &) = default ;
    ListVpcEndpointZonesResponseBody& operator=(ListVpcEndpointZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Zones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zones& obj) { 
        DARABONBA_PTR_TO_JSON(EniId, eniId_);
        DARABONBA_PTR_TO_JSON(EniIp, eniIp_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_TO_JSON(ZoneDomain, zoneDomain_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_TO_JSON(ZoneIpv6Address, zoneIpv6Address_);
        DARABONBA_PTR_TO_JSON(ZoneStatus, zoneStatus_);
      };
      friend void from_json(const Darabonba::Json& j, Zones& obj) { 
        DARABONBA_PTR_FROM_JSON(EniId, eniId_);
        DARABONBA_PTR_FROM_JSON(EniIp, eniIp_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
        DARABONBA_PTR_FROM_JSON(ZoneDomain, zoneDomain_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
        DARABONBA_PTR_FROM_JSON(ZoneIpv6Address, zoneIpv6Address_);
        DARABONBA_PTR_FROM_JSON(ZoneStatus, zoneStatus_);
      };
      Zones() = default ;
      Zones(const Zones &) = default ;
      Zones(Zones &&) = default ;
      Zones(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Zones() = default ;
      Zones& operator=(const Zones &) = default ;
      Zones& operator=(Zones &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->eniId_ == nullptr
        && this->eniIp_ == nullptr && this->regionId_ == nullptr && this->vSwitchId_ == nullptr && this->zoneDomain_ == nullptr && this->zoneId_ == nullptr
        && this->zoneIpv6Address_ == nullptr && this->zoneStatus_ == nullptr; };
      // eniId Field Functions 
      bool hasEniId() const { return this->eniId_ != nullptr;};
      void deleteEniId() { this->eniId_ = nullptr;};
      inline string getEniId() const { DARABONBA_PTR_GET_DEFAULT(eniId_, "") };
      inline Zones& setEniId(string eniId) { DARABONBA_PTR_SET_VALUE(eniId_, eniId) };


      // eniIp Field Functions 
      bool hasEniIp() const { return this->eniIp_ != nullptr;};
      void deleteEniIp() { this->eniIp_ = nullptr;};
      inline string getEniIp() const { DARABONBA_PTR_GET_DEFAULT(eniIp_, "") };
      inline Zones& setEniIp(string eniIp) { DARABONBA_PTR_SET_VALUE(eniIp_, eniIp) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Zones& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // vSwitchId Field Functions 
      bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
      void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
      inline string getVSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
      inline Zones& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


      // zoneDomain Field Functions 
      bool hasZoneDomain() const { return this->zoneDomain_ != nullptr;};
      void deleteZoneDomain() { this->zoneDomain_ = nullptr;};
      inline string getZoneDomain() const { DARABONBA_PTR_GET_DEFAULT(zoneDomain_, "") };
      inline Zones& setZoneDomain(string zoneDomain) { DARABONBA_PTR_SET_VALUE(zoneDomain_, zoneDomain) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


      // zoneIpv6Address Field Functions 
      bool hasZoneIpv6Address() const { return this->zoneIpv6Address_ != nullptr;};
      void deleteZoneIpv6Address() { this->zoneIpv6Address_ = nullptr;};
      inline string getZoneIpv6Address() const { DARABONBA_PTR_GET_DEFAULT(zoneIpv6Address_, "") };
      inline Zones& setZoneIpv6Address(string zoneIpv6Address) { DARABONBA_PTR_SET_VALUE(zoneIpv6Address_, zoneIpv6Address) };


      // zoneStatus Field Functions 
      bool hasZoneStatus() const { return this->zoneStatus_ != nullptr;};
      void deleteZoneStatus() { this->zoneStatus_ = nullptr;};
      inline string getZoneStatus() const { DARABONBA_PTR_GET_DEFAULT(zoneStatus_, "") };
      inline Zones& setZoneStatus(string zoneStatus) { DARABONBA_PTR_SET_VALUE(zoneStatus_, zoneStatus) };


    protected:
      // The ID of the endpoint ENI.
      shared_ptr<string> eniId_ {};
      // The IP address of the endpoint ENI.
      shared_ptr<string> eniIp_ {};
      // The region ID of the endpoint.
      shared_ptr<string> regionId_ {};
      // The ID of the vSwitch in the zone. The system automatically creates an endpoint elastic network interface (ENI) in the vSwitch.
      shared_ptr<string> vSwitchId_ {};
      // The domain name of the zone.
      // 
      // After the endpoint in the zone is connected to the endpoint service, you can access the service resources of the endpoint service by using the domain name of the zone.
      shared_ptr<string> zoneDomain_ {};
      // The zone ID.
      shared_ptr<string> zoneId_ {};
      // Indicates whether the endpoint service supports IPv6. Valid values:
      // 
      // *   **true**
      // *   **false** (default)
      shared_ptr<string> zoneIpv6Address_ {};
      // The state of the zone. Valid values:
      // 
      // *   **Creating**: The zone is being created.
      // *   **Wait**: The zone is to be connected.
      // *   **Connected**: The zone is connected.
      // *   **Deleting**: The zone is being deleted.
      // *   **Disconnecting**: The zone is being disconnected.
      // *   **Disconnected**: The zone is disconnected.
      // *   **Connecting**: The zone is being connected.
      shared_ptr<string> zoneStatus_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->zones_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointZonesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointZonesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListVpcEndpointZonesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<ListVpcEndpointZonesResponseBody::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<ListVpcEndpointZonesResponseBody::Zones>) };
    inline vector<ListVpcEndpointZonesResponseBody::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<ListVpcEndpointZonesResponseBody::Zones>) };
    inline ListVpcEndpointZonesResponseBody& setZones(const vector<ListVpcEndpointZonesResponseBody::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListVpcEndpointZonesResponseBody& setZones(vector<ListVpcEndpointZonesResponseBody::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The number of entries returned on each page.
    shared_ptr<int32_t> maxResults_ {};
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
    // The information about the zones.
    shared_ptr<vector<ListVpcEndpointZonesResponseBody::Zones>> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
