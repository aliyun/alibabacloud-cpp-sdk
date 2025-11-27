// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYRCELASTICSCALINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYRCELASTICSCALINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyRCElasticScalingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyRCElasticScalingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScalingEnabled, scalingEnabled_);
      DARABONBA_PTR_TO_JSON(ScheduledRule, scheduledRule_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyRCElasticScalingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScalingEnabled, scalingEnabled_);
      DARABONBA_PTR_FROM_JSON(ScheduledRule, scheduledRule_);
    };
    ModifyRCElasticScalingRequest() = default ;
    ModifyRCElasticScalingRequest(const ModifyRCElasticScalingRequest &) = default ;
    ModifyRCElasticScalingRequest(ModifyRCElasticScalingRequest &&) = default ;
    ModifyRCElasticScalingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyRCElasticScalingRequest() = default ;
    ModifyRCElasticScalingRequest& operator=(const ModifyRCElasticScalingRequest &) = default ;
    ModifyRCElasticScalingRequest& operator=(ModifyRCElasticScalingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dryRun_ == nullptr
        && return this->instanceId_ == nullptr && return this->instanceType_ == nullptr && return this->regionId_ == nullptr && return this->scalingEnabled_ == nullptr && return this->scheduledRule_ == nullptr; };
    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool dryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyRCElasticScalingRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyRCElasticScalingRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline ModifyRCElasticScalingRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyRCElasticScalingRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scalingEnabled Field Functions 
    bool hasScalingEnabled() const { return this->scalingEnabled_ != nullptr;};
    void deleteScalingEnabled() { this->scalingEnabled_ = nullptr;};
    inline bool scalingEnabled() const { DARABONBA_PTR_GET_DEFAULT(scalingEnabled_, false) };
    inline ModifyRCElasticScalingRequest& setScalingEnabled(bool scalingEnabled) { DARABONBA_PTR_SET_VALUE(scalingEnabled_, scalingEnabled) };


    // scheduledRule Field Functions 
    bool hasScheduledRule() const { return this->scheduledRule_ != nullptr;};
    void deleteScheduledRule() { this->scheduledRule_ = nullptr;};
    inline string scheduledRule() const { DARABONBA_PTR_GET_DEFAULT(scheduledRule_, "") };
    inline ModifyRCElasticScalingRequest& setScheduledRule(string scheduledRule) { DARABONBA_PTR_SET_VALUE(scheduledRule_, scheduledRule) };


  protected:
    std::shared_ptr<bool> dryRun_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<bool> scalingEnabled_ = nullptr;
    std::shared_ptr<string> scheduledRule_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
