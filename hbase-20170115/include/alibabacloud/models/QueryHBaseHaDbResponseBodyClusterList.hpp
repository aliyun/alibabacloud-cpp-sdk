// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHBASEHADBRESPONSEBODYCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYHBASEHADBRESPONSEBODYCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryHBaseHaDBResponseBodyClusterListCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class QueryHBaseHaDBResponseBodyClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHBaseHaDBResponseBodyClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHBaseHaDBResponseBodyClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
    };
    QueryHBaseHaDBResponseBodyClusterList() = default ;
    QueryHBaseHaDBResponseBodyClusterList(const QueryHBaseHaDBResponseBodyClusterList &) = default ;
    QueryHBaseHaDBResponseBodyClusterList(QueryHBaseHaDBResponseBodyClusterList &&) = default ;
    QueryHBaseHaDBResponseBodyClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHBaseHaDBResponseBodyClusterList() = default ;
    QueryHBaseHaDBResponseBodyClusterList& operator=(const QueryHBaseHaDBResponseBodyClusterList &) = default ;
    QueryHBaseHaDBResponseBodyClusterList& operator=(QueryHBaseHaDBResponseBodyClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const vector<Models::QueryHBaseHaDBResponseBodyClusterListCluster> & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<Models::QueryHBaseHaDBResponseBodyClusterListCluster>) };
    inline vector<Models::QueryHBaseHaDBResponseBodyClusterListCluster> cluster() { DARABONBA_PTR_GET(cluster_, vector<Models::QueryHBaseHaDBResponseBodyClusterListCluster>) };
    inline QueryHBaseHaDBResponseBodyClusterList& setCluster(const vector<Models::QueryHBaseHaDBResponseBodyClusterListCluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline QueryHBaseHaDBResponseBodyClusterList& setCluster(vector<Models::QueryHBaseHaDBResponseBodyClusterListCluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


  protected:
    std::shared_ptr<vector<Models::QueryHBaseHaDBResponseBodyClusterListCluster>> cluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
