// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUNASSIGNEDMACHINESRESPONSEBODYUNASSIGNEDMACHINES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDUNASSIGNEDMACHINESRESPONSEBODYUNASSIGNEDMACHINES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& obj) { 
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CustomName, customName_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Mid, mid_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& obj) { 
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CustomName, customName_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Mid, mid_);
    };
    DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines() = default ;
    DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines(const DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines &) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines(DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines &&) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines() = default ;
    DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& operator=(const DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines &) = default ;
    DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& operator=(DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cpu_ != nullptr
        && this->customName_ != nullptr && this->hostName_ != nullptr && this->ip_ != nullptr && this->mac_ != nullptr && this->memory_ != nullptr
        && this->mid_ != nullptr; };
    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int64_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0L) };
    inline DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& setCpu(int64_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // customName Field Functions 
    bool hasCustomName() const { return this->customName_ != nullptr;};
    void deleteCustomName() { this->customName_ = nullptr;};
    inline string customName() const { DARABONBA_PTR_GET_DEFAULT(customName_, "") };
    inline DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& setCustomName(string customName) { DARABONBA_PTR_SET_VALUE(customName_, customName) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // mid Field Functions 
    bool hasMid() const { return this->mid_ != nullptr;};
    void deleteMid() { this->mid_ = nullptr;};
    inline string mid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
    inline DescribeHybridCloudUnassignedMachinesResponseBodyUnassignedMachines& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


  protected:
    // The number of CPU cores.
    std::shared_ptr<int64_t> cpu_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> customName_ = nullptr;
    // The host name.
    std::shared_ptr<string> hostName_ = nullptr;
    // The IP address of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // The media access control (MAC) address of the device.
    std::shared_ptr<string> mac_ = nullptr;
    // The memory size. Unit: KB. A conversion factor of 1,000 is used.
    std::shared_ptr<int64_t> memory_ = nullptr;
    // The ID of the node.
    std::shared_ptr<string> mid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
