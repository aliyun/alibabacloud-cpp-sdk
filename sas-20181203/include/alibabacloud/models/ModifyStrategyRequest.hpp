// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYSTRATEGYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYSTRATEGYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyStrategyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyStrategyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CustomType, customType_);
      DARABONBA_PTR_TO_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_TO_JSON(CycleStartTime, cycleStartTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RiskCustomParams, riskCustomParams_);
      DARABONBA_PTR_TO_JSON(RiskSubTypeName, riskSubTypeName_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyStrategyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomType, customType_);
      DARABONBA_PTR_FROM_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_FROM_JSON(CycleStartTime, cycleStartTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RiskCustomParams, riskCustomParams_);
      DARABONBA_PTR_FROM_JSON(RiskSubTypeName, riskSubTypeName_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
    };
    ModifyStrategyRequest() = default ;
    ModifyStrategyRequest(const ModifyStrategyRequest &) = default ;
    ModifyStrategyRequest(ModifyStrategyRequest &&) = default ;
    ModifyStrategyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyStrategyRequest() = default ;
    ModifyStrategyRequest& operator=(const ModifyStrategyRequest &) = default ;
    ModifyStrategyRequest& operator=(ModifyStrategyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customType_ == nullptr
        && this->cycleDays_ == nullptr && this->cycleStartTime_ == nullptr && this->endTime_ == nullptr && this->id_ == nullptr && this->name_ == nullptr
        && this->riskCustomParams_ == nullptr && this->riskSubTypeName_ == nullptr && this->sourceIp_ == nullptr && this->startTime_ == nullptr && this->targetType_ == nullptr; };
    // customType Field Functions 
    bool hasCustomType() const { return this->customType_ != nullptr;};
    void deleteCustomType() { this->customType_ = nullptr;};
    inline string getCustomType() const { DARABONBA_PTR_GET_DEFAULT(customType_, "") };
    inline ModifyStrategyRequest& setCustomType(string customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline string getCycleDays() const { DARABONBA_PTR_GET_DEFAULT(cycleDays_, "") };
    inline ModifyStrategyRequest& setCycleDays(string cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };


    // cycleStartTime Field Functions 
    bool hasCycleStartTime() const { return this->cycleStartTime_ != nullptr;};
    void deleteCycleStartTime() { this->cycleStartTime_ = nullptr;};
    inline string getCycleStartTime() const { DARABONBA_PTR_GET_DEFAULT(cycleStartTime_, "") };
    inline ModifyStrategyRequest& setCycleStartTime(string cycleStartTime) { DARABONBA_PTR_SET_VALUE(cycleStartTime_, cycleStartTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyStrategyRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyStrategyRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // riskCustomParams Field Functions 
    bool hasRiskCustomParams() const { return this->riskCustomParams_ != nullptr;};
    void deleteRiskCustomParams() { this->riskCustomParams_ = nullptr;};
    inline string getRiskCustomParams() const { DARABONBA_PTR_GET_DEFAULT(riskCustomParams_, "") };
    inline ModifyStrategyRequest& setRiskCustomParams(string riskCustomParams) { DARABONBA_PTR_SET_VALUE(riskCustomParams_, riskCustomParams) };


    // riskSubTypeName Field Functions 
    bool hasRiskSubTypeName() const { return this->riskSubTypeName_ != nullptr;};
    void deleteRiskSubTypeName() { this->riskSubTypeName_ = nullptr;};
    inline string getRiskSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(riskSubTypeName_, "") };
    inline ModifyStrategyRequest& setRiskSubTypeName(string riskSubTypeName) { DARABONBA_PTR_SET_VALUE(riskSubTypeName_, riskSubTypeName) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyStrategyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyStrategyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ModifyStrategyRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The policy type. Valid values:
    // 
    // - **custom**: custom policy.
    // - **common**: standard policy.
    // 
    // This parameter is required.
    shared_ptr<string> customType_ {};
    // The cycle of the baseline check. Valid values:
    // 
    // - **1**: Every 1 day.
    // - **3**: Every 3 days.
    // - **7**: Every 7 days.
    // - **30**: Every 30 days.
    // 
    // This parameter is required.
    shared_ptr<string> cycleDays_ {};
    // The start time of the baseline check. Valid values:
    // 
    // - **0**: The baseline check starts between 00:00 and 06:00.
    // - **6**: The baseline check starts between 06:00 and 12:00.
    // - **12**: The baseline check starts between 12:00 and 18:00.
    // - **18**: The baseline check starts between 18:00 and 24:00.
    // 
    // > This parameter is deprecated.
    // 
    // The value indicates the start hour of the daily check period, in hours.
    shared_ptr<string> cycleStartTime_ {};
    // The end time of the policy execution. Format: hh:mm:ss.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The ID of the baseline check policy.
    shared_ptr<string> id_ {};
    // The name of the baseline check policy.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The custom configuration of baseline check items. The value is in JSON format and contains the following parameters:
    // 
    // - **typeName**: The baseline name.
    // - **checkDetails**: The check details. The value is in JSON format.
    // 
    //     - **checkId**: The ID of the check item.
    //     - **rules**: The policy configuration. The value is in JSON format.
    // 
    //         - **ruleId**: The ID of the policy configuration.
    //         - **paramList**: The collection of policy parameter settings. The value is in JSON format.
    // 
    //             - **paramName**: The parameter name.
    //             - **value**: The parameter settings value.
    shared_ptr<string> riskCustomParams_ {};
    // The subtype of the check item. You can call the [DescribeRiskType](~~DescribeRiskType~~) operation to obtain the subtype.
    // 
    // This parameter is required.
    shared_ptr<string> riskSubTypeName_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
    // The start time of the policy execution. Format: hh:mm:ss.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The scan method of the policy. Valid values:
    // 
    // - **groupId**: group-based scan.
    // - **uuid**: asset-based scan.
    // 
    // This parameter is required.
    shared_ptr<string> targetType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
