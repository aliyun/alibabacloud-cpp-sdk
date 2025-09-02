// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLUSTER_HPP_
#define ALIBABACLOUD_MODELS_CLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class Cluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Cluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterBizId, clusterBizId_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, Cluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterBizId, clusterBizId_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    Cluster() = default ;
    Cluster(const Cluster &) = default ;
    Cluster(Cluster &&) = default ;
    Cluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Cluster() = default ;
    Cluster& operator=(const Cluster &) = default ;
    Cluster& operator=(Cluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterBizId_ != nullptr
        && this->clusterId_ != nullptr; };
    // clusterBizId Field Functions 
    bool hasClusterBizId() const { return this->clusterBizId_ != nullptr;};
    void deleteClusterBizId() { this->clusterBizId_ = nullptr;};
    inline string clusterBizId() const { DARABONBA_PTR_GET_DEFAULT(clusterBizId_, "") };
    inline Cluster& setClusterBizId(string clusterBizId) { DARABONBA_PTR_SET_VALUE(clusterBizId_, clusterBizId) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline int64_t clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, 0L) };
    inline Cluster& setClusterId(int64_t clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> clusterBizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
