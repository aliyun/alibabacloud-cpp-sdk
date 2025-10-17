// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTEZONALRESPONSEBODYDBNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERATTRIBUTEZONALRESPONSEBODYDBNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDbClusterAttributeZonalResponseBodyDBNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDbClusterAttributeZonalResponseBodyDBNodes& obj) { 
      DARABONBA_PTR_TO_JSON(AddedCpuCores, addedCpuCores_);
      DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeDescription, DBNodeDescription_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_TO_JSON(FailoverPriority, failoverPriority_);
      DARABONBA_PTR_TO_JSON(HotReplicaMode, hotReplicaMode_);
      DARABONBA_PTR_TO_JSON(ImciSwitch, imciSwitch_);
      DARABONBA_PTR_TO_JSON(MasterId, masterId_);
      DARABONBA_PTR_TO_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_TO_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(MirrorInsName, mirrorInsName_);
      DARABONBA_PTR_TO_JSON(MultiMasterLocalStandby, multiMasterLocalStandby_);
      DARABONBA_PTR_TO_JSON(MultiMasterPrimaryNode, multiMasterPrimaryNode_);
      DARABONBA_PTR_TO_JSON(Orca, orca_);
      DARABONBA_PTR_TO_JSON(RemoteMemorySize, remoteMemorySize_);
      DARABONBA_PTR_TO_JSON(SccMode, sccMode_);
      DARABONBA_PTR_TO_JSON(ServerWeight, serverWeight_);
      DARABONBA_PTR_TO_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_TO_JSON(SubCluster, subCluster_);
      DARABONBA_PTR_TO_JSON(SubGroupDescription, subGroupDescription_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDbClusterAttributeZonalResponseBodyDBNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(AddedCpuCores, addedCpuCores_);
      DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeDescription, DBNodeDescription_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(DBNodeRole, DBNodeRole_);
      DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_FROM_JSON(FailoverPriority, failoverPriority_);
      DARABONBA_PTR_FROM_JSON(HotReplicaMode, hotReplicaMode_);
      DARABONBA_PTR_FROM_JSON(ImciSwitch, imciSwitch_);
      DARABONBA_PTR_FROM_JSON(MasterId, masterId_);
      DARABONBA_PTR_FROM_JSON(MaxConnections, maxConnections_);
      DARABONBA_PTR_FROM_JSON(MaxIOPS, maxIOPS_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(MirrorInsName, mirrorInsName_);
      DARABONBA_PTR_FROM_JSON(MultiMasterLocalStandby, multiMasterLocalStandby_);
      DARABONBA_PTR_FROM_JSON(MultiMasterPrimaryNode, multiMasterPrimaryNode_);
      DARABONBA_PTR_FROM_JSON(Orca, orca_);
      DARABONBA_PTR_FROM_JSON(RemoteMemorySize, remoteMemorySize_);
      DARABONBA_PTR_FROM_JSON(SccMode, sccMode_);
      DARABONBA_PTR_FROM_JSON(ServerWeight, serverWeight_);
      DARABONBA_PTR_FROM_JSON(ServerlessType, serverlessType_);
      DARABONBA_PTR_FROM_JSON(SubCluster, subCluster_);
      DARABONBA_PTR_FROM_JSON(SubGroupDescription, subGroupDescription_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeDbClusterAttributeZonalResponseBodyDBNodes() = default ;
    DescribeDbClusterAttributeZonalResponseBodyDBNodes(const DescribeDbClusterAttributeZonalResponseBodyDBNodes &) = default ;
    DescribeDbClusterAttributeZonalResponseBodyDBNodes(DescribeDbClusterAttributeZonalResponseBodyDBNodes &&) = default ;
    DescribeDbClusterAttributeZonalResponseBodyDBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDbClusterAttributeZonalResponseBodyDBNodes() = default ;
    DescribeDbClusterAttributeZonalResponseBodyDBNodes& operator=(const DescribeDbClusterAttributeZonalResponseBodyDBNodes &) = default ;
    DescribeDbClusterAttributeZonalResponseBodyDBNodes& operator=(DescribeDbClusterAttributeZonalResponseBodyDBNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addedCpuCores_ == nullptr
        && return this->cpuCores_ == nullptr && return this->creationTime_ == nullptr && return this->DBNodeClass_ == nullptr && return this->DBNodeDescription_ == nullptr && return this->DBNodeId_ == nullptr
        && return this->DBNodeRole_ == nullptr && return this->DBNodeStatus_ == nullptr && return this->failoverPriority_ == nullptr && return this->hotReplicaMode_ == nullptr && return this->imciSwitch_ == nullptr
        && return this->masterId_ == nullptr && return this->maxConnections_ == nullptr && return this->maxIOPS_ == nullptr && return this->memorySize_ == nullptr && return this->mirrorInsName_ == nullptr
        && return this->multiMasterLocalStandby_ == nullptr && return this->multiMasterPrimaryNode_ == nullptr && return this->orca_ == nullptr && return this->remoteMemorySize_ == nullptr && return this->sccMode_ == nullptr
        && return this->serverWeight_ == nullptr && return this->serverlessType_ == nullptr && return this->subCluster_ == nullptr && return this->subGroupDescription_ == nullptr && return this->zoneId_ == nullptr; };
    // addedCpuCores Field Functions 
    bool hasAddedCpuCores() const { return this->addedCpuCores_ != nullptr;};
    void deleteAddedCpuCores() { this->addedCpuCores_ = nullptr;};
    inline string addedCpuCores() const { DARABONBA_PTR_GET_DEFAULT(addedCpuCores_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setAddedCpuCores(string addedCpuCores) { DARABONBA_PTR_SET_VALUE(addedCpuCores_, addedCpuCores) };


    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline string cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeDescription Field Functions 
    bool hasDBNodeDescription() const { return this->DBNodeDescription_ != nullptr;};
    void deleteDBNodeDescription() { this->DBNodeDescription_ = nullptr;};
    inline string DBNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(DBNodeDescription_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setDBNodeDescription(string DBNodeDescription) { DARABONBA_PTR_SET_VALUE(DBNodeDescription_, DBNodeDescription) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // DBNodeRole Field Functions 
    bool hasDBNodeRole() const { return this->DBNodeRole_ != nullptr;};
    void deleteDBNodeRole() { this->DBNodeRole_ = nullptr;};
    inline string DBNodeRole() const { DARABONBA_PTR_GET_DEFAULT(DBNodeRole_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setDBNodeRole(string DBNodeRole) { DARABONBA_PTR_SET_VALUE(DBNodeRole_, DBNodeRole) };


    // DBNodeStatus Field Functions 
    bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
    void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
    inline string DBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


    // failoverPriority Field Functions 
    bool hasFailoverPriority() const { return this->failoverPriority_ != nullptr;};
    void deleteFailoverPriority() { this->failoverPriority_ = nullptr;};
    inline int32_t failoverPriority() const { DARABONBA_PTR_GET_DEFAULT(failoverPriority_, 0) };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setFailoverPriority(int32_t failoverPriority) { DARABONBA_PTR_SET_VALUE(failoverPriority_, failoverPriority) };


    // hotReplicaMode Field Functions 
    bool hasHotReplicaMode() const { return this->hotReplicaMode_ != nullptr;};
    void deleteHotReplicaMode() { this->hotReplicaMode_ = nullptr;};
    inline string hotReplicaMode() const { DARABONBA_PTR_GET_DEFAULT(hotReplicaMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setHotReplicaMode(string hotReplicaMode) { DARABONBA_PTR_SET_VALUE(hotReplicaMode_, hotReplicaMode) };


    // imciSwitch Field Functions 
    bool hasImciSwitch() const { return this->imciSwitch_ != nullptr;};
    void deleteImciSwitch() { this->imciSwitch_ = nullptr;};
    inline string imciSwitch() const { DARABONBA_PTR_GET_DEFAULT(imciSwitch_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setImciSwitch(string imciSwitch) { DARABONBA_PTR_SET_VALUE(imciSwitch_, imciSwitch) };


    // masterId Field Functions 
    bool hasMasterId() const { return this->masterId_ != nullptr;};
    void deleteMasterId() { this->masterId_ = nullptr;};
    inline string masterId() const { DARABONBA_PTR_GET_DEFAULT(masterId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setMasterId(string masterId) { DARABONBA_PTR_SET_VALUE(masterId_, masterId) };


    // maxConnections Field Functions 
    bool hasMaxConnections() const { return this->maxConnections_ != nullptr;};
    void deleteMaxConnections() { this->maxConnections_ = nullptr;};
    inline int32_t maxConnections() const { DARABONBA_PTR_GET_DEFAULT(maxConnections_, 0) };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setMaxConnections(int32_t maxConnections) { DARABONBA_PTR_SET_VALUE(maxConnections_, maxConnections) };


    // maxIOPS Field Functions 
    bool hasMaxIOPS() const { return this->maxIOPS_ != nullptr;};
    void deleteMaxIOPS() { this->maxIOPS_ = nullptr;};
    inline int32_t maxIOPS() const { DARABONBA_PTR_GET_DEFAULT(maxIOPS_, 0) };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setMaxIOPS(int32_t maxIOPS) { DARABONBA_PTR_SET_VALUE(maxIOPS_, maxIOPS) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline string memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // mirrorInsName Field Functions 
    bool hasMirrorInsName() const { return this->mirrorInsName_ != nullptr;};
    void deleteMirrorInsName() { this->mirrorInsName_ = nullptr;};
    inline string mirrorInsName() const { DARABONBA_PTR_GET_DEFAULT(mirrorInsName_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setMirrorInsName(string mirrorInsName) { DARABONBA_PTR_SET_VALUE(mirrorInsName_, mirrorInsName) };


    // multiMasterLocalStandby Field Functions 
    bool hasMultiMasterLocalStandby() const { return this->multiMasterLocalStandby_ != nullptr;};
    void deleteMultiMasterLocalStandby() { this->multiMasterLocalStandby_ = nullptr;};
    inline string multiMasterLocalStandby() const { DARABONBA_PTR_GET_DEFAULT(multiMasterLocalStandby_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setMultiMasterLocalStandby(string multiMasterLocalStandby) { DARABONBA_PTR_SET_VALUE(multiMasterLocalStandby_, multiMasterLocalStandby) };


    // multiMasterPrimaryNode Field Functions 
    bool hasMultiMasterPrimaryNode() const { return this->multiMasterPrimaryNode_ != nullptr;};
    void deleteMultiMasterPrimaryNode() { this->multiMasterPrimaryNode_ = nullptr;};
    inline string multiMasterPrimaryNode() const { DARABONBA_PTR_GET_DEFAULT(multiMasterPrimaryNode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setMultiMasterPrimaryNode(string multiMasterPrimaryNode) { DARABONBA_PTR_SET_VALUE(multiMasterPrimaryNode_, multiMasterPrimaryNode) };


    // orca Field Functions 
    bool hasOrca() const { return this->orca_ != nullptr;};
    void deleteOrca() { this->orca_ = nullptr;};
    inline string orca() const { DARABONBA_PTR_GET_DEFAULT(orca_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setOrca(string orca) { DARABONBA_PTR_SET_VALUE(orca_, orca) };


    // remoteMemorySize Field Functions 
    bool hasRemoteMemorySize() const { return this->remoteMemorySize_ != nullptr;};
    void deleteRemoteMemorySize() { this->remoteMemorySize_ = nullptr;};
    inline string remoteMemorySize() const { DARABONBA_PTR_GET_DEFAULT(remoteMemorySize_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setRemoteMemorySize(string remoteMemorySize) { DARABONBA_PTR_SET_VALUE(remoteMemorySize_, remoteMemorySize) };


    // sccMode Field Functions 
    bool hasSccMode() const { return this->sccMode_ != nullptr;};
    void deleteSccMode() { this->sccMode_ = nullptr;};
    inline string sccMode() const { DARABONBA_PTR_GET_DEFAULT(sccMode_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setSccMode(string sccMode) { DARABONBA_PTR_SET_VALUE(sccMode_, sccMode) };


    // serverWeight Field Functions 
    bool hasServerWeight() const { return this->serverWeight_ != nullptr;};
    void deleteServerWeight() { this->serverWeight_ = nullptr;};
    inline string serverWeight() const { DARABONBA_PTR_GET_DEFAULT(serverWeight_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setServerWeight(string serverWeight) { DARABONBA_PTR_SET_VALUE(serverWeight_, serverWeight) };


    // serverlessType Field Functions 
    bool hasServerlessType() const { return this->serverlessType_ != nullptr;};
    void deleteServerlessType() { this->serverlessType_ = nullptr;};
    inline string serverlessType() const { DARABONBA_PTR_GET_DEFAULT(serverlessType_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setServerlessType(string serverlessType) { DARABONBA_PTR_SET_VALUE(serverlessType_, serverlessType) };


    // subCluster Field Functions 
    bool hasSubCluster() const { return this->subCluster_ != nullptr;};
    void deleteSubCluster() { this->subCluster_ = nullptr;};
    inline string subCluster() const { DARABONBA_PTR_GET_DEFAULT(subCluster_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setSubCluster(string subCluster) { DARABONBA_PTR_SET_VALUE(subCluster_, subCluster) };


    // subGroupDescription Field Functions 
    bool hasSubGroupDescription() const { return this->subGroupDescription_ != nullptr;};
    void deleteSubGroupDescription() { this->subGroupDescription_ = nullptr;};
    inline string subGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(subGroupDescription_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setSubGroupDescription(string subGroupDescription) { DARABONBA_PTR_SET_VALUE(subGroupDescription_, subGroupDescription) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeDbClusterAttributeZonalResponseBodyDBNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> addedCpuCores_ = nullptr;
    std::shared_ptr<string> cpuCores_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    std::shared_ptr<string> DBNodeDescription_ = nullptr;
    std::shared_ptr<string> DBNodeId_ = nullptr;
    std::shared_ptr<string> DBNodeRole_ = nullptr;
    std::shared_ptr<string> DBNodeStatus_ = nullptr;
    std::shared_ptr<int32_t> failoverPriority_ = nullptr;
    std::shared_ptr<string> hotReplicaMode_ = nullptr;
    std::shared_ptr<string> imciSwitch_ = nullptr;
    std::shared_ptr<string> masterId_ = nullptr;
    std::shared_ptr<int32_t> maxConnections_ = nullptr;
    std::shared_ptr<int32_t> maxIOPS_ = nullptr;
    std::shared_ptr<string> memorySize_ = nullptr;
    std::shared_ptr<string> mirrorInsName_ = nullptr;
    // MultiMasterLocalStandby
    std::shared_ptr<string> multiMasterLocalStandby_ = nullptr;
    // MultiMasterPrimaryNode
    std::shared_ptr<string> multiMasterPrimaryNode_ = nullptr;
    std::shared_ptr<string> orca_ = nullptr;
    std::shared_ptr<string> remoteMemorySize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sccMode_ = nullptr;
    std::shared_ptr<string> serverWeight_ = nullptr;
    std::shared_ptr<string> serverlessType_ = nullptr;
    std::shared_ptr<string> subCluster_ = nullptr;
    // SubGroupDescription
    std::shared_ptr<string> subGroupDescription_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
