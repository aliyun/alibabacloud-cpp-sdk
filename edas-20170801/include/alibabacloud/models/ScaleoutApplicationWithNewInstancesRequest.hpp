// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCALEOUTAPPLICATIONWITHNEWINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SCALEOUTAPPLICATIONWITHNEWINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ScaleoutApplicationWithNewInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScaleoutApplicationWithNewInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_TO_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstanceChargePeriod, instanceChargePeriod_);
      DARABONBA_PTR_TO_JSON(InstanceChargePeriodUnit, instanceChargePeriodUnit_);
      DARABONBA_PTR_TO_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_TO_JSON(ScalingNum, scalingNum_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateInstanceId, templateInstanceId_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
    };
    friend void from_json(const Darabonba::Json& j, ScaleoutApplicationWithNewInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AutoRenew, autoRenew_);
      DARABONBA_PTR_FROM_JSON(AutoRenewPeriod, autoRenewPeriod_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstanceChargePeriod, instanceChargePeriod_);
      DARABONBA_PTR_FROM_JSON(InstanceChargePeriodUnit, instanceChargePeriodUnit_);
      DARABONBA_PTR_FROM_JSON(InstanceChargeType, instanceChargeType_);
      DARABONBA_PTR_FROM_JSON(ScalingNum, scalingNum_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateInstanceId, templateInstanceId_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
    };
    ScaleoutApplicationWithNewInstancesRequest() = default ;
    ScaleoutApplicationWithNewInstancesRequest(const ScaleoutApplicationWithNewInstancesRequest &) = default ;
    ScaleoutApplicationWithNewInstancesRequest(ScaleoutApplicationWithNewInstancesRequest &&) = default ;
    ScaleoutApplicationWithNewInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScaleoutApplicationWithNewInstancesRequest() = default ;
    ScaleoutApplicationWithNewInstancesRequest& operator=(const ScaleoutApplicationWithNewInstancesRequest &) = default ;
    ScaleoutApplicationWithNewInstancesRequest& operator=(ScaleoutApplicationWithNewInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->autoRenew_ == nullptr && return this->autoRenewPeriod_ == nullptr && return this->clusterId_ == nullptr && return this->groupId_ == nullptr && return this->instanceChargePeriod_ == nullptr
        && return this->instanceChargePeriodUnit_ == nullptr && return this->instanceChargeType_ == nullptr && return this->scalingNum_ == nullptr && return this->scalingPolicy_ == nullptr && return this->templateId_ == nullptr
        && return this->templateInstanceId_ == nullptr && return this->templateVersion_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // autoRenew Field Functions 
    bool hasAutoRenew() const { return this->autoRenew_ != nullptr;};
    void deleteAutoRenew() { this->autoRenew_ = nullptr;};
    inline bool autoRenew() const { DARABONBA_PTR_GET_DEFAULT(autoRenew_, false) };
    inline ScaleoutApplicationWithNewInstancesRequest& setAutoRenew(bool autoRenew) { DARABONBA_PTR_SET_VALUE(autoRenew_, autoRenew) };


    // autoRenewPeriod Field Functions 
    bool hasAutoRenewPeriod() const { return this->autoRenewPeriod_ != nullptr;};
    void deleteAutoRenewPeriod() { this->autoRenewPeriod_ = nullptr;};
    inline int32_t autoRenewPeriod() const { DARABONBA_PTR_GET_DEFAULT(autoRenewPeriod_, 0) };
    inline ScaleoutApplicationWithNewInstancesRequest& setAutoRenewPeriod(int32_t autoRenewPeriod) { DARABONBA_PTR_SET_VALUE(autoRenewPeriod_, autoRenewPeriod) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instanceChargePeriod Field Functions 
    bool hasInstanceChargePeriod() const { return this->instanceChargePeriod_ != nullptr;};
    void deleteInstanceChargePeriod() { this->instanceChargePeriod_ = nullptr;};
    inline int32_t instanceChargePeriod() const { DARABONBA_PTR_GET_DEFAULT(instanceChargePeriod_, 0) };
    inline ScaleoutApplicationWithNewInstancesRequest& setInstanceChargePeriod(int32_t instanceChargePeriod) { DARABONBA_PTR_SET_VALUE(instanceChargePeriod_, instanceChargePeriod) };


    // instanceChargePeriodUnit Field Functions 
    bool hasInstanceChargePeriodUnit() const { return this->instanceChargePeriodUnit_ != nullptr;};
    void deleteInstanceChargePeriodUnit() { this->instanceChargePeriodUnit_ = nullptr;};
    inline string instanceChargePeriodUnit() const { DARABONBA_PTR_GET_DEFAULT(instanceChargePeriodUnit_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setInstanceChargePeriodUnit(string instanceChargePeriodUnit) { DARABONBA_PTR_SET_VALUE(instanceChargePeriodUnit_, instanceChargePeriodUnit) };


    // instanceChargeType Field Functions 
    bool hasInstanceChargeType() const { return this->instanceChargeType_ != nullptr;};
    void deleteInstanceChargeType() { this->instanceChargeType_ = nullptr;};
    inline string instanceChargeType() const { DARABONBA_PTR_GET_DEFAULT(instanceChargeType_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setInstanceChargeType(string instanceChargeType) { DARABONBA_PTR_SET_VALUE(instanceChargeType_, instanceChargeType) };


    // scalingNum Field Functions 
    bool hasScalingNum() const { return this->scalingNum_ != nullptr;};
    void deleteScalingNum() { this->scalingNum_ = nullptr;};
    inline int32_t scalingNum() const { DARABONBA_PTR_GET_DEFAULT(scalingNum_, 0) };
    inline ScaleoutApplicationWithNewInstancesRequest& setScalingNum(int32_t scalingNum) { DARABONBA_PTR_SET_VALUE(scalingNum_, scalingNum) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateInstanceId Field Functions 
    bool hasTemplateInstanceId() const { return this->templateInstanceId_ != nullptr;};
    void deleteTemplateInstanceId() { this->templateInstanceId_ = nullptr;};
    inline string templateInstanceId() const { DARABONBA_PTR_GET_DEFAULT(templateInstanceId_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setTemplateInstanceId(string templateInstanceId) { DARABONBA_PTR_SET_VALUE(templateInstanceId_, templateInstanceId) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline string templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, "") };
    inline ScaleoutApplicationWithNewInstancesRequest& setTemplateVersion(string templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


  protected:
    // The ID of the application that you want to scale out. You can call the ListApplication operation to query the application ID. For more information, see [ListApplication](https://help.aliyun.com/document_detail/149390.html).
    std::shared_ptr<string> appId_ = nullptr;
    // Specifies whether to enable auto-renewal. This parameter takes effect only when the InstanceChargeType parameter is set to PrePaid. Valid values:
    // 
    // *   true: enables auto-renewal.
    // *   false: does not enable auto-renewal. This is the default value.
    std::shared_ptr<bool> autoRenew_ = nullptr;
    // The auto-renewal period. Valid values:
    // 
    // *   If the InstanceChargePeriodUnit parameter is set to Week, the valid values of the AutoRenewPeriod parameter are 1, 2, and 3.
    // *   If the InstanceChargePeriodUnit parameter is set to Month, the valid values of the AutoRenewPeriod parameter are 1, 2, 3, 6, 12, 24, 36, 48, and 60.
    // 
    // Default value: 1.
    std::shared_ptr<int32_t> autoRenewPeriod_ = nullptr;
    // The ID of the cluster to which you want to add ECS instances. If the application and application instance group for the scale-out are specified, this parameter is ignored.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The ID of the instance group that you want to scale out. You can call the ListDeployGroup operation to query the group ID. For more information, see [ListDeployGroup](https://help.aliyun.com/document_detail/62077.html).
    std::shared_ptr<string> groupId_ = nullptr;
    // The duration of the subscription. The unit of the subscription duration is specified by the InstanceChargePeriodUnit parameter. This parameter takes effect only when the InstanceChargeType parameter is set to PrePaid.
    // 
    // *   If the InstanceChargePeriodUnit parameter is set to Week, the valid values of the InstanceChargePeriod parameter are 1, 2, 3, and 4.
    // *   If the InstanceChargePeriodUnit parameter is set to Month, the valid values of the InstanceChargePeriod parameter are 1, 2, 3, 4, 5, 6, 7, 8, 9, 12, 24, 36, 48, and 60.
    std::shared_ptr<int32_t> instanceChargePeriod_ = nullptr;
    // The unit of the subscription period. Valid values:
    // 
    // *   Week: billed on a weekly basis.
    // *   Month: billed on a monthly basis. This is the default value.
    std::shared_ptr<string> instanceChargePeriodUnit_ = nullptr;
    // The billing method of the instance. Valid values:
    // 
    // *   PrePaid: subscription.
    // *   PostPaid: pay-as-you-go. This is the default value.
    std::shared_ptr<string> instanceChargeType_ = nullptr;
    // The number of instances to be added for the scale-out.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> scalingNum_ = nullptr;
    // The instance reclaim mode of the scaling group. Valid values:
    // 
    // *   recycle: economical mode
    // *   release: release mode
    // 
    // For more information about how to remove instances from a specified scaling group, see [RemoveInstances](https://help.aliyun.com/document_detail/25955.html).
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    // The ID of the ECS instance launch template. You can call the DescribeLaunchTemplates operation to query the launch template ID. For more information, see [DescribeLaunchTemplates](https://help.aliyun.com/document_detail/73759.html).
    std::shared_ptr<string> templateId_ = nullptr;
    // The ID of the existing ECS instance used for the scale-out. If this parameter is specified, the specifications and configurations of the specified ECS instance are used as a template to purchase new instances.
    std::shared_ptr<string> templateInstanceId_ = nullptr;
    // The version of the ECS instance launch template. You can call the DescribeLaunchTemplateVersions operation to query the launch template version. For more information, see [DescribeLaunchTemplateVersions](https://help.aliyun.com/document_detail/73761.html).
    // 
    // > If you set this parameter to `-1`, the default launch template version is used.
    std::shared_ptr<string> templateVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
