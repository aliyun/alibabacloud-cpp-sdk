// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODYCLUSTERSOPERATIONPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERSV1RESPONSEBODYCLUSTERSOPERATIONPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClustersV1ResponseBodyClustersOperationPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClustersV1ResponseBodyClustersOperationPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClustersV1ResponseBodyClustersOperationPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
    };
    DescribeClustersV1ResponseBodyClustersOperationPolicy() = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicy(const DescribeClustersV1ResponseBodyClustersOperationPolicy &) = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicy(DescribeClustersV1ResponseBodyClustersOperationPolicy &&) = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClustersV1ResponseBodyClustersOperationPolicy() = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicy& operator=(const DescribeClustersV1ResponseBodyClustersOperationPolicy &) = default ;
    DescribeClustersV1ResponseBodyClustersOperationPolicy& operator=(DescribeClustersV1ResponseBodyClustersOperationPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterAutoUpgrade_ == nullptr; };
    // clusterAutoUpgrade Field Functions 
    bool hasClusterAutoUpgrade() const { return this->clusterAutoUpgrade_ != nullptr;};
    void deleteClusterAutoUpgrade() { this->clusterAutoUpgrade_ = nullptr;};
    inline const Models::DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade & clusterAutoUpgrade() const { DARABONBA_PTR_GET_CONST(clusterAutoUpgrade_, Models::DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade) };
    inline Models::DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade clusterAutoUpgrade() { DARABONBA_PTR_GET(clusterAutoUpgrade_, Models::DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade) };
    inline DescribeClustersV1ResponseBodyClustersOperationPolicy& setClusterAutoUpgrade(const Models::DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade & clusterAutoUpgrade) { DARABONBA_PTR_SET_VALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };
    inline DescribeClustersV1ResponseBodyClustersOperationPolicy& setClusterAutoUpgrade(Models::DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade && clusterAutoUpgrade) { DARABONBA_PTR_SET_RVALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };


  protected:
    // The configurations of auto cluster update.
    std::shared_ptr<Models::DescribeClustersV1ResponseBodyClustersOperationPolicyClusterAutoUpgrade> clusterAutoUpgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
