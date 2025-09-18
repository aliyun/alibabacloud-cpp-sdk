// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGMULTIAVAILABLEPOLICY_HPP_
#define ALIBABACLOUD_MODELS_SCALINGGROUPCONFIGMULTIAVAILABLEPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScalingGroupConfigMultiAvailablePolicyPolicyParam.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingGroupConfigMultiAvailablePolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingGroupConfigMultiAvailablePolicy& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyParam, policyParam_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingGroupConfigMultiAvailablePolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyParam, policyParam_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
    };
    ScalingGroupConfigMultiAvailablePolicy() = default ;
    ScalingGroupConfigMultiAvailablePolicy(const ScalingGroupConfigMultiAvailablePolicy &) = default ;
    ScalingGroupConfigMultiAvailablePolicy(ScalingGroupConfigMultiAvailablePolicy &&) = default ;
    ScalingGroupConfigMultiAvailablePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingGroupConfigMultiAvailablePolicy() = default ;
    ScalingGroupConfigMultiAvailablePolicy& operator=(const ScalingGroupConfigMultiAvailablePolicy &) = default ;
    ScalingGroupConfigMultiAvailablePolicy& operator=(ScalingGroupConfigMultiAvailablePolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->policyParam_ != nullptr
        && this->policyType_ != nullptr; };
    // policyParam Field Functions 
    bool hasPolicyParam() const { return this->policyParam_ != nullptr;};
    void deletePolicyParam() { this->policyParam_ = nullptr;};
    inline const Models::ScalingGroupConfigMultiAvailablePolicyPolicyParam & policyParam() const { DARABONBA_PTR_GET_CONST(policyParam_, Models::ScalingGroupConfigMultiAvailablePolicyPolicyParam) };
    inline Models::ScalingGroupConfigMultiAvailablePolicyPolicyParam policyParam() { DARABONBA_PTR_GET(policyParam_, Models::ScalingGroupConfigMultiAvailablePolicyPolicyParam) };
    inline ScalingGroupConfigMultiAvailablePolicy& setPolicyParam(const Models::ScalingGroupConfigMultiAvailablePolicyPolicyParam & policyParam) { DARABONBA_PTR_SET_VALUE(policyParam_, policyParam) };
    inline ScalingGroupConfigMultiAvailablePolicy& setPolicyParam(Models::ScalingGroupConfigMultiAvailablePolicyPolicyParam && policyParam) { DARABONBA_PTR_SET_RVALUE(policyParam_, policyParam) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline ScalingGroupConfigMultiAvailablePolicy& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


  protected:
    // 资源可用性策略(成本优化参数)。
    std::shared_ptr<Models::ScalingGroupConfigMultiAvailablePolicyPolicyParam> policyParam_ = nullptr;
    // 策略类型。
    std::shared_ptr<string> policyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
