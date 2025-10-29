// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSZONES_HPP_
#define ALIBABACLOUD_MODELS_LISTGATEWAYSRESPONSEBODYDATAITEMSZONES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListGatewaysResponseBodyDataItemsZonesVSwitch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class ListGatewaysResponseBodyDataItemsZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGatewaysResponseBodyDataItemsZones& obj) { 
      DARABONBA_PTR_TO_JSON(vSwitch, vSwitch_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGatewaysResponseBodyDataItemsZones& obj) { 
      DARABONBA_PTR_FROM_JSON(vSwitch, vSwitch_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    ListGatewaysResponseBodyDataItemsZones() = default ;
    ListGatewaysResponseBodyDataItemsZones(const ListGatewaysResponseBodyDataItemsZones &) = default ;
    ListGatewaysResponseBodyDataItemsZones(ListGatewaysResponseBodyDataItemsZones &&) = default ;
    ListGatewaysResponseBodyDataItemsZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGatewaysResponseBodyDataItemsZones() = default ;
    ListGatewaysResponseBodyDataItemsZones& operator=(const ListGatewaysResponseBodyDataItemsZones &) = default ;
    ListGatewaysResponseBodyDataItemsZones& operator=(ListGatewaysResponseBodyDataItemsZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->vSwitch_ == nullptr
        && return this->zoneId_ == nullptr; };
    // vSwitch Field Functions 
    bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
    void deleteVSwitch() { this->vSwitch_ = nullptr;};
    inline const Models::ListGatewaysResponseBodyDataItemsZonesVSwitch & vSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, Models::ListGatewaysResponseBodyDataItemsZonesVSwitch) };
    inline Models::ListGatewaysResponseBodyDataItemsZonesVSwitch vSwitch() { DARABONBA_PTR_GET(vSwitch_, Models::ListGatewaysResponseBodyDataItemsZonesVSwitch) };
    inline ListGatewaysResponseBodyDataItemsZones& setVSwitch(const Models::ListGatewaysResponseBodyDataItemsZonesVSwitch & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
    inline ListGatewaysResponseBodyDataItemsZones& setVSwitch(Models::ListGatewaysResponseBodyDataItemsZonesVSwitch && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListGatewaysResponseBodyDataItemsZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The vSwitch information.
    std::shared_ptr<Models::ListGatewaysResponseBodyDataItemsZonesVSwitch> vSwitch_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
