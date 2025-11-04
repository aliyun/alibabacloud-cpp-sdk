// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSVSERVERGROUPSVSERVERGROUPATTRIBUTES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGGROUPSRESPONSEBODYSCALINGGROUPSVSERVERGROUPSVSERVERGROUPATTRIBUTES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes& obj) { 
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes& obj) { 
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(VServerGroupId, VServerGroupId_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes(const DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes(DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes &&) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes() = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes& operator=(const DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes &) = default ;
    DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes& operator=(DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->port_ == nullptr
        && return this->VServerGroupId_ == nullptr && return this->weight_ == nullptr; };
    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // VServerGroupId Field Functions 
    bool hasVServerGroupId() const { return this->VServerGroupId_ != nullptr;};
    void deleteVServerGroupId() { this->VServerGroupId_ = nullptr;};
    inline string VServerGroupId() const { DARABONBA_PTR_GET_DEFAULT(VServerGroupId_, "") };
    inline DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes& setVServerGroupId(string VServerGroupId) { DARABONBA_PTR_SET_VALUE(VServerGroupId_, VServerGroupId) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline int32_t weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, 0) };
    inline DescribeScalingGroupsResponseBodyScalingGroupsVServerGroupsVServerGroupAttributes& setWeight(int32_t weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The port number that is used by the load balancer to provide external services.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The ID of the backend vServer group.
    std::shared_ptr<string> VServerGroupId_ = nullptr;
    // The weight of the backend vServer group.
    std::shared_ptr<int32_t> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
