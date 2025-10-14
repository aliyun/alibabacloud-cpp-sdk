// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODYINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMRECOVERYPLANAVAILABLECONFIGRESPONSEBODYINSTANCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances& obj) { 
      DARABONBA_PTR_TO_JSON(Instance, instance_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(Instance, instance_);
    };
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances(const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances(DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances &&) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances() = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances& operator=(const DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances &) = default ;
    DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances& operator=(DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instance_ == nullptr; };
    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline const vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance> & instance() const { DARABONBA_PTR_GET_CONST(instance_, vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance>) };
    inline vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance> instance() { DARABONBA_PTR_GET(instance_, vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance>) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances& setInstance(const vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance> & instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };
    inline DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstances& setInstance(vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance> && instance) { DARABONBA_PTR_SET_RVALUE(instance_, instance) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmRecoveryPlanAvailableConfigResponseBodyInstancesInstance>> instance_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
