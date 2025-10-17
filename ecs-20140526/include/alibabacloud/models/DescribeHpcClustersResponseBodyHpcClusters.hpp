// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHPCCLUSTERSRESPONSEBODYHPCCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHPCCLUSTERSRESPONSEBODYHPCCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeHpcClustersResponseBodyHpcClustersHpcCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeHpcClustersResponseBodyHpcClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHpcClustersResponseBodyHpcClusters& obj) { 
      DARABONBA_PTR_TO_JSON(HpcCluster, hpcCluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHpcClustersResponseBodyHpcClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(HpcCluster, hpcCluster_);
    };
    DescribeHpcClustersResponseBodyHpcClusters() = default ;
    DescribeHpcClustersResponseBodyHpcClusters(const DescribeHpcClustersResponseBodyHpcClusters &) = default ;
    DescribeHpcClustersResponseBodyHpcClusters(DescribeHpcClustersResponseBodyHpcClusters &&) = default ;
    DescribeHpcClustersResponseBodyHpcClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHpcClustersResponseBodyHpcClusters() = default ;
    DescribeHpcClustersResponseBodyHpcClusters& operator=(const DescribeHpcClustersResponseBodyHpcClusters &) = default ;
    DescribeHpcClustersResponseBodyHpcClusters& operator=(DescribeHpcClustersResponseBodyHpcClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hpcCluster_ == nullptr; };
    // hpcCluster Field Functions 
    bool hasHpcCluster() const { return this->hpcCluster_ != nullptr;};
    void deleteHpcCluster() { this->hpcCluster_ = nullptr;};
    inline const vector<Models::DescribeHpcClustersResponseBodyHpcClustersHpcCluster> & hpcCluster() const { DARABONBA_PTR_GET_CONST(hpcCluster_, vector<Models::DescribeHpcClustersResponseBodyHpcClustersHpcCluster>) };
    inline vector<Models::DescribeHpcClustersResponseBodyHpcClustersHpcCluster> hpcCluster() { DARABONBA_PTR_GET(hpcCluster_, vector<Models::DescribeHpcClustersResponseBodyHpcClustersHpcCluster>) };
    inline DescribeHpcClustersResponseBodyHpcClusters& setHpcCluster(const vector<Models::DescribeHpcClustersResponseBodyHpcClustersHpcCluster> & hpcCluster) { DARABONBA_PTR_SET_VALUE(hpcCluster_, hpcCluster) };
    inline DescribeHpcClustersResponseBodyHpcClusters& setHpcCluster(vector<Models::DescribeHpcClustersResponseBodyHpcClustersHpcCluster> && hpcCluster) { DARABONBA_PTR_SET_RVALUE(hpcCluster_, hpcCluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeHpcClustersResponseBodyHpcClustersHpcCluster>> hpcCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
