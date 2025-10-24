// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOMPUTEQUOTASCHEDULERESPONSEBODYDATACONDITION_HPP_
#define ALIBABACLOUD_MODELS_GETCOMPUTEQUOTASCHEDULERESPONSEBODYDATACONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetComputeQuotaScheduleResponseBodyDataCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetComputeQuotaScheduleResponseBodyDataCondition& obj) { 
      DARABONBA_PTR_TO_JSON(at, at_);
    };
    friend void from_json(const Darabonba::Json& j, GetComputeQuotaScheduleResponseBodyDataCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(at, at_);
    };
    GetComputeQuotaScheduleResponseBodyDataCondition() = default ;
    GetComputeQuotaScheduleResponseBodyDataCondition(const GetComputeQuotaScheduleResponseBodyDataCondition &) = default ;
    GetComputeQuotaScheduleResponseBodyDataCondition(GetComputeQuotaScheduleResponseBodyDataCondition &&) = default ;
    GetComputeQuotaScheduleResponseBodyDataCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetComputeQuotaScheduleResponseBodyDataCondition() = default ;
    GetComputeQuotaScheduleResponseBodyDataCondition& operator=(const GetComputeQuotaScheduleResponseBodyDataCondition &) = default ;
    GetComputeQuotaScheduleResponseBodyDataCondition& operator=(GetComputeQuotaScheduleResponseBodyDataCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->at_ == nullptr; };
    // at Field Functions 
    bool hasAt() const { return this->at_ != nullptr;};
    void deleteAt() { this->at_ = nullptr;};
    inline string at() const { DARABONBA_PTR_GET_DEFAULT(at_, "") };
    inline GetComputeQuotaScheduleResponseBodyDataCondition& setAt(string at) { DARABONBA_PTR_SET_VALUE(at_, at) };


  protected:
    // The start time when the quota plan takes effect.
    std::shared_ptr<string> at_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
