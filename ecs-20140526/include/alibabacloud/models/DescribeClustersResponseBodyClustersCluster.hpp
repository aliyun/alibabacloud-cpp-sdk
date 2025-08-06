// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSRESPONSEBODYCLUSTERSCLUSTER_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSRESPONSEBODYCLUSTERSCLUSTER_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeClustersResponseBodyClustersCluster : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersResponseBodyClustersCluster& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersResponseBodyClustersCluster& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
    };
    DescribeClustersResponseBodyClustersCluster() = default ;
    DescribeClustersResponseBodyClustersCluster(const DescribeClustersResponseBodyClustersCluster &) = default ;
    DescribeClustersResponseBodyClustersCluster(DescribeClustersResponseBodyClustersCluster &&) = default ;
    DescribeClustersResponseBodyClustersCluster(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersResponseBodyClustersCluster() = default ;
    DescribeClustersResponseBodyClustersCluster& operator=(const DescribeClustersResponseBodyClustersCluster &) = default ;
    DescribeClustersResponseBodyClustersCluster& operator=(DescribeClustersResponseBodyClustersCluster &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeClustersResponseBodyClustersCluster& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
