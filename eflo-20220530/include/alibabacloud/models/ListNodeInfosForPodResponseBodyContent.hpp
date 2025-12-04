// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODEINFOSFORPODRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_LISTNODEINFOSFORPODRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class ListNodeInfosForPodResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodeInfosForPodResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(HdeniQuota, hdeniQuota_);
      DARABONBA_PTR_TO_JSON(LeniQuota, leniQuota_);
      DARABONBA_PTR_TO_JSON(LeniSipQuota, leniSipQuota_);
      DARABONBA_PTR_TO_JSON(LniSipQuota, lniSipQuota_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(ZoneId, zoneId_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodeInfosForPodResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(HdeniQuota, hdeniQuota_);
      DARABONBA_PTR_FROM_JSON(LeniQuota, leniQuota_);
      DARABONBA_PTR_FROM_JSON(LeniSipQuota, leniSipQuota_);
      DARABONBA_PTR_FROM_JSON(LniSipQuota, lniSipQuota_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VSwitches, vSwitches_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(ZoneId, zoneId_);
    };
    ListNodeInfosForPodResponseBodyContent() = default ;
    ListNodeInfosForPodResponseBodyContent(const ListNodeInfosForPodResponseBodyContent &) = default ;
    ListNodeInfosForPodResponseBodyContent(ListNodeInfosForPodResponseBodyContent &&) = default ;
    ListNodeInfosForPodResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodeInfosForPodResponseBodyContent() = default ;
    ListNodeInfosForPodResponseBodyContent& operator=(const ListNodeInfosForPodResponseBodyContent &) = default ;
    ListNodeInfosForPodResponseBodyContent& operator=(ListNodeInfosForPodResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->hdeniQuota_ == nullptr && return this->leniQuota_ == nullptr && return this->leniSipQuota_ == nullptr && return this->lniSipQuota_ == nullptr && return this->nodeId_ == nullptr
        && return this->regionId_ == nullptr && return this->vSwitches_ == nullptr && return this->vpcId_ == nullptr && return this->zoneId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListNodeInfosForPodResponseBodyContent& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // hdeniQuota Field Functions 
    bool hasHdeniQuota() const { return this->hdeniQuota_ != nullptr;};
    void deleteHdeniQuota() { this->hdeniQuota_ = nullptr;};
    inline int32_t hdeniQuota() const { DARABONBA_PTR_GET_DEFAULT(hdeniQuota_, 0) };
    inline ListNodeInfosForPodResponseBodyContent& setHdeniQuota(int32_t hdeniQuota) { DARABONBA_PTR_SET_VALUE(hdeniQuota_, hdeniQuota) };


    // leniQuota Field Functions 
    bool hasLeniQuota() const { return this->leniQuota_ != nullptr;};
    void deleteLeniQuota() { this->leniQuota_ = nullptr;};
    inline int32_t leniQuota() const { DARABONBA_PTR_GET_DEFAULT(leniQuota_, 0) };
    inline ListNodeInfosForPodResponseBodyContent& setLeniQuota(int32_t leniQuota) { DARABONBA_PTR_SET_VALUE(leniQuota_, leniQuota) };


    // leniSipQuota Field Functions 
    bool hasLeniSipQuota() const { return this->leniSipQuota_ != nullptr;};
    void deleteLeniSipQuota() { this->leniSipQuota_ = nullptr;};
    inline int32_t leniSipQuota() const { DARABONBA_PTR_GET_DEFAULT(leniSipQuota_, 0) };
    inline ListNodeInfosForPodResponseBodyContent& setLeniSipQuota(int32_t leniSipQuota) { DARABONBA_PTR_SET_VALUE(leniSipQuota_, leniSipQuota) };


    // lniSipQuota Field Functions 
    bool hasLniSipQuota() const { return this->lniSipQuota_ != nullptr;};
    void deleteLniSipQuota() { this->lniSipQuota_ = nullptr;};
    inline int32_t lniSipQuota() const { DARABONBA_PTR_GET_DEFAULT(lniSipQuota_, 0) };
    inline ListNodeInfosForPodResponseBodyContent& setLniSipQuota(int32_t lniSipQuota) { DARABONBA_PTR_SET_VALUE(lniSipQuota_, lniSipQuota) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListNodeInfosForPodResponseBodyContent& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListNodeInfosForPodResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vSwitches Field Functions 
    bool hasVSwitches() const { return this->vSwitches_ != nullptr;};
    void deleteVSwitches() { this->vSwitches_ = nullptr;};
    inline const vector<string> & vSwitches() const { DARABONBA_PTR_GET_CONST(vSwitches_, vector<string>) };
    inline vector<string> vSwitches() { DARABONBA_PTR_GET(vSwitches_, vector<string>) };
    inline ListNodeInfosForPodResponseBodyContent& setVSwitches(const vector<string> & vSwitches) { DARABONBA_PTR_SET_VALUE(vSwitches_, vSwitches) };
    inline ListNodeInfosForPodResponseBodyContent& setVSwitches(vector<string> && vSwitches) { DARABONBA_PTR_SET_RVALUE(vSwitches_, vSwitches) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListNodeInfosForPodResponseBodyContent& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // zoneId Field Functions 
    bool hasZoneId() const { return this->zoneId_ != nullptr;};
    void deleteZoneId() { this->zoneId_ = nullptr;};
    inline string zoneId() const { DARABONBA_PTR_GET_DEFAULT(zoneId_, "") };
    inline ListNodeInfosForPodResponseBodyContent& setZoneId(string zoneId) { DARABONBA_PTR_SET_VALUE(zoneId_, zoneId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Lingjun Gaomi network interface controller quota
    std::shared_ptr<int32_t> hdeniQuota_ = nullptr;
    // Lingjun Elastic Network Interface quota, excluding system type
    std::shared_ptr<int32_t> leniQuota_ = nullptr;
    // Lingjun Elastic Network Interface Secondary Private IP Quota
    std::shared_ptr<int32_t> leniSipQuota_ = nullptr;
    // Lingjun network interface controller Secondary Private IP Quota
    std::shared_ptr<int32_t> lniSipQuota_ = nullptr;
    // The ID of the node for this operation.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // List of VSwitches to which IP addresses can be applied for this node
    std::shared_ptr<vector<string>> vSwitches_ = nullptr;
    // The ID of the Virtual Private Cloud to which the current node belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The zone ID.
    std::shared_ptr<string> zoneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
