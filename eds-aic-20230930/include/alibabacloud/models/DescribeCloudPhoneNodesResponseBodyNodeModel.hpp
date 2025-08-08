// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODYNODEMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDPHONENODESRESPONSEBODYNODEMODEL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCloudPhoneNodesResponseBodyNodeModelBizTags.hpp>
#include <alibabacloud/models/DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos.hpp>
#include <alibabacloud/models/DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsAic20230930
{
namespace Models
{
  class DescribeCloudPhoneNodesResponseBodyNodeModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudPhoneNodesResponseBodyNodeModel& obj) { 
      DARABONBA_PTR_TO_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageStatus, bandwidthPackageStatus_);
      DARABONBA_PTR_TO_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_TO_JSON(BizTags, bizTags_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(NetworkId, networkId_);
      DARABONBA_PTR_TO_JSON(NetworkInfos, networkInfos_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_TO_JSON(PhoneDataInfo, phoneDataInfo_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_TO_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_TO_JSON(ServerType, serverType_);
      DARABONBA_PTR_TO_JSON(ShareDataVolume, shareDataVolume_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudPhoneNodesResponseBodyNodeModel& obj) { 
      DARABONBA_PTR_FROM_JSON(BandwidthPackageId, bandwidthPackageId_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageStatus, bandwidthPackageStatus_);
      DARABONBA_PTR_FROM_JSON(BandwidthPackageType, bandwidthPackageType_);
      DARABONBA_PTR_FROM_JSON(BizTags, bizTags_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtExpired, gmtExpired_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(NetworkId, networkId_);
      DARABONBA_PTR_FROM_JSON(NetworkInfos, networkInfos_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(PhoneCount, phoneCount_);
      DARABONBA_PTR_FROM_JSON(PhoneDataInfo, phoneDataInfo_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResolutionHeight, resolutionHeight_);
      DARABONBA_PTR_FROM_JSON(ResolutionWidth, resolutionWidth_);
      DARABONBA_PTR_FROM_JSON(ServerType, serverType_);
      DARABONBA_PTR_FROM_JSON(ShareDataVolume, shareDataVolume_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
    };
    DescribeCloudPhoneNodesResponseBodyNodeModel() = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModel(const DescribeCloudPhoneNodesResponseBodyNodeModel &) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModel(DescribeCloudPhoneNodesResponseBodyNodeModel &&) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudPhoneNodesResponseBodyNodeModel() = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModel& operator=(const DescribeCloudPhoneNodesResponseBodyNodeModel &) = default ;
    DescribeCloudPhoneNodesResponseBodyNodeModel& operator=(DescribeCloudPhoneNodesResponseBodyNodeModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bandwidthPackageId_ != nullptr
        && this->bandwidthPackageStatus_ != nullptr && this->bandwidthPackageType_ != nullptr && this->bizTags_ != nullptr && this->chargeType_ != nullptr && this->cpu_ != nullptr
        && this->gmtCreate_ != nullptr && this->gmtExpired_ != nullptr && this->gmtModified_ != nullptr && this->instanceType_ != nullptr && this->memory_ != nullptr
        && this->networkId_ != nullptr && this->networkInfos_ != nullptr && this->networkType_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr
        && this->phoneCount_ != nullptr && this->phoneDataInfo_ != nullptr && this->regionId_ != nullptr && this->resolutionHeight_ != nullptr && this->resolutionWidth_ != nullptr
        && this->serverType_ != nullptr && this->shareDataVolume_ != nullptr && this->status_ != nullptr && this->vSwitchId_ != nullptr; };
    // bandwidthPackageId Field Functions 
    bool hasBandwidthPackageId() const { return this->bandwidthPackageId_ != nullptr;};
    void deleteBandwidthPackageId() { this->bandwidthPackageId_ = nullptr;};
    inline string bandwidthPackageId() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setBandwidthPackageId(string bandwidthPackageId) { DARABONBA_PTR_SET_VALUE(bandwidthPackageId_, bandwidthPackageId) };


    // bandwidthPackageStatus Field Functions 
    bool hasBandwidthPackageStatus() const { return this->bandwidthPackageStatus_ != nullptr;};
    void deleteBandwidthPackageStatus() { this->bandwidthPackageStatus_ = nullptr;};
    inline string bandwidthPackageStatus() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageStatus_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setBandwidthPackageStatus(string bandwidthPackageStatus) { DARABONBA_PTR_SET_VALUE(bandwidthPackageStatus_, bandwidthPackageStatus) };


    // bandwidthPackageType Field Functions 
    bool hasBandwidthPackageType() const { return this->bandwidthPackageType_ != nullptr;};
    void deleteBandwidthPackageType() { this->bandwidthPackageType_ = nullptr;};
    inline string bandwidthPackageType() const { DARABONBA_PTR_GET_DEFAULT(bandwidthPackageType_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setBandwidthPackageType(string bandwidthPackageType) { DARABONBA_PTR_SET_VALUE(bandwidthPackageType_, bandwidthPackageType) };


    // bizTags Field Functions 
    bool hasBizTags() const { return this->bizTags_ != nullptr;};
    void deleteBizTags() { this->bizTags_ = nullptr;};
    inline const vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelBizTags> & bizTags() const { DARABONBA_PTR_GET_CONST(bizTags_, vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelBizTags>) };
    inline vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelBizTags> bizTags() { DARABONBA_PTR_GET(bizTags_, vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelBizTags>) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setBizTags(const vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelBizTags> & bizTags) { DARABONBA_PTR_SET_VALUE(bizTags_, bizTags) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setBizTags(vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelBizTags> && bizTags) { DARABONBA_PTR_SET_RVALUE(bizTags_, bizTags) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline string cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setCpu(string cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtExpired Field Functions 
    bool hasGmtExpired() const { return this->gmtExpired_ != nullptr;};
    void deleteGmtExpired() { this->gmtExpired_ = nullptr;};
    inline string gmtExpired() const { DARABONBA_PTR_GET_DEFAULT(gmtExpired_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setGmtExpired(string gmtExpired) { DARABONBA_PTR_SET_VALUE(gmtExpired_, gmtExpired) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int32_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setMemory(int32_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // networkId Field Functions 
    bool hasNetworkId() const { return this->networkId_ != nullptr;};
    void deleteNetworkId() { this->networkId_ = nullptr;};
    inline string networkId() const { DARABONBA_PTR_GET_DEFAULT(networkId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setNetworkId(string networkId) { DARABONBA_PTR_SET_VALUE(networkId_, networkId) };


    // networkInfos Field Functions 
    bool hasNetworkInfos() const { return this->networkInfos_ != nullptr;};
    void deleteNetworkInfos() { this->networkInfos_ = nullptr;};
    inline const vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos> & networkInfos() const { DARABONBA_PTR_GET_CONST(networkInfos_, vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos>) };
    inline vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos> networkInfos() { DARABONBA_PTR_GET(networkInfos_, vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos>) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setNetworkInfos(const vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos> & networkInfos) { DARABONBA_PTR_SET_VALUE(networkInfos_, networkInfos) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setNetworkInfos(vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos> && networkInfos) { DARABONBA_PTR_SET_RVALUE(networkInfos_, networkInfos) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // phoneCount Field Functions 
    bool hasPhoneCount() const { return this->phoneCount_ != nullptr;};
    void deletePhoneCount() { this->phoneCount_ = nullptr;};
    inline int32_t phoneCount() const { DARABONBA_PTR_GET_DEFAULT(phoneCount_, 0) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setPhoneCount(int32_t phoneCount) { DARABONBA_PTR_SET_VALUE(phoneCount_, phoneCount) };


    // phoneDataInfo Field Functions 
    bool hasPhoneDataInfo() const { return this->phoneDataInfo_ != nullptr;};
    void deletePhoneDataInfo() { this->phoneDataInfo_ = nullptr;};
    inline const Models::DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo & phoneDataInfo() const { DARABONBA_PTR_GET_CONST(phoneDataInfo_, Models::DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo) };
    inline Models::DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo phoneDataInfo() { DARABONBA_PTR_GET(phoneDataInfo_, Models::DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setPhoneDataInfo(const Models::DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo & phoneDataInfo) { DARABONBA_PTR_SET_VALUE(phoneDataInfo_, phoneDataInfo) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setPhoneDataInfo(Models::DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo && phoneDataInfo) { DARABONBA_PTR_SET_RVALUE(phoneDataInfo_, phoneDataInfo) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resolutionHeight Field Functions 
    bool hasResolutionHeight() const { return this->resolutionHeight_ != nullptr;};
    void deleteResolutionHeight() { this->resolutionHeight_ = nullptr;};
    inline int32_t resolutionHeight() const { DARABONBA_PTR_GET_DEFAULT(resolutionHeight_, 0) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setResolutionHeight(int32_t resolutionHeight) { DARABONBA_PTR_SET_VALUE(resolutionHeight_, resolutionHeight) };


    // resolutionWidth Field Functions 
    bool hasResolutionWidth() const { return this->resolutionWidth_ != nullptr;};
    void deleteResolutionWidth() { this->resolutionWidth_ = nullptr;};
    inline int32_t resolutionWidth() const { DARABONBA_PTR_GET_DEFAULT(resolutionWidth_, 0) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setResolutionWidth(int32_t resolutionWidth) { DARABONBA_PTR_SET_VALUE(resolutionWidth_, resolutionWidth) };


    // serverType Field Functions 
    bool hasServerType() const { return this->serverType_ != nullptr;};
    void deleteServerType() { this->serverType_ = nullptr;};
    inline string serverType() const { DARABONBA_PTR_GET_DEFAULT(serverType_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setServerType(string serverType) { DARABONBA_PTR_SET_VALUE(serverType_, serverType) };


    // shareDataVolume Field Functions 
    bool hasShareDataVolume() const { return this->shareDataVolume_ != nullptr;};
    void deleteShareDataVolume() { this->shareDataVolume_ = nullptr;};
    inline int32_t shareDataVolume() const { DARABONBA_PTR_GET_DEFAULT(shareDataVolume_, 0) };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setShareDataVolume(int32_t shareDataVolume) { DARABONBA_PTR_SET_VALUE(shareDataVolume_, shareDataVolume) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeCloudPhoneNodesResponseBodyNodeModel& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


  protected:
    std::shared_ptr<string> bandwidthPackageId_ = nullptr;
    std::shared_ptr<string> bandwidthPackageStatus_ = nullptr;
    std::shared_ptr<string> bandwidthPackageType_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelBizTags>> bizTags_ = nullptr;
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The number of CPU cores.
    std::shared_ptr<string> cpu_ = nullptr;
    // The creation time.
    std::shared_ptr<string> gmtCreate_ = nullptr;
    // The expiration time of the subscription matrix.
    std::shared_ptr<string> gmtExpired_ = nullptr;
    // The last modification time.
    std::shared_ptr<string> gmtModified_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    // The memory size. Unit: GB.
    std::shared_ptr<int32_t> memory_ = nullptr;
    // The network ID.
    std::shared_ptr<string> networkId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeCloudPhoneNodesResponseBodyNodeModelNetworkInfos>> networkInfos_ = nullptr;
    std::shared_ptr<string> networkType_ = nullptr;
    // The matrix ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The matrix name.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The number of cloud phone instances per matrix.
    std::shared_ptr<int32_t> phoneCount_ = nullptr;
    std::shared_ptr<Models::DescribeCloudPhoneNodesResponseBodyNodeModelPhoneDataInfo> phoneDataInfo_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The height of the resolution. Unit: pixel.
    std::shared_ptr<int32_t> resolutionHeight_ = nullptr;
    // The width of the resolution. Unit: pixel.
    std::shared_ptr<int32_t> resolutionWidth_ = nullptr;
    // The matrix specification.
    std::shared_ptr<string> serverType_ = nullptr;
    // The size of the shared storage. Unit: GiB.
    std::shared_ptr<int32_t> shareDataVolume_ = nullptr;
    // The matrix status.
    std::shared_ptr<string> status_ = nullptr;
    // The vSwitch ID.
    std::shared_ptr<string> vSwitchId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsAic20230930
#endif
