// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTASCHEDULERESPONSEBODYDATACONDITION_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTASCHEDULERESPONSEBODYDATACONDITION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetQuotaScheduleResponseBodyDataCondition : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaScheduleResponseBodyDataCondition& obj) { 
      DARABONBA_PTR_TO_JSON(after, after_);
      DARABONBA_PTR_TO_JSON(at, at_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaScheduleResponseBodyDataCondition& obj) { 
      DARABONBA_PTR_FROM_JSON(after, after_);
      DARABONBA_PTR_FROM_JSON(at, at_);
    };
    GetQuotaScheduleResponseBodyDataCondition() = default ;
    GetQuotaScheduleResponseBodyDataCondition(const GetQuotaScheduleResponseBodyDataCondition &) = default ;
    GetQuotaScheduleResponseBodyDataCondition(GetQuotaScheduleResponseBodyDataCondition &&) = default ;
    GetQuotaScheduleResponseBodyDataCondition(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaScheduleResponseBodyDataCondition() = default ;
    GetQuotaScheduleResponseBodyDataCondition& operator=(const GetQuotaScheduleResponseBodyDataCondition &) = default ;
    GetQuotaScheduleResponseBodyDataCondition& operator=(GetQuotaScheduleResponseBodyDataCondition &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->after_ == nullptr
        && return this->at_ == nullptr; };
    // after Field Functions 
    bool hasAfter() const { return this->after_ != nullptr;};
    void deleteAfter() { this->after_ = nullptr;};
    inline string after() const { DARABONBA_PTR_GET_DEFAULT(after_, "") };
    inline GetQuotaScheduleResponseBodyDataCondition& setAfter(string after) { DARABONBA_PTR_SET_VALUE(after_, after) };


    // at Field Functions 
    bool hasAt() const { return this->at_ != nullptr;};
    void deleteAt() { this->at_ = nullptr;};
    inline string at() const { DARABONBA_PTR_GET_DEFAULT(at_, "") };
    inline GetQuotaScheduleResponseBodyDataCondition& setAt(string at) { DARABONBA_PTR_SET_VALUE(at_, at) };


  protected:
    // The start time when the quota plan takes effect.
    std::shared_ptr<string> after_ = nullptr;
    // The time when the quota plan takes effect.
    std::shared_ptr<string> at_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
