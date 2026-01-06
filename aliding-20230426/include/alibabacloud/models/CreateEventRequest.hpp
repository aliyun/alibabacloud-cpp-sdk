// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEEVENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEEVENTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateEventRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateEventRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Attendees, attendees_);
      DARABONBA_PTR_TO_JSON(CardInstances, cardInstances_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Extra, extra_);
      DARABONBA_PTR_TO_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(Location, location_);
      DARABONBA_PTR_TO_JSON(OnlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(Reminders, reminders_);
      DARABONBA_PTR_TO_JSON(RichTextDescription, richTextDescription_);
      DARABONBA_PTR_TO_JSON(Summary, summary_);
      DARABONBA_PTR_TO_JSON(UiConfigs, uiConfigs_);
      DARABONBA_PTR_TO_JSON(calendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(start, start_);
    };
    friend void from_json(const Darabonba::Json& j, CreateEventRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Attendees, attendees_);
      DARABONBA_PTR_FROM_JSON(CardInstances, cardInstances_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Extra, extra_);
      DARABONBA_PTR_FROM_JSON(IsAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(Location, location_);
      DARABONBA_PTR_FROM_JSON(OnlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(Reminders, reminders_);
      DARABONBA_PTR_FROM_JSON(RichTextDescription, richTextDescription_);
      DARABONBA_PTR_FROM_JSON(Summary, summary_);
      DARABONBA_PTR_FROM_JSON(UiConfigs, uiConfigs_);
      DARABONBA_PTR_FROM_JSON(calendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(start, start_);
    };
    CreateEventRequest() = default ;
    CreateEventRequest(const CreateEventRequest &) = default ;
    CreateEventRequest(CreateEventRequest &&) = default ;
    CreateEventRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateEventRequest() = default ;
    CreateEventRequest& operator=(const CreateEventRequest &) = default ;
    CreateEventRequest& operator=(CreateEventRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Start : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Start& obj) { 
        DARABONBA_PTR_TO_JSON(date, date_);
        DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
        DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, Start& obj) { 
        DARABONBA_PTR_FROM_JSON(date, date_);
        DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
        DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
      };
      Start() = default ;
      Start(const Start &) = default ;
      Start(Start &&) = default ;
      Start(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Start() = default ;
      Start& operator=(const Start &) = default ;
      Start& operator=(Start &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->date_ == nullptr
        && this->dateTime_ == nullptr && this->timeZone_ == nullptr; };
      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline Start& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // dateTime Field Functions 
      bool hasDateTime() const { return this->dateTime_ != nullptr;};
      void deleteDateTime() { this->dateTime_ = nullptr;};
      inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
      inline Start& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline Start& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      shared_ptr<string> date_ {};
      shared_ptr<string> dateTime_ {};
      shared_ptr<string> timeZone_ {};
    };

    class UiConfigs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UiConfigs& obj) { 
        DARABONBA_PTR_TO_JSON(uiName, uiName_);
        DARABONBA_PTR_TO_JSON(uiStatus, uiStatus_);
      };
      friend void from_json(const Darabonba::Json& j, UiConfigs& obj) { 
        DARABONBA_PTR_FROM_JSON(uiName, uiName_);
        DARABONBA_PTR_FROM_JSON(uiStatus, uiStatus_);
      };
      UiConfigs() = default ;
      UiConfigs(const UiConfigs &) = default ;
      UiConfigs(UiConfigs &&) = default ;
      UiConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UiConfigs() = default ;
      UiConfigs& operator=(const UiConfigs &) = default ;
      UiConfigs& operator=(UiConfigs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->uiName_ == nullptr
        && this->uiStatus_ == nullptr; };
      // uiName Field Functions 
      bool hasUiName() const { return this->uiName_ != nullptr;};
      void deleteUiName() { this->uiName_ = nullptr;};
      inline string getUiName() const { DARABONBA_PTR_GET_DEFAULT(uiName_, "") };
      inline UiConfigs& setUiName(string uiName) { DARABONBA_PTR_SET_VALUE(uiName_, uiName) };


      // uiStatus Field Functions 
      bool hasUiStatus() const { return this->uiStatus_ != nullptr;};
      void deleteUiStatus() { this->uiStatus_ = nullptr;};
      inline string getUiStatus() const { DARABONBA_PTR_GET_DEFAULT(uiStatus_, "") };
      inline UiConfigs& setUiStatus(string uiStatus) { DARABONBA_PTR_SET_VALUE(uiStatus_, uiStatus) };


    protected:
      shared_ptr<string> uiName_ {};
      shared_ptr<string> uiStatus_ {};
    };

    class RichTextDescription : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RichTextDescription& obj) { 
        DARABONBA_PTR_TO_JSON(text, text_);
      };
      friend void from_json(const Darabonba::Json& j, RichTextDescription& obj) { 
        DARABONBA_PTR_FROM_JSON(text, text_);
      };
      RichTextDescription() = default ;
      RichTextDescription(const RichTextDescription &) = default ;
      RichTextDescription(RichTextDescription &&) = default ;
      RichTextDescription(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RichTextDescription() = default ;
      RichTextDescription& operator=(const RichTextDescription &) = default ;
      RichTextDescription& operator=(RichTextDescription &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->text_ == nullptr; };
      // text Field Functions 
      bool hasText() const { return this->text_ != nullptr;};
      void deleteText() { this->text_ = nullptr;};
      inline string getText() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
      inline RichTextDescription& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    protected:
      shared_ptr<string> text_ {};
    };

    class Reminders : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Reminders& obj) { 
        DARABONBA_PTR_TO_JSON(method, method_);
        DARABONBA_PTR_TO_JSON(minutes, minutes_);
      };
      friend void from_json(const Darabonba::Json& j, Reminders& obj) { 
        DARABONBA_PTR_FROM_JSON(method, method_);
        DARABONBA_PTR_FROM_JSON(minutes, minutes_);
      };
      Reminders() = default ;
      Reminders(const Reminders &) = default ;
      Reminders(Reminders &&) = default ;
      Reminders(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Reminders() = default ;
      Reminders& operator=(const Reminders &) = default ;
      Reminders& operator=(Reminders &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->method_ == nullptr
        && this->minutes_ == nullptr; };
      // method Field Functions 
      bool hasMethod() const { return this->method_ != nullptr;};
      void deleteMethod() { this->method_ = nullptr;};
      inline string getMethod() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
      inline Reminders& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


      // minutes Field Functions 
      bool hasMinutes() const { return this->minutes_ != nullptr;};
      void deleteMinutes() { this->minutes_ = nullptr;};
      inline int32_t getMinutes() const { DARABONBA_PTR_GET_DEFAULT(minutes_, 0) };
      inline Reminders& setMinutes(int32_t minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };


    protected:
      shared_ptr<string> method_ {};
      shared_ptr<int32_t> minutes_ {};
    };

    class Recurrence : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Recurrence& obj) { 
        DARABONBA_PTR_TO_JSON(pattern, pattern_);
        DARABONBA_PTR_TO_JSON(range, range_);
      };
      friend void from_json(const Darabonba::Json& j, Recurrence& obj) { 
        DARABONBA_PTR_FROM_JSON(pattern, pattern_);
        DARABONBA_PTR_FROM_JSON(range, range_);
      };
      Recurrence() = default ;
      Recurrence(const Recurrence &) = default ;
      Recurrence(Recurrence &&) = default ;
      Recurrence(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Recurrence() = default ;
      Recurrence& operator=(const Recurrence &) = default ;
      Recurrence& operator=(Recurrence &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Range : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Range& obj) { 
          DARABONBA_PTR_TO_JSON(endDate, endDate_);
          DARABONBA_PTR_TO_JSON(numberOfOccurrences, numberOfOccurrences_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Range& obj) { 
          DARABONBA_PTR_FROM_JSON(endDate, endDate_);
          DARABONBA_PTR_FROM_JSON(numberOfOccurrences, numberOfOccurrences_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Range() = default ;
        Range(const Range &) = default ;
        Range(Range &&) = default ;
        Range(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Range() = default ;
        Range& operator=(const Range &) = default ;
        Range& operator=(Range &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endDate_ == nullptr
        && this->numberOfOccurrences_ == nullptr && this->type_ == nullptr; };
        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline Range& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // numberOfOccurrences Field Functions 
        bool hasNumberOfOccurrences() const { return this->numberOfOccurrences_ != nullptr;};
        void deleteNumberOfOccurrences() { this->numberOfOccurrences_ = nullptr;};
        inline int32_t getNumberOfOccurrences() const { DARABONBA_PTR_GET_DEFAULT(numberOfOccurrences_, 0) };
        inline Range& setNumberOfOccurrences(int32_t numberOfOccurrences) { DARABONBA_PTR_SET_VALUE(numberOfOccurrences_, numberOfOccurrences) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Range& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> endDate_ {};
        shared_ptr<int32_t> numberOfOccurrences_ {};
        shared_ptr<string> type_ {};
      };

      class Pattern : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Pattern& obj) { 
          DARABONBA_PTR_TO_JSON(dayOfMonth, dayOfMonth_);
          DARABONBA_PTR_TO_JSON(daysOfWeek, daysOfWeek_);
          DARABONBA_PTR_TO_JSON(index, index_);
          DARABONBA_PTR_TO_JSON(interval, interval_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Pattern& obj) { 
          DARABONBA_PTR_FROM_JSON(dayOfMonth, dayOfMonth_);
          DARABONBA_PTR_FROM_JSON(daysOfWeek, daysOfWeek_);
          DARABONBA_PTR_FROM_JSON(index, index_);
          DARABONBA_PTR_FROM_JSON(interval, interval_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        Pattern() = default ;
        Pattern(const Pattern &) = default ;
        Pattern(Pattern &&) = default ;
        Pattern(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Pattern() = default ;
        Pattern& operator=(const Pattern &) = default ;
        Pattern& operator=(Pattern &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dayOfMonth_ == nullptr
        && this->daysOfWeek_ == nullptr && this->index_ == nullptr && this->interval_ == nullptr && this->type_ == nullptr; };
        // dayOfMonth Field Functions 
        bool hasDayOfMonth() const { return this->dayOfMonth_ != nullptr;};
        void deleteDayOfMonth() { this->dayOfMonth_ = nullptr;};
        inline int32_t getDayOfMonth() const { DARABONBA_PTR_GET_DEFAULT(dayOfMonth_, 0) };
        inline Pattern& setDayOfMonth(int32_t dayOfMonth) { DARABONBA_PTR_SET_VALUE(dayOfMonth_, dayOfMonth) };


        // daysOfWeek Field Functions 
        bool hasDaysOfWeek() const { return this->daysOfWeek_ != nullptr;};
        void deleteDaysOfWeek() { this->daysOfWeek_ = nullptr;};
        inline string getDaysOfWeek() const { DARABONBA_PTR_GET_DEFAULT(daysOfWeek_, "") };
        inline Pattern& setDaysOfWeek(string daysOfWeek) { DARABONBA_PTR_SET_VALUE(daysOfWeek_, daysOfWeek) };


        // index Field Functions 
        bool hasIndex() const { return this->index_ != nullptr;};
        void deleteIndex() { this->index_ = nullptr;};
        inline string getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, "") };
        inline Pattern& setIndex(string index) { DARABONBA_PTR_SET_VALUE(index_, index) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int32_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
        inline Pattern& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Pattern& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<int32_t> dayOfMonth_ {};
        shared_ptr<string> daysOfWeek_ {};
        shared_ptr<string> index_ {};
        shared_ptr<int32_t> interval_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->pattern_ == nullptr
        && this->range_ == nullptr; };
      // pattern Field Functions 
      bool hasPattern() const { return this->pattern_ != nullptr;};
      void deletePattern() { this->pattern_ = nullptr;};
      inline const Recurrence::Pattern & getPattern() const { DARABONBA_PTR_GET_CONST(pattern_, Recurrence::Pattern) };
      inline Recurrence::Pattern getPattern() { DARABONBA_PTR_GET(pattern_, Recurrence::Pattern) };
      inline Recurrence& setPattern(const Recurrence::Pattern & pattern) { DARABONBA_PTR_SET_VALUE(pattern_, pattern) };
      inline Recurrence& setPattern(Recurrence::Pattern && pattern) { DARABONBA_PTR_SET_RVALUE(pattern_, pattern) };


      // range Field Functions 
      bool hasRange() const { return this->range_ != nullptr;};
      void deleteRange() { this->range_ = nullptr;};
      inline const Recurrence::Range & getRange() const { DARABONBA_PTR_GET_CONST(range_, Recurrence::Range) };
      inline Recurrence::Range getRange() { DARABONBA_PTR_GET(range_, Recurrence::Range) };
      inline Recurrence& setRange(const Recurrence::Range & range) { DARABONBA_PTR_SET_VALUE(range_, range) };
      inline Recurrence& setRange(Recurrence::Range && range) { DARABONBA_PTR_SET_RVALUE(range_, range) };


    protected:
      shared_ptr<Recurrence::Pattern> pattern_ {};
      shared_ptr<Recurrence::Range> range_ {};
    };

    class OnlineMeetingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineMeetingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineMeetingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(type, type_);
      };
      OnlineMeetingInfo() = default ;
      OnlineMeetingInfo(const OnlineMeetingInfo &) = default ;
      OnlineMeetingInfo(OnlineMeetingInfo &&) = default ;
      OnlineMeetingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OnlineMeetingInfo() = default ;
      OnlineMeetingInfo& operator=(const OnlineMeetingInfo &) = default ;
      OnlineMeetingInfo& operator=(OnlineMeetingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->type_ == nullptr; };
      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OnlineMeetingInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      shared_ptr<string> type_ {};
    };

    class Location : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Location& obj) { 
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
      };
      friend void from_json(const Darabonba::Json& j, Location& obj) { 
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      };
      Location() = default ;
      Location(const Location &) = default ;
      Location(Location &&) = default ;
      Location(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Location() = default ;
      Location& operator=(const Location &) = default ;
      Location& operator=(Location &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Location& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    protected:
      shared_ptr<string> displayName_ {};
    };

    class End : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const End& obj) { 
        DARABONBA_PTR_TO_JSON(date, date_);
        DARABONBA_PTR_TO_JSON(dateTime, dateTime_);
        DARABONBA_PTR_TO_JSON(timeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, End& obj) { 
        DARABONBA_PTR_FROM_JSON(date, date_);
        DARABONBA_PTR_FROM_JSON(dateTime, dateTime_);
        DARABONBA_PTR_FROM_JSON(timeZone, timeZone_);
      };
      End() = default ;
      End(const End &) = default ;
      End(End &&) = default ;
      End(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~End() = default ;
      End& operator=(const End &) = default ;
      End& operator=(End &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->date_ == nullptr
        && this->dateTime_ == nullptr && this->timeZone_ == nullptr; };
      // date Field Functions 
      bool hasDate() const { return this->date_ != nullptr;};
      void deleteDate() { this->date_ = nullptr;};
      inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
      inline End& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


      // dateTime Field Functions 
      bool hasDateTime() const { return this->dateTime_ != nullptr;};
      void deleteDateTime() { this->dateTime_ = nullptr;};
      inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
      inline End& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


      // timeZone Field Functions 
      bool hasTimeZone() const { return this->timeZone_ != nullptr;};
      void deleteTimeZone() { this->timeZone_ = nullptr;};
      inline string getTimeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
      inline End& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


    protected:
      shared_ptr<string> date_ {};
      shared_ptr<string> dateTime_ {};
      shared_ptr<string> timeZone_ {};
    };

    class CardInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CardInstances& obj) { 
        DARABONBA_PTR_TO_JSON(OutTrackId, outTrackId_);
        DARABONBA_PTR_TO_JSON(Scenario, scenario_);
      };
      friend void from_json(const Darabonba::Json& j, CardInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(OutTrackId, outTrackId_);
        DARABONBA_PTR_FROM_JSON(Scenario, scenario_);
      };
      CardInstances() = default ;
      CardInstances(const CardInstances &) = default ;
      CardInstances(CardInstances &&) = default ;
      CardInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CardInstances() = default ;
      CardInstances& operator=(const CardInstances &) = default ;
      CardInstances& operator=(CardInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->outTrackId_ == nullptr
        && this->scenario_ == nullptr; };
      // outTrackId Field Functions 
      bool hasOutTrackId() const { return this->outTrackId_ != nullptr;};
      void deleteOutTrackId() { this->outTrackId_ = nullptr;};
      inline string getOutTrackId() const { DARABONBA_PTR_GET_DEFAULT(outTrackId_, "") };
      inline CardInstances& setOutTrackId(string outTrackId) { DARABONBA_PTR_SET_VALUE(outTrackId_, outTrackId) };


      // scenario Field Functions 
      bool hasScenario() const { return this->scenario_ != nullptr;};
      void deleteScenario() { this->scenario_ = nullptr;};
      inline string getScenario() const { DARABONBA_PTR_GET_DEFAULT(scenario_, "") };
      inline CardInstances& setScenario(string scenario) { DARABONBA_PTR_SET_VALUE(scenario_, scenario) };


    protected:
      shared_ptr<string> outTrackId_ {};
      shared_ptr<string> scenario_ {};
    };

    class Attendees : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Attendees& obj) { 
        DARABONBA_PTR_TO_JSON(id, id_);
        DARABONBA_PTR_TO_JSON(isOptional, isOptional_);
      };
      friend void from_json(const Darabonba::Json& j, Attendees& obj) { 
        DARABONBA_PTR_FROM_JSON(id, id_);
        DARABONBA_PTR_FROM_JSON(isOptional, isOptional_);
      };
      Attendees() = default ;
      Attendees(const Attendees &) = default ;
      Attendees(Attendees &&) = default ;
      Attendees(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Attendees() = default ;
      Attendees& operator=(const Attendees &) = default ;
      Attendees& operator=(Attendees &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->id_ == nullptr
        && this->isOptional_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Attendees& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isOptional Field Functions 
      bool hasIsOptional() const { return this->isOptional_ != nullptr;};
      void deleteIsOptional() { this->isOptional_ = nullptr;};
      inline bool getIsOptional() const { DARABONBA_PTR_GET_DEFAULT(isOptional_, false) };
      inline Attendees& setIsOptional(bool isOptional) { DARABONBA_PTR_SET_VALUE(isOptional_, isOptional) };


    protected:
      shared_ptr<string> id_ {};
      shared_ptr<bool> isOptional_ {};
    };

    virtual bool empty() const override { return this->attendees_ == nullptr
        && this->cardInstances_ == nullptr && this->description_ == nullptr && this->end_ == nullptr && this->extra_ == nullptr && this->isAllDay_ == nullptr
        && this->location_ == nullptr && this->onlineMeetingInfo_ == nullptr && this->recurrence_ == nullptr && this->reminders_ == nullptr && this->richTextDescription_ == nullptr
        && this->summary_ == nullptr && this->uiConfigs_ == nullptr && this->calendarId_ == nullptr && this->start_ == nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<CreateEventRequest::Attendees> & getAttendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<CreateEventRequest::Attendees>) };
    inline vector<CreateEventRequest::Attendees> getAttendees() { DARABONBA_PTR_GET(attendees_, vector<CreateEventRequest::Attendees>) };
    inline CreateEventRequest& setAttendees(const vector<CreateEventRequest::Attendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline CreateEventRequest& setAttendees(vector<CreateEventRequest::Attendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // cardInstances Field Functions 
    bool hasCardInstances() const { return this->cardInstances_ != nullptr;};
    void deleteCardInstances() { this->cardInstances_ = nullptr;};
    inline const vector<CreateEventRequest::CardInstances> & getCardInstances() const { DARABONBA_PTR_GET_CONST(cardInstances_, vector<CreateEventRequest::CardInstances>) };
    inline vector<CreateEventRequest::CardInstances> getCardInstances() { DARABONBA_PTR_GET(cardInstances_, vector<CreateEventRequest::CardInstances>) };
    inline CreateEventRequest& setCardInstances(const vector<CreateEventRequest::CardInstances> & cardInstances) { DARABONBA_PTR_SET_VALUE(cardInstances_, cardInstances) };
    inline CreateEventRequest& setCardInstances(vector<CreateEventRequest::CardInstances> && cardInstances) { DARABONBA_PTR_SET_RVALUE(cardInstances_, cardInstances) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateEventRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const CreateEventRequest::End & getEnd() const { DARABONBA_PTR_GET_CONST(end_, CreateEventRequest::End) };
    inline CreateEventRequest::End getEnd() { DARABONBA_PTR_GET(end_, CreateEventRequest::End) };
    inline CreateEventRequest& setEnd(const CreateEventRequest::End & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline CreateEventRequest& setEnd(CreateEventRequest::End && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const map<string, string> & getExtra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
    inline map<string, string> getExtra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
    inline CreateEventRequest& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline CreateEventRequest& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool getIsAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline CreateEventRequest& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const CreateEventRequest::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, CreateEventRequest::Location) };
    inline CreateEventRequest::Location getLocation() { DARABONBA_PTR_GET(location_, CreateEventRequest::Location) };
    inline CreateEventRequest& setLocation(const CreateEventRequest::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline CreateEventRequest& setLocation(CreateEventRequest::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // onlineMeetingInfo Field Functions 
    bool hasOnlineMeetingInfo() const { return this->onlineMeetingInfo_ != nullptr;};
    void deleteOnlineMeetingInfo() { this->onlineMeetingInfo_ = nullptr;};
    inline const CreateEventRequest::OnlineMeetingInfo & getOnlineMeetingInfo() const { DARABONBA_PTR_GET_CONST(onlineMeetingInfo_, CreateEventRequest::OnlineMeetingInfo) };
    inline CreateEventRequest::OnlineMeetingInfo getOnlineMeetingInfo() { DARABONBA_PTR_GET(onlineMeetingInfo_, CreateEventRequest::OnlineMeetingInfo) };
    inline CreateEventRequest& setOnlineMeetingInfo(const CreateEventRequest::OnlineMeetingInfo & onlineMeetingInfo) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfo_, onlineMeetingInfo) };
    inline CreateEventRequest& setOnlineMeetingInfo(CreateEventRequest::OnlineMeetingInfo && onlineMeetingInfo) { DARABONBA_PTR_SET_RVALUE(onlineMeetingInfo_, onlineMeetingInfo) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const CreateEventRequest::Recurrence & getRecurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, CreateEventRequest::Recurrence) };
    inline CreateEventRequest::Recurrence getRecurrence() { DARABONBA_PTR_GET(recurrence_, CreateEventRequest::Recurrence) };
    inline CreateEventRequest& setRecurrence(const CreateEventRequest::Recurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline CreateEventRequest& setRecurrence(CreateEventRequest::Recurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // reminders Field Functions 
    bool hasReminders() const { return this->reminders_ != nullptr;};
    void deleteReminders() { this->reminders_ = nullptr;};
    inline const vector<CreateEventRequest::Reminders> & getReminders() const { DARABONBA_PTR_GET_CONST(reminders_, vector<CreateEventRequest::Reminders>) };
    inline vector<CreateEventRequest::Reminders> getReminders() { DARABONBA_PTR_GET(reminders_, vector<CreateEventRequest::Reminders>) };
    inline CreateEventRequest& setReminders(const vector<CreateEventRequest::Reminders> & reminders) { DARABONBA_PTR_SET_VALUE(reminders_, reminders) };
    inline CreateEventRequest& setReminders(vector<CreateEventRequest::Reminders> && reminders) { DARABONBA_PTR_SET_RVALUE(reminders_, reminders) };


    // richTextDescription Field Functions 
    bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
    void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
    inline const CreateEventRequest::RichTextDescription & getRichTextDescription() const { DARABONBA_PTR_GET_CONST(richTextDescription_, CreateEventRequest::RichTextDescription) };
    inline CreateEventRequest::RichTextDescription getRichTextDescription() { DARABONBA_PTR_GET(richTextDescription_, CreateEventRequest::RichTextDescription) };
    inline CreateEventRequest& setRichTextDescription(const CreateEventRequest::RichTextDescription & richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };
    inline CreateEventRequest& setRichTextDescription(CreateEventRequest::RichTextDescription && richTextDescription) { DARABONBA_PTR_SET_RVALUE(richTextDescription_, richTextDescription) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline CreateEventRequest& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // uiConfigs Field Functions 
    bool hasUiConfigs() const { return this->uiConfigs_ != nullptr;};
    void deleteUiConfigs() { this->uiConfigs_ = nullptr;};
    inline const vector<CreateEventRequest::UiConfigs> & getUiConfigs() const { DARABONBA_PTR_GET_CONST(uiConfigs_, vector<CreateEventRequest::UiConfigs>) };
    inline vector<CreateEventRequest::UiConfigs> getUiConfigs() { DARABONBA_PTR_GET(uiConfigs_, vector<CreateEventRequest::UiConfigs>) };
    inline CreateEventRequest& setUiConfigs(const vector<CreateEventRequest::UiConfigs> & uiConfigs) { DARABONBA_PTR_SET_VALUE(uiConfigs_, uiConfigs) };
    inline CreateEventRequest& setUiConfigs(vector<CreateEventRequest::UiConfigs> && uiConfigs) { DARABONBA_PTR_SET_RVALUE(uiConfigs_, uiConfigs) };


    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline CreateEventRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const CreateEventRequest::Start & getStart() const { DARABONBA_PTR_GET_CONST(start_, CreateEventRequest::Start) };
    inline CreateEventRequest::Start getStart() { DARABONBA_PTR_GET(start_, CreateEventRequest::Start) };
    inline CreateEventRequest& setStart(const CreateEventRequest::Start & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline CreateEventRequest& setStart(CreateEventRequest::Start && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


  protected:
    shared_ptr<vector<CreateEventRequest::Attendees>> attendees_ {};
    shared_ptr<vector<CreateEventRequest::CardInstances>> cardInstances_ {};
    shared_ptr<string> description_ {};
    shared_ptr<CreateEventRequest::End> end_ {};
    shared_ptr<map<string, string>> extra_ {};
    shared_ptr<bool> isAllDay_ {};
    shared_ptr<CreateEventRequest::Location> location_ {};
    shared_ptr<CreateEventRequest::OnlineMeetingInfo> onlineMeetingInfo_ {};
    shared_ptr<CreateEventRequest::Recurrence> recurrence_ {};
    shared_ptr<vector<CreateEventRequest::Reminders>> reminders_ {};
    shared_ptr<CreateEventRequest::RichTextDescription> richTextDescription_ {};
    // This parameter is required.
    shared_ptr<string> summary_ {};
    shared_ptr<vector<CreateEventRequest::UiConfigs>> uiConfigs_ {};
    // This parameter is required.
    shared_ptr<string> calendarId_ {};
    // This parameter is required.
    shared_ptr<CreateEventRequest::Start> start_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
