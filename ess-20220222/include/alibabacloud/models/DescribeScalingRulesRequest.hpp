// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCALINGRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeScalingRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeScalingRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_TO_JSON(ScalingRuleAris, scalingRuleAris_);
      DARABONBA_PTR_TO_JSON(ScalingRuleIds, scalingRuleIds_);
      DARABONBA_PTR_TO_JSON(ScalingRuleNames, scalingRuleNames_);
      DARABONBA_PTR_TO_JSON(ScalingRuleType, scalingRuleType_);
      DARABONBA_PTR_TO_JSON(ShowAlarmRules, showAlarmRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeScalingRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ScalingGroupId, scalingGroupId_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleAris, scalingRuleAris_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleIds, scalingRuleIds_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleNames, scalingRuleNames_);
      DARABONBA_PTR_FROM_JSON(ScalingRuleType, scalingRuleType_);
      DARABONBA_PTR_FROM_JSON(ShowAlarmRules, showAlarmRules_);
    };
    DescribeScalingRulesRequest() = default ;
    DescribeScalingRulesRequest(const DescribeScalingRulesRequest &) = default ;
    DescribeScalingRulesRequest(DescribeScalingRulesRequest &&) = default ;
    DescribeScalingRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeScalingRulesRequest() = default ;
    DescribeScalingRulesRequest& operator=(const DescribeScalingRulesRequest &) = default ;
    DescribeScalingRulesRequest& operator=(DescribeScalingRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ownerAccount_ != nullptr
        && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->regionId_ != nullptr && this->resourceOwnerAccount_ != nullptr
        && this->resourceOwnerId_ != nullptr && this->scalingGroupId_ != nullptr && this->scalingRuleAris_ != nullptr && this->scalingRuleIds_ != nullptr && this->scalingRuleNames_ != nullptr
        && this->scalingRuleType_ != nullptr && this->showAlarmRules_ != nullptr; };
    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string ownerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline DescribeScalingRulesRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeScalingRulesRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeScalingRulesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeScalingRulesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeScalingRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline DescribeScalingRulesRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline DescribeScalingRulesRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // scalingGroupId Field Functions 
    bool hasScalingGroupId() const { return this->scalingGroupId_ != nullptr;};
    void deleteScalingGroupId() { this->scalingGroupId_ = nullptr;};
    inline string scalingGroupId() const { DARABONBA_PTR_GET_DEFAULT(scalingGroupId_, "") };
    inline DescribeScalingRulesRequest& setScalingGroupId(string scalingGroupId) { DARABONBA_PTR_SET_VALUE(scalingGroupId_, scalingGroupId) };


    // scalingRuleAris Field Functions 
    bool hasScalingRuleAris() const { return this->scalingRuleAris_ != nullptr;};
    void deleteScalingRuleAris() { this->scalingRuleAris_ = nullptr;};
    inline const vector<string> & scalingRuleAris() const { DARABONBA_PTR_GET_CONST(scalingRuleAris_, vector<string>) };
    inline vector<string> scalingRuleAris() { DARABONBA_PTR_GET(scalingRuleAris_, vector<string>) };
    inline DescribeScalingRulesRequest& setScalingRuleAris(const vector<string> & scalingRuleAris) { DARABONBA_PTR_SET_VALUE(scalingRuleAris_, scalingRuleAris) };
    inline DescribeScalingRulesRequest& setScalingRuleAris(vector<string> && scalingRuleAris) { DARABONBA_PTR_SET_RVALUE(scalingRuleAris_, scalingRuleAris) };


    // scalingRuleIds Field Functions 
    bool hasScalingRuleIds() const { return this->scalingRuleIds_ != nullptr;};
    void deleteScalingRuleIds() { this->scalingRuleIds_ = nullptr;};
    inline const vector<string> & scalingRuleIds() const { DARABONBA_PTR_GET_CONST(scalingRuleIds_, vector<string>) };
    inline vector<string> scalingRuleIds() { DARABONBA_PTR_GET(scalingRuleIds_, vector<string>) };
    inline DescribeScalingRulesRequest& setScalingRuleIds(const vector<string> & scalingRuleIds) { DARABONBA_PTR_SET_VALUE(scalingRuleIds_, scalingRuleIds) };
    inline DescribeScalingRulesRequest& setScalingRuleIds(vector<string> && scalingRuleIds) { DARABONBA_PTR_SET_RVALUE(scalingRuleIds_, scalingRuleIds) };


    // scalingRuleNames Field Functions 
    bool hasScalingRuleNames() const { return this->scalingRuleNames_ != nullptr;};
    void deleteScalingRuleNames() { this->scalingRuleNames_ = nullptr;};
    inline const vector<string> & scalingRuleNames() const { DARABONBA_PTR_GET_CONST(scalingRuleNames_, vector<string>) };
    inline vector<string> scalingRuleNames() { DARABONBA_PTR_GET(scalingRuleNames_, vector<string>) };
    inline DescribeScalingRulesRequest& setScalingRuleNames(const vector<string> & scalingRuleNames) { DARABONBA_PTR_SET_VALUE(scalingRuleNames_, scalingRuleNames) };
    inline DescribeScalingRulesRequest& setScalingRuleNames(vector<string> && scalingRuleNames) { DARABONBA_PTR_SET_RVALUE(scalingRuleNames_, scalingRuleNames) };


    // scalingRuleType Field Functions 
    bool hasScalingRuleType() const { return this->scalingRuleType_ != nullptr;};
    void deleteScalingRuleType() { this->scalingRuleType_ = nullptr;};
    inline string scalingRuleType() const { DARABONBA_PTR_GET_DEFAULT(scalingRuleType_, "") };
    inline DescribeScalingRulesRequest& setScalingRuleType(string scalingRuleType) { DARABONBA_PTR_SET_VALUE(scalingRuleType_, scalingRuleType) };


    // showAlarmRules Field Functions 
    bool hasShowAlarmRules() const { return this->showAlarmRules_ != nullptr;};
    void deleteShowAlarmRules() { this->showAlarmRules_ = nullptr;};
    inline bool showAlarmRules() const { DARABONBA_PTR_GET_DEFAULT(showAlarmRules_, false) };
    inline DescribeScalingRulesRequest& setShowAlarmRules(bool showAlarmRules) { DARABONBA_PTR_SET_VALUE(showAlarmRules_, showAlarmRules) };


  protected:
    std::shared_ptr<string> ownerAccount_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number. Pages start from page 1.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Maximum value: 50.
    // 
    // Default value: 10.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The region ID of the scaling group to which the scaling rules that you want to query belong.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The ID of the scaling group.
    std::shared_ptr<string> scalingGroupId_ = nullptr;
    // The unique identifiers of the scaling rules that you want to query.
    std::shared_ptr<vector<string>> scalingRuleAris_ = nullptr;
    // The IDs of the scaling rules that you want to query.
    std::shared_ptr<vector<string>> scalingRuleIds_ = nullptr;
    // The names of the scaling rules that you want to query.
    std::shared_ptr<vector<string>> scalingRuleNames_ = nullptr;
    // The type of the scaling rule. Valid values:
    // 
    // *   SimpleScalingRule: adjusts the number of ECS instances based on the values of the AdjustmentType and AdjustmentValue parameters.
    // *   TargetTrackingScalingRule: calculates the number of ECS instances that need to be scaled in a dynamic manner and maintains the value of a predefined metric close to the value of the TargetValue parameter.
    // *   StepScalingRule: scales ECS instances in steps based on the specified thresholds and metric values.
    // *   PredictiveScalingRule: uses machine learning to analyze historical monitoring data of the scaling group and predicts the future values of metrics. In addition, Auto Scaling automatically creates scheduled tasks to adjust the boundary values for the scaling group.
    std::shared_ptr<string> scalingRuleType_ = nullptr;
    // Specifies whether to return the event-triggered tasks that are associated with the scaling rule. Valid values:
    // 
    // *   true
    // *   false
    // 
    // Default value: false.
    std::shared_ptr<bool> showAlarmRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
