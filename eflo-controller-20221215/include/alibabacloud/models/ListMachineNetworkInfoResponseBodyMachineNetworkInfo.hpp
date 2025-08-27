// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFORESPONSEBODYMACHINENETWORKINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFORESPONSEBODYMACHINENETWORKINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListMachineNetworkInfoResponseBodyMachineNetworkInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineNetworkInfoResponseBodyMachineNetworkInfo& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNet, clusterNet_);
      DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(IsDpuMode, isDpuMode_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(NetArch, netArch_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineNetworkInfoResponseBodyMachineNetworkInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNet, clusterNet_);
      DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(IsDpuMode, isDpuMode_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(NetArch, netArch_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListMachineNetworkInfoResponseBodyMachineNetworkInfo() = default ;
    ListMachineNetworkInfoResponseBodyMachineNetworkInfo(const ListMachineNetworkInfoResponseBodyMachineNetworkInfo &) = default ;
    ListMachineNetworkInfoResponseBodyMachineNetworkInfo(ListMachineNetworkInfoResponseBodyMachineNetworkInfo &&) = default ;
    ListMachineNetworkInfoResponseBodyMachineNetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineNetworkInfoResponseBodyMachineNetworkInfo() = default ;
    ListMachineNetworkInfoResponseBodyMachineNetworkInfo& operator=(const ListMachineNetworkInfoResponseBodyMachineNetworkInfo &) = default ;
    ListMachineNetworkInfoResponseBodyMachineNetworkInfo& operator=(ListMachineNetworkInfoResponseBodyMachineNetworkInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterNet_ != nullptr
        && this->enableJumboFrame_ != nullptr && this->hpnZone_ != nullptr && this->isDpuMode_ != nullptr && this->machineType_ != nullptr && this->netArch_ != nullptr
        && this->regionId_ != nullptr; };
    // clusterNet Field Functions 
    bool hasClusterNet() const { return this->clusterNet_ != nullptr;};
    void deleteClusterNet() { this->clusterNet_ = nullptr;};
    inline string clusterNet() const { DARABONBA_PTR_GET_DEFAULT(clusterNet_, "") };
    inline ListMachineNetworkInfoResponseBodyMachineNetworkInfo& setClusterNet(string clusterNet) { DARABONBA_PTR_SET_VALUE(clusterNet_, clusterNet) };


    // enableJumboFrame Field Functions 
    bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
    void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
    inline bool enableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
    inline ListMachineNetworkInfoResponseBodyMachineNetworkInfo& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListMachineNetworkInfoResponseBodyMachineNetworkInfo& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // isDpuMode Field Functions 
    bool hasIsDpuMode() const { return this->isDpuMode_ != nullptr;};
    void deleteIsDpuMode() { this->isDpuMode_ = nullptr;};
    inline bool isDpuMode() const { DARABONBA_PTR_GET_DEFAULT(isDpuMode_, false) };
    inline ListMachineNetworkInfoResponseBodyMachineNetworkInfo& setIsDpuMode(bool isDpuMode) { DARABONBA_PTR_SET_VALUE(isDpuMode_, isDpuMode) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline ListMachineNetworkInfoResponseBodyMachineNetworkInfo& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // netArch Field Functions 
    bool hasNetArch() const { return this->netArch_ != nullptr;};
    void deleteNetArch() { this->netArch_ = nullptr;};
    inline string netArch() const { DARABONBA_PTR_GET_DEFAULT(netArch_, "") };
    inline ListMachineNetworkInfoResponseBodyMachineNetworkInfo& setNetArch(string netArch) { DARABONBA_PTR_SET_VALUE(netArch_, netArch) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListMachineNetworkInfoResponseBodyMachineNetworkInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Network of cluster
    std::shared_ptr<string> clusterNet_ = nullptr;
    // Specifies whether to enable the Jumbo Frames feature for the instance. Valid values:
    // 
    // *   true: The Jumbo Frame feature is enabled for the instance.
    // *   false: The Jumbo Frame feature is disabled for the instance.
    // 
    // Take note of the following items:
    // 
    // *   The instance must be in the Running (`Running`) or Stopped (`Stopped`) state.
    // *   The instance must reside in a VPC.
    // *   After the Jumbo Frames feature is enabled, the MTU value of the instance is set to 8500. After the Jumbo Frames feature is disabled, the MTU value of the instance is set to 1500. You can enable the Jumbo Frames feature only for specific instance types. For more information, see [Jumbo Frames](https://help.aliyun.com/document_detail/200512.html).
    std::shared_ptr<bool> enableJumboFrame_ = nullptr;
    // HPN zone
    std::shared_ptr<string> hpnZone_ = nullptr;
    // Specifies whether dpu machine.
    std::shared_ptr<bool> isDpuMode_ = nullptr;
    // The type of machine.
    std::shared_ptr<string> machineType_ = nullptr;
    // Network architecture
    std::shared_ptr<string> netArch_ = nullptr;
    // The ID of the region in which the application is located.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
