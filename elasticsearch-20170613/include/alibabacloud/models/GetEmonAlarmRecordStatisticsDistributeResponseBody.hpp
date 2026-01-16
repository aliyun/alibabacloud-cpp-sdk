// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETEMONALARMRECORDSTATISTICSDISTRIBUTERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETEMONALARMRECORDSTATISTICSDISTRIBUTERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class GetEmonAlarmRecordStatisticsDistributeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetEmonAlarmRecordStatisticsDistributeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetEmonAlarmRecordStatisticsDistributeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetEmonAlarmRecordStatisticsDistributeResponseBody() = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBody(const GetEmonAlarmRecordStatisticsDistributeResponseBody &) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBody(GetEmonAlarmRecordStatisticsDistributeResponseBody &&) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetEmonAlarmRecordStatisticsDistributeResponseBody() = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBody& operator=(const GetEmonAlarmRecordStatisticsDistributeResponseBody &) = default ;
    GetEmonAlarmRecordStatisticsDistributeResponseBody& operator=(GetEmonAlarmRecordStatisticsDistributeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(alarmGroup, alarmGroup_);
        DARABONBA_PTR_TO_JSON(alarmGroupTotal, alarmGroupTotal_);
        DARABONBA_PTR_TO_JSON(channelTotal, channelTotal_);
        DARABONBA_PTR_TO_JSON(count, count_);
        DARABONBA_PTR_TO_JSON(levelTotal, levelTotal_);
        DARABONBA_PTR_TO_JSON(receiverTotal, receiverTotal_);
        DARABONBA_PTR_TO_JSON(statistics, statistics_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(alarmGroup, alarmGroup_);
        DARABONBA_PTR_FROM_JSON(alarmGroupTotal, alarmGroupTotal_);
        DARABONBA_PTR_FROM_JSON(channelTotal, channelTotal_);
        DARABONBA_PTR_FROM_JSON(count, count_);
        DARABONBA_PTR_FROM_JSON(levelTotal, levelTotal_);
        DARABONBA_PTR_FROM_JSON(receiverTotal, receiverTotal_);
        DARABONBA_PTR_FROM_JSON(statistics, statistics_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Statistics : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Statistics& obj) { 
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
        friend void from_json(const Darabonba::Json& j, Statistics& obj) { 
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
        Statistics() = default ;
        Statistics(const Statistics &) = default ;
        Statistics(Statistics &&) = default ;
        Statistics(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Statistics() = default ;
        Statistics& operator=(const Statistics &) = default ;
        Statistics& operator=(Statistics &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alarmGroup_ == nullptr
        && this->compare_ == nullptr && this->count_ == nullptr && this->level_ == nullptr && this->receiver_ == nullptr && this->time_ == nullptr
        && this->today_ == nullptr && this->type_ == nullptr && this->yesterday_ == nullptr; };
        // alarmGroup Field Functions 
        bool hasAlarmGroup() const { return this->alarmGroup_ != nullptr;};
        void deleteAlarmGroup() { this->alarmGroup_ = nullptr;};
        inline string getAlarmGroup() const { DARABONBA_PTR_GET_DEFAULT(alarmGroup_, "") };
        inline Statistics& setAlarmGroup(string alarmGroup) { DARABONBA_PTR_SET_VALUE(alarmGroup_, alarmGroup) };


        // compare Field Functions 
        bool hasCompare() const { return this->compare_ != nullptr;};
        void deleteCompare() { this->compare_ = nullptr;};
        inline string getCompare() const { DARABONBA_PTR_GET_DEFAULT(compare_, "") };
        inline Statistics& setCompare(string compare) { DARABONBA_PTR_SET_VALUE(compare_, compare) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline Statistics& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline Statistics& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // receiver Field Functions 
        bool hasReceiver() const { return this->receiver_ != nullptr;};
        void deleteReceiver() { this->receiver_ = nullptr;};
        inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
        inline Statistics& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
        inline Statistics& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // today Field Functions 
        bool hasToday() const { return this->today_ != nullptr;};
        void deleteToday() { this->today_ = nullptr;};
        inline int32_t getToday() const { DARABONBA_PTR_GET_DEFAULT(today_, 0) };
        inline Statistics& setToday(int32_t today) { DARABONBA_PTR_SET_VALUE(today_, today) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Statistics& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // yesterday Field Functions 
        bool hasYesterday() const { return this->yesterday_ != nullptr;};
        void deleteYesterday() { this->yesterday_ = nullptr;};
        inline int32_t getYesterday() const { DARABONBA_PTR_GET_DEFAULT(yesterday_, 0) };
        inline Statistics& setYesterday(int32_t yesterday) { DARABONBA_PTR_SET_VALUE(yesterday_, yesterday) };


      protected:
        shared_ptr<string> alarmGroup_ {};
        shared_ptr<string> compare_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> receiver_ {};
        shared_ptr<int32_t> time_ {};
        shared_ptr<int32_t> today_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> yesterday_ {};
      };

      class ReceiverTotal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ReceiverTotal& obj) { 
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
        friend void from_json(const Darabonba::Json& j, ReceiverTotal& obj) { 
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
        ReceiverTotal() = default ;
        ReceiverTotal(const ReceiverTotal &) = default ;
        ReceiverTotal(ReceiverTotal &&) = default ;
        ReceiverTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ReceiverTotal() = default ;
        ReceiverTotal& operator=(const ReceiverTotal &) = default ;
        ReceiverTotal& operator=(ReceiverTotal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alarmGroup_ == nullptr
        && this->compare_ == nullptr && this->count_ == nullptr && this->level_ == nullptr && this->receiver_ == nullptr && this->time_ == nullptr
        && this->today_ == nullptr && this->type_ == nullptr && this->yesterday_ == nullptr; };
        // alarmGroup Field Functions 
        bool hasAlarmGroup() const { return this->alarmGroup_ != nullptr;};
        void deleteAlarmGroup() { this->alarmGroup_ = nullptr;};
        inline string getAlarmGroup() const { DARABONBA_PTR_GET_DEFAULT(alarmGroup_, "") };
        inline ReceiverTotal& setAlarmGroup(string alarmGroup) { DARABONBA_PTR_SET_VALUE(alarmGroup_, alarmGroup) };


        // compare Field Functions 
        bool hasCompare() const { return this->compare_ != nullptr;};
        void deleteCompare() { this->compare_ = nullptr;};
        inline string getCompare() const { DARABONBA_PTR_GET_DEFAULT(compare_, "") };
        inline ReceiverTotal& setCompare(string compare) { DARABONBA_PTR_SET_VALUE(compare_, compare) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline ReceiverTotal& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline ReceiverTotal& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // receiver Field Functions 
        bool hasReceiver() const { return this->receiver_ != nullptr;};
        void deleteReceiver() { this->receiver_ = nullptr;};
        inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
        inline ReceiverTotal& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
        inline ReceiverTotal& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // today Field Functions 
        bool hasToday() const { return this->today_ != nullptr;};
        void deleteToday() { this->today_ = nullptr;};
        inline int32_t getToday() const { DARABONBA_PTR_GET_DEFAULT(today_, 0) };
        inline ReceiverTotal& setToday(int32_t today) { DARABONBA_PTR_SET_VALUE(today_, today) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ReceiverTotal& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // yesterday Field Functions 
        bool hasYesterday() const { return this->yesterday_ != nullptr;};
        void deleteYesterday() { this->yesterday_ = nullptr;};
        inline int32_t getYesterday() const { DARABONBA_PTR_GET_DEFAULT(yesterday_, 0) };
        inline ReceiverTotal& setYesterday(int32_t yesterday) { DARABONBA_PTR_SET_VALUE(yesterday_, yesterday) };


      protected:
        shared_ptr<string> alarmGroup_ {};
        shared_ptr<string> compare_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> receiver_ {};
        shared_ptr<int32_t> time_ {};
        shared_ptr<int32_t> today_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> yesterday_ {};
      };

      class LevelTotal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const LevelTotal& obj) { 
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
        friend void from_json(const Darabonba::Json& j, LevelTotal& obj) { 
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
        LevelTotal() = default ;
        LevelTotal(const LevelTotal &) = default ;
        LevelTotal(LevelTotal &&) = default ;
        LevelTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~LevelTotal() = default ;
        LevelTotal& operator=(const LevelTotal &) = default ;
        LevelTotal& operator=(LevelTotal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alarmGroup_ == nullptr
        && this->compare_ == nullptr && this->count_ == nullptr && this->level_ == nullptr && this->receiver_ == nullptr && this->time_ == nullptr
        && this->today_ == nullptr && this->type_ == nullptr && this->yesterday_ == nullptr; };
        // alarmGroup Field Functions 
        bool hasAlarmGroup() const { return this->alarmGroup_ != nullptr;};
        void deleteAlarmGroup() { this->alarmGroup_ = nullptr;};
        inline string getAlarmGroup() const { DARABONBA_PTR_GET_DEFAULT(alarmGroup_, "") };
        inline LevelTotal& setAlarmGroup(string alarmGroup) { DARABONBA_PTR_SET_VALUE(alarmGroup_, alarmGroup) };


        // compare Field Functions 
        bool hasCompare() const { return this->compare_ != nullptr;};
        void deleteCompare() { this->compare_ = nullptr;};
        inline string getCompare() const { DARABONBA_PTR_GET_DEFAULT(compare_, "") };
        inline LevelTotal& setCompare(string compare) { DARABONBA_PTR_SET_VALUE(compare_, compare) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline LevelTotal& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline LevelTotal& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // receiver Field Functions 
        bool hasReceiver() const { return this->receiver_ != nullptr;};
        void deleteReceiver() { this->receiver_ = nullptr;};
        inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
        inline LevelTotal& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
        inline LevelTotal& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // today Field Functions 
        bool hasToday() const { return this->today_ != nullptr;};
        void deleteToday() { this->today_ = nullptr;};
        inline int32_t getToday() const { DARABONBA_PTR_GET_DEFAULT(today_, 0) };
        inline LevelTotal& setToday(int32_t today) { DARABONBA_PTR_SET_VALUE(today_, today) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline LevelTotal& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // yesterday Field Functions 
        bool hasYesterday() const { return this->yesterday_ != nullptr;};
        void deleteYesterday() { this->yesterday_ = nullptr;};
        inline int32_t getYesterday() const { DARABONBA_PTR_GET_DEFAULT(yesterday_, 0) };
        inline LevelTotal& setYesterday(int32_t yesterday) { DARABONBA_PTR_SET_VALUE(yesterday_, yesterday) };


      protected:
        shared_ptr<string> alarmGroup_ {};
        shared_ptr<string> compare_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> receiver_ {};
        shared_ptr<int32_t> time_ {};
        shared_ptr<int32_t> today_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> yesterday_ {};
      };

      class ChannelTotal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ChannelTotal& obj) { 
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
        friend void from_json(const Darabonba::Json& j, ChannelTotal& obj) { 
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
        ChannelTotal() = default ;
        ChannelTotal(const ChannelTotal &) = default ;
        ChannelTotal(ChannelTotal &&) = default ;
        ChannelTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ChannelTotal() = default ;
        ChannelTotal& operator=(const ChannelTotal &) = default ;
        ChannelTotal& operator=(ChannelTotal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alarmGroup_ == nullptr
        && this->compare_ == nullptr && this->count_ == nullptr && this->level_ == nullptr && this->receiver_ == nullptr && this->time_ == nullptr
        && this->today_ == nullptr && this->type_ == nullptr && this->yesterday_ == nullptr; };
        // alarmGroup Field Functions 
        bool hasAlarmGroup() const { return this->alarmGroup_ != nullptr;};
        void deleteAlarmGroup() { this->alarmGroup_ = nullptr;};
        inline string getAlarmGroup() const { DARABONBA_PTR_GET_DEFAULT(alarmGroup_, "") };
        inline ChannelTotal& setAlarmGroup(string alarmGroup) { DARABONBA_PTR_SET_VALUE(alarmGroup_, alarmGroup) };


        // compare Field Functions 
        bool hasCompare() const { return this->compare_ != nullptr;};
        void deleteCompare() { this->compare_ = nullptr;};
        inline string getCompare() const { DARABONBA_PTR_GET_DEFAULT(compare_, "") };
        inline ChannelTotal& setCompare(string compare) { DARABONBA_PTR_SET_VALUE(compare_, compare) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline ChannelTotal& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline ChannelTotal& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // receiver Field Functions 
        bool hasReceiver() const { return this->receiver_ != nullptr;};
        void deleteReceiver() { this->receiver_ = nullptr;};
        inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
        inline ChannelTotal& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
        inline ChannelTotal& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // today Field Functions 
        bool hasToday() const { return this->today_ != nullptr;};
        void deleteToday() { this->today_ = nullptr;};
        inline int32_t getToday() const { DARABONBA_PTR_GET_DEFAULT(today_, 0) };
        inline ChannelTotal& setToday(int32_t today) { DARABONBA_PTR_SET_VALUE(today_, today) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ChannelTotal& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // yesterday Field Functions 
        bool hasYesterday() const { return this->yesterday_ != nullptr;};
        void deleteYesterday() { this->yesterday_ = nullptr;};
        inline int32_t getYesterday() const { DARABONBA_PTR_GET_DEFAULT(yesterday_, 0) };
        inline ChannelTotal& setYesterday(int32_t yesterday) { DARABONBA_PTR_SET_VALUE(yesterday_, yesterday) };


      protected:
        shared_ptr<string> alarmGroup_ {};
        shared_ptr<string> compare_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> receiver_ {};
        shared_ptr<int32_t> time_ {};
        shared_ptr<int32_t> today_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> yesterday_ {};
      };

      class AlarmGroupTotal : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlarmGroupTotal& obj) { 
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
        friend void from_json(const Darabonba::Json& j, AlarmGroupTotal& obj) { 
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
        AlarmGroupTotal() = default ;
        AlarmGroupTotal(const AlarmGroupTotal &) = default ;
        AlarmGroupTotal(AlarmGroupTotal &&) = default ;
        AlarmGroupTotal(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlarmGroupTotal() = default ;
        AlarmGroupTotal& operator=(const AlarmGroupTotal &) = default ;
        AlarmGroupTotal& operator=(AlarmGroupTotal &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->alarmGroup_ == nullptr
        && this->compare_ == nullptr && this->count_ == nullptr && this->level_ == nullptr && this->receiver_ == nullptr && this->time_ == nullptr
        && this->today_ == nullptr && this->type_ == nullptr && this->yesterday_ == nullptr; };
        // alarmGroup Field Functions 
        bool hasAlarmGroup() const { return this->alarmGroup_ != nullptr;};
        void deleteAlarmGroup() { this->alarmGroup_ = nullptr;};
        inline string getAlarmGroup() const { DARABONBA_PTR_GET_DEFAULT(alarmGroup_, "") };
        inline AlarmGroupTotal& setAlarmGroup(string alarmGroup) { DARABONBA_PTR_SET_VALUE(alarmGroup_, alarmGroup) };


        // compare Field Functions 
        bool hasCompare() const { return this->compare_ != nullptr;};
        void deleteCompare() { this->compare_ = nullptr;};
        inline string getCompare() const { DARABONBA_PTR_GET_DEFAULT(compare_, "") };
        inline AlarmGroupTotal& setCompare(string compare) { DARABONBA_PTR_SET_VALUE(compare_, compare) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline AlarmGroupTotal& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline AlarmGroupTotal& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // receiver Field Functions 
        bool hasReceiver() const { return this->receiver_ != nullptr;};
        void deleteReceiver() { this->receiver_ = nullptr;};
        inline string getReceiver() const { DARABONBA_PTR_GET_DEFAULT(receiver_, "") };
        inline AlarmGroupTotal& setReceiver(string receiver) { DARABONBA_PTR_SET_VALUE(receiver_, receiver) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int32_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0) };
        inline AlarmGroupTotal& setTime(int32_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // today Field Functions 
        bool hasToday() const { return this->today_ != nullptr;};
        void deleteToday() { this->today_ = nullptr;};
        inline int32_t getToday() const { DARABONBA_PTR_GET_DEFAULT(today_, 0) };
        inline AlarmGroupTotal& setToday(int32_t today) { DARABONBA_PTR_SET_VALUE(today_, today) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline AlarmGroupTotal& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // yesterday Field Functions 
        bool hasYesterday() const { return this->yesterday_ != nullptr;};
        void deleteYesterday() { this->yesterday_ = nullptr;};
        inline int32_t getYesterday() const { DARABONBA_PTR_GET_DEFAULT(yesterday_, 0) };
        inline AlarmGroupTotal& setYesterday(int32_t yesterday) { DARABONBA_PTR_SET_VALUE(yesterday_, yesterday) };


      protected:
        shared_ptr<string> alarmGroup_ {};
        shared_ptr<string> compare_ {};
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> receiver_ {};
        shared_ptr<int32_t> time_ {};
        shared_ptr<int32_t> today_ {};
        shared_ptr<string> type_ {};
        shared_ptr<int32_t> yesterday_ {};
      };

      virtual bool empty() const override { return this->alarmGroup_ == nullptr
        && this->alarmGroupTotal_ == nullptr && this->channelTotal_ == nullptr && this->count_ == nullptr && this->levelTotal_ == nullptr && this->receiverTotal_ == nullptr
        && this->statistics_ == nullptr; };
      // alarmGroup Field Functions 
      bool hasAlarmGroup() const { return this->alarmGroup_ != nullptr;};
      void deleteAlarmGroup() { this->alarmGroup_ = nullptr;};
      inline string getAlarmGroup() const { DARABONBA_PTR_GET_DEFAULT(alarmGroup_, "") };
      inline Result& setAlarmGroup(string alarmGroup) { DARABONBA_PTR_SET_VALUE(alarmGroup_, alarmGroup) };


      // alarmGroupTotal Field Functions 
      bool hasAlarmGroupTotal() const { return this->alarmGroupTotal_ != nullptr;};
      void deleteAlarmGroupTotal() { this->alarmGroupTotal_ = nullptr;};
      inline const vector<Result::AlarmGroupTotal> & getAlarmGroupTotal() const { DARABONBA_PTR_GET_CONST(alarmGroupTotal_, vector<Result::AlarmGroupTotal>) };
      inline vector<Result::AlarmGroupTotal> getAlarmGroupTotal() { DARABONBA_PTR_GET(alarmGroupTotal_, vector<Result::AlarmGroupTotal>) };
      inline Result& setAlarmGroupTotal(const vector<Result::AlarmGroupTotal> & alarmGroupTotal) { DARABONBA_PTR_SET_VALUE(alarmGroupTotal_, alarmGroupTotal) };
      inline Result& setAlarmGroupTotal(vector<Result::AlarmGroupTotal> && alarmGroupTotal) { DARABONBA_PTR_SET_RVALUE(alarmGroupTotal_, alarmGroupTotal) };


      // channelTotal Field Functions 
      bool hasChannelTotal() const { return this->channelTotal_ != nullptr;};
      void deleteChannelTotal() { this->channelTotal_ = nullptr;};
      inline const vector<Result::ChannelTotal> & getChannelTotal() const { DARABONBA_PTR_GET_CONST(channelTotal_, vector<Result::ChannelTotal>) };
      inline vector<Result::ChannelTotal> getChannelTotal() { DARABONBA_PTR_GET(channelTotal_, vector<Result::ChannelTotal>) };
      inline Result& setChannelTotal(const vector<Result::ChannelTotal> & channelTotal) { DARABONBA_PTR_SET_VALUE(channelTotal_, channelTotal) };
      inline Result& setChannelTotal(vector<Result::ChannelTotal> && channelTotal) { DARABONBA_PTR_SET_RVALUE(channelTotal_, channelTotal) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline Result& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // levelTotal Field Functions 
      bool hasLevelTotal() const { return this->levelTotal_ != nullptr;};
      void deleteLevelTotal() { this->levelTotal_ = nullptr;};
      inline const vector<Result::LevelTotal> & getLevelTotal() const { DARABONBA_PTR_GET_CONST(levelTotal_, vector<Result::LevelTotal>) };
      inline vector<Result::LevelTotal> getLevelTotal() { DARABONBA_PTR_GET(levelTotal_, vector<Result::LevelTotal>) };
      inline Result& setLevelTotal(const vector<Result::LevelTotal> & levelTotal) { DARABONBA_PTR_SET_VALUE(levelTotal_, levelTotal) };
      inline Result& setLevelTotal(vector<Result::LevelTotal> && levelTotal) { DARABONBA_PTR_SET_RVALUE(levelTotal_, levelTotal) };


      // receiverTotal Field Functions 
      bool hasReceiverTotal() const { return this->receiverTotal_ != nullptr;};
      void deleteReceiverTotal() { this->receiverTotal_ = nullptr;};
      inline const vector<Result::ReceiverTotal> & getReceiverTotal() const { DARABONBA_PTR_GET_CONST(receiverTotal_, vector<Result::ReceiverTotal>) };
      inline vector<Result::ReceiverTotal> getReceiverTotal() { DARABONBA_PTR_GET(receiverTotal_, vector<Result::ReceiverTotal>) };
      inline Result& setReceiverTotal(const vector<Result::ReceiverTotal> & receiverTotal) { DARABONBA_PTR_SET_VALUE(receiverTotal_, receiverTotal) };
      inline Result& setReceiverTotal(vector<Result::ReceiverTotal> && receiverTotal) { DARABONBA_PTR_SET_RVALUE(receiverTotal_, receiverTotal) };


      // statistics Field Functions 
      bool hasStatistics() const { return this->statistics_ != nullptr;};
      void deleteStatistics() { this->statistics_ = nullptr;};
      inline const vector<Result::Statistics> & getStatistics() const { DARABONBA_PTR_GET_CONST(statistics_, vector<Result::Statistics>) };
      inline vector<Result::Statistics> getStatistics() { DARABONBA_PTR_GET(statistics_, vector<Result::Statistics>) };
      inline Result& setStatistics(const vector<Result::Statistics> & statistics) { DARABONBA_PTR_SET_VALUE(statistics_, statistics) };
      inline Result& setStatistics(vector<Result::Statistics> && statistics) { DARABONBA_PTR_SET_RVALUE(statistics_, statistics) };


    protected:
      shared_ptr<string> alarmGroup_ {};
      shared_ptr<vector<Result::AlarmGroupTotal>> alarmGroupTotal_ {};
      shared_ptr<vector<Result::ChannelTotal>> channelTotal_ {};
      shared_ptr<int32_t> count_ {};
      shared_ptr<vector<Result::LevelTotal>> levelTotal_ {};
      shared_ptr<vector<Result::ReceiverTotal>> receiverTotal_ {};
      shared_ptr<vector<Result::Statistics>> statistics_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetEmonAlarmRecordStatisticsDistributeResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetEmonAlarmRecordStatisticsDistributeResponseBody::Result) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetEmonAlarmRecordStatisticsDistributeResponseBody::Result) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBody& setResult(const GetEmonAlarmRecordStatisticsDistributeResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBody& setResult(GetEmonAlarmRecordStatisticsDistributeResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetEmonAlarmRecordStatisticsDistributeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<GetEmonAlarmRecordStatisticsDistributeResponseBody::Result> result_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
