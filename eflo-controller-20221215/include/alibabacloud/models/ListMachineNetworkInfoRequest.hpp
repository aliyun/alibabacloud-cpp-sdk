// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineNetworkInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineNetworkInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MachineHpnInfo, machineHpnInfo_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineNetworkInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineHpnInfo, machineHpnInfo_);
    };
    ListMachineNetworkInfoRequest() = default ;
    ListMachineNetworkInfoRequest(const ListMachineNetworkInfoRequest &) = default ;
    ListMachineNetworkInfoRequest(ListMachineNetworkInfoRequest &&) = default ;
    ListMachineNetworkInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineNetworkInfoRequest() = default ;
    ListMachineNetworkInfoRequest& operator=(const ListMachineNetworkInfoRequest &) = default ;
    ListMachineNetworkInfoRequest& operator=(ListMachineNetworkInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MachineHpnInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MachineHpnInfo& obj) { 
        DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_TO_JSON(MachineType, machineType_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, MachineHpnInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      MachineHpnInfo() = default ;
      MachineHpnInfo(const MachineHpnInfo &) = default ;
      MachineHpnInfo(MachineHpnInfo &&) = default ;
      MachineHpnInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MachineHpnInfo() = default ;
      MachineHpnInfo& operator=(const MachineHpnInfo &) = default ;
      MachineHpnInfo& operator=(MachineHpnInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->hpnZone_ == nullptr
        && this->machineType_ == nullptr && this->regionId_ == nullptr; };
      // hpnZone Field Functions 
      bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
      void deleteHpnZone() { this->hpnZone_ = nullptr;};
      inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
      inline MachineHpnInfo& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


      // machineType Field Functions 
      bool hasMachineType() const { return this->machineType_ != nullptr;};
      void deleteMachineType() { this->machineType_ = nullptr;};
      inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
      inline MachineHpnInfo& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline MachineHpnInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // hpn zone infomation
      shared_ptr<string> hpnZone_ {};
      // The type of machine.
      shared_ptr<string> machineType_ {};
      // The ID of the region in which the application is located.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->machineHpnInfo_ == nullptr; };
    // machineHpnInfo Field Functions 
    bool hasMachineHpnInfo() const { return this->machineHpnInfo_ != nullptr;};
    void deleteMachineHpnInfo() { this->machineHpnInfo_ = nullptr;};
    inline const vector<ListMachineNetworkInfoRequest::MachineHpnInfo> & getMachineHpnInfo() const { DARABONBA_PTR_GET_CONST(machineHpnInfo_, vector<ListMachineNetworkInfoRequest::MachineHpnInfo>) };
    inline vector<ListMachineNetworkInfoRequest::MachineHpnInfo> getMachineHpnInfo() { DARABONBA_PTR_GET(machineHpnInfo_, vector<ListMachineNetworkInfoRequest::MachineHpnInfo>) };
    inline ListMachineNetworkInfoRequest& setMachineHpnInfo(const vector<ListMachineNetworkInfoRequest::MachineHpnInfo> & machineHpnInfo) { DARABONBA_PTR_SET_VALUE(machineHpnInfo_, machineHpnInfo) };
    inline ListMachineNetworkInfoRequest& setMachineHpnInfo(vector<ListMachineNetworkInfoRequest::MachineHpnInfo> && machineHpnInfo) { DARABONBA_PTR_SET_RVALUE(machineHpnInfo_, machineHpnInfo) };


  protected:
    // hpn information of machine
    shared_ptr<vector<ListMachineNetworkInfoRequest::MachineHpnInfo>> machineHpnInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
