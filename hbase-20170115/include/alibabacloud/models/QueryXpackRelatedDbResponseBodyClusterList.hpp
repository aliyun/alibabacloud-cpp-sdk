// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYXPACKRELATEDDBRESPONSEBODYCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_QUERYXPACKRELATEDDBRESPONSEBODYCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/QueryXpackRelatedDBResponseBodyClusterListCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20170115
{
namespace Models
{
  class QueryXpackRelatedDBResponseBodyClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryXpackRelatedDBResponseBodyClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
    };
    friend void from_json(const Darabonba::Json& j, QueryXpackRelatedDBResponseBodyClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
    };
    QueryXpackRelatedDBResponseBodyClusterList() = default ;
    QueryXpackRelatedDBResponseBodyClusterList(const QueryXpackRelatedDBResponseBodyClusterList &) = default ;
    QueryXpackRelatedDBResponseBodyClusterList(QueryXpackRelatedDBResponseBodyClusterList &&) = default ;
    QueryXpackRelatedDBResponseBodyClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryXpackRelatedDBResponseBodyClusterList() = default ;
    QueryXpackRelatedDBResponseBodyClusterList& operator=(const QueryXpackRelatedDBResponseBodyClusterList &) = default ;
    QueryXpackRelatedDBResponseBodyClusterList& operator=(QueryXpackRelatedDBResponseBodyClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const vector<Models::QueryXpackRelatedDBResponseBodyClusterListCluster> & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<Models::QueryXpackRelatedDBResponseBodyClusterListCluster>) };
    inline vector<Models::QueryXpackRelatedDBResponseBodyClusterListCluster> cluster() { DARABONBA_PTR_GET(cluster_, vector<Models::QueryXpackRelatedDBResponseBodyClusterListCluster>) };
    inline QueryXpackRelatedDBResponseBodyClusterList& setCluster(const vector<Models::QueryXpackRelatedDBResponseBodyClusterListCluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline QueryXpackRelatedDBResponseBodyClusterList& setCluster(vector<Models::QueryXpackRelatedDBResponseBodyClusterListCluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


  protected:
    std::shared_ptr<vector<Models::QueryXpackRelatedDBResponseBodyClusterListCluster>> cluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20170115
#endif
