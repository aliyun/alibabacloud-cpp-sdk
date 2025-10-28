// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETK8SCLUSTERRESPONSEBODYCLUSTERPAGECLUSTERLIST_HPP_
#define ALIBABACLOUD_MODELS_GETK8SCLUSTERRESPONSEBODYCLUSTERPAGECLUSTERLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetK8sClusterResponseBodyClusterPageClusterListCluster.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetK8sClusterResponseBodyClusterPageClusterList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetK8sClusterResponseBodyClusterPageClusterList& obj) { 
      DARABONBA_PTR_TO_JSON(Cluster, cluster_);
    };
    friend void from_json(const Darabonba::Json& j, GetK8sClusterResponseBodyClusterPageClusterList& obj) { 
      DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
    };
    GetK8sClusterResponseBodyClusterPageClusterList() = default ;
    GetK8sClusterResponseBodyClusterPageClusterList(const GetK8sClusterResponseBodyClusterPageClusterList &) = default ;
    GetK8sClusterResponseBodyClusterPageClusterList(GetK8sClusterResponseBodyClusterPageClusterList &&) = default ;
    GetK8sClusterResponseBodyClusterPageClusterList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetK8sClusterResponseBodyClusterPageClusterList() = default ;
    GetK8sClusterResponseBodyClusterPageClusterList& operator=(const GetK8sClusterResponseBodyClusterPageClusterList &) = default ;
    GetK8sClusterResponseBodyClusterPageClusterList& operator=(GetK8sClusterResponseBodyClusterPageClusterList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cluster_ == nullptr; };
    // cluster Field Functions 
    bool hasCluster() const { return this->cluster_ != nullptr;};
    void deleteCluster() { this->cluster_ = nullptr;};
    inline const vector<Models::GetK8sClusterResponseBodyClusterPageClusterListCluster> & cluster() const { DARABONBA_PTR_GET_CONST(cluster_, vector<Models::GetK8sClusterResponseBodyClusterPageClusterListCluster>) };
    inline vector<Models::GetK8sClusterResponseBodyClusterPageClusterListCluster> cluster() { DARABONBA_PTR_GET(cluster_, vector<Models::GetK8sClusterResponseBodyClusterPageClusterListCluster>) };
    inline GetK8sClusterResponseBodyClusterPageClusterList& setCluster(const vector<Models::GetK8sClusterResponseBodyClusterPageClusterListCluster> & cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };
    inline GetK8sClusterResponseBodyClusterPageClusterList& setCluster(vector<Models::GetK8sClusterResponseBodyClusterPageClusterListCluster> && cluster) { DARABONBA_PTR_SET_RVALUE(cluster_, cluster) };


  protected:
    std::shared_ptr<vector<Models::GetK8sClusterResponseBodyClusterPageClusterListCluster>> cluster_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
