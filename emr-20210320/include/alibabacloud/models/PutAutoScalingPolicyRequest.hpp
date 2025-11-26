// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTAUTOSCALINGPOLICYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUTAUTOSCALINGPOLICYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ScalingConstraints.hpp>
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
  class PutAutoScalingPolicyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutAutoScalingPolicyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Constraints, constraints_);
      DARABONBA_PTR_TO_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingRules, scalingRules_);
    };
    friend void from_json(const Darabonba::Json& j, PutAutoScalingPolicyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Constraints, constraints_);
      DARABONBA_PTR_FROM_JSON(NodeGroupId, nodeGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingRules, scalingRules_);
    };
    PutAutoScalingPolicyRequest() = default ;
    PutAutoScalingPolicyRequest(const PutAutoScalingPolicyRequest &) = default ;
    PutAutoScalingPolicyRequest(PutAutoScalingPolicyRequest &&) = default ;
    PutAutoScalingPolicyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutAutoScalingPolicyRequest() = default ;
    PutAutoScalingPolicyRequest& operator=(const PutAutoScalingPolicyRequest &) = default ;
    PutAutoScalingPolicyRequest& operator=(PutAutoScalingPolicyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->constraints_ == nullptr && return this->nodeGroupId_ == nullptr && return this->regionId_ == nullptr && return this->scalingRules_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline PutAutoScalingPolicyRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // constraints Field Functions 
    bool hasConstraints() const { return this->constraints_ != nullptr;};
    void deleteConstraints() { this->constraints_ = nullptr;};
    inline const ScalingConstraints & constraints() const { DARABONBA_PTR_GET_CONST(constraints_, ScalingConstraints) };
    inline ScalingConstraints constraints() { DARABONBA_PTR_GET(constraints_, ScalingConstraints) };
    inline PutAutoScalingPolicyRequest& setConstraints(const ScalingConstraints & constraints) { DARABONBA_PTR_SET_VALUE(constraints_, constraints) };
    inline PutAutoScalingPolicyRequest& setConstraints(ScalingConstraints && constraints) { DARABONBA_PTR_SET_RVALUE(constraints_, constraints) };


    // nodeGroupId Field Functions 
    bool hasNodeGroupId() const { return this->nodeGroupId_ != nullptr;};
    void deleteNodeGroupId() { this->nodeGroupId_ = nullptr;};
    inline string nodeGroupId() const { DARABONBA_PTR_GET_DEFAULT(nodeGroupId_, "") };
    inline PutAutoScalingPolicyRequest& setNodeGroupId(string nodeGroupId) { DARABONBA_PTR_SET_VALUE(nodeGroupId_, nodeGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline PutAutoScalingPolicyRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingRules Field Functions 
    bool hasScalingRules() const { return this->scalingRules_ != nullptr;};
    void deleteScalingRules() { this->scalingRules_ = nullptr;};
    inline const vector<ScalingRule> & scalingRules() const { DARABONBA_PTR_GET_CONST(scalingRules_, vector<ScalingRule>) };
    inline vector<ScalingRule> scalingRules() { DARABONBA_PTR_GET(scalingRules_, vector<ScalingRule>) };
    inline PutAutoScalingPolicyRequest& setScalingRules(const vector<ScalingRule> & scalingRules) { DARABONBA_PTR_SET_VALUE(scalingRules_, scalingRules) };
    inline PutAutoScalingPolicyRequest& setScalingRules(vector<ScalingRule> && scalingRules) { DARABONBA_PTR_SET_RVALUE(scalingRules_, scalingRules) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The constraints on the maximum and minimum numbers of nodes in a node group.
    std::shared_ptr<ScalingConstraints> constraints_ = nullptr;
    // The ID of the node group.
    // 
    // This parameter is required.
    std::shared_ptr<string> nodeGroupId_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The description list of auto scaling rules. Number of elements in the array: 0 to 100.
    std::shared_ptr<vector<ScalingRule>> scalingRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
