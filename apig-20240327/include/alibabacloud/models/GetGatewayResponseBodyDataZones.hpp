// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAZONES_HPP_
#define ALIBABACLOUD_MODELS_GETGATEWAYRESPONSEBODYDATAZONES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetGatewayResponseBodyDataZonesVSwitch.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetGatewayResponseBodyDataZones : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetGatewayResponseBodyDataZones& obj) { 
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vSwitch, vSwitch_);
      DARABONBA_PTR_TO_JSON(zoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, GetGatewayResponseBodyDataZones& obj) { 
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vSwitch, vSwitch_);
      DARABONBA_PTR_FROM_JSON(zoneId, zoneId_);
    };
    GetGatewayResponseBodyDataZones() = default ;
    GetGatewayResponseBodyDataZones(const GetGatewayResponseBodyDataZones &) = default ;
    GetGatewayResponseBodyDataZones(GetGatewayResponseBodyDataZones &&) = default ;
    GetGatewayResponseBodyDataZones(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetGatewayResponseBodyDataZones() = default ;
    GetGatewayResponseBodyDataZones& operator=(const GetGatewayResponseBodyDataZones &) = default ;
    GetGatewayResponseBodyDataZones& operator=(GetGatewayResponseBodyDataZones &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->name_ == nullptr
        && return this->vSwitch_ == nullptr && return this->zoneId_ == nullptr; };
    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetGatewayResponseBodyDataZones& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vSwitch Field Functions 
    bool hasVSwitch() const { return this->vSwitch_ != nullptr;};
    void deleteVSwitch() { this->vSwitch_ = nullptr;};
    inline const Models::GetGatewayResponseBodyDataZonesVSwitch & vSwitch() const { DARABONBA_PTR_GET_CONST(vSwitch_, Models::GetGatewayResponseBodyDataZonesVSwitch) };
    inline Models::GetGatewayResponseBodyDataZonesVSwitch vSwitch() { DARABONBA_PTR_GET(vSwitch_, Models::GetGatewayResponseBodyDataZonesVSwitch) };
    inline GetGatewayResponseBodyDataZones& setVSwitch(const Models::GetGatewayResponseBodyDataZonesVSwitch & vSwitch) { DARABONBA_PTR_SET_VALUE(vSwitch_, vSwitch) };
    inline GetGatewayResponseBodyDataZones& setVSwitch(Models::GetGatewayResponseBodyDataZonesVSwitch && vSwitch) { DARABONBA_PTR_SET_RVALUE(vSwitch_, vSwitch) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline GetGatewayResponseBodyDataZones& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The zone name.
    std::shared_ptr<string> name_ = nullptr;
    // The vSwitch information.
    std::shared_ptr<Models::GetGatewayResponseBodyDataZonesVSwitch> vSwitch_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
