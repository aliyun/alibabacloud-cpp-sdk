// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERNODEPOOLSRESPONSEBODYNODEPOOLSSCALINGGROUPPRIVATEPOOLOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(match_criteria, matchCriteria_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(match_criteria, matchCriteria_);
    };
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions(const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions(DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions &&) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions() = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions& operator=(const DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions &) = default ;
    DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions& operator=(DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->matchCriteria_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // matchCriteria Field Functions 
    bool hasMatchCriteria() const { return this->matchCriteria_ != nullptr;};
    void deleteMatchCriteria() { this->matchCriteria_ = nullptr;};
    inline string matchCriteria() const { DARABONBA_PTR_GET_DEFAULT(matchCriteria_, "") };
    inline DescribeClusterNodePoolsResponseBodyNodepoolsScalingGroupPrivatePoolOptions& setMatchCriteria(string matchCriteria) { DARABONBA_PTR_SET_VALUE(matchCriteria_, matchCriteria) };


  protected:
    // The private pool ID, which is the same as the ID of the elasticity assurance or capacity reservation for which the private pool is generated.
    std::shared_ptr<string> id_ = nullptr;
    // The type of the private node pool. This parameter specifies the type of the private node pool that is used to create instances. A private node pool is generated when an elasticity assurance or a capacity reservation service takes effect. The system selects a private node pool to launch instances. Valid values:
    // 
    // *   `Open`: uses open private pool. The system selects an open private node pool to launch instances. If no matching open private node pool is available, the resources in the public node pool are used.
    // *   `Target`: uses the specified private node pool. The system uses the resources of the specified private node pool to launch instances. If the specified private node pool is unavailable, instances cannot be launched.
    // *   `None`: No private node pool is used. The resources of private node pools are not used to launch instances.
    std::shared_ptr<string> matchCriteria_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
