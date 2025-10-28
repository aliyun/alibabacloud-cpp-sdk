// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTK8SINGRESSRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListK8sIngressRulesResponseBodyDataIngressConfs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListK8sIngressRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListK8sIngressRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(IngressConfs, ingressConfs_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListK8sIngressRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(IngressConfs, ingressConfs_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListK8sIngressRulesResponseBodyData() = default ;
    ListK8sIngressRulesResponseBodyData(const ListK8sIngressRulesResponseBodyData &) = default ;
    ListK8sIngressRulesResponseBodyData(ListK8sIngressRulesResponseBodyData &&) = default ;
    ListK8sIngressRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListK8sIngressRulesResponseBodyData() = default ;
    ListK8sIngressRulesResponseBodyData& operator=(const ListK8sIngressRulesResponseBodyData &) = default ;
    ListK8sIngressRulesResponseBodyData& operator=(ListK8sIngressRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->clusterName_ == nullptr && return this->ingressConfs_ == nullptr && return this->regionId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListK8sIngressRulesResponseBodyData& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline ListK8sIngressRulesResponseBodyData& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // ingressConfs Field Functions 
    bool hasIngressConfs() const { return this->ingressConfs_ != nullptr;};
    void deleteIngressConfs() { this->ingressConfs_ = nullptr;};
    inline const vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfs> & ingressConfs() const { DARABONBA_PTR_GET_CONST(ingressConfs_, vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfs>) };
    inline vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfs> ingressConfs() { DARABONBA_PTR_GET(ingressConfs_, vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfs>) };
    inline ListK8sIngressRulesResponseBodyData& setIngressConfs(const vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfs> & ingressConfs) { DARABONBA_PTR_SET_VALUE(ingressConfs_, ingressConfs) };
    inline ListK8sIngressRulesResponseBodyData& setIngressConfs(vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfs> && ingressConfs) { DARABONBA_PTR_SET_RVALUE(ingressConfs_, ingressConfs) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListK8sIngressRulesResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The cluster name.
    std::shared_ptr<string> clusterName_ = nullptr;
    // The Ingresses.
    std::shared_ptr<vector<Models::ListK8sIngressRulesResponseBodyDataIngressConfs>> ingressConfs_ = nullptr;
    // The ID of the Alibaba Cloud region.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
