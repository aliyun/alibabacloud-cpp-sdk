// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTAVAILABLEZONESRESPONSEBODYZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTNETWORKACCESSENDPOINTAVAILABLEZONESRESPONSEBODYZONES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListNetworkAccessEndpointAvailableZonesResponseBodyZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNetworkAccessEndpointAvailableZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_TO_JSON(LocalName, localName_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNetworkAccessEndpointAvailableZonesResponseBodyZones& obj) { 
      DARABONBA_PTR_FROM_JSON(LocalName, localName_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListNetworkAccessEndpointAvailableZonesResponseBodyZones() = default ;
    ListNetworkAccessEndpointAvailableZonesResponseBodyZones(const ListNetworkAccessEndpointAvailableZonesResponseBodyZones &) = default ;
    ListNetworkAccessEndpointAvailableZonesResponseBodyZones(ListNetworkAccessEndpointAvailableZonesResponseBodyZones &&) = default ;
    ListNetworkAccessEndpointAvailableZonesResponseBodyZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNetworkAccessEndpointAvailableZonesResponseBodyZones() = default ;
    ListNetworkAccessEndpointAvailableZonesResponseBodyZones& operator=(const ListNetworkAccessEndpointAvailableZonesResponseBodyZones &) = default ;
    ListNetworkAccessEndpointAvailableZonesResponseBodyZones& operator=(ListNetworkAccessEndpointAvailableZonesResponseBodyZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->localName_ == nullptr
        && return this->zoneId_ == nullptr; };
    // localName Field Functions 
    bool hasLocalName() const { return this->localName_ != nullptr;};
    void deleteLocalName() { this->localName_ = nullptr;};
    inline string localName() const { DARABONBA_PTR_GET_DEFAULT(localName_, "") };
    inline ListNetworkAccessEndpointAvailableZonesResponseBodyZones& setLocalName(string localName) { DARABONBA_PTR_SET_VALUE(localName_, localName) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListNetworkAccessEndpointAvailableZonesResponseBodyZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // 可用区名称。
    std::shared_ptr<string> localName_ = nullptr;
    // 可用区ID。
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
