// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLDETAILRESPONSEBODYSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(match_criteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(match_criteria, matchCriteria_);
    };
    DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions() = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions(const DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions &) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions(DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions &&) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions() = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions& operator=(const DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions &) = default ;
    DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions& operator=(DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->id_ == nullptr
        && return this->matchCriteria_ == nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline DescribeClusterNodePoolDetailResponseBodyScalingGroupPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // The ID of the private node pool.
    std::shared_ptr<string> id_ = nullptr;
    // The type of private node pool. This parameter specifies the type of private node pool that you want to use to create instances. A private node pool is generated when an elasticity assurance or a capacity reservation service takes effect. The system selects a private node pool to launch instances. Valid values:
    // 
    // *   `Open`: open private pool. The system selects an open private node pool to launch instances. If no matching open private node pool is available, the resources in the public node pool are used.
    // *   `Target`: specific private pool. The system uses the resources of the specified private node pool to launch instances. If the specified private node pool is unavailable, instances cannot be launched.
    // *   `None`: no private node pool is used. The resources of private node pools are not used to launch the instances.
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
