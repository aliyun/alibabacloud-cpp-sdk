// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSCALINGRULESRESPONSEBODYDATARULELISTRULE_HPP_
#define ALIBABACLOUD_MODELS_GETSCALINGRULESRESPONSEBODYDATARULELISTRULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Edas20170801
{
namespace Models
{
  class GetScalingRulesResponseBodyDataRuleListRule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetScalingRulesResponseBodyDataRuleListRule& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(Cond, cond_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(InstNum, instNum_);
      DARABONBA_PTR_TO_JSON(LoadNum, loadNum_);
      DARABONBA_PTR_TO_JSON(MetricType, metricType_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(MultiAzPolicy, multiAzPolicy_);
      DARABONBA_PTR_TO_JSON(ResourceFrom, resourceFrom_);
      DARABONBA_PTR_TO_JSON(Rt, rt_);
      DARABONBA_PTR_TO_JSON(SpecId, specId_);
      DARABONBA_PTR_TO_JSON(Step, step_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
    };
    friend void from_json(const Darabonba::Json& j, GetScalingRulesResponseBodyDataRuleListRule& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(Cond, cond_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(InstNum, instNum_);
      DARABONBA_PTR_FROM_JSON(LoadNum, loadNum_);
      DARABONBA_PTR_FROM_JSON(MetricType, metricType_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(MultiAzPolicy, multiAzPolicy_);
      DARABONBA_PTR_FROM_JSON(ResourceFrom, resourceFrom_);
      DARABONBA_PTR_FROM_JSON(Rt, rt_);
      DARABONBA_PTR_FROM_JSON(SpecId, specId_);
      DARABONBA_PTR_FROM_JSON(Step, step_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateVersion, templateVersion_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VSwitchIds, vSwitchIds_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
    };
    GetScalingRulesResponseBodyDataRuleListRule() = default ;
    GetScalingRulesResponseBodyDataRuleListRule(const GetScalingRulesResponseBodyDataRuleListRule &) = default ;
    GetScalingRulesResponseBodyDataRuleListRule(GetScalingRulesResponseBodyDataRuleListRule &&) = default ;
    GetScalingRulesResponseBodyDataRuleListRule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetScalingRulesResponseBodyDataRuleListRule() = default ;
    GetScalingRulesResponseBodyDataRuleListRule& operator=(const GetScalingRulesResponseBodyDataRuleListRule &) = default ;
    GetScalingRulesResponseBodyDataRuleListRule& operator=(GetScalingRulesResponseBodyDataRuleListRule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->cond_ == nullptr && return this->cpu_ == nullptr && return this->createTime_ == nullptr && return this->duration_ == nullptr && return this->enable_ == nullptr
        && return this->groupId_ == nullptr && return this->instNum_ == nullptr && return this->loadNum_ == nullptr && return this->metricType_ == nullptr && return this->mode_ == nullptr
        && return this->multiAzPolicy_ == nullptr && return this->resourceFrom_ == nullptr && return this->rt_ == nullptr && return this->specId_ == nullptr && return this->step_ == nullptr
        && return this->templateId_ == nullptr && return this->templateVersion_ == nullptr && return this->updateTime_ == nullptr && return this->vSwitchIds_ == nullptr && return this->vpcId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // cond Field Functions 
    bool hasCond() const { return this->cond_ != nullptr;};
    void deleteCond() { this->cond_ = nullptr;};
    inline string cond() const { DARABONBA_PTR_GET_DEFAULT(cond_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setCond(string cond) { DARABONBA_PTR_SET_VALUE(cond_, cond) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // instNum Field Functions 
    bool hasInstNum() const { return this->instNum_ != nullptr;};
    void deleteInstNum() { this->instNum_ = nullptr;};
    inline int32_t instNum() const { DARABONBA_PTR_GET_DEFAULT(instNum_, 0) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setInstNum(int32_t instNum) { DARABONBA_PTR_SET_VALUE(instNum_, instNum) };


    // loadNum Field Functions 
    bool hasLoadNum() const { return this->loadNum_ != nullptr;};
    void deleteLoadNum() { this->loadNum_ = nullptr;};
    inline int32_t loadNum() const { DARABONBA_PTR_GET_DEFAULT(loadNum_, 0) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setLoadNum(int32_t loadNum) { DARABONBA_PTR_SET_VALUE(loadNum_, loadNum) };


    // metricType Field Functions 
    bool hasMetricType() const { return this->metricType_ != nullptr;};
    void deleteMetricType() { this->metricType_ = nullptr;};
    inline string metricType() const { DARABONBA_PTR_GET_DEFAULT(metricType_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setMetricType(string metricType) { DARABONBA_PTR_SET_VALUE(metricType_, metricType) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // multiAzPolicy Field Functions 
    bool hasMultiAzPolicy() const { return this->multiAzPolicy_ != nullptr;};
    void deleteMultiAzPolicy() { this->multiAzPolicy_ = nullptr;};
    inline string multiAzPolicy() const { DARABONBA_PTR_GET_DEFAULT(multiAzPolicy_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setMultiAzPolicy(string multiAzPolicy) { DARABONBA_PTR_SET_VALUE(multiAzPolicy_, multiAzPolicy) };


    // resourceFrom Field Functions 
    bool hasResourceFrom() const { return this->resourceFrom_ != nullptr;};
    void deleteResourceFrom() { this->resourceFrom_ = nullptr;};
    inline string resourceFrom() const { DARABONBA_PTR_GET_DEFAULT(resourceFrom_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setResourceFrom(string resourceFrom) { DARABONBA_PTR_SET_VALUE(resourceFrom_, resourceFrom) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline int32_t rt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setRt(int32_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    // specId Field Functions 
    bool hasSpecId() const { return this->specId_ != nullptr;};
    void deleteSpecId() { this->specId_ = nullptr;};
    inline string specId() const { DARABONBA_PTR_GET_DEFAULT(specId_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setSpecId(string specId) { DARABONBA_PTR_SET_VALUE(specId_, specId) };


    // step Field Functions 
    bool hasStep() const { return this->step_ != nullptr;};
    void deleteStep() { this->step_ = nullptr;};
    inline int32_t step() const { DARABONBA_PTR_GET_DEFAULT(step_, 0) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setStep(int32_t step) { DARABONBA_PTR_SET_VALUE(step_, step) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateVersion Field Functions 
    bool hasTemplateVersion() const { return this->templateVersion_ != nullptr;};
    void deleteTemplateVersion() { this->templateVersion_ = nullptr;};
    inline int32_t templateVersion() const { DARABONBA_PTR_GET_DEFAULT(templateVersion_, 0) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setTemplateVersion(int32_t templateVersion) { DARABONBA_PTR_SET_VALUE(templateVersion_, templateVersion) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetScalingRulesResponseBodyDataRuleListRule& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // vSwitchIds Field Functions 
    bool hasVSwitchIds() const { return this->vSwitchIds_ != nullptr;};
    void deleteVSwitchIds() { this->vSwitchIds_ = nullptr;};
    inline string vSwitchIds() const { DARABONBA_PTR_GET_DEFAULT(vSwitchIds_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setVSwitchIds(string vSwitchIds) { DARABONBA_PTR_SET_VALUE(vSwitchIds_, vSwitchIds) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline GetScalingRulesResponseBodyDataRuleListRule& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


  protected:
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The relationship among the conditions that trigger the scaling rule.
    // 
    // *   OR: one of the conditions
    // *   AND: all conditions
    std::shared_ptr<string> cond_ = nullptr;
    // The minimum CPU utilization that triggers the scaling rule.
    std::shared_ptr<int32_t> cpu_ = nullptr;
    // The time when the scaling rule was created. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The duration of the scaling rule. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int32_t> duration_ = nullptr;
    // Indicates whether scale-ins or scale-outs are allowed. Valid values:
    // 
    // *   true: Scale-ins or scale-outs are allowed.
    // *   false: Scale-ins or scale-outs are disallowed.
    std::shared_ptr<bool> enable_ = nullptr;
    // The ID of the instance group to which the application is deployed.
    std::shared_ptr<string> groupId_ = nullptr;
    // The maximum number of instances in the group when a scale-out is performed, or the minimum number of instances in the group when a scale-in is performed.
    std::shared_ptr<int32_t> instNum_ = nullptr;
    // The system load that triggers the scaling rule. The system load is evaluated based on the number of processes that are being executed by CPUs and the number of processes that wait to be executed by CPUs.
    std::shared_ptr<int32_t> loadNum_ = nullptr;
    // The type of the metric.
    std::shared_ptr<string> metricType_ = nullptr;
    // The type of the scaling rule. Valid values:
    // 
    // *   SCALE_IN: scale-in rules
    // *   SCALE_OUT: scale-out rules
    std::shared_ptr<string> mode_ = nullptr;
    // The policy of auto scaling across multiple zones. Valid values:
    // 
    // *   PRIORITY: The vSwitch that is first selected has the highest priority.
    // *   BALANCE: This policy evenly distributes instances across zones in which the vSwitches reside.
    std::shared_ptr<string> multiAzPolicy_ = nullptr;
    // The source of the instance that you want to add during a scale-out. Valid values:
    // 
    // *   NEW: Elastic resources are used.
    // *   AVAILABLE: The existing resources are used.
    // *   AVAILABLE_FIRST: The existing resources are used first.
    std::shared_ptr<string> resourceFrom_ = nullptr;
    // The service latency that triggers the scaling rule. Unit: milliseconds.
    std::shared_ptr<int32_t> rt_ = nullptr;
    // The ID of the specification.
    std::shared_ptr<string> specId_ = nullptr;
    // The number of instances that are added during each scale-out or removed during each scale-in.
    std::shared_ptr<int32_t> step_ = nullptr;
    // The ID of the launch template.
    std::shared_ptr<string> templateId_ = nullptr;
    // The version of the launch template.
    std::shared_ptr<int32_t> templateVersion_ = nullptr;
    // The time when the scaling rule was last modified. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
    // The IDs of the vSwitches. The IDs of multiple vSwitches are separated by commas (,).
    std::shared_ptr<string> vSwitchIds_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Edas20170801
#endif
