// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEQUOTASCHEDULERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEQUOTASCHEDULERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetComputeQuotaScheduleResponseBodyDataCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetComputeQuotaScheduleResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeQuotaScheduleResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(plan, plan_);
      DARABONBA_PTR_TO_JSON(timezone, timezone_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeQuotaScheduleResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(plan, plan_);
      DARABONBA_PTR_FROM_JSON(timezone, timezone_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    GetComputeQuotaScheduleResponseBodyData() = default ;
    GetComputeQuotaScheduleResponseBodyData(const GetComputeQuotaScheduleResponseBodyData &) = default ;
    GetComputeQuotaScheduleResponseBodyData(GetComputeQuotaScheduleResponseBodyData &&) = default ;
    GetComputeQuotaScheduleResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeQuotaScheduleResponseBodyData() = default ;
    GetComputeQuotaScheduleResponseBodyData& operator=(const GetComputeQuotaScheduleResponseBodyData &) = default ;
    GetComputeQuotaScheduleResponseBodyData& operator=(GetComputeQuotaScheduleResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->id_ == nullptr && return this->plan_ == nullptr && return this->timezone_ == nullptr && return this->type_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const Models::GetComputeQuotaScheduleResponseBodyDataCondition & condition() const { DARABONBA_PTR_GET_CONST(condition_, Models::GetComputeQuotaScheduleResponseBodyDataCondition) };
    inline Models::GetComputeQuotaScheduleResponseBodyDataCondition condition() { DARABONBA_PTR_GET(condition_, Models::GetComputeQuotaScheduleResponseBodyDataCondition) };
    inline GetComputeQuotaScheduleResponseBodyData& setCondition(const Models::GetComputeQuotaScheduleResponseBodyDataCondition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline GetComputeQuotaScheduleResponseBodyData& setCondition(Models::GetComputeQuotaScheduleResponseBodyDataCondition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetComputeQuotaScheduleResponseBodyData& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline string plan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
    inline GetComputeQuotaScheduleResponseBodyData& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


    // timezone Field Functions 
    bool hasTimezone() const { return this->timezone_ != nullptr;};
    void deleteTimezone() { this->timezone_ = nullptr;};
    inline string timezone() const { DARABONBA_PTR_GET_DEFAULT(timezone_, "") };
    inline GetComputeQuotaScheduleResponseBodyData& setTimezone(string timezone) { DARABONBA_PTR_SET_VALUE(timezone_, timezone) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetComputeQuotaScheduleResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The value of effective condition.
    std::shared_ptr<Models::GetComputeQuotaScheduleResponseBodyDataCondition> condition_ = nullptr;
    // The ID of the quota plan.
    std::shared_ptr<string> id_ = nullptr;
    // The name of the quota plan.
    std::shared_ptr<string> plan_ = nullptr;
    // The time zone property.
    std::shared_ptr<string> timezone_ = nullptr;
    // The type of the quota plan.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
