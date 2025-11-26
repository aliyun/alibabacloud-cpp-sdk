// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_SCALINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ManagedScalingConstraints.hpp>
#include <vector>
#include <alibabacloud/models/ScalingRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class ScalingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScalingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(Disabled, disabled_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(ScalingPolicyId, scalingPolicyId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicyType, scalingPolicyType_);
      DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
    };
    friend void from_json(const Darabonba::Json& j, ScalingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(Disabled, disabled_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicyId, scalingPolicyId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicyType, scalingPolicyType_);
      DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
    };
    ScalingPolicy() = default ;
    ScalingPolicy(const ScalingPolicy &) = default ;
    ScalingPolicy(ScalingPolicy &&) = default ;
    ScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScalingPolicy() = default ;
    ScalingPolicy& operator=(const ScalingPolicy &) = default ;
    ScalingPolicy& operator=(ScalingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->constraints_ == nullptr && return this->disabled_ == nullptr && return this->nodeGroupId_ == nullptr && return this->nodeGroupName_ == nullptr && return this->scalingPolicyId_ == nullptr
        && return this->scalingPolicyType_ == nullptr && return this->scalingRules_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ScalingPolicy& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const ManagedScalingConstraints & constraints() const { DARABONBA_PTR_GET_CONST(constraints_, ManagedScalingConstraints) };
    inline ManagedScalingConstraints constraints() { DARABONBA_PTR_GET(constraints_, ManagedScalingConstraints) };
    inline ScalingPolicy& setConstraints(const ManagedScalingConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline ScalingPolicy& setConstraints(ManagedScalingConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // disabled Field Functions 
    bool hasDisabled() const { return this->disabled_ != nullptr;};
    void deleteDisabled() { this->disabled_ = nullptr;};
    inline bool disabled() const { DARABONBA_PTR_GET_DEFAULT(disabled_, false) };
    inline ScalingPolicy& setDisabled(bool disabled) { DARABONBA_PTR_SET_VALUE(disabled_, disabled) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline ScalingPolicy& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline ScalingPolicy& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // scalingPolicyId Field Functions 
    bool hasScalingPolicyId() const { return this->scalingPolicyId_ != nullptr;};
    void deleteScalingPolicyId() { this->scalingPolicyId_ = nullptr;};
    inline string scalingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyId_, "") };
    inline ScalingPolicy& setScalingPolicyId(string scalingPolicyId) { DARABONBA_PTR_SET_VALUE(scalingPolicyId_, scalingPolicyId) };


    // scalingPolicyType Field Functions 
    bool hasScalingPolicyType() const { return this->scalingPolicyType_ != nullptr;};
    void deleteScalingPolicyType() { this->scalingPolicyType_ = nullptr;};
    inline string scalingPolicyType() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyType_, "") };
    inline ScalingPolicy& setScalingPolicyType(string scalingPolicyType) { DARABONBA_PTR_SET_VALUE(scalingPolicyType_, scalingPolicyType) };


    // scalingRules Field Functions 
    bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
    void deleteScalingRules() { this->scalingRules_ = nullptr;};
    inline const vector<ScalingRule> & scalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<ScalingRule>) };
    inline vector<ScalingRule> scalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<ScalingRule>) };
    inline ScalingPolicy& setScalingRules(const vector<ScalingRule> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
    inline ScalingPolicy& setScalingRules(vector<ScalingRule> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<ManagedScalingConstraints> constraints_ = nullptr;
    std::shared_ptr<bool> disabled_ = nullptr;
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    std::shared_ptr<string> scalingPolicyId_ = nullptr;
    std::shared_ptr<string> scalingPolicyType_ = nullptr;
    std::shared_ptr<vector<ScalingRule>> scalingRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
