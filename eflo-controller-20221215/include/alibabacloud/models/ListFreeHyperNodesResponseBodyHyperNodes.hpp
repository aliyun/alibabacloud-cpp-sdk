// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFREEHYPERNODESRESPONSEBODYHYPERNODES_HPP_
#define ALIBABACLOUD_MODELS_LISTFREEHYPERNODESRESPONSEBODYHYPERNODES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListFreeHyperNodesResponseBodyHyperNodesTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListFreeHyperNodesResponseBodyHyperNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFreeHyperNodesResponseBodyHyperNodes& obj) { 
      DARABONBA_PTR_TO_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_TO_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListFreeHyperNodesResponseBodyHyperNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CommodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(HpnZone, hpnZone_);
      DARABONBA_PTR_FROM_JSON(HyperNodeId, hyperNodeId_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListFreeHyperNodesResponseBodyHyperNodes() = default ;
    ListFreeHyperNodesResponseBodyHyperNodes(const ListFreeHyperNodesResponseBodyHyperNodes &) = default ;
    ListFreeHyperNodesResponseBodyHyperNodes(ListFreeHyperNodesResponseBodyHyperNodes &&) = default ;
    ListFreeHyperNodesResponseBodyHyperNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFreeHyperNodesResponseBodyHyperNodes() = default ;
    ListFreeHyperNodesResponseBodyHyperNodes& operator=(const ListFreeHyperNodesResponseBodyHyperNodes &) = default ;
    ListFreeHyperNodesResponseBodyHyperNodes& operator=(ListFreeHyperNodesResponseBodyHyperNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commodityCode_ == nullptr
        && return this->createTime_ == nullptr && return this->expireTime_ == nullptr && return this->hostname_ == nullptr && return this->hpnZone_ == nullptr && return this->hyperNodeId_ == nullptr
        && return this->machineType_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->tags_ == nullptr && return this->zoneId_ == nullptr; };
    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline string expireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setExpireTime(string expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // hpnZone Field Functions 
    bool hasHpnZone() const { return this->hpnZone_ != nullptr;};
    void deleteHpnZone() { this->hpnZone_ = nullptr;};
    inline string hpnZone() const { DARABONBA_PTR_GET_DEFAULT(hpnZone_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setHpnZone(string hpnZone) { DARABONBA_PTR_SET_VALUE(hpnZone_, hpnZone) };


    // hyperNodeId Field Functions 
    bool hasHyperNodeId() const { return this->hyperNodeId_ != nullptr;};
    void deleteHyperNodeId() { this->hyperNodeId_ = nullptr;};
    inline string hyperNodeId() const { DARABONBA_PTR_GET_DEFAULT(hyperNodeId_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setHyperNodeId(string hyperNodeId) { DARABONBA_PTR_SET_VALUE(hyperNodeId_, hyperNodeId) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListFreeHyperNodesResponseBodyHyperNodesTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListFreeHyperNodesResponseBodyHyperNodesTags>) };
    inline vector<Models::ListFreeHyperNodesResponseBodyHyperNodesTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListFreeHyperNodesResponseBodyHyperNodesTags>) };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setTags(const vector<Models::ListFreeHyperNodesResponseBodyHyperNodesTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setTags(vector<Models::ListFreeHyperNodesResponseBodyHyperNodesTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListFreeHyperNodesResponseBodyHyperNodes& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    std::shared_ptr<string> commodityCode_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> expireTime_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> hpnZone_ = nullptr;
    std::shared_ptr<string> hyperNodeId_ = nullptr;
    std::shared_ptr<string> machineType_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::ListFreeHyperNodesResponseBodyHyperNodesTags>> tags_ = nullptr;
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
