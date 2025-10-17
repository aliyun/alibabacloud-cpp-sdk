// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFREENODESRESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTFREENODESRESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFreeNodesResponseBodyNodesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListFreeNodesResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFreeNodesResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFreeNodesResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(OperatingState, operatingState_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListFreeNodesResponseBodyNodes() = default ;
    ListFreeNodesResponseBodyNodes(const ListFreeNodesResponseBodyNodes &) = default ;
    ListFreeNodesResponseBodyNodes(ListFreeNodesResponseBodyNodes &&) = default ;
    ListFreeNodesResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFreeNodesResponseBodyNodes() = default ;
    ListFreeNodesResponseBodyNodes& operator=(const ListFreeNodesResponseBodyNodes &) = default ;
    ListFreeNodesResponseBodyNodes& operator=(ListFreeNodesResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->createTime_ == nullptr && return this->expiredTime_ == nullptr && return this->hpnZone_ == nullptr && return this->hyperNodeId_ == nullptr && return this->machineType_ == nullptr
        && return this->nodeId_ == nullptr && return this->operatingState_ == nullptr && return this->resourceGroupId_ == nullptr && return this->sn_ == nullptr && return this->tags_ == nullptr
        && return this->zoneId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListFreeNodesResponseBodyNodes& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListFreeNodesResponseBodyNodes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ListFreeNodesResponseBodyNodes& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListFreeNodesResponseBodyNodes& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // hyperNodeId Field Functions 
    bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
    void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
    inline string hyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
    inline ListFreeNodesResponseBodyNodes& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline ListFreeNodesResponseBodyNodes& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListFreeNodesResponseBodyNodes& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // operatingState Field Functions 
    bool hasOperatingState() const { return this->operatingState_ != nullptr;};
    void deleteOperatingState() { this->operatingState_ = nullptr;};
    inline string operatingState() const { DARABONBA_PTR_GET_DEFAULT(operatingState_, "") };
    inline ListFreeNodesResponseBodyNodes& setOperatingState(string operatingState) { DARABONBA_PTR_SET_VALUE(operatingState_, operatingState) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListFreeNodesResponseBodyNodes& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ListFreeNodesResponseBodyNodes& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListFreeNodesResponseBodyNodesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListFreeNodesResponseBodyNodesTags>) };
    inline vector<Models::ListFreeNodesResponseBodyNodesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListFreeNodesResponseBodyNodesTags>) };
    inline ListFreeNodesResponseBodyNodes& setTags(const vector<Models::ListFreeNodesResponseBodyNodesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListFreeNodesResponseBodyNodes& setTags(vector<Models::ListFreeNodesResponseBodyNodesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListFreeNodesResponseBodyNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The commodity code.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the node expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The cluster number.
    std::shared_ptr<string> hpnZone_ = nullptr;
    std::shared_ptr<string> hyperNodeId_ = nullptr;
    // The instance type.
    std::shared_ptr<string> machineType_ = nullptr;
    // The node ID.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The node status.
    std::shared_ptr<string> operatingState_ = nullptr;
    // The resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The serial number of the node.
    std::shared_ptr<string> sn_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::ListFreeNodesResponseBodyNodesTags>> tags_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
