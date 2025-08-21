// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACKCLUSTERSRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTACKCLUSTERSRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListAckClustersResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAckClustersResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(clusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(vpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAckClustersResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(vpcId, vpcId_);
    };
    ListAckClustersResponseBodyResult() = default ;
    ListAckClustersResponseBodyResult(const ListAckClustersResponseBodyResult &) = default ;
    ListAckClustersResponseBodyResult(ListAckClustersResponseBodyResult &&) = default ;
    ListAckClustersResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAckClustersResponseBodyResult() = default ;
    ListAckClustersResponseBodyResult& operator=(const ListAckClustersResponseBodyResult &) = default ;
    ListAckClustersResponseBodyResult& operator=(ListAckClustersResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->clusterType_ != nullptr && this->name_ != nullptr && this->vpcId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListAckClustersResponseBodyResult& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListAckClustersResponseBodyResult& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAckClustersResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ListAckClustersResponseBodyResult& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The type of the cluster. The value is fixed as ManagedKubernetes.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The name of the cluster.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the VPC to which the cluster belongs.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
