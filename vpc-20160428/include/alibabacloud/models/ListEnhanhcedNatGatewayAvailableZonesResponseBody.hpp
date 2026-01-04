// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENHANHCEDNATGATEWAYAVAILABLEZONESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTENHANHCEDNATGATEWAYAVAILABLEZONESRESPONSEBODY_HPP_
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
  class ListEnhanhcedNatGatewayAvailableZonesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnhanhcedNatGatewayAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Zones, zones_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnhanhcedNatGatewayAvailableZonesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Zones, zones_);
    };
    ListEnhanhcedNatGatewayAvailableZonesResponseBody() = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody(const ListEnhanhcedNatGatewayAvailableZonesResponseBody &) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody(ListEnhanhcedNatGatewayAvailableZonesResponseBody &&) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnhanhcedNatGatewayAvailableZonesResponseBody() = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody& operator=(const ListEnhanhcedNatGatewayAvailableZonesResponseBody &) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBody& operator=(ListEnhanhcedNatGatewayAvailableZonesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Zones : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Zones& obj) { 
        DARABONBA_PTR_TO_JSON(LocalName, localName_);
        DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
      };
      friend void from_json(const Darabonba::Json& j, Zones& obj) { 
        DARABONBA_PTR_FROM_JSON(LocalName, localName_);
        DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
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
      virtual bool empty() const override { return this->localName_ == nullptr
        && this->zoneId_ == nullptr; };
      // localName Field Functions 
      bool hasLocalName() const { return this->localName_ != nullptr;};
      void deleteLocalName() { this->localName_ = nullptr;};
      inline string getLocalName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
      inline Zones& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


      // zoneId Field Functions 
      bool hasZoneId() const { return this->zoneId_ != nullptr;};
      void deleteZoneId() { this->zoneId_ = nullptr;};
      inline string getZoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
      inline Zones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


    protected:
      // The name of the zone.
      shared_ptr<string> localName_ {};
      // The ID of the zone where the instance is deployed.
      shared_ptr<string> zoneId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->zones_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEnhanhcedNatGatewayAvailableZonesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // zones Field Functions 
    bool hasZones() const { return this->zones_ != nullptr;};
    void deleteZones() { this->zones_ = nullptr;};
    inline const vector<ListEnhanhcedNatGatewayAvailableZonesResponseBody::Zones> & getZones() const { DARABONBA_PTR_GET_CONST(zones_, vector<ListEnhanhcedNatGatewayAvailableZonesResponseBody::Zones>) };
    inline vector<ListEnhanhcedNatGatewayAvailableZonesResponseBody::Zones> getZones() { DARABONBA_PTR_GET(zones_, vector<ListEnhanhcedNatGatewayAvailableZonesResponseBody::Zones>) };
    inline ListEnhanhcedNatGatewayAvailableZonesResponseBody& setZones(const vector<ListEnhanhcedNatGatewayAvailableZonesResponseBody::Zones> & zones) { DARABONBA_PTR_SET_VALUE(zones_, zones) };
    inline ListEnhanhcedNatGatewayAvailableZonesResponseBody& setZones(vector<ListEnhanhcedNatGatewayAvailableZonesResponseBody::Zones> && zones) { DARABONBA_PTR_SET_RVALUE(zones_, zones) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of zones.
    shared_ptr<vector<ListEnhanhcedNatGatewayAvailableZonesResponseBody::Zones>> zones_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
