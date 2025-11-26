// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBASESTRATEGYPERIODRESPONSEBODYWORKINGTIME_HPP_
#define ALIBABACLOUD_MODELS_GETBASESTRATEGYPERIODRESPONSEBODYWORKINGTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class GetBaseStrategyPeriodResponseBodyWorkingTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBaseStrategyPeriodResponseBodyWorkingTime& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(BeginTimeMillis, beginTimeMillis_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EndTimeMillis, endTimeMillis_);
    };
    friend void from_json(const Darabonba::Json& j, GetBaseStrategyPeriodResponseBodyWorkingTime& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(BeginTimeMillis, beginTimeMillis_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EndTimeMillis, endTimeMillis_);
    };
    GetBaseStrategyPeriodResponseBodyWorkingTime() = default ;
    GetBaseStrategyPeriodResponseBodyWorkingTime(const GetBaseStrategyPeriodResponseBodyWorkingTime &) = default ;
    GetBaseStrategyPeriodResponseBodyWorkingTime(GetBaseStrategyPeriodResponseBodyWorkingTime &&) = default ;
    GetBaseStrategyPeriodResponseBodyWorkingTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBaseStrategyPeriodResponseBodyWorkingTime() = default ;
    GetBaseStrategyPeriodResponseBodyWorkingTime& operator=(const GetBaseStrategyPeriodResponseBodyWorkingTime &) = default ;
    GetBaseStrategyPeriodResponseBodyWorkingTime& operator=(GetBaseStrategyPeriodResponseBodyWorkingTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->beginTimeMillis_ == nullptr && return this->endTime_ == nullptr && return this->endTimeMillis_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline GetBaseStrategyPeriodResponseBodyWorkingTime& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // beginTimeMillis Field Functions 
    bool hasBeginTimeMillis() const { return this->beginTimeMillis_ != nullptr;};
    void deleteBeginTimeMillis() { this->beginTimeMillis_ = nullptr;};
    inline int64_t beginTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(beginTimeMillis_, 0L) };
    inline GetBaseStrategyPeriodResponseBodyWorkingTime& setBeginTimeMillis(int64_t beginTimeMillis) { DARABONBA_PTR_SET_VALUE(beginTimeMillis_, beginTimeMillis) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetBaseStrategyPeriodResponseBodyWorkingTime& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endTimeMillis Field Functions 
    bool hasEndTimeMillis() const { return this->endTimeMillis_ != nullptr;};
    void deleteEndTimeMillis() { this->endTimeMillis_ = nullptr;};
    inline int64_t endTimeMillis() const { DARABONBA_PTR_GET_DEFAULT(endTimeMillis_, 0L) };
    inline GetBaseStrategyPeriodResponseBodyWorkingTime& setEndTimeMillis(int64_t endTimeMillis) { DARABONBA_PTR_SET_VALUE(endTimeMillis_, endTimeMillis) };


  protected:
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<int64_t> beginTimeMillis_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<int64_t> endTimeMillis_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
