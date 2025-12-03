// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSPARKRELATEHBASERESPONSEBODYCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYSPARKRELATEHBASERESPONSEBODYCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QuerySparkRelateHBaseResponseBodyClusterListCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class QuerySparkRelateHBaseResponseBodyClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySparkRelateHBaseResponseBodyClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySparkRelateHBaseResponseBodyClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
    };
    QuerySparkRelateHBaseResponseBodyClusterList() = default ;
    QuerySparkRelateHBaseResponseBodyClusterList(const QuerySparkRelateHBaseResponseBodyClusterList &) = default ;
    QuerySparkRelateHBaseResponseBodyClusterList(QuerySparkRelateHBaseResponseBodyClusterList &&) = default ;
    QuerySparkRelateHBaseResponseBodyClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySparkRelateHBaseResponseBodyClusterList() = default ;
    QuerySparkRelateHBaseResponseBodyClusterList& operator=(const QuerySparkRelateHBaseResponseBodyClusterList &) = default ;
    QuerySparkRelateHBaseResponseBodyClusterList& operator=(QuerySparkRelateHBaseResponseBodyClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const vector<Models::QuerySparkRelateHBaseResponseBodyClusterListCluster> & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<Models::QuerySparkRelateHBaseResponseBodyClusterListCluster>) };
    inline vector<Models::QuerySparkRelateHBaseResponseBodyClusterListCluster> cluster() { DARABONBA_PTR_GET(cluster_, vector<Models::QuerySparkRelateHBaseResponseBodyClusterListCluster>) };
    inline QuerySparkRelateHBaseResponseBodyClusterList& setCluster(const vector<Models::QuerySparkRelateHBaseResponseBodyClusterListCluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline QuerySparkRelateHBaseResponseBodyClusterList& setCluster(vector<Models::QuerySparkRelateHBaseResponseBodyClusterListCluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


  protected:
    std::shared_ptr<vector<Models::QuerySparkRelateHBaseResponseBodyClusterListCluster>> cluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
