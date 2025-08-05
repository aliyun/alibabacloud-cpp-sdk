// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTASCHEDULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTASCHEDULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetQuotaScheduleResponseBodyDataCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaScheduleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaScheduleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(operator, operator_);
      DARABONBA_PTR_TO_JSON(plan, plan_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaScheduleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(operator, operator_);
      DARABONBA_PTR_FROM_JSON(plan, plan_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetQuotaScheduleResponseBodyData() = default ;
    GetQuotaScheduleResponseBodyData(const GetQuotaScheduleResponseBodyData &) = default ;
    GetQuotaScheduleResponseBodyData(GetQuotaScheduleResponseBodyData &&) = default ;
    GetQuotaScheduleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaScheduleResponseBodyData() = default ;
    GetQuotaScheduleResponseBodyData& operator=(const GetQuotaScheduleResponseBodyData &) = default ;
    GetQuotaScheduleResponseBodyData& operator=(GetQuotaScheduleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->condition_ != nullptr
        && this->id_ != nullptr && this->operator_ != nullptr && this->plan_ != nullptr && this->timezone_ != nullptr && this->type_ != nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const Models::GetQuotaScheduleResponseBodyDataCondition & condition() const { DARABONBA_PTR_GET_CONST(condition_, Models::GetQuotaScheduleResponseBodyDataCondition) };
    inline Models::GetQuotaScheduleResponseBodyDataCondition condition() { DARABONBA_PTR_GET(condition_, Models::GetQuotaScheduleResponseBodyDataCondition) };
    inline GetQuotaScheduleResponseBodyData& setCondition(const Models::GetQuotaScheduleResponseBodyDataCondition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline GetQuotaScheduleResponseBodyData& setCondition(Models::GetQuotaScheduleResponseBodyDataCondition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetQuotaScheduleResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline GetQuotaScheduleResponseBodyData& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline string plan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
    inline GetQuotaScheduleResponseBodyData& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline GetQuotaScheduleResponseBodyData& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetQuotaScheduleResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The condition value.
    std::shared_ptr<Models::GetQuotaScheduleResponseBodyDataCondition> condition_ = nullptr;
    // The ID of the quota plan.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the operator.
    std::shared_ptr<string> operator_ = nullptr;
    // The name of the quota plan.
    std::shared_ptr<string> plan_ = nullptr;
    // The time zone.
    std::shared_ptr<string> timezone_ = nullptr;
    // The type of the quota plan.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
