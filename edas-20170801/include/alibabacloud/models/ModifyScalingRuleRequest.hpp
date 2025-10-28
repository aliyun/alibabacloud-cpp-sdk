// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSCALINGRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class ModifyScalingRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyScalingRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptEULA, acceptEULA_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InCondition, inCondition_);
      DARABONBA_PTR_TO_JSON(InCpu, inCpu_);
      DARABONBA_PTR_TO_JSON(InDuration, inDuration_);
      DARABONBA_PTR_TO_JSON(InEnable, inEnable_);
      DARABONBA_PTR_TO_JSON(InInstanceNum, inInstanceNum_);
      DARABONBA_PTR_TO_JSON(InLoad, inLoad_);
      DARABONBA_PTR_TO_JSON(InRT, inRT_);
      DARABONBA_PTR_TO_JSON(InStep, inStep_);
      DARABONBA_PTR_TO_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_TO_JSON(MultiAzPolicy, multiAzPolicy_);
      DARABONBA_PTR_TO_JSON(OutCPU, outCPU_);
      DARABONBA_PTR_TO_JSON(OutCondition, outCondition_);
      DARABONBA_PTR_TO_JSON(OutDuration, outDuration_);
      DARABONBA_PTR_TO_JSON(OutEnable, outEnable_);
      DARABONBA_PTR_TO_JSON(OutInstanceNum, outInstanceNum_);
      DARABONBA_PTR_TO_JSON(OutLoad, outLoad_);
      DARABONBA_PTR_TO_JSON(OutRT, outRT_);
      DARABONBA_PTR_TO_JSON(OutStep, outStep_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(ResourceFrom, resourceFrom_);
      DARABONBA_PTR_TO_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateInstanceId, templateInstanceId_);
      DARABONBA_PTR_TO_JSON(TemplateInstanceName, templateInstanceName_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyScalingRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptEULA, acceptEULA_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InCondition, inCondition_);
      DARABONBA_PTR_FROM_JSON(InCpu, inCpu_);
      DARABONBA_PTR_FROM_JSON(InDuration, inDuration_);
      DARABONBA_PTR_FROM_JSON(InEnable, inEnable_);
      DARABONBA_PTR_FROM_JSON(InInstanceNum, inInstanceNum_);
      DARABONBA_PTR_FROM_JSON(InLoad, inLoad_);
      DARABONBA_PTR_FROM_JSON(InRT, inRT_);
      DARABONBA_PTR_FROM_JSON(InStep, inStep_);
      DARABONBA_PTR_FROM_JSON(KeyPairName, keyPairName_);
      DARABONBA_PTR_FROM_JSON(MultiAzPolicy, multiAzPolicy_);
      DARABONBA_PTR_FROM_JSON(OutCPU, outCPU_);
      DARABONBA_PTR_FROM_JSON(OutCondition, outCondition_);
      DARABONBA_PTR_FROM_JSON(OutDuration, outDuration_);
      DARABONBA_PTR_FROM_JSON(OutEnable, outEnable_);
      DARABONBA_PTR_FROM_JSON(OutInstanceNum, outInstanceNum_);
      DARABONBA_PTR_FROM_JSON(OutLoad, outLoad_);
      DARABONBA_PTR_FROM_JSON(OutRT, outRT_);
      DARABONBA_PTR_FROM_JSON(OutStep, outStep_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(ResourceFrom, resourceFrom_);
      DARABONBA_PTR_FROM_JSON(ScalingPolicy, scalingPolicy_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateInstanceId, templateInstanceId_);
      DARABONBA_PTR_FROM_JSON(TemplateInstanceName, templateInstanceName_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    ModifyScalingRuleRequest() = default ;
    ModifyScalingRuleRequest(const ModifyScalingRuleRequest &) = default ;
    ModifyScalingRuleRequest(ModifyScalingRuleRequest &&) = default ;
    ModifyScalingRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyScalingRuleRequest() = default ;
    ModifyScalingRuleRequest& operator=(const ModifyScalingRuleRequest &) = default ;
    ModifyScalingRuleRequest& operator=(ModifyScalingRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptEULA_ == nullptr
        && return this->appId_ == nullptr && return this->groupId_ == nullptr && return this->inCondition_ == nullptr && return this->inCpu_ == nullptr && return this->inDuration_ == nullptr
        && return this->inEnable_ == nullptr && return this->inInstanceNum_ == nullptr && return this->inLoad_ == nullptr && return this->inRT_ == nullptr && return this->inStep_ == nullptr
        && return this->keyPairName_ == nullptr && return this->multiAzPolicy_ == nullptr && return this->outCPU_ == nullptr && return this->outCondition_ == nullptr && return this->outDuration_ == nullptr
        && return this->outEnable_ == nullptr && return this->outInstanceNum_ == nullptr && return this->outLoad_ == nullptr && return this->outRT_ == nullptr && return this->outStep_ == nullptr
        && return this->password_ == nullptr && return this->resourceFrom_ == nullptr && return this->scalingPolicy_ == nullptr && return this->templateId_ == nullptr && return this->templateInstanceId_ == nullptr
        && return this->templateInstanceName_ == nullptr && return this->templateVersion_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr; };
    // acceptEULA Field Functions 
    bool hasAcceptEULA() const { return this->acceptEULA_ != nullptr;};
    void deleteAcceptEULA() { this->acceptEULA_ = nullptr;};
    inline bool acceptEULA() const { DARABONBA_PTR_GET_DEFAULT(acceptEULA_, false) };
    inline ModifyScalingRuleRequest& setAcceptEULA(bool acceptEULA) { DARABONBA_PTR_SET_VALUE(acceptEULA_, acceptEULA) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyScalingRuleRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline ModifyScalingRuleRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // inCondition Field Functions 
    bool hasInCondition() const { return this->inCondition_ != nullptr;};
    void deleteInCondition() { this->inCondition_ = nullptr;};
    inline string inCondition() const { DARABONBA_PTR_GET_DEFAULT(inCondition_, "") };
    inline ModifyScalingRuleRequest& setInCondition(string inCondition) { DARABONBA_PTR_SET_VALUE(inCondition_, inCondition) };


    // inCpu Field Functions 
    bool hasInCpu() const { return this->inCpu_ != nullptr;};
    void deleteInCpu() { this->inCpu_ = nullptr;};
    inline int32_t inCpu() const { DARABONBA_PTR_GET_DEFAULT(inCpu_, 0) };
    inline ModifyScalingRuleRequest& setInCpu(int32_t inCpu) { DARABONBA_PTR_SET_VALUE(inCpu_, inCpu) };


    // inDuration Field Functions 
    bool hasInDuration() const { return this->inDuration_ != nullptr;};
    void deleteInDuration() { this->inDuration_ = nullptr;};
    inline int32_t inDuration() const { DARABONBA_PTR_GET_DEFAULT(inDuration_, 0) };
    inline ModifyScalingRuleRequest& setInDuration(int32_t inDuration) { DARABONBA_PTR_SET_VALUE(inDuration_, inDuration) };


    // inEnable Field Functions 
    bool hasInEnable() const { return this->inEnable_ != nullptr;};
    void deleteInEnable() { this->inEnable_ = nullptr;};
    inline bool inEnable() const { DARABONBA_PTR_GET_DEFAULT(inEnable_, false) };
    inline ModifyScalingRuleRequest& setInEnable(bool inEnable) { DARABONBA_PTR_SET_VALUE(inEnable_, inEnable) };


    // inInstanceNum Field Functions 
    bool hasInInstanceNum() const { return this->inInstanceNum_ != nullptr;};
    void deleteInInstanceNum() { this->inInstanceNum_ = nullptr;};
    inline int32_t inInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(inInstanceNum_, 0) };
    inline ModifyScalingRuleRequest& setInInstanceNum(int32_t inInstanceNum) { DARABONBA_PTR_SET_VALUE(inInstanceNum_, inInstanceNum) };


    // inLoad Field Functions 
    bool hasInLoad() const { return this->inLoad_ != nullptr;};
    void deleteInLoad() { this->inLoad_ = nullptr;};
    inline int32_t inLoad() const { DARABONBA_PTR_GET_DEFAULT(inLoad_, 0) };
    inline ModifyScalingRuleRequest& setInLoad(int32_t inLoad) { DARABONBA_PTR_SET_VALUE(inLoad_, inLoad) };


    // inRT Field Functions 
    bool hasInRT() const { return this->inRT_ != nullptr;};
    void deleteInRT() { this->inRT_ = nullptr;};
    inline int32_t inRT() const { DARABONBA_PTR_GET_DEFAULT(inRT_, 0) };
    inline ModifyScalingRuleRequest& setInRT(int32_t inRT) { DARABONBA_PTR_SET_VALUE(inRT_, inRT) };


    // inStep Field Functions 
    bool hasInStep() const { return this->inStep_ != nullptr;};
    void deleteInStep() { this->inStep_ = nullptr;};
    inline int32_t inStep() const { DARABONBA_PTR_GET_DEFAULT(inStep_, 0) };
    inline ModifyScalingRuleRequest& setInStep(int32_t inStep) { DARABONBA_PTR_SET_VALUE(inStep_, inStep) };


    // keyPairName Field Functions 
    bool hasKeyPairName() const { return this->keyPairName_ != nullptr;};
    void deleteKeyPairName() { this->keyPairName_ = nullptr;};
    inline string keyPairName() const { DARABONBA_PTR_GET_DEFAULT(keyPairName_, "") };
    inline ModifyScalingRuleRequest& setKeyPairName(string keyPairName) { DARABONBA_PTR_SET_VALUE(keyPairName_, keyPairName) };


    // multiAzPolicy Field Functions 
    bool hasMultiAzPolicy() const { return this->multiAzPolicy_ != nullptr;};
    void deleteMultiAzPolicy() { this->multiAzPolicy_ = nullptr;};
    inline string multiAzPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAzPolicy_, "") };
    inline ModifyScalingRuleRequest& setMultiAzPolicy(string multiAzPolicy) { DARABONBA_PTR_SET_VALUE(multiAzPolicy_, multiAzPolicy) };


    // outCPU Field Functions 
    bool hasOutCPU() const { return this->outCPU_ != nullptr;};
    void deleteOutCPU() { this->outCPU_ = nullptr;};
    inline int32_t outCPU() const { DARABONBA_PTR_GET_DEFAULT(outCPU_, 0) };
    inline ModifyScalingRuleRequest& setOutCPU(int32_t outCPU) { DARABONBA_PTR_SET_VALUE(outCPU_, outCPU) };


    // outCondition Field Functions 
    bool hasOutCondition() const { return this->outCondition_ != nullptr;};
    void deleteOutCondition() { this->outCondition_ = nullptr;};
    inline string outCondition() const { DARABONBA_PTR_GET_DEFAULT(outCondition_, "") };
    inline ModifyScalingRuleRequest& setOutCondition(string outCondition) { DARABONBA_PTR_SET_VALUE(outCondition_, outCondition) };


    // outDuration Field Functions 
    bool hasOutDuration() const { return this->outDuration_ != nullptr;};
    void deleteOutDuration() { this->outDuration_ = nullptr;};
    inline int32_t outDuration() const { DARABONBA_PTR_GET_DEFAULT(outDuration_, 0) };
    inline ModifyScalingRuleRequest& setOutDuration(int32_t outDuration) { DARABONBA_PTR_SET_VALUE(outDuration_, outDuration) };


    // outEnable Field Functions 
    bool hasOutEnable() const { return this->outEnable_ != nullptr;};
    void deleteOutEnable() { this->outEnable_ = nullptr;};
    inline bool outEnable() const { DARABONBA_PTR_GET_DEFAULT(outEnable_, false) };
    inline ModifyScalingRuleRequest& setOutEnable(bool outEnable) { DARABONBA_PTR_SET_VALUE(outEnable_, outEnable) };


    // outInstanceNum Field Functions 
    bool hasOutInstanceNum() const { return this->outInstanceNum_ != nullptr;};
    void deleteOutInstanceNum() { this->outInstanceNum_ = nullptr;};
    inline int32_t outInstanceNum() const { DARABONBA_PTR_GET_DEFAULT(outInstanceNum_, 0) };
    inline ModifyScalingRuleRequest& setOutInstanceNum(int32_t outInstanceNum) { DARABONBA_PTR_SET_VALUE(outInstanceNum_, outInstanceNum) };


    // outLoad Field Functions 
    bool hasOutLoad() const { return this->outLoad_ != nullptr;};
    void deleteOutLoad() { this->outLoad_ = nullptr;};
    inline int32_t outLoad() const { DARABONBA_PTR_GET_DEFAULT(outLoad_, 0) };
    inline ModifyScalingRuleRequest& setOutLoad(int32_t outLoad) { DARABONBA_PTR_SET_VALUE(outLoad_, outLoad) };


    // outRT Field Functions 
    bool hasOutRT() const { return this->outRT_ != nullptr;};
    void deleteOutRT() { this->outRT_ = nullptr;};
    inline int32_t outRT() const { DARABONBA_PTR_GET_DEFAULT(outRT_, 0) };
    inline ModifyScalingRuleRequest& setOutRT(int32_t outRT) { DARABONBA_PTR_SET_VALUE(outRT_, outRT) };


    // outStep Field Functions 
    bool hasOutStep() const { return this->outStep_ != nullptr;};
    void deleteOutStep() { this->outStep_ = nullptr;};
    inline int32_t outStep() const { DARABONBA_PTR_GET_DEFAULT(outStep_, 0) };
    inline ModifyScalingRuleRequest& setOutStep(int32_t outStep) { DARABONBA_PTR_SET_VALUE(outStep_, outStep) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string password() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ModifyScalingRuleRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // resourceFrom Field Functions 
    bool hasResourceFrom() const { return this->resourceFrom_ != nullptr;};
    void deleteResourceFrom() { this->resourceFrom_ = nullptr;};
    inline string resourceFrom() const { DARABONBA_PTR_GET_DEFAULT(resourceFrom_, "") };
    inline ModifyScalingRuleRequest& setResourceFrom(string resourceFrom) { DARABONBA_PTR_SET_VALUE(resourceFrom_, resourceFrom) };


    // scalingPolicy Field Functions 
    bool hasScalingPolicy() const { return this->scalingPolicy_ != nullptr;};
    void deleteScalingPolicy() { this->scalingPolicy_ = nullptr;};
    inline string scalingPolicy() const { DARABONBA_PTR_GET_DEFAULT(scalingPolicy_, "") };
    inline ModifyScalingRuleRequest& setScalingPolicy(string scalingPolicy) { DARABONBA_PTR_SET_VALUE(scalingPolicy_, scalingPolicy) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ModifyScalingRuleRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateInstanceId Field Functions 
    bool hasTemplateInstanceId() const { return this->templateInstanceId_ != nullptr;};
    void deleteTemplateInstanceId() { this->templateInstanceId_ = nullptr;};
    inline string templateInstanceId() const { DARABONBA_PTR_GET_DEFAULT(templateInstanceId_, "") };
    inline ModifyScalingRuleRequest& setTemplateInstanceId(string templateInstanceId) { DARABONBA_PTR_SET_VALUE(templateInstanceId_, templateInstanceId) };


    // templateInstanceName Field Functions 
    bool hasTemplateInstanceName() const { return this->templateInstanceName_ != nullptr;};
    void deleteTemplateInstanceName() { this->templateInstanceName_ = nullptr;};
    inline string templateInstanceName() const { DARABONBA_PTR_GET_DEFAULT(templateInstanceName_, "") };
    inline ModifyScalingRuleRequest& setTemplateInstanceName(string templateInstanceName) { DARABONBA_PTR_SET_VALUE(templateInstanceName_, templateInstanceName) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline int32_t templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, 0) };
    inline ModifyScalingRuleRequest& setTemplateVersion(int32_t templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline ModifyScalingRuleRequest& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline ModifyScalingRuleRequest& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // Set the value to true if scale-outs are allowed.
    std::shared_ptr<bool> acceptEULA_ = nullptr;
    // The ID of the application.
    // 
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    // The ID of the instance group to which the application is deployed.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The relationship among the conditions that trigger a scale-in.
    // 
    // *   OR: one of the conditions
    // *   AND: all conditions
    std::shared_ptr<string> inCondition_ = nullptr;
    // The CPU utilization that triggers a scale-in.
    std::shared_ptr<int32_t> inCpu_ = nullptr;
    // The duration in which the metric threshold is exceeded. Unit: minutes.
    std::shared_ptr<int32_t> inDuration_ = nullptr;
    // Specifies whether to allow scale-ins.
    // 
    // *   true: allows scale-ins.
    // *   false: does not allow scale-ins.
    std::shared_ptr<bool> inEnable_ = nullptr;
    // The minimum number of instances that must be retained in each group when a scale-in is performed.
    std::shared_ptr<int32_t> inInstanceNum_ = nullptr;
    // The system load that triggers a scale-in.
    std::shared_ptr<int32_t> inLoad_ = nullptr;
    // The minimum service latency that triggers a scale-in. The lower limit is 0. Unit: milliseconds.
    std::shared_ptr<int32_t> inRT_ = nullptr;
    // The number of instances that are removed during each scale-in.
    std::shared_ptr<int32_t> inStep_ = nullptr;
    // The key pair that is used to log on to the instance. This parameter takes effect only if you choose to create instances based on the specifications of an existing instance during a scale-out.
    std::shared_ptr<string> keyPairName_ = nullptr;
    // The multi-zone scaling policy. Valid values:
    // 
    // *   PRIORITY: The vSwitch that is first selected has the highest priority.
    // *   BALANCE: This policy evenly distributes instances across zones in which the vSwitches reside.
    std::shared_ptr<string> multiAzPolicy_ = nullptr;
    // The CPU utilization that triggers a scale-out.
    std::shared_ptr<int32_t> outCPU_ = nullptr;
    // The relationship among the conditions that trigger a scale-out.
    // 
    // *   OR: one of the conditions
    // *   AND: all conditions
    std::shared_ptr<string> outCondition_ = nullptr;
    // The duration in which the metric threshold is exceeded. Unit: minutes.
    std::shared_ptr<int32_t> outDuration_ = nullptr;
    // Specifies whether to allow scale-outs.
    std::shared_ptr<bool> outEnable_ = nullptr;
    // The maximum number of instances in each group when a scale-out is performed.
    std::shared_ptr<int32_t> outInstanceNum_ = nullptr;
    // The system load that triggers a scale-out.
    std::shared_ptr<int32_t> outLoad_ = nullptr;
    // The minimum service latency that triggers a scale-out. The lower limit is 0. Unit: milliseconds.
    std::shared_ptr<int32_t> outRT_ = nullptr;
    // The number of instances that are added during each scale-out.
    std::shared_ptr<int32_t> outStep_ = nullptr;
    // The password that is used to log on to the instance. This parameter takes effect only if you choose to create instances based on the specifications of an existing instance during a scale-out.
    std::shared_ptr<string> password_ = nullptr;
    // The source of the instance to be added during a scale-out. Valid values:
    // 
    // *   NEW: elastic resources
    // *   AVAILABLE: existing resources If you prefer existing resources to elastic resources, set this parameter to AVAILABLE_FIRST.
    // 
    // If you set this parameter to NEW or AVAILABLE_FIRST, you must specify the auto-scaling parameters. If you set this parameter to NEW, instances are created based on a launch template or the specifications of an existing instance.
    std::shared_ptr<string> resourceFrom_ = nullptr;
    // The instance handling mode during a scale-in. Valid values:
    // 
    // *   release: When a scale-in is performed, instances that are no longer used are released.
    // *   recycle: When a scale-in is performed, instances that are no longer used are stopped and reclaimed.
    std::shared_ptr<string> scalingPolicy_ = nullptr;
    // The ID of the launch template that is used to create instances during a scale-out. This parameter takes effect only if you set the OutEnable parameter to true. This parameter takes precedence over the TemplateInstanceId parameter.
    std::shared_ptr<string> templateId_ = nullptr;
    // The ID of the instance whose specifications are used to create instances during a scale-out. This parameter is valid only when you set the OutEnable parameter to true.
    std::shared_ptr<string> templateInstanceId_ = nullptr;
    // The name of the instance whose specifications are used to create instances during a scale-out. This parameter takes effect only if you specify the TemplateInstanceId parameter.
    std::shared_ptr<string> templateInstanceName_ = nullptr;
    // The version of the launch template that is used to create instances during a scale-out. This parameter takes effect only if you set the OutEnable parameter to true. To use the default template version, set this parameter to `-1`. Otherwise, set this parameter to the version that you want to use.
    std::shared_ptr<int32_t> templateVersion_ = nullptr;
    // The IDs of the vSwitches that are associated with the VPC. Separate multiple IDs with commas (,).
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    // The ID of the virtual private cloud (VPC) that is associated with the instances created based on a launch template or the specifications of an existing instance.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
