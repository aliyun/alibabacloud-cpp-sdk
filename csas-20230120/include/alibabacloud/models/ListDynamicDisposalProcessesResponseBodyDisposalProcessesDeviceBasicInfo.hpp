// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODYDISPOSALPROCESSESDEVICEBASICINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICDISPOSALPROCESSESRESPONSEBODYDISPOSALPROCESSESDEVICEBASICINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(DevType, devType_);
      DARABONBA_PTR_TO_JSON(Disk, disk_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(DevType, devType_);
      DARABONBA_PTR_FROM_JSON(Disk, disk_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
    };
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo() = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo(const ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo &) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo(ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo &&) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo() = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& operator=(const ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo &) = default ;
    ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& operator=(ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cpu_ == nullptr
        && return this->devTag_ == nullptr && return this->devType_ == nullptr && return this->disk_ == nullptr && return this->hostname_ == nullptr && return this->mac_ == nullptr
        && return this->memory_ == nullptr && return this->osVersion_ == nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string devTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // devType Field Functions 
    bool hasDevType() const { return this->devType_ != nullptr;};
    void deleteDevType() { this->devType_ = nullptr;};
    inline string devType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


    // disk Field Functions 
    bool hasDisk() const { return this->disk_ != nullptr;};
    void deleteDisk() { this->disk_ = nullptr;};
    inline string disk() const { DARABONBA_PTR_GET_DEFAULT(disk_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& setDisk(string disk) { DARABONBA_PTR_SET_VALUE(disk_, disk) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline string memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& setMemory(string memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // osVersion Field Functions 
    bool hasOsVersion() const { return this->osVersion_ != nullptr;};
    void deleteOsVersion() { this->osVersion_ = nullptr;};
    inline string osVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
    inline ListDynamicDisposalProcessesResponseBodyDisposalProcessesDeviceBasicInfo& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


  protected:
    // CPU model.
    std::shared_ptr<string> cpu_ = nullptr;
    // Device ID.
    std::shared_ptr<string> devTag_ = nullptr;
    // Device operating system type. Values:
    // - **Windows**：Windows system.
    // - **macOS**：macOS system.
    // - **Linux**：Linux system.
    // - **Android**：Android system.
    // - **iOS**：iOS system.
    // - **Windows_Wuying**：Wuying cloud desktop system.
    std::shared_ptr<string> devType_ = nullptr;
    // Device disk model.
    std::shared_ptr<string> disk_ = nullptr;
    // Device name.
    std::shared_ptr<string> hostname_ = nullptr;
    // Device MAC address.
    std::shared_ptr<string> mac_ = nullptr;
    // Device memory capacity. Unit: GB.
    std::shared_ptr<string> memory_ = nullptr;
    // Operating system version
    std::shared_ptr<string> osVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
