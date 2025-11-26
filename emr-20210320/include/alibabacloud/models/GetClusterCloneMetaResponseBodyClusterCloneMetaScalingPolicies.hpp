// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLUSTERCLONEMETARESPONSEBODYCLUSTERCLONEMETASCALINGPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_GETCLUSTERCLONEMETARESPONSEBODYCLUSTERCLONEMETASCALINGPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesConstraints.hpp>
#include <vector>
#include <alibabacloud/models/GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesScalingRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_TO_JSON(ScalingPolicyId, scalingPolicyId_);
      DARABONBA_PTR_TO_JSON(ScalingPolicyType, scalingPolicyType_);
      DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
    };
    friend void from_json(const Darabonba::Json& j, GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(NodeGroupName, nodeGroupName_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicyId, scalingPolicyId_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicyType, scalingPolicyType_);
      DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
    };
    GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies() = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies(const GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies &) = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies(GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies &&) = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies() = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& operator=(const GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies &) = default ;
    GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& operator=(GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->constraints_ == nullptr && return this->nodeGroupId_ == nullptr && return this->nodeGroupName_ == nullptr && return this->scalingPolicyId_ == nullptr && return this->scalingPolicyType_ == nullptr
        && return this->scalingRules_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesConstraints & constraints() const { DARABONBA_PTR_GET_CONST(constraints_, Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesConstraints) };
    inline Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesConstraints constraints() { DARABONBA_PTR_GET(constraints_, Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesConstraints) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setConstraints(const Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setConstraints(Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // nodeGroupName Field Functions 
    bool hasNodeGroupName() const { return this->nodeGroupName_ != nullptr;};
    void deleteNodeGroupName() { this->nodeGroupName_ = nullptr;};
    inline string nodeGroupName() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupName_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setNodeGroupName(string nodeGroupName) { DARABONBA_PTR_SET_VALUE(nodeGroupName_, nodeGroupName) };


    // scalingPolicyId Field Functions 
    bool hasScalingPolicyId() const { return this->scalingPolicyId_ != nullptr;};
    void deleteScalingPolicyId() { this->scalingPolicyId_ = nullptr;};
    inline string scalingPolicyId() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyId_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setScalingPolicyId(string scalingPolicyId) { DARABONBA_PTR_SET_VALUE(scalingPolicyId_, scalingPolicyId) };


    // scalingPolicyType Field Functions 
    bool hasScalingPolicyType() const { return this->scalingPolicyType_ != nullptr;};
    void deleteScalingPolicyType() { this->scalingPolicyType_ = nullptr;};
    inline string scalingPolicyType() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicyType_, "") };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setScalingPolicyType(string scalingPolicyType) { DARABONBA_PTR_SET_VALUE(scalingPolicyType_, scalingPolicyType) };


    // scalingRules Field Functions 
    bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
    void deleteScalingRules() { this->scalingRules_ = nullptr;};
    inline const vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesScalingRules> & scalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesScalingRules>) };
    inline vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesScalingRules> scalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesScalingRules>) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setScalingRules(const vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesScalingRules> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
    inline GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPolicies& setScalingRules(vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesScalingRules> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


  protected:
    // The cluster ID.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The maximum and minimum number of nodes in the node group.
    std::shared_ptr<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesConstraints> constraints_ = nullptr;
    // The node group ID.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The name of the node group.
    std::shared_ptr<string> nodeGroupName_ = nullptr;
    // The ID of the auto scaling policy.
    std::shared_ptr<string> scalingPolicyId_ = nullptr;
    // The type of the auto scaling policy.
    std::shared_ptr<string> scalingPolicyType_ = nullptr;
    // The auto scaling rules.
    std::shared_ptr<vector<Models::GetClusterCloneMetaResponseBodyClusterCloneMetaScalingPoliciesScalingRules>> scalingRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
