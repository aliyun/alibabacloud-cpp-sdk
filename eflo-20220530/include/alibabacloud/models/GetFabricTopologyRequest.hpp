// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFABRICTOPOLOGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETFABRICTOPOLOGYREQUEST_HPP_
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
  class GetFabricTopologyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFabricTopologyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(LniIds, lniIds_);
      DARABONBA_PTR_TO_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFabricTopologyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(LniIds, lniIds_);
      DARABONBA_PTR_FROM_JSON(NodeIds, nodeIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    GetFabricTopologyRequest() = default ;
    GetFabricTopologyRequest(const GetFabricTopologyRequest &) = default ;
    GetFabricTopologyRequest(GetFabricTopologyRequest &&) = default ;
    GetFabricTopologyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFabricTopologyRequest() = default ;
    GetFabricTopologyRequest& operator=(const GetFabricTopologyRequest &) = default ;
    GetFabricTopologyRequest& operator=(GetFabricTopologyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->lniIds_ == nullptr && this->nodeIds_ == nullptr && this->regionId_ == nullptr && this->vpcId_ == nullptr && this->vpdId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetFabricTopologyRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // lniIds Field Functions 
    bool hasLniIds() const { return this->lniIds_ != nullptr;};
    void deleteLniIds() { this->lniIds_ = nullptr;};
    inline const vector<string> & getLniIds() const { DARABONBA_PTR_GET_CONST(lniIds_, vector<string>) };
    inline vector<string> getLniIds() { DARABONBA_PTR_GET(lniIds_, vector<string>) };
    inline GetFabricTopologyRequest& setLniIds(const vector<string> & lniIds) { DARABONBA_PTR_SET_VALUE(lniIds_, lniIds) };
    inline GetFabricTopologyRequest& setLniIds(vector<string> && lniIds) { DARABONBA_PTR_SET_RVALUE(lniIds_, lniIds) };


    // nodeIds Field Functions 
    bool hasNodeIds() const { return this->nodeIds_ != nullptr;};
    void deleteNodeIds() { this->nodeIds_ = nullptr;};
    inline const vector<string> & getNodeIds() const { DARABONBA_PTR_GET_CONST(nodeIds_, vector<string>) };
    inline vector<string> getNodeIds() { DARABONBA_PTR_GET(nodeIds_, vector<string>) };
    inline GetFabricTopologyRequest& setNodeIds(const vector<string> & nodeIds) { DARABONBA_PTR_SET_VALUE(nodeIds_, nodeIds) };
    inline GetFabricTopologyRequest& setNodeIds(vector<string> && nodeIds) { DARABONBA_PTR_SET_RVALUE(nodeIds_, nodeIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetFabricTopologyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string getVpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetFabricTopologyRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string getVpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline GetFabricTopologyRequest& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // Lingjun network interface controller ID List
    shared_ptr<vector<string>> lniIds_ {};
    // Node ID list
    shared_ptr<vector<string>> nodeIds_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the virtual private cloud (VPC).
    shared_ptr<string> vpcId_ {};
    // Lingjun CIDR block ID
    shared_ptr<string> vpdId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
