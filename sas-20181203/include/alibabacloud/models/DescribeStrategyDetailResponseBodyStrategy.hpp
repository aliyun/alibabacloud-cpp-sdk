// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTRATEGYDETAILRESPONSEBODYSTRATEGY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeStrategyDetailResponseBodyStrategy : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStrategyDetailResponseBodyStrategy& obj) { 
      DARABONBA_PTR_TO_JSON(CustomType, customType_);
      DARABONBA_PTR_TO_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_TO_JSON(CycleStartTime, cycleStartTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RiskSubTypeName, riskSubTypeName_);
      DARABONBA_PTR_TO_JSON(RiskTypeWhiteListQueryResultList, riskTypeWhiteListQueryResultList_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStrategyDetailResponseBodyStrategy& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomType, customType_);
      DARABONBA_PTR_FROM_JSON(CycleDays, cycleDays_);
      DARABONBA_PTR_FROM_JSON(CycleStartTime, cycleStartTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RiskSubTypeName, riskSubTypeName_);
      DARABONBA_PTR_FROM_JSON(RiskTypeWhiteListQueryResultList, riskTypeWhiteListQueryResultList_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeStrategyDetailResponseBodyStrategy() = default ;
    DescribeStrategyDetailResponseBodyStrategy(const DescribeStrategyDetailResponseBodyStrategy &) = default ;
    DescribeStrategyDetailResponseBodyStrategy(DescribeStrategyDetailResponseBodyStrategy &&) = default ;
    DescribeStrategyDetailResponseBodyStrategy(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStrategyDetailResponseBodyStrategy() = default ;
    DescribeStrategyDetailResponseBodyStrategy& operator=(const DescribeStrategyDetailResponseBodyStrategy &) = default ;
    DescribeStrategyDetailResponseBodyStrategy& operator=(DescribeStrategyDetailResponseBodyStrategy &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customType_ != nullptr
        && this->cycleDays_ != nullptr && this->cycleStartTime_ != nullptr && this->endTime_ != nullptr && this->id_ != nullptr && this->name_ != nullptr
        && this->riskSubTypeName_ != nullptr && this->riskTypeWhiteListQueryResultList_ != nullptr && this->startTime_ != nullptr && this->targetType_ != nullptr && this->type_ != nullptr; };
    // customType Field Functions 
    bool hasCustomType() const { return this->customType_ != nullptr;};
    void deleteCustomType() { this->customType_ = nullptr;};
    inline string customType() const { DARABONBA_PTR_GET_DEFAULT(customType_, "") };
    inline DescribeStrategyDetailResponseBodyStrategy& setCustomType(string customType) { DARABONBA_PTR_SET_VALUE(customType_, customType) };


    // cycleDays Field Functions 
    bool hasCycleDays() const { return this->cycleDays_ != nullptr;};
    void deleteCycleDays() { this->cycleDays_ = nullptr;};
    inline int32_t cycleDays() const { DARABONBA_PTR_GET_DEFAULT(cycleDays_, 0) };
    inline DescribeStrategyDetailResponseBodyStrategy& setCycleDays(int32_t cycleDays) { DARABONBA_PTR_SET_VALUE(cycleDays_, cycleDays) };


    // cycleStartTime Field Functions 
    bool hasCycleStartTime() const { return this->cycleStartTime_ != nullptr;};
    void deleteCycleStartTime() { this->cycleStartTime_ = nullptr;};
    inline int32_t cycleStartTime() const { DARABONBA_PTR_GET_DEFAULT(cycleStartTime_, 0) };
    inline DescribeStrategyDetailResponseBodyStrategy& setCycleStartTime(int32_t cycleStartTime) { DARABONBA_PTR_SET_VALUE(cycleStartTime_, cycleStartTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeStrategyDetailResponseBodyStrategy& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeStrategyDetailResponseBodyStrategy& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeStrategyDetailResponseBodyStrategy& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // riskSubTypeName Field Functions 
    bool hasRiskSubTypeName() const { return this->riskSubTypeName_ != nullptr;};
    void deleteRiskSubTypeName() { this->riskSubTypeName_ = nullptr;};
    inline string riskSubTypeName() const { DARABONBA_PTR_GET_DEFAULT(riskSubTypeName_, "") };
    inline DescribeStrategyDetailResponseBodyStrategy& setRiskSubTypeName(string riskSubTypeName) { DARABONBA_PTR_SET_VALUE(riskSubTypeName_, riskSubTypeName) };


    // riskTypeWhiteListQueryResultList Field Functions 
    bool hasRiskTypeWhiteListQueryResultList() const { return this->riskTypeWhiteListQueryResultList_ != nullptr;};
    void deleteRiskTypeWhiteListQueryResultList() { this->riskTypeWhiteListQueryResultList_ = nullptr;};
    inline const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList> & riskTypeWhiteListQueryResultList() const { DARABONBA_PTR_GET_CONST(riskTypeWhiteListQueryResultList_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList>) };
    inline vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList> riskTypeWhiteListQueryResultList() { DARABONBA_PTR_GET(riskTypeWhiteListQueryResultList_, vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList>) };
    inline DescribeStrategyDetailResponseBodyStrategy& setRiskTypeWhiteListQueryResultList(const vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList> & riskTypeWhiteListQueryResultList) { DARABONBA_PTR_SET_VALUE(riskTypeWhiteListQueryResultList_, riskTypeWhiteListQueryResultList) };
    inline DescribeStrategyDetailResponseBodyStrategy& setRiskTypeWhiteListQueryResultList(vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList> && riskTypeWhiteListQueryResultList) { DARABONBA_PTR_SET_RVALUE(riskTypeWhiteListQueryResultList_, riskTypeWhiteListQueryResultList) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeStrategyDetailResponseBodyStrategy& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline DescribeStrategyDetailResponseBodyStrategy& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline int32_t type() const { DARABONBA_PTR_GET_DEFAULT(type_, 0) };
    inline DescribeStrategyDetailResponseBodyStrategy& setType(int32_t type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The type of the baseline check policy that you want to query. Valid values:
    // 
    // *   **common**: standard baseline check policy
    // *   **custom**: custom baseline check policy
    std::shared_ptr<string> customType_ = nullptr;
    // The check interval of the policy.
    std::shared_ptr<int32_t> cycleDays_ = nullptr;
    // The time period during which the check starts. Valid values:
    // 
    // *   **0**: 00:00 to 06:00
    // *   **6**: 06:00 to 12:00
    // *   **12**: 12:00 to 18:00
    // *   **18**: 18:00 to 24:00
    std::shared_ptr<int32_t> cycleStartTime_ = nullptr;
    // The end time of the check. Specify the time in the HH:mm:ss format.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the baseline check policy.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The name of the baseline check policy.
    std::shared_ptr<string> name_ = nullptr;
    // The subtype of the baselines. 
    // 
    // > You can call the [DescribeRiskType](~~DescribeRiskType~~) operation to query the subtypes of baselines.
    std::shared_ptr<string> riskSubTypeName_ = nullptr;
    // The information about the whitelist of risk items.
    std::shared_ptr<vector<Models::DescribeStrategyDetailResponseBodyStrategyRiskTypeWhiteListQueryResultList>> riskTypeWhiteListQueryResultList_ = nullptr;
    // The start time of the check. Specify the time in the HH:mm:ss format.
    std::shared_ptr<string> startTime_ = nullptr;
    // The method that is used to apply the baseline check policy. Valid values:
    // 
    // *   **groupId**: asset groups
    // *   **uuid**: assets
    std::shared_ptr<string> targetType_ = nullptr;
    // The type of the baseline check policy. Valid values:
    // 
    // *   **1**: standard policies
    // *   **2**: custom policies
    std::shared_ptr<int32_t> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
