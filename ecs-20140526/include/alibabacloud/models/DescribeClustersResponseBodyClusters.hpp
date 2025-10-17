// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSRESPONSEBODYCLUSTERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSRESPONSEBODYCLUSTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClustersResponseBodyClustersCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeClustersResponseBodyClusters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersResponseBodyClusters& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersResponseBodyClusters& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
    };
    DescribeClustersResponseBodyClusters() = default ;
    DescribeClustersResponseBodyClusters(const DescribeClustersResponseBodyClusters &) = default ;
    DescribeClustersResponseBodyClusters(DescribeClustersResponseBodyClusters &&) = default ;
    DescribeClustersResponseBodyClusters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersResponseBodyClusters() = default ;
    DescribeClustersResponseBodyClusters& operator=(const DescribeClustersResponseBodyClusters &) = default ;
    DescribeClustersResponseBodyClusters& operator=(DescribeClustersResponseBodyClusters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const vector<Models::DescribeClustersResponseBodyClustersCluster> & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<Models::DescribeClustersResponseBodyClustersCluster>) };
    inline vector<Models::DescribeClustersResponseBodyClustersCluster> cluster() { DARABONBA_PTR_GET(cluster_, vector<Models::DescribeClustersResponseBodyClustersCluster>) };
    inline DescribeClustersResponseBodyClusters& setCluster(const vector<Models::DescribeClustersResponseBodyClustersCluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline DescribeClustersResponseBodyClusters& setCluster(vector<Models::DescribeClustersResponseBodyClustersCluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


  protected:
    std::shared_ptr<vector<Models::DescribeClustersResponseBodyClustersCluster>> cluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
