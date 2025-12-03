// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTRESPONSEBODYINSTANCECLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCECLUSTERLISTRESPONSEBODYINSTANCECLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudAPI20160714
{
namespace Models
{
  class DescribeInstanceClusterListResponseBodyInstanceClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceClusterListResponseBodyInstanceClusters& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCluster, instanceCluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceClusterListResponseBodyInstanceClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCluster, instanceCluster_);
    };
    DescribeInstanceClusterListResponseBodyInstanceClusters() = default ;
    DescribeInstanceClusterListResponseBodyInstanceClusters(const DescribeInstanceClusterListResponseBodyInstanceClusters &) = default ;
    DescribeInstanceClusterListResponseBodyInstanceClusters(DescribeInstanceClusterListResponseBodyInstanceClusters &&) = default ;
    DescribeInstanceClusterListResponseBodyInstanceClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceClusterListResponseBodyInstanceClusters() = default ;
    DescribeInstanceClusterListResponseBodyInstanceClusters& operator=(const DescribeInstanceClusterListResponseBodyInstanceClusters &) = default ;
    DescribeInstanceClusterListResponseBodyInstanceClusters& operator=(DescribeInstanceClusterListResponseBodyInstanceClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceCluster_ == nullptr; };
    // instanceCluster Field Functions 
    bool hasInstanceCluster() const { return this->instanceCluster_ != nullptr;};
    void deleteInstanceCluster() { this->instanceCluster_ = nullptr;};
    inline const vector<Models::DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster> & instanceCluster() const { DARABONBA_PTR_GET_CONST(instanceCluster_, vector<Models::DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster>) };
    inline vector<Models::DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster> instanceCluster() { DARABONBA_PTR_GET(instanceCluster_, vector<Models::DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster>) };
    inline DescribeInstanceClusterListResponseBodyInstanceClusters& setInstanceCluster(const vector<Models::DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster> & instanceCluster) { DARABONBA_PTR_SET_VALUE(instanceCluster_, instanceCluster) };
    inline DescribeInstanceClusterListResponseBodyInstanceClusters& setInstanceCluster(vector<Models::DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster> && instanceCluster) { DARABONBA_PTR_SET_RVALUE(instanceCluster_, instanceCluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeInstanceClusterListResponseBodyInstanceClustersInstanceCluster>> instanceCluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudAPI20160714
#endif
