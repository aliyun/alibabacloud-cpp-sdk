// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUNINSTALLAEGISMACHINESRESPONSEBODYMACHINELIST_HPP_
#define ALIBABACLOUD_MODELS_LISTUNINSTALLAEGISMACHINESRESPONSEBODYMACHINELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListUninstallAegisMachinesResponseBodyMachineList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUninstallAegisMachinesResponseBodyMachineList& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_TO_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_TO_JSON(MachineRegion, machineRegion_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUninstallAegisMachinesResponseBodyMachineList& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InternetIp, internetIp_);
      DARABONBA_PTR_FROM_JSON(IntranetIp, intranetIp_);
      DARABONBA_PTR_FROM_JSON(MachineRegion, machineRegion_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
    };
    ListUninstallAegisMachinesResponseBodyMachineList() = default ;
    ListUninstallAegisMachinesResponseBodyMachineList(const ListUninstallAegisMachinesResponseBodyMachineList &) = default ;
    ListUninstallAegisMachinesResponseBodyMachineList(ListUninstallAegisMachinesResponseBodyMachineList &&) = default ;
    ListUninstallAegisMachinesResponseBodyMachineList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUninstallAegisMachinesResponseBodyMachineList() = default ;
    ListUninstallAegisMachinesResponseBodyMachineList& operator=(const ListUninstallAegisMachinesResponseBodyMachineList &) = default ;
    ListUninstallAegisMachinesResponseBodyMachineList& operator=(ListUninstallAegisMachinesResponseBodyMachineList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->internetIp_ == nullptr && return this->intranetIp_ == nullptr && return this->machineRegion_ == nullptr && return this->os_ == nullptr
        && return this->regionId_ == nullptr && return this->uuid_ == nullptr && return this->vendor_ == nullptr && return this->vendorName_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // internetIp Field Functions 
    bool hasInternetIp() const { return this->internetIp_ != nullptr;};
    void deleteInternetIp() { this->internetIp_ = nullptr;};
    inline string internetIp() const { DARABONBA_PTR_GET_DEFAULT(internetIp_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setInternetIp(string internetIp) { DARABONBA_PTR_SET_VALUE(internetIp_, internetIp) };


    // intranetIp Field Functions 
    bool hasIntranetIp() const { return this->intranetIp_ != nullptr;};
    void deleteIntranetIp() { this->intranetIp_ = nullptr;};
    inline string intranetIp() const { DARABONBA_PTR_GET_DEFAULT(intranetIp_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setIntranetIp(string intranetIp) { DARABONBA_PTR_SET_VALUE(intranetIp_, intranetIp) };


    // machineRegion Field Functions 
    bool hasMachineRegion() const { return this->machineRegion_ != nullptr;};
    void deleteMachineRegion() { this->machineRegion_ = nullptr;};
    inline string machineRegion() const { DARABONBA_PTR_GET_DEFAULT(machineRegion_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setMachineRegion(string machineRegion) { DARABONBA_PTR_SET_VALUE(machineRegion_, machineRegion) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline int32_t vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, 0) };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setVendor(int32_t vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string vendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline ListUninstallAegisMachinesResponseBodyMachineList& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


  protected:
    // The ID of the server.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The public IP address of the server.
    std::shared_ptr<string> internetIp_ = nullptr;
    // The private IP address of the server.
    std::shared_ptr<string> intranetIp_ = nullptr;
    // The region in which the server resides.
    std::shared_ptr<string> machineRegion_ = nullptr;
    // The operating system of the server. Valid values:
    // 
    // *   **linux**
    // *   **windows**
    // *   **windows-2003**
    std::shared_ptr<string> os_ = nullptr;
    // The ID of the region in which the server resides.
    std::shared_ptr<string> regionId_ = nullptr;
    // The UUID of the server.
    std::shared_ptr<string> uuid_ = nullptr;
    // The source of the server. Valid values:
    // 
    // *   **0**: an asset provided by Alibaba Cloud
    // *   **1**: a third-party cloud server
    // *   **2**: a server in a data center
    // *   **3**, **4**, **5**, and **7**: other cloud asset
    // *   **8**: a lightweight asset
    std::shared_ptr<int32_t> vendor_ = nullptr;
    // The name of the service provider (SP) for the server.
    // 
    // Valid values:
    // 
    // *   **ALIYUN**: Alibaba Cloud
    // *   **OUT**: a third-party service provider
    // *   **IDC**: a data center
    // *   **TENCENT**: Tencent Cloud
    // *   **HUAWEICLOUD**: Huawei Cloud
    // *   **Microsoft**: Microsoft
    // *   **AWS**: Amazon Web Services (AWS)
    // *   **TRIPARTITE**: a lightweight server
    std::shared_ptr<string> vendorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
