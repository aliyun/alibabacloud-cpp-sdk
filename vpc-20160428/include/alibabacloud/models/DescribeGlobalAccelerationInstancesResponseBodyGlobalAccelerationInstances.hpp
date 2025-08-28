// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGLOBALACCELERATIONINSTANCESRESPONSEBODYGLOBALACCELERATIONINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGLOBALACCELERATIONINSTANCESRESPONSEBODYGLOBALACCELERATIONINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalAccelerationInstance, globalAccelerationInstance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalAccelerationInstance, globalAccelerationInstance_);
    };
    DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances() = default ;
    DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances(const DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances &) = default ;
    DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances(DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances &&) = default ;
    DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances() = default ;
    DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& operator=(const DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances &) = default ;
    DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& operator=(DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->globalAccelerationInstance_ != nullptr; };
    // globalAccelerationInstance Field Functions 
    bool hasGlobalAccelerationInstance() const { return this->globalAccelerationInstance_ != nullptr;};
    void deleteGlobalAccelerationInstance() { this->globalAccelerationInstance_ = nullptr;};
    inline const vector<Models::DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance> & globalAccelerationInstance() const { DARABONBA_PTR_GET_CONST(globalAccelerationInstance_, vector<Models::DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance>) };
    inline vector<Models::DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance> globalAccelerationInstance() { DARABONBA_PTR_GET(globalAccelerationInstance_, vector<Models::DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance>) };
    inline DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& setGlobalAccelerationInstance(const vector<Models::DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance> & globalAccelerationInstance) { DARABONBA_PTR_SET_VALUE(globalAccelerationInstance_, globalAccelerationInstance) };
    inline DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstances& setGlobalAccelerationInstance(vector<Models::DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance> && globalAccelerationInstance) { DARABONBA_PTR_SET_RVALUE(globalAccelerationInstance_, globalAccelerationInstance) };


  protected:
    std::shared_ptr<vector<Models::DescribeGlobalAccelerationInstancesResponseBodyGlobalAccelerationInstancesGlobalAccelerationInstance>> globalAccelerationInstance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
