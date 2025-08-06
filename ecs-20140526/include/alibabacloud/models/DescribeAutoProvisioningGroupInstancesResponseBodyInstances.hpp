// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOPROVISIONINGGROUPINSTANCESRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeAutoProvisioningGroupInstancesResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoProvisioningGroupInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoProvisioningGroupInstancesResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    DescribeAutoProvisioningGroupInstancesResponseBodyInstances() = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstances(const DescribeAutoProvisioningGroupInstancesResponseBodyInstances &) = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstances(DescribeAutoProvisioningGroupInstancesResponseBodyInstances &&) = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoProvisioningGroupInstancesResponseBodyInstances() = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstances& operator=(const DescribeAutoProvisioningGroupInstancesResponseBodyInstances &) = default ;
    DescribeAutoProvisioningGroupInstancesResponseBodyInstances& operator=(DescribeAutoProvisioningGroupInstancesResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instance_ != nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance>) };
    inline vector<Models::DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance>) };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstances& setInstance(const vector<Models::DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeAutoProvisioningGroupInstancesResponseBodyInstances& setInstance(vector<Models::DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::DescribeAutoProvisioningGroupInstancesResponseBodyInstancesInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
