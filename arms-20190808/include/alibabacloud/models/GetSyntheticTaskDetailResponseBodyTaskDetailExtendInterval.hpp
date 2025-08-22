// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILEXTENDINTERVAL_HPP_
#define ALIBABACLOUD_MODELS_GETSYNTHETICTASKDETAILRESPONSEBODYTASKDETAILEXTENDINTERVAL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& obj) { 
      DARABONBA_PTR_TO_JSON(Days, days_);
      DARABONBA_PTR_TO_JSON(EndMinute, endMinute_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Endhour, endhour_);
      DARABONBA_PTR_TO_JSON(StartHour, startHour_);
      DARABONBA_PTR_TO_JSON(StartMinute, startMinute_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& obj) { 
      DARABONBA_PTR_FROM_JSON(Days, days_);
      DARABONBA_PTR_FROM_JSON(EndMinute, endMinute_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Endhour, endhour_);
      DARABONBA_PTR_FROM_JSON(StartHour, startHour_);
      DARABONBA_PTR_FROM_JSON(StartMinute, startMinute_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval(const GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval(GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval &&) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval() = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& operator=(const GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval &) = default ;
    GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& operator=(GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->days_ != nullptr
        && this->endMinute_ != nullptr && this->endTime_ != nullptr && this->endhour_ != nullptr && this->startHour_ != nullptr && this->startMinute_ != nullptr
        && this->startTime_ != nullptr; };
    // days Field Functions 
    bool hasDays() const { return this->days_ != nullptr;};
    void deleteDays() { this->days_ = nullptr;};
    inline const vector<int64_t> & days() const { DARABONBA_PTR_GET_CONST(days_, vector<int64_t>) };
    inline vector<int64_t> days() { DARABONBA_PTR_GET(days_, vector<int64_t>) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& setDays(const vector<int64_t> & days) { DARABONBA_PTR_SET_VALUE(days_, days) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& setDays(vector<int64_t> && days) { DARABONBA_PTR_SET_RVALUE(days_, days) };


    // endMinute Field Functions 
    bool hasEndMinute() const { return this->endMinute_ != nullptr;};
    void deleteEndMinute() { this->endMinute_ = nullptr;};
    inline int64_t endMinute() const { DARABONBA_PTR_GET_DEFAULT(endMinute_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& setEndMinute(int64_t endMinute) { DARABONBA_PTR_SET_VALUE(endMinute_, endMinute) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // endhour Field Functions 
    bool hasEndhour() const { return this->endhour_ != nullptr;};
    void deleteEndhour() { this->endhour_ = nullptr;};
    inline int64_t endhour() const { DARABONBA_PTR_GET_DEFAULT(endhour_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& setEndhour(int64_t endhour) { DARABONBA_PTR_SET_VALUE(endhour_, endhour) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int64_t startHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& setStartHour(int64_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    // startMinute Field Functions 
    bool hasStartMinute() const { return this->startMinute_ != nullptr;};
    void deleteStartMinute() { this->startMinute_ = nullptr;};
    inline int64_t startMinute() const { DARABONBA_PTR_GET_DEFAULT(startMinute_, 0L) };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& setStartMinute(int64_t startMinute) { DARABONBA_PTR_SET_VALUE(startMinute_, startMinute) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetSyntheticTaskDetailResponseBodyTaskDetailExtendInterval& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The day on which synthetic monitoring is performed. Valid values:
    // 
    // *   \\-1: every day
    // *   0: Sunday
    // *   1: Monday
    // *   2: Tuesday
    // *   3: Wednesday
    // *   4: Thursday
    // *   5: Friday
    // *   6: Saturday
    std::shared_ptr<vector<int64_t>> days_ = nullptr;
    // The minute at which synthetic monitoring ends.
    std::shared_ptr<int64_t> endMinute_ = nullptr;
    // The time when synthetic monitoring ends. Format: `yyyy-MM-dd HH`.
    std::shared_ptr<string> endTime_ = nullptr;
    // The hour at which synthetic monitoring ends.
    std::shared_ptr<int64_t> endhour_ = nullptr;
    // The hour at which synthetic monitoring starts.
    std::shared_ptr<int64_t> startHour_ = nullptr;
    // The minute at which synthetic monitoring starts.
    std::shared_ptr<int64_t> startMinute_ = nullptr;
    // The time when synthetic monitoring starts. Format: yyyy-MM-dd HH.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
