// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODYDEDICATEDHOSTCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEDICATEDHOSTCLUSTERSRESPONSEBODYDEDICATEDHOSTCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters& obj) { 
      DARABONBA_PTR_TO_JSON(DedicatedHostCluster, dedicatedHostCluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(DedicatedHostCluster, dedicatedHostCluster_);
    };
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters() = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters &) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters(DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters &&) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters() = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters& operator=(const DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters &) = default ;
    DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters& operator=(DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dedicatedHostCluster_ != nullptr; };
    // dedicatedHostCluster Field Functions 
    bool hasDedicatedHostCluster() const { return this->dedicatedHostCluster_ != nullptr;};
    void deleteDedicatedHostCluster() { this->dedicatedHostCluster_ = nullptr;};
    inline const vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster> & dedicatedHostCluster() const { DARABONBA_PTR_GET_CONST(dedicatedHostCluster_, vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster>) };
    inline vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster> dedicatedHostCluster() { DARABONBA_PTR_GET(dedicatedHostCluster_, vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster>) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters& setDedicatedHostCluster(const vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster> & dedicatedHostCluster) { DARABONBA_PTR_SET_VALUE(dedicatedHostCluster_, dedicatedHostCluster) };
    inline DescribeDedicatedHostClustersResponseBodyDedicatedHostClusters& setDedicatedHostCluster(vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster> && dedicatedHostCluster) { DARABONBA_PTR_SET_RVALUE(dedicatedHostCluster_, dedicatedHostCluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeDedicatedHostClustersResponseBodyDedicatedHostClustersDedicatedHostCluster>> dedicatedHostCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
