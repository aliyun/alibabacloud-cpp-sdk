// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVERRELATEDGLOBALACCELERATIONINSTANCESRESPONSEBODYGLOBALACCELERATIONINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVERRELATEDGLOBALACCELERATIONINSTANCESRESPONSEBODYGLOBALACCELERATIONINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstance, globalAccelerationInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstance, globalAccelerationInstance_);
    };
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances() = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances(const DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances &) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances(DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances &&) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances() = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& operator=(const DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances &) = default ;
    DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& operator=(DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->globalAccelerationInstance_ == nullptr; };
    // globalAccelerationInstance Field Functions 
    bool hasGlobalAccelerationInstance() const { return this->globalAccelerationInstance_ != nullptr;};
    void deleteGlobalAccelerationInstance() { this->globalAccelerationInstance_ = nullptr;};
    inline const vector<Models::DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance> & globalAccelerationInstance() const { DARABONBA_PTR_GET_CONST(globalAccelerationInstance_, vector<Models::DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance>) };
    inline vector<Models::DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance> globalAccelerationInstance() { DARABONBA_PTR_GET(globalAccelerationInstance_, vector<Models::DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance>) };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& setGlobalAccelerationInstance(const vector<Models::DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance> & globalAccelerationInstance) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstance_, globalAccelerationInstance) };
    inline DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& setGlobalAccelerationInstance(vector<Models::DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance> && globalAccelerationInstance) { DARABONBA_PTR_SET_RVALUE(globalAccelerationInstance_, globalAccelerationInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeServerRelatedGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance>> globalAccelerationInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
