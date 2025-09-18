// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODYSCALINGPOLICY_HPP_
#define ALIBABACLOUD_MODELS_GETAUTOSCALINGPOLICYRESPONSEBODYSCALINGPOLICY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAutoScalingPolicyResponseBodyScalingPolicyConstraints.hpp>
#include <vector>
#include <alibabacloud/models/GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetAutoScalingPolicyResponseBodyScalingPolicy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAutoScalingPolicyResponseBodyScalingPolicy& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicyId, scalingPolicyId_);
      DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetAutoScalingPolicyResponseBodyScalingPolicy& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicyId, scalingPolicyId_);
      DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
    };
    GetAutoScalingPolicyResponseBodyScalingPolicy() = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicy(const GetAutoScalingPolicyResponseBodyScalingPolicy &) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicy(GetAutoScalingPolicyResponseBodyScalingPolicy &&) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAutoScalingPolicyResponseBodyScalingPolicy() = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicy& operator=(const GetAutoScalingPolicyResponseBodyScalingPolicy &) = default ;
    GetAutoScalingPolicyResponseBodyScalingPolicy& operator=(GetAutoScalingPolicyResponseBodyScalingPolicy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->constraints_ != nullptr && this->nodeGroupId_ != nullptr && this->scalingPolicyId_ != nullptr && this->scalingRules_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetAutoScalingPolicyResponseBodyScalingPolicy& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const Models::GetAutoScalingPolicyResponseBodyScalingPolicyConstraints & constraints() const { DARABONBA_PTR_GET_CONST(constraints_, Models::GetAutoScalingPolicyResponseBodyScalingPolicyConstraints) };
    inline Models::GetAutoScalingPolicyResponseBodyScalingPolicyConstraints constraints() { DARABONBA_PTR_GET(constraints_, Models::GetAutoScalingPolicyResponseBodyScalingPolicyConstraints) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicy& setConstraints(const Models::GetAutoScalingPolicyResponseBodyScalingPolicyConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicy& setConstraints(Models::GetAutoScalingPolicyResponseBodyScalingPolicyConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline GetAutoScalingPolicyResponseBodyScalingPolicy& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // scalingPolicyId Field Functions 
    bool hasScalingPolicyId() const { return this->scalingPolicyId_ != nullptr;};
    void deleteScalingPolicyId() { this->scalingPolicyId_ = nullptr;};
    inline string scalingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyId_, "") };
    inline GetAutoScalingPolicyResponseBodyScalingPolicy& setScalingPolicyId(string scalingPolicyId) { DARABONBA_PTR_SET_VALUE(scalingPolicyId_, scalingPolicyId) };


    // scalingRules Field Functions 
    bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
    void deleteScalingRules() { this->scalingRules_ = nullptr;};
    inline const vector<Models::GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules> & scalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<Models::GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules>) };
    inline vector<Models::GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules> scalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<Models::GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules>) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicy& setScalingRules(const vector<Models::GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
    inline GetAutoScalingPolicyResponseBodyScalingPolicy& setScalingRules(vector<Models::GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The maximum and minimum number of nodes in the node group.
    std::shared_ptr<Models::GetAutoScalingPolicyResponseBodyScalingPolicyConstraints> constraints_ = nullptr;
    // The ID of the node group.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The ID of the scaling policy.
    std::shared_ptr<string> scalingPolicyId_ = nullptr;
    // The auto scaling rules.
    std::shared_ptr<vector<Models::GetAutoScalingPolicyResponseBodyScalingPolicyScalingRules>> scalingRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
