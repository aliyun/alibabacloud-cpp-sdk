// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMACHINENETWORKINFORESPONSEBODY_HPP_
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
  class ListMachineNetworkInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMachineNetworkInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MachineNetworkInfo, machineNetworkInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListMachineNetworkInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MachineNetworkInfo, machineNetworkInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListMachineNetworkInfoResponseBody() = default ;
    ListMachineNetworkInfoResponseBody(const ListMachineNetworkInfoResponseBody &) = default ;
    ListMachineNetworkInfoResponseBody(ListMachineNetworkInfoResponseBody &&) = default ;
    ListMachineNetworkInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMachineNetworkInfoResponseBody() = default ;
    ListMachineNetworkInfoResponseBody& operator=(const ListMachineNetworkInfoResponseBody &) = default ;
    ListMachineNetworkInfoResponseBody& operator=(ListMachineNetworkInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class MachineNetworkInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const MachineNetworkInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterNet, clusterNet_);
        DARABONBA_PTR_TO_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_TO_JSON(IsDpuMode, isDpuMode_);
        DARABONBA_PTR_TO_JSON(MachineType, machineType_);
        DARABONBA_PTR_TO_JSON(NetArch, netArch_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      };
      friend void from_json(const Darabonba::Json& j, MachineNetworkInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterNet, clusterNet_);
        DARABONBA_PTR_FROM_JSON(EnableJumboFrame, enableJumboFrame_);
        DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
        DARABONBA_PTR_FROM_JSON(IsDpuMode, isDpuMode_);
        DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
        DARABONBA_PTR_FROM_JSON(NetArch, netArch_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      };
      MachineNetworkInfo() = default ;
      MachineNetworkInfo(const MachineNetworkInfo &) = default ;
      MachineNetworkInfo(MachineNetworkInfo &&) = default ;
      MachineNetworkInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~MachineNetworkInfo() = default ;
      MachineNetworkInfo& operator=(const MachineNetworkInfo &) = default ;
      MachineNetworkInfo& operator=(MachineNetworkInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterNet_ == nullptr
        && this->enableJumboFrame_ == nullptr && this->hpnZone_ == nullptr && this->isDpuMode_ == nullptr && this->machineType_ == nullptr && this->netArch_ == nullptr
        && this->regionId_ == nullptr; };
      // clusterNet Field Functions 
      bool hasClusterNet() const { return this->clusterNet_ != nullptr;};
      void deleteClusterNet() { this->clusterNet_ = nullptr;};
      inline string getClusterNet() const { DARABONBA_PTR_GET_DEFAULT(clusterNet_, "") };
      inline MachineNetworkInfo& setClusterNet(string clusterNet) { DARABONBA_PTR_SET_VALUE(clusterNet_, clusterNet) };


      // enableJumboFrame Field Functions 
      bool hasEnableJumboFrame() const { return this->enableJumboFrame_ != nullptr;};
      void deleteEnableJumboFrame() { this->enableJumboFrame_ = nullptr;};
      inline bool getEnableJumboFrame() const { DARABONBA_PTR_GET_DEFAULT(enableJumboFrame_, false) };
      inline MachineNetworkInfo& setEnableJumboFrame(bool enableJumboFrame) { DARABONBA_PTR_SET_VALUE(enableJumboFrame_, enableJumboFrame) };


      // hpnZone Field Functions 
      bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
      void deleteHpnZone() { this->hpnZone_ = nullptr;};
      inline string getHpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
      inline MachineNetworkInfo& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


      // isDpuMode Field Functions 
      bool hasIsDpuMode() const { return this->isDpuMode_ != nullptr;};
      void deleteIsDpuMode() { this->isDpuMode_ = nullptr;};
      inline bool getIsDpuMode() const { DARABONBA_PTR_GET_DEFAULT(isDpuMode_, false) };
      inline MachineNetworkInfo& setIsDpuMode(bool isDpuMode) { DARABONBA_PTR_SET_VALUE(isDpuMode_, isDpuMode) };


      // machineType Field Functions 
      bool hasMachineType() const { return this->machineType_ != nullptr;};
      void deleteMachineType() { this->machineType_ = nullptr;};
      inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
      inline MachineNetworkInfo& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


      // netArch Field Functions 
      bool hasNetArch() const { return this->netArch_ != nullptr;};
      void deleteNetArch() { this->netArch_ = nullptr;};
      inline string getNetArch() const { DARABONBA_PTR_GET_DEFAULT(netArch_, "") };
      inline MachineNetworkInfo& setNetArch(string netArch) { DARABONBA_PTR_SET_VALUE(netArch_, netArch) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline MachineNetworkInfo& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    protected:
      // Network of cluster
      shared_ptr<string> clusterNet_ {};
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
      shared_ptr<bool> enableJumboFrame_ {};
      // HPN zone
      shared_ptr<string> hpnZone_ {};
      // Specifies whether dpu machine.
      shared_ptr<bool> isDpuMode_ {};
      // The type of machine.
      shared_ptr<string> machineType_ {};
      // Network architecture
      shared_ptr<string> netArch_ {};
      // The ID of the region in which the application is located.
      shared_ptr<string> regionId_ {};
    };

    virtual bool empty() const override { return this->machineNetworkInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // machineNetworkInfo Field Functions 
    bool hasMachineNetworkInfo() const { return this->machineNetworkInfo_ != nullptr;};
    void deleteMachineNetworkInfo() { this->machineNetworkInfo_ = nullptr;};
    inline const vector<ListMachineNetworkInfoResponseBody::MachineNetworkInfo> & getMachineNetworkInfo() const { DARABONBA_PTR_GET_CONST(machineNetworkInfo_, vector<ListMachineNetworkInfoResponseBody::MachineNetworkInfo>) };
    inline vector<ListMachineNetworkInfoResponseBody::MachineNetworkInfo> getMachineNetworkInfo() { DARABONBA_PTR_GET(machineNetworkInfo_, vector<ListMachineNetworkInfoResponseBody::MachineNetworkInfo>) };
    inline ListMachineNetworkInfoResponseBody& setMachineNetworkInfo(const vector<ListMachineNetworkInfoResponseBody::MachineNetworkInfo> & machineNetworkInfo) { DARABONBA_PTR_SET_VALUE(machineNetworkInfo_, machineNetworkInfo) };
    inline ListMachineNetworkInfoResponseBody& setMachineNetworkInfo(vector<ListMachineNetworkInfoResponseBody::MachineNetworkInfo> && machineNetworkInfo) { DARABONBA_PTR_SET_RVALUE(machineNetworkInfo_, machineNetworkInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMachineNetworkInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // machine network infomation
    shared_ptr<vector<ListMachineNetworkInfoResponseBody::MachineNetworkInfo>> machineNetworkInfo_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
