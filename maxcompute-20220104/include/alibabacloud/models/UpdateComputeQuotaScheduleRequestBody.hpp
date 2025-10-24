// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTASCHEDULEREQUESTBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTASCHEDULEREQUESTBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateComputeQuotaScheduleRequestBodyCondition.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaScheduleRequestBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaScheduleRequestBody& obj) { 
      DARABONBA_PTR_TO_JSON(condition, condition_);
      DARABONBA_PTR_TO_JSON(plan, plan_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaScheduleRequestBody& obj) { 
      DARABONBA_PTR_FROM_JSON(condition, condition_);
      DARABONBA_PTR_FROM_JSON(plan, plan_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    UpdateComputeQuotaScheduleRequestBody() = default ;
    UpdateComputeQuotaScheduleRequestBody(const UpdateComputeQuotaScheduleRequestBody &) = default ;
    UpdateComputeQuotaScheduleRequestBody(UpdateComputeQuotaScheduleRequestBody &&) = default ;
    UpdateComputeQuotaScheduleRequestBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaScheduleRequestBody() = default ;
    UpdateComputeQuotaScheduleRequestBody& operator=(const UpdateComputeQuotaScheduleRequestBody &) = default ;
    UpdateComputeQuotaScheduleRequestBody& operator=(UpdateComputeQuotaScheduleRequestBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->condition_ == nullptr
        && return this->plan_ == nullptr && return this->type_ == nullptr; };
    // condition Field Functions 
    bool hasCondition() const { return this->condition_ != nullptr;};
    void deleteCondition() { this->condition_ = nullptr;};
    inline const Models::UpdateComputeQuotaScheduleRequestBodyCondition & condition() const { DARABONBA_PTR_GET_CONST(condition_, Models::UpdateComputeQuotaScheduleRequestBodyCondition) };
    inline Models::UpdateComputeQuotaScheduleRequestBodyCondition condition() { DARABONBA_PTR_GET(condition_, Models::UpdateComputeQuotaScheduleRequestBodyCondition) };
    inline UpdateComputeQuotaScheduleRequestBody& setCondition(const Models::UpdateComputeQuotaScheduleRequestBodyCondition & condition) { DARABONBA_PTR_SET_VALUE(condition_, condition) };
    inline UpdateComputeQuotaScheduleRequestBody& setCondition(Models::UpdateComputeQuotaScheduleRequestBodyCondition && condition) { DARABONBA_PTR_SET_RVALUE(condition_, condition) };


    // plan Field Functions 
    bool hasPlan() const { return this->plan_ != nullptr;};
    void deletePlan() { this->plan_ = nullptr;};
    inline string plan() const { DARABONBA_PTR_GET_DEFAULT(plan_, "") };
    inline UpdateComputeQuotaScheduleRequestBody& setPlan(string plan) { DARABONBA_PTR_SET_VALUE(plan_, plan) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline UpdateComputeQuotaScheduleRequestBody& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The value of effective condition.
    std::shared_ptr<Models::UpdateComputeQuotaScheduleRequestBodyCondition> condition_ = nullptr;
    // The name of the quota plan.
    // 
    // This parameter is required.
    std::shared_ptr<string> plan_ = nullptr;
    // The type of the quota plan.
    // 
    // >Notice: Currently, only daily is supported.</notice>
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
