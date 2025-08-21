// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMONALARMRECORDSTATISTICSDISTRIBUTERESPONSEBODYRESULTSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_GETEMONALARMRECORDSTATISTICSDISTRIBUTERESPONSEBODYRESULTSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(alarmGroup, alarmGroup_);
      DARABONBA_PTR_TO_JSON(compare, compare_);
      DARABONBA_PTR_TO_JSON(count, count_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(receiver, receiver_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(today, today_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(yesterday, yesterday_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(alarmGroup, alarmGroup_);
      DARABONBA_PTR_FROM_JSON(compare, compare_);
      DARABONBA_PTR_FROM_JSON(count, count_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(receiver, receiver_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(today, today_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(yesterday, yesterday_);
    };
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics() = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics(const GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics &) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics(GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics &&) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics() = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& operator=(const GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics &) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& operator=(GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alarmGroup_ != nullptr
        && this->compare_ != nullptr && this->count_ != nullptr && this->level_ != nullptr && this->receiver_ != nullptr && this->time_ != nullptr
        && this->today_ != nullptr && this->type_ != nullptr && this->yesterday_ != nullptr; };
    // alarmGroup Field Functions 
    bool hasAlarmGroup() const { return this->alarmGroup_ != nullptr;};
    void deleteAlarmGroup() { this->alarmGroup_ = nullptr;};
    inline string alarmGroup() const { DARABONBA_PTR_GET_DEFAULT(alarmGroup_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setAlarmGroup(string alarmGroup) { DARABONBA_PTR_SET_VALUE(alarmGroup_, alarmGroup) };


    // compare Field Functions 
    bool hasCompare() const { return this->compare_ != nullptr;};
    void deleteCompare() { this->compare_ = nullptr;};
    inline string compare() const { DARABONBA_PTR_GET_DEFAULT(compare_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setCompare(string compare) { DARABONBA_PTR_SET_VALUE(compare_, compare) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // receiver Field Functions 
    bool hasReceiver() const { return this->receiver_ != nullptr;};
    void deleteReceiver() { this->receiver_ = nullptr;};
    inline string receiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int32_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // today Field Functions 
    bool hasToday() const { return this->today_ != nullptr;};
    void deleteToday() { this->today_ = nullptr;};
    inline int32_t today() const { DARABONBA_PTR_GET_DEFAULT(today_, 0) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setToday(int32_t today) { DARABONBA_PTR_SET_VALUE(today_, today) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // yesterday Field Functions 
    bool hasYesterday() const { return this->yesterday_ != nullptr;};
    void deleteYesterday() { this->yesterday_ = nullptr;};
    inline int32_t yesterday() const { DARABONBA_PTR_GET_DEFAULT(yesterday_, 0) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBodyResultStatistics& setYesterday(int32_t yesterday) { DARABONBA_PTR_SET_VALUE(yesterday_, yesterday) };


  protected:
    std::shared_ptr<string> alarmGroup_ = nullptr;
    std::shared_ptr<string> compare_ = nullptr;
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> receiver_ = nullptr;
    std::shared_ptr<int32_t> time_ = nullptr;
    std::shared_ptr<int32_t> today_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<int32_t> yesterday_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
