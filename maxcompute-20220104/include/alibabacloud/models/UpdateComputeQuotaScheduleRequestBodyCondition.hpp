// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTASCHEDULEREQUESTBODYCONDITION_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMPUTEQUOTASCHEDULEREQUESTBODYCONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class UpdateComputeQuotaScheduleRequestBodyCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateComputeQuotaScheduleRequestBodyCondition& obj) { 
      DARABONBA_PTR_TO_JSON(at, at_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateComputeQuotaScheduleRequestBodyCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(at, at_);
    };
    UpdateComputeQuotaScheduleRequestBodyCondition() = default ;
    UpdateComputeQuotaScheduleRequestBodyCondition(const UpdateComputeQuotaScheduleRequestBodyCondition &) = default ;
    UpdateComputeQuotaScheduleRequestBodyCondition(UpdateComputeQuotaScheduleRequestBodyCondition &&) = default ;
    UpdateComputeQuotaScheduleRequestBodyCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateComputeQuotaScheduleRequestBodyCondition() = default ;
    UpdateComputeQuotaScheduleRequestBodyCondition& operator=(const UpdateComputeQuotaScheduleRequestBodyCondition &) = default ;
    UpdateComputeQuotaScheduleRequestBodyCondition& operator=(UpdateComputeQuotaScheduleRequestBodyCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->at_ == nullptr; };
    // at Field Functions 
    bool hasAt() const { return this->at_ != nullptr;};
    void deleteAt() { this->at_ = nullptr;};
    inline string at() const { DARABONBA_PTR_GET_DEFAULT(at_, "") };
    inline UpdateComputeQuotaScheduleRequestBodyCondition& setAt(string at) { DARABONBA_PTR_SET_VALUE(at_, at) };


  protected:
    // The start time when the quota plan takes effect.
    // 
    // This parameter is required.
    std::shared_ptr<string> at_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
