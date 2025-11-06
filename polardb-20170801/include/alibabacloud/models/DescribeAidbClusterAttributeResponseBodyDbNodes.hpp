// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODYDBNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAIDBCLUSTERATTRIBUTERESPONSEBODYDBNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAIDBClusterAttributeResponseBodyDBNodesChildVolumes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeAIDBClusterAttributeResponseBodyDBNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAIDBClusterAttributeResponseBodyDBNodes& obj) { 
      DARABONBA_PTR_TO_JSON(ChildVolumes, childVolumes_);
      DARABONBA_PTR_TO_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_TO_JSON(DBNodeDescription, DBNodeDescription_);
      DARABONBA_PTR_TO_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_TO_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_TO_JSON(GPU, GPU_);
      DARABONBA_PTR_TO_JSON(LinkIP, linkIP_);
      DARABONBA_PTR_TO_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_TO_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_TO_JSON(VNodeId, VNodeId_);
      DARABONBA_PTR_TO_JSON(VPCId, VPCId_);
      DARABONBA_PTR_TO_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAIDBClusterAttributeResponseBodyDBNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(ChildVolumes, childVolumes_);
      DARABONBA_PTR_FROM_JSON(CpuCores, cpuCores_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(DBNodeClass, DBNodeClass_);
      DARABONBA_PTR_FROM_JSON(DBNodeDescription, DBNodeDescription_);
      DARABONBA_PTR_FROM_JSON(DBNodeId, DBNodeId_);
      DARABONBA_PTR_FROM_JSON(DBNodeStatus, DBNodeStatus_);
      DARABONBA_PTR_FROM_JSON(GPU, GPU_);
      DARABONBA_PTR_FROM_JSON(LinkIP, linkIP_);
      DARABONBA_PTR_FROM_JSON(MemorySize, memorySize_);
      DARABONBA_PTR_FROM_JSON(PublicIp, publicIp_);
      DARABONBA_PTR_FROM_JSON(VNodeId, VNodeId_);
      DARABONBA_PTR_FROM_JSON(VPCId, VPCId_);
      DARABONBA_PTR_FROM_JSON(VSwitchId, vSwitchId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    DescribeAIDBClusterAttributeResponseBodyDBNodes() = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodes(const DescribeAIDBClusterAttributeResponseBodyDBNodes &) = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodes(DescribeAIDBClusterAttributeResponseBodyDBNodes &&) = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAIDBClusterAttributeResponseBodyDBNodes() = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodes& operator=(const DescribeAIDBClusterAttributeResponseBodyDBNodes &) = default ;
    DescribeAIDBClusterAttributeResponseBodyDBNodes& operator=(DescribeAIDBClusterAttributeResponseBodyDBNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childVolumes_ == nullptr
        && return this->cpuCores_ == nullptr && return this->creationTime_ == nullptr && return this->DBNodeClass_ == nullptr && return this->DBNodeDescription_ == nullptr && return this->DBNodeId_ == nullptr
        && return this->DBNodeStatus_ == nullptr && return this->GPU_ == nullptr && return this->linkIP_ == nullptr && return this->memorySize_ == nullptr && return this->publicIp_ == nullptr
        && return this->VNodeId_ == nullptr && return this->VPCId_ == nullptr && return this->vSwitchId_ == nullptr && return this->zoneId_ == nullptr; };
    // childVolumes Field Functions 
    bool hasChildVolumes() const { return this->childVolumes_ != nullptr;};
    void deleteChildVolumes() { this->childVolumes_ = nullptr;};
    inline const vector<Models::DescribeAIDBClusterAttributeResponseBodyDBNodesChildVolumes> & childVolumes() const { DARABONBA_PTR_GET_CONST(childVolumes_, vector<Models::DescribeAIDBClusterAttributeResponseBodyDBNodesChildVolumes>) };
    inline vector<Models::DescribeAIDBClusterAttributeResponseBodyDBNodesChildVolumes> childVolumes() { DARABONBA_PTR_GET(childVolumes_, vector<Models::DescribeAIDBClusterAttributeResponseBodyDBNodesChildVolumes>) };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setChildVolumes(const vector<Models::DescribeAIDBClusterAttributeResponseBodyDBNodesChildVolumes> & childVolumes) { DARABONBA_PTR_SET_VALUE(childVolumes_, childVolumes) };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setChildVolumes(vector<Models::DescribeAIDBClusterAttributeResponseBodyDBNodesChildVolumes> && childVolumes) { DARABONBA_PTR_SET_RVALUE(childVolumes_, childVolumes) };


    // cpuCores Field Functions 
    bool hasCpuCores() const { return this->cpuCores_ != nullptr;};
    void deleteCpuCores() { this->cpuCores_ = nullptr;};
    inline string cpuCores() const { DARABONBA_PTR_GET_DEFAULT(cpuCores_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setCpuCores(string cpuCores) { DARABONBA_PTR_SET_VALUE(cpuCores_, cpuCores) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // DBNodeClass Field Functions 
    bool hasDBNodeClass() const { return this->DBNodeClass_ != nullptr;};
    void deleteDBNodeClass() { this->DBNodeClass_ = nullptr;};
    inline string DBNodeClass() const { DARABONBA_PTR_GET_DEFAULT(DBNodeClass_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setDBNodeClass(string DBNodeClass) { DARABONBA_PTR_SET_VALUE(DBNodeClass_, DBNodeClass) };


    // DBNodeDescription Field Functions 
    bool hasDBNodeDescription() const { return this->DBNodeDescription_ != nullptr;};
    void deleteDBNodeDescription() { this->DBNodeDescription_ = nullptr;};
    inline string DBNodeDescription() const { DARABONBA_PTR_GET_DEFAULT(DBNodeDescription_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setDBNodeDescription(string DBNodeDescription) { DARABONBA_PTR_SET_VALUE(DBNodeDescription_, DBNodeDescription) };


    // DBNodeId Field Functions 
    bool hasDBNodeId() const { return this->DBNodeId_ != nullptr;};
    void deleteDBNodeId() { this->DBNodeId_ = nullptr;};
    inline string DBNodeId() const { DARABONBA_PTR_GET_DEFAULT(DBNodeId_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setDBNodeId(string DBNodeId) { DARABONBA_PTR_SET_VALUE(DBNodeId_, DBNodeId) };


    // DBNodeStatus Field Functions 
    bool hasDBNodeStatus() const { return this->DBNodeStatus_ != nullptr;};
    void deleteDBNodeStatus() { this->DBNodeStatus_ = nullptr;};
    inline string DBNodeStatus() const { DARABONBA_PTR_GET_DEFAULT(DBNodeStatus_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setDBNodeStatus(string DBNodeStatus) { DARABONBA_PTR_SET_VALUE(DBNodeStatus_, DBNodeStatus) };


    // GPU Field Functions 
    bool hasGPU() const { return this->GPU_ != nullptr;};
    void deleteGPU() { this->GPU_ = nullptr;};
    inline string GPU() const { DARABONBA_PTR_GET_DEFAULT(GPU_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setGPU(string GPU) { DARABONBA_PTR_SET_VALUE(GPU_, GPU) };


    // linkIP Field Functions 
    bool hasLinkIP() const { return this->linkIP_ != nullptr;};
    void deleteLinkIP() { this->linkIP_ = nullptr;};
    inline string linkIP() const { DARABONBA_PTR_GET_DEFAULT(linkIP_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setLinkIP(string linkIP) { DARABONBA_PTR_SET_VALUE(linkIP_, linkIP) };


    // memorySize Field Functions 
    bool hasMemorySize() const { return this->memorySize_ != nullptr;};
    void deleteMemorySize() { this->memorySize_ = nullptr;};
    inline string memorySize() const { DARABONBA_PTR_GET_DEFAULT(memorySize_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setMemorySize(string memorySize) { DARABONBA_PTR_SET_VALUE(memorySize_, memorySize) };


    // publicIp Field Functions 
    bool hasPublicIp() const { return this->publicIp_ != nullptr;};
    void deletePublicIp() { this->publicIp_ = nullptr;};
    inline string publicIp() const { DARABONBA_PTR_GET_DEFAULT(publicIp_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setPublicIp(string publicIp) { DARABONBA_PTR_SET_VALUE(publicIp_, publicIp) };


    // VNodeId Field Functions 
    bool hasVNodeId() const { return this->VNodeId_ != nullptr;};
    void deleteVNodeId() { this->VNodeId_ = nullptr;};
    inline string VNodeId() const { DARABONBA_PTR_GET_DEFAULT(VNodeId_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setVNodeId(string VNodeId) { DARABONBA_PTR_SET_VALUE(VNodeId_, VNodeId) };


    // VPCId Field Functions 
    bool hasVPCId() const { return this->VPCId_ != nullptr;};
    void deleteVPCId() { this->VPCId_ = nullptr;};
    inline string VPCId() const { DARABONBA_PTR_GET_DEFAULT(VPCId_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setVPCId(string VPCId) { DARABONBA_PTR_SET_VALUE(VPCId_, VPCId) };


    // vSwitchId Field Functions 
    bool hasVSwitchId() const { return this->vSwitchId_ != nullptr;};
    void deleteVSwitchId() { this->vSwitchId_ = nullptr;};
    inline string vSwitchId() const { DARABONBA_PTR_GET_DEFAULT(vSwitchId_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setVSwitchId(string vSwitchId) { DARABONBA_PTR_SET_VALUE(vSwitchId_, vSwitchId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline DescribeAIDBClusterAttributeResponseBodyDBNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<vector<Models::DescribeAIDBClusterAttributeResponseBodyDBNodesChildVolumes>> childVolumes_ = nullptr;
    std::shared_ptr<string> cpuCores_ = nullptr;
    std::shared_ptr<string> creationTime_ = nullptr;
    std::shared_ptr<string> DBNodeClass_ = nullptr;
    std::shared_ptr<string> DBNodeDescription_ = nullptr;
    std::shared_ptr<string> DBNodeId_ = nullptr;
    std::shared_ptr<string> DBNodeStatus_ = nullptr;
    std::shared_ptr<string> GPU_ = nullptr;
    std::shared_ptr<string> linkIP_ = nullptr;
    std::shared_ptr<string> memorySize_ = nullptr;
    std::shared_ptr<string> publicIp_ = nullptr;
    std::shared_ptr<string> VNodeId_ = nullptr;
    std::shared_ptr<string> VPCId_ = nullptr;
    std::shared_ptr<string> vSwitchId_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
