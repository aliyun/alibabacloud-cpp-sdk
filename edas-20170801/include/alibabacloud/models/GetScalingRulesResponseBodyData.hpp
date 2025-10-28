// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCALINGRULESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETSCALINGRULESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetScalingRulesResponseBodyDataRuleList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetScalingRulesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScalingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(OversoldFactor, oversoldFactor_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScalingRulesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(OversoldFactor, oversoldFactor_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetScalingRulesResponseBodyData() = default ;
    GetScalingRulesResponseBodyData(const GetScalingRulesResponseBodyData &) = default ;
    GetScalingRulesResponseBodyData(GetScalingRulesResponseBodyData &&) = default ;
    GetScalingRulesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScalingRulesResponseBodyData() = default ;
    GetScalingRulesResponseBodyData& operator=(const GetScalingRulesResponseBodyData &) = default ;
    GetScalingRulesResponseBodyData& operator=(GetScalingRulesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && return this->oversoldFactor_ == nullptr && return this->ruleList_ == nullptr && return this->updateTime_ == nullptr && return this->vpcId_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline int32_t clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, 0) };
    inline GetScalingRulesResponseBodyData& setClusterType(int32_t clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // oversoldFactor Field Functions 
    bool hasOversoldFactor() const { return this->oversoldFactor_ != nullptr;};
    void deleteOversoldFactor() { this->oversoldFactor_ = nullptr;};
    inline int32_t oversoldFactor() const { DARABONBA_PTR_GET_DEFAULT(oversoldFactor_, 0) };
    inline GetScalingRulesResponseBodyData& setOversoldFactor(int32_t oversoldFactor) { DARABONBA_PTR_SET_VALUE(oversoldFactor_, oversoldFactor) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const Models::GetScalingRulesResponseBodyDataRuleList & ruleList() const { DARABONBA_PTR_GET_CONST(ruleList_, Models::GetScalingRulesResponseBodyDataRuleList) };
    inline Models::GetScalingRulesResponseBodyDataRuleList ruleList() { DARABONBA_PTR_GET(ruleList_, Models::GetScalingRulesResponseBodyDataRuleList) };
    inline GetScalingRulesResponseBodyData& setRuleList(const Models::GetScalingRulesResponseBodyDataRuleList & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline GetScalingRulesResponseBodyData& setRuleList(Models::GetScalingRulesResponseBodyDataRuleList && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetScalingRulesResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetScalingRulesResponseBodyData& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The type of the cluster. Valid values:
    // 
    // *   0: regular Docker cluster
    // *   1: Swarm cluster (deprecated)
    // *   2: Elastic Compute Service (ECS) cluster
    // *   3: self-managed Kubernetes cluster in EDAS
    // *   4: cluster in which Pandora automatically registers applications
    // *   5: Container Service for Kubernetes (ACK) clusters
    std::shared_ptr<int32_t> clusterType_ = nullptr;
    // The overcommit ratio supported by a Docker cluster. Valid values:
    // 
    // *   1: 1:1, which means that resources are not overcommitted.
    // *   2: 1:2, which means that resources are overcommitted by 1:2.
    // *   4: 1:4, which means that resources are overcommitted by 1:4.
    // *   8: 1:8, which means that resources are overcommitted by 1:8.
    std::shared_ptr<int32_t> oversoldFactor_ = nullptr;
    // The array data of the scaling rule.
    std::shared_ptr<Models::GetScalingRulesResponseBodyDataRuleList> ruleList_ = nullptr;
    // The time when the scaling rule was last updated. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The ID of the virtual private cloud (VPC).
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
