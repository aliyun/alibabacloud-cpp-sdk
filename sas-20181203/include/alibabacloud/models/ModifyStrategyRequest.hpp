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
    virtual bool empty() const override { this->customType_ != nullptr
        && this->cycleDays_ != nullptr && this->cycleStartTime_ != nullptr && this->endTime_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->riskCustomParams_ != nullptr && this->riskSubTypeName_ != nullptr && this->sourceIp_ != nullptr && this->startTime_ != nullptr && this->targetType_ != nullptr; };
    // customType Field Functions 
    bool hasCustomType() const { return this->customType_ != nullptr;};
    void deleteCustomType() { this->customType_ = nullptr;};
    inline string customType() const { DARABONBA_PTR_GET_DEFAULT(customType_, "") };
    inline ModifyStrategyRequest& setCustomType(string customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline string cycleDays() const { DARABONBA_PTR_GET_DEFAULT(cycleDays_, "") };
    inline ModifyStrategyRequest& setCycleDays(string cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };


    // cycleStartTime Field Functions 
    bool hasCycleStartTime() const { return this->cycleStartTime_ != nullptr;};
    void deleteCycleStartTime() { this->cycleStartTime_ = nullptr;};
    inline string cycleStartTime() const { DARABONBA_PTR_GET_DEFAULT(cycleStartTime_, "") };
    inline ModifyStrategyRequest& setCycleStartTime(string cycleStartTime) { DARABONBA_PTR_SET_VALUE(cycleStartTime_, cycleStartTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ModifyStrategyRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyStrategyRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ModifyStrategyRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // riskCustomParams Field Functions 
    bool hasRiskCustomParams() const { return this->riskCustomParams_ != nullptr;};
    void deleteRiskCustomParams() { this->riskCustomParams_ = nullptr;};
    inline string riskCustomParams() const { DARABONBA_PTR_GET_DEFAULT(riskCustomParams_, "") };
    inline ModifyStrategyRequest& setRiskCustomParams(string riskCustomParams) { DARABONBA_PTR_SET_VALUE(riskCustomParams_, riskCustomParams) };


    // riskSubTypeName Field Functions 
    bool hasRiskSubTypeName() const { return this->riskSubTypeName_ != nullptr;};
    void deleteRiskSubTypeName() { this->riskSubTypeName_ = nullptr;};
    inline string riskSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(riskSubTypeName_, "") };
    inline ModifyStrategyRequest& setRiskSubTypeName(string riskSubTypeName) { DARABONBA_PTR_SET_VALUE(riskSubTypeName_, riskSubTypeName) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline ModifyStrategyRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline ModifyStrategyRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline ModifyStrategyRequest& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


  protected:
    // The type of the baseline check policy. Valid values:
    // 
    // *   **custom**: a custom baseline check policy
    // *   **common**: a standard baseline check policy
    // 
    // This parameter is required.
    std::shared_ptr<string> customType_ = nullptr;
    // The new interval of the baseline check. Valid values:
    // 
    // *   **1**: every 2 days
    // *   **3**: every 4 days
    // *   **7**: every 8 days
    // *   **30**: every 31 days
    // 
    // This parameter is required.
    std::shared_ptr<string> cycleDays_ = nullptr;
    // The new time range during which the baseline check starts. Valid values:
    // 
    // *   **0**: The baseline check starts within the time range from 00:00 to 06:00.
    // *   **6**: The baseline check starts within the time range from 06:00 to 12:00.
    // *   **12**: The baseline check starts within the time range from 12:00 to 18:00.
    // *   **18**: The baseline check starts within the time range from 18:00 to 24:00.
    // 
    // >  This parameter is deprecated.
    std::shared_ptr<string> cycleStartTime_ = nullptr;
    // The time when the baseline check based on the baseline check policy ends. Specify the time in the hh:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the baseline check policy.
    std::shared_ptr<string> id_ = nullptr;
    // The new name of the baseline check policy.
    // 
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // The custom configurations of the baseline. The value of this parameter is in the JSON format and contains the following fields:
    // 
    // *   **typeName**: the name of the baseline.
    // 
    // *   **checkDetails**: the details of the baseline. The value is in the JSON format.
    // 
    //     *   **checkId**: the ID of the check item.
    // 
    //     *   **rules**: the rule configurations. The value is in the JSON format.
    // 
    //         *   **ruleId**: the ID of the rule.
    // 
    //         *   **paramList**: the list of parameters in the rule. The value is in the JSON format.
    // 
    //             *   **paramName**: the name of the parameter.
    //             *   **value**: the value of the parameter.
    std::shared_ptr<string> riskCustomParams_ = nullptr;
    // The subtype of the baselines. You can call the [DescribeRiskType](~~DescribeRiskType~~) operation to query the subtypes of baselines.
    // 
    // This parameter is required.
    std::shared_ptr<string> riskSubTypeName_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The time when the baseline check based on the baseline check policy starts. Specify the time in the hh:mm:ss format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startTime_ = nullptr;
    // The method that is used to apply the baseline check policy. Valid values:
    // 
    // *   **groupId**: asset groups
    // *   **uuid**: assets
    // 
    // This parameter is required.
    std::shared_ptr<string> targetType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
