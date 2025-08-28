// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENHANHCEDNATGATEWAYAVAILABLEZONESRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTENHANHCEDNATGATEWAYAVAILABLEZONESRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones() = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones(const ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones &) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones(ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones &&) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones() = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones& operator=(const ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones &) = default ;
    ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones& operator=(ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->localName_ != nullptr
        && this->zoneId_ != nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListEnhanhcedNatGatewayAvailableZonesResponseBodyZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The name of the zone.
    std::shared_ptr<string> localName_ = nullptr;
    // The ID of the zone where the instance is deployed.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
