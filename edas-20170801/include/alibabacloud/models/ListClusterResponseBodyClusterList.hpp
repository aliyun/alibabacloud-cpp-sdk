// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERRESPONSEBODYCLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERRESPONSEBODYCLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterResponseBodyClusterListCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ListClusterResponseBodyClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterResponseBodyClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterResponseBodyClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
    };
    ListClusterResponseBodyClusterList() = default ;
    ListClusterResponseBodyClusterList(const ListClusterResponseBodyClusterList &) = default ;
    ListClusterResponseBodyClusterList(ListClusterResponseBodyClusterList &&) = default ;
    ListClusterResponseBodyClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterResponseBodyClusterList() = default ;
    ListClusterResponseBodyClusterList& operator=(const ListClusterResponseBodyClusterList &) = default ;
    ListClusterResponseBodyClusterList& operator=(ListClusterResponseBodyClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const vector<Models::ListClusterResponseBodyClusterListCluster> & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<Models::ListClusterResponseBodyClusterListCluster>) };
    inline vector<Models::ListClusterResponseBodyClusterListCluster> cluster() { DARABONBA_PTR_GET(cluster_, vector<Models::ListClusterResponseBodyClusterListCluster>) };
    inline ListClusterResponseBodyClusterList& setCluster(const vector<Models::ListClusterResponseBodyClusterListCluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline ListClusterResponseBodyClusterList& setCluster(vector<Models::ListClusterResponseBodyClusterListCluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


  protected:
    std::shared_ptr<vector<Models::ListClusterResponseBodyClusterListCluster>> cluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
