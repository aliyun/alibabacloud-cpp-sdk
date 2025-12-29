// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTRULETIMESPAN_HPP_
#define ALIBABACLOUD_MODELS_ALERTRULETIMESPAN_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertRuleTimeSpan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertRuleTimeSpan& obj) { 
      DARABONBA_PTR_TO_JSON(dayOfWeek, dayOfWeek_);
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(gmtOffset, gmtOffset_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, AlertRuleTimeSpan& obj) { 
      DARABONBA_PTR_FROM_JSON(dayOfWeek, dayOfWeek_);
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(gmtOffset, gmtOffset_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
    };
    AlertRuleTimeSpan() = default ;
    AlertRuleTimeSpan(const AlertRuleTimeSpan &) = default ;
    AlertRuleTimeSpan(AlertRuleTimeSpan &&) = default ;
    AlertRuleTimeSpan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertRuleTimeSpan() = default ;
    AlertRuleTimeSpan& operator=(const AlertRuleTimeSpan &) = default ;
    AlertRuleTimeSpan& operator=(AlertRuleTimeSpan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dayOfWeek_ == nullptr
        && this->endTime_ == nullptr && this->gmtOffset_ == nullptr && this->startTime_ == nullptr; };
    // dayOfWeek Field Functions 
    bool hasDayOfWeek() const { return this->dayOfWeek_ != nullptr;};
    void deleteDayOfWeek() { this->dayOfWeek_ = nullptr;};
    inline const vector<int32_t> & getDayOfWeek() const { DARABONBA_PTR_GET_CONST(dayOfWeek_, vector<int32_t>) };
    inline vector<int32_t> getDayOfWeek() { DARABONBA_PTR_GET(dayOfWeek_, vector<int32_t>) };
    inline AlertRuleTimeSpan& setDayOfWeek(const vector<int32_t> & dayOfWeek) { DARABONBA_PTR_SET_VALUE(dayOfWeek_, dayOfWeek) };
    inline AlertRuleTimeSpan& setDayOfWeek(vector<int32_t> && dayOfWeek) { DARABONBA_PTR_SET_RVALUE(dayOfWeek_, dayOfWeek) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AlertRuleTimeSpan& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // gmtOffset Field Functions 
    bool hasGmtOffset() const { return this->gmtOffset_ != nullptr;};
    void deleteGmtOffset() { this->gmtOffset_ = nullptr;};
    inline string getGmtOffset() const { DARABONBA_PTR_GET_DEFAULT(gmtOffset_, "") };
    inline AlertRuleTimeSpan& setGmtOffset(string gmtOffset) { DARABONBA_PTR_SET_VALUE(gmtOffset_, gmtOffset) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AlertRuleTimeSpan& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    shared_ptr<vector<int32_t>> dayOfWeek_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<string> gmtOffset_ {};
    shared_ptr<string> startTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
