// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODYOPERATIONPOLICY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERDETAILRESPONSEBODYOPERATIONPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterDetailResponseBodyOperationPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterDetailResponseBodyOperationPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterDetailResponseBodyOperationPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_auto_upgrade, clusterAutoUpgrade_);
    };
    DescribeClusterDetailResponseBodyOperationPolicy() = default ;
    DescribeClusterDetailResponseBodyOperationPolicy(const DescribeClusterDetailResponseBodyOperationPolicy &) = default ;
    DescribeClusterDetailResponseBodyOperationPolicy(DescribeClusterDetailResponseBodyOperationPolicy &&) = default ;
    DescribeClusterDetailResponseBodyOperationPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterDetailResponseBodyOperationPolicy() = default ;
    DescribeClusterDetailResponseBodyOperationPolicy& operator=(const DescribeClusterDetailResponseBodyOperationPolicy &) = default ;
    DescribeClusterDetailResponseBodyOperationPolicy& operator=(DescribeClusterDetailResponseBodyOperationPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterAutoUpgrade_ == nullptr; };
    // clusterAutoUpgrade Field Functions 
    bool hasClusterAutoUpgrade() const { return this->clusterAutoUpgrade_ != nullptr;};
    void deleteClusterAutoUpgrade() { this->clusterAutoUpgrade_ = nullptr;};
    inline const Models::DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade & clusterAutoUpgrade() const { DARABONBA_PTR_GET_CONST(clusterAutoUpgrade_, Models::DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade) };
    inline Models::DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade clusterAutoUpgrade() { DARABONBA_PTR_GET(clusterAutoUpgrade_, Models::DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade) };
    inline DescribeClusterDetailResponseBodyOperationPolicy& setClusterAutoUpgrade(const Models::DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade & clusterAutoUpgrade) { DARABONBA_PTR_SET_VALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };
    inline DescribeClusterDetailResponseBodyOperationPolicy& setClusterAutoUpgrade(Models::DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade && clusterAutoUpgrade) { DARABONBA_PTR_SET_RVALUE(clusterAutoUpgrade_, clusterAutoUpgrade) };


  protected:
    // The configurations of auto cluster update.
    std::shared_ptr<Models::DescribeClusterDetailResponseBodyOperationPolicyClusterAutoUpgrade> clusterAutoUpgrade_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
