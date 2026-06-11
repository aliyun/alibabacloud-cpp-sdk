// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_NOTIFYROUTEFORSUBSCRIPTION_HPP_
#define ALIBABACLOUD_MODELS_NOTIFYROUTEFORSUBSCRIPTION_HPP_
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
  class NotifyRouteForSubscription : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const NotifyRouteForSubscription& obj) { 
      DARABONBA_PTR_TO_JSON(channels, channels_);
      DARABONBA_PTR_TO_JSON(effectTimeRange, effectTimeRange_);
    };
    friend void from_json(const Darabonba::Json& j, NotifyRouteForSubscription& obj) { 
      DARABONBA_PTR_FROM_JSON(channels, channels_);
      DARABONBA_PTR_FROM_JSON(effectTimeRange, effectTimeRange_);
    };
    NotifyRouteForSubscription() = default ;
    NotifyRouteForSubscription(const NotifyRouteForSubscription &) = default ;
    NotifyRouteForSubscription(NotifyRouteForSubscription &&) = default ;
    NotifyRouteForSubscription(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~NotifyRouteForSubscription() = default ;
    NotifyRouteForSubscription& operator=(const NotifyRouteForSubscription &) = default ;
    NotifyRouteForSubscription& operator=(NotifyRouteForSubscription &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EffectTimeRange : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EffectTimeRange& obj) { 
        DARABONBA_PTR_TO_JSON(dayInWeek, dayInWeek_);
        DARABONBA_PTR_TO_JSON(endTimeInMinute, endTimeInMinute_);
        DARABONBA_PTR_TO_JSON(startTimeInMinute, startTimeInMinute_);
        DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, EffectTimeRange& obj) { 
        DARABONBA_PTR_FROM_JSON(dayInWeek, dayInWeek_);
        DARABONBA_PTR_FROM_JSON(endTimeInMinute, endTimeInMinute_);
        DARABONBA_PTR_FROM_JSON(startTimeInMinute, startTimeInMinute_);
        DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
      };
      EffectTimeRange() = default ;
      EffectTimeRange(const EffectTimeRange &) = default ;
      EffectTimeRange(EffectTimeRange &&) = default ;
      EffectTimeRange(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EffectTimeRange() = default ;
      EffectTimeRange& operator=(const EffectTimeRange &) = default ;
      EffectTimeRange& operator=(EffectTimeRange &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dayInWeek_ == nullptr
        && this->endTimeInMinute_ == nullptr && this->startTimeInMinute_ == nullptr && this->timeZone_ == nullptr; };
      // dayInWeek Field Functions 
      bool hasDayInWeek() const { return this->dayInWeek_ != nullptr;};
      void deleteDayInWeek() { this->dayInWeek_ = nullptr;};
      inline const vector<int32_t> & getDayInWeek() const { DARABONBA_PTR_GET_CONST(dayInWeek_, vector<int32_t>) };
      inline vector<int32_t> getDayInWeek() { DARABONBA_PTR_GET(dayInWeek_, vector<int32_t>) };
      inline EffectTimeRange& setDayInWeek(const vector<int32_t> & dayInWeek) { DARABONBA_PTR_SET_VALUE(dayInWeek_, dayInWeek) };
      inline EffectTimeRange& setDayInWeek(vector<int32_t> && dayInWeek) { DARABONBA_PTR_SET_RVALUE(dayInWeek_, dayInWeek) };


      // endTimeInMinute Field Functions 
      bool hasEndTimeInMinute() const { return this->endTimeInMinute_ != nullptr;};
      void deleteEndTimeInMinute() { this->endTimeInMinute_ = nullptr;};
      inline int32_t getEndTimeInMinute() const { DARABONBA_PTR_GET_DEFAULT(endTimeInMinute_, 0) };
      inline EffectTimeRange& setEndTimeInMinute(int32_t endTimeInMinute) { DARABONBA_PTR_SET_VALUE(endTimeInMinute_, endTimeInMinute) };


      // startTimeInMinute Field Functions 
      bool hasStartTimeInMinute() const { return this->startTimeInMinute_ != nullptr;};
      void deleteStartTimeInMinute() { this->startTimeInMinute_ = nullptr;};
      inline int32_t getStartTimeInMinute() const { DARABONBA_PTR_GET_DEFAULT(startTimeInMinute_, 0) };
      inline EffectTimeRange& setStartTimeInMinute(int32_t startTimeInMinute) { DARABONBA_PTR_SET_VALUE(startTimeInMinute_, startTimeInMinute) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline EffectTimeRange& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      // The active days of the week, specified as an array of integers.
      shared_ptr<vector<int32_t>> dayInWeek_ {};
      // The end of the active period, in minutes from 00:00. The value ranges from 0 to 1439.
      shared_ptr<int32_t> endTimeInMinute_ {};
      // The start of the active period, in minutes from 00:00. The value ranges from 0 to 1439.
      shared_ptr<int32_t> startTimeInMinute_ {};
      // The time zone for the effect time range, specified in the IANA Time Zone Database format. For example, `UTC` or `Asia/Shanghai`.
      shared_ptr<string> timeZone_ {};
    };

    class Channels : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Channels& obj) { 
        DARABONBA_PTR_TO_JSON(channelType, channelType_);
        DARABONBA_PTR_TO_JSON(enabledSubChannels, enabledSubChannels_);
        DARABONBA_PTR_TO_JSON(receivers, receivers_);
      };
      friend void from_json(const Darabonba::Json& j, Channels& obj) { 
        DARABONBA_PTR_FROM_JSON(channelType, channelType_);
        DARABONBA_PTR_FROM_JSON(enabledSubChannels, enabledSubChannels_);
        DARABONBA_PTR_FROM_JSON(receivers, receivers_);
      };
      Channels() = default ;
      Channels(const Channels &) = default ;
      Channels(Channels &&) = default ;
      Channels(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Channels() = default ;
      Channels& operator=(const Channels &) = default ;
      Channels& operator=(Channels &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->channelType_ == nullptr
        && this->enabledSubChannels_ == nullptr && this->receivers_ == nullptr; };
      // channelType Field Functions 
      bool hasChannelType() const { return this->channelType_ != nullptr;};
      void deleteChannelType() { this->channelType_ = nullptr;};
      inline string getChannelType() const { DARABONBA_PTR_GET_DEFAULT(channelType_, "") };
      inline Channels& setChannelType(string channelType) { DARABONBA_PTR_SET_VALUE(channelType_, channelType) };


      // enabledSubChannels Field Functions 
      bool hasEnabledSubChannels() const { return this->enabledSubChannels_ != nullptr;};
      void deleteEnabledSubChannels() { this->enabledSubChannels_ = nullptr;};
      inline const vector<string> & getEnabledSubChannels() const { DARABONBA_PTR_GET_CONST(enabledSubChannels_, vector<string>) };
      inline vector<string> getEnabledSubChannels() { DARABONBA_PTR_GET(enabledSubChannels_, vector<string>) };
      inline Channels& setEnabledSubChannels(const vector<string> & enabledSubChannels) { DARABONBA_PTR_SET_VALUE(enabledSubChannels_, enabledSubChannels) };
      inline Channels& setEnabledSubChannels(vector<string> && enabledSubChannels) { DARABONBA_PTR_SET_RVALUE(enabledSubChannels_, enabledSubChannels) };


      // receivers Field Functions 
      bool hasReceivers() const { return this->receivers_ != nullptr;};
      void deleteReceivers() { this->receivers_ = nullptr;};
      inline const vector<string> & getReceivers() const { DARABONBA_PTR_GET_CONST(receivers_, vector<string>) };
      inline vector<string> getReceivers() { DARABONBA_PTR_GET(receivers_, vector<string>) };
      inline Channels& setReceivers(const vector<string> & receivers) { DARABONBA_PTR_SET_VALUE(receivers_, receivers) };
      inline Channels& setReceivers(vector<string> && receivers) { DARABONBA_PTR_SET_RVALUE(receivers_, receivers) };


    protected:
      // The channel type. For example, `Email`, `SMS`, or `Webhook`.
      shared_ptr<string> channelType_ {};
      // A list of enabled sub-channels. Applicable to channels that support finer-grained topics or categories.
      shared_ptr<vector<string>> enabledSubChannels_ {};
      // A list of notification receivers. The receiver format depends on the `channelType`.
      shared_ptr<vector<string>> receivers_ {};
    };

    virtual bool empty() const override { return this->channels_ == nullptr
        && this->effectTimeRange_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline const vector<NotifyRouteForSubscription::Channels> & getChannels() const { DARABONBA_PTR_GET_CONST(channels_, vector<NotifyRouteForSubscription::Channels>) };
    inline vector<NotifyRouteForSubscription::Channels> getChannels() { DARABONBA_PTR_GET(channels_, vector<NotifyRouteForSubscription::Channels>) };
    inline NotifyRouteForSubscription& setChannels(const vector<NotifyRouteForSubscription::Channels> & channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };
    inline NotifyRouteForSubscription& setChannels(vector<NotifyRouteForSubscription::Channels> && channels) { DARABONBA_PTR_SET_RVALUE(channels_, channels) };


    // effectTimeRange Field Functions 
    bool hasEffectTimeRange() const { return this->effectTimeRange_ != nullptr;};
    void deleteEffectTimeRange() { this->effectTimeRange_ = nullptr;};
    inline const NotifyRouteForSubscription::EffectTimeRange & getEffectTimeRange() const { DARABONBA_PTR_GET_CONST(effectTimeRange_, NotifyRouteForSubscription::EffectTimeRange) };
    inline NotifyRouteForSubscription::EffectTimeRange getEffectTimeRange() { DARABONBA_PTR_GET(effectTimeRange_, NotifyRouteForSubscription::EffectTimeRange) };
    inline NotifyRouteForSubscription& setEffectTimeRange(const NotifyRouteForSubscription::EffectTimeRange & effectTimeRange) { DARABONBA_PTR_SET_VALUE(effectTimeRange_, effectTimeRange) };
    inline NotifyRouteForSubscription& setEffectTimeRange(NotifyRouteForSubscription::EffectTimeRange && effectTimeRange) { DARABONBA_PTR_SET_RVALUE(effectTimeRange_, effectTimeRange) };


  protected:
    // An array of objects, each defining a notification channel.
    shared_ptr<vector<NotifyRouteForSubscription::Channels>> channels_ {};
    // The active period for the notification rule.
    shared_ptr<NotifyRouteForSubscription::EffectTimeRange> effectTimeRange_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
