// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFOREQUESTMACHINEHPNINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFOREQUESTMACHINEHPNINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineNetworkInfoRequestMachineHpnInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineNetworkInfoRequestMachineHpnInfo& obj) { 
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineNetworkInfoRequestMachineHpnInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListMachineNetworkInfoRequestMachineHpnInfo() = default ;
    ListMachineNetworkInfoRequestMachineHpnInfo(const ListMachineNetworkInfoRequestMachineHpnInfo &) = default ;
    ListMachineNetworkInfoRequestMachineHpnInfo(ListMachineNetworkInfoRequestMachineHpnInfo &&) = default ;
    ListMachineNetworkInfoRequestMachineHpnInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineNetworkInfoRequestMachineHpnInfo() = default ;
    ListMachineNetworkInfoRequestMachineHpnInfo& operator=(const ListMachineNetworkInfoRequestMachineHpnInfo &) = default ;
    ListMachineNetworkInfoRequestMachineHpnInfo& operator=(ListMachineNetworkInfoRequestMachineHpnInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hpnZone_ == nullptr
        && return this->machineType_ == nullptr && return this->regionId_ == nullptr; };
    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListMachineNetworkInfoRequestMachineHpnInfo& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline ListMachineNetworkInfoRequestMachineHpnInfo& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListMachineNetworkInfoRequestMachineHpnInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // hpn zone infomation
    std::shared_ptr<string> hpnZone_ = nullptr;
    // The type of machine.
    std::shared_ptr<string> machineType_ = nullptr;
    // The ID of the region in which the application is located.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
