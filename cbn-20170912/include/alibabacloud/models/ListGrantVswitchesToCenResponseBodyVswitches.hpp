// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGRANTVSWITCHESTOCENRESPONSEBODYVSWITCHES_HPP_
#define ALIBABACLOUD_MODELS_LISTGRANTVSWITCHESTOCENRESPONSEBODYVSWITCHES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cbn20170912
{
namespace Models
{
  class ListGrantVSwitchesToCenResponseBodyVSwitches : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGrantVSwitchesToCenResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListGrantVSwitchesToCenResponseBodyVSwitches& obj) { 
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(VSwitchName, vSwitchName_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListGrantVSwitchesToCenResponseBodyVSwitches() = default ;
    ListGrantVSwitchesToCenResponseBodyVSwitches(const ListGrantVSwitchesToCenResponseBodyVSwitches &) = default ;
    ListGrantVSwitchesToCenResponseBodyVSwitches(ListGrantVSwitchesToCenResponseBodyVSwitches &&) = default ;
    ListGrantVSwitchesToCenResponseBodyVSwitches(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGrantVSwitchesToCenResponseBodyVSwitches() = default ;
    ListGrantVSwitchesToCenResponseBodyVSwitches& operator=(const ListGrantVSwitchesToCenResponseBodyVSwitches &) = default ;
    ListGrantVSwitchesToCenResponseBodyVSwitches& operator=(ListGrantVSwitchesToCenResponseBodyVSwitches &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->vSwitchId_ != nullptr
        && this->vSwitchName_ != nullptr && this->vpcId_ != nullptr && this->zoneId_ != nullptr; };
    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline ListGrantVSwitchesToCenResponseBodyVSwitches& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // vSwitchName Field Functions 
    bool hasVSwitchName() const { return this->vSwitchName_ != nullptr;};
    void deleteVSwitchName() { this->vSwitchName_ = nullptr;};
    inline string vSwitchName() const { DARABONBA_PTR_GET_DEFAULT(vSwitchName_, "") };
    inline ListGrantVSwitchesToCenResponseBodyVSwitches& setVSwitchName(string vSwitchName) { DARABONBA_PTR_SET_VALUE(vSwitchName_, vSwitchName) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListGrantVSwitchesToCenResponseBodyVSwitches& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListGrantVSwitchesToCenResponseBodyVSwitches& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The ID of the vSwitch.
    std::shared_ptr<string> vSwitchId_ = nullptr;
    // The name of the vSwitch.
    std::shared_ptr<string> vSwitchName_ = nullptr;
    // The ID of the VPC to which the vSwitch belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The ID of the zone to which the vSwitch belongs.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cbn20170912
#endif
