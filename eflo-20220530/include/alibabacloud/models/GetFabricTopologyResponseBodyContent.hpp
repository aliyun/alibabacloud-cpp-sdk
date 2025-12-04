// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETFABRICTOPOLOGYRESPONSEBODYCONTENT_HPP_
#define ALIBABACLOUD_MODELS_GETFABRICTOPOLOGYRESPONSEBODYCONTENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetFabricTopologyResponseBodyContentTopoInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eflo20220530
{
namespace Models
{
  class GetFabricTopologyResponseBodyContent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetFabricTopologyResponseBodyContent& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TopoInfo, topoInfo_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpdId, vpdId_);
    };
    friend void from_json(const Darabonba::Json& j, GetFabricTopologyResponseBodyContent& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TopoInfo, topoInfo_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpdId, vpdId_);
    };
    GetFabricTopologyResponseBodyContent() = default ;
    GetFabricTopologyResponseBodyContent(const GetFabricTopologyResponseBodyContent &) = default ;
    GetFabricTopologyResponseBodyContent(GetFabricTopologyResponseBodyContent &&) = default ;
    GetFabricTopologyResponseBodyContent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetFabricTopologyResponseBodyContent() = default ;
    GetFabricTopologyResponseBodyContent& operator=(const GetFabricTopologyResponseBodyContent &) = default ;
    GetFabricTopologyResponseBodyContent& operator=(GetFabricTopologyResponseBodyContent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->regionId_ == nullptr && return this->topoInfo_ == nullptr && return this->vpcId_ == nullptr && return this->vpdId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetFabricTopologyResponseBodyContent& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetFabricTopologyResponseBodyContent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // topoInfo Field Functions 
    bool hasTopoInfo() const { return this->topoInfo_ != nullptr;};
    void deleteTopoInfo() { this->topoInfo_ = nullptr;};
    inline const vector<Models::GetFabricTopologyResponseBodyContentTopoInfo> & topoInfo() const { DARABONBA_PTR_GET_CONST(topoInfo_, vector<Models::GetFabricTopologyResponseBodyContentTopoInfo>) };
    inline vector<Models::GetFabricTopologyResponseBodyContentTopoInfo> topoInfo() { DARABONBA_PTR_GET(topoInfo_, vector<Models::GetFabricTopologyResponseBodyContentTopoInfo>) };
    inline GetFabricTopologyResponseBodyContent& setTopoInfo(const vector<Models::GetFabricTopologyResponseBodyContentTopoInfo> & topoInfo) { DARABONBA_PTR_SET_VALUE(topoInfo_, topoInfo) };
    inline GetFabricTopologyResponseBodyContent& setTopoInfo(vector<Models::GetFabricTopologyResponseBodyContentTopoInfo> && topoInfo) { DARABONBA_PTR_SET_RVALUE(topoInfo_, topoInfo) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetFabricTopologyResponseBodyContent& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpdId Field Functions 
    bool hasVpdId() const { return this->vpdId_ != nullptr;};
    void deleteVpdId() { this->vpdId_ = nullptr;};
    inline string vpdId() const { DARABONBA_PTR_GET_DEFAULT(vpdId_, "") };
    inline GetFabricTopologyResponseBodyContent& setVpdId(string vpdId) { DARABONBA_PTR_SET_VALUE(vpdId_, vpdId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // network interface controller Topology Information
    std::shared_ptr<vector<Models::GetFabricTopologyResponseBodyContentTopoInfo>> topoInfo_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
    // Lingjun CIDR block ID
    std::shared_ptr<string> vpdId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eflo20220530
#endif
