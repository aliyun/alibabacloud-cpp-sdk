// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PATCHEVENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class PatchEventResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PatchEventResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(attendees, attendees_);
      DARABONBA_PTR_TO_JSON(cardInstances, cardInstances_);
      DARABONBA_PTR_TO_JSON(categories, categories_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(end, end_);
      DARABONBA_PTR_TO_JSON(freeBusyStatus, freeBusyStatus_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(isAllDay, isAllDay_);
      DARABONBA_PTR_TO_JSON(location, location_);
      DARABONBA_PTR_TO_JSON(onlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_TO_JSON(organizer, organizer_);
      DARABONBA_PTR_TO_JSON(recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(reminders, reminders_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(richTextDescription, richTextDescription_);
      DARABONBA_PTR_TO_JSON(start, start_);
      DARABONBA_PTR_TO_JSON(summary, summary_);
      DARABONBA_PTR_TO_JSON(uiConfigs, uiConfigs_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, PatchEventResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(attendees, attendees_);
      DARABONBA_PTR_FROM_JSON(cardInstances, cardInstances_);
      DARABONBA_PTR_FROM_JSON(categories, categories_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(end, end_);
      DARABONBA_PTR_FROM_JSON(freeBusyStatus, freeBusyStatus_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(isAllDay, isAllDay_);
      DARABONBA_PTR_FROM_JSON(location, location_);
      DARABONBA_PTR_FROM_JSON(onlineMeetingInfo, onlineMeetingInfo_);
      DARABONBA_PTR_FROM_JSON(organizer, organizer_);
      DARABONBA_PTR_FROM_JSON(recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(reminders, reminders_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(richTextDescription, richTextDescription_);
      DARABONBA_PTR_FROM_JSON(start, start_);
      DARABONBA_PTR_FROM_JSON(summary, summary_);
      DARABONBA_PTR_FROM_JSON(uiConfigs, uiConfigs_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    PatchEventResponseBody() = default ;
    PatchEventResponseBody(const PatchEventResponseBody &) = default ;
    PatchEventResponseBody(PatchEventResponseBody &&) = default ;
    PatchEventResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PatchEventResponseBody() = default ;
    PatchEventResponseBody& operator=(const PatchEventResponseBody &) = default ;
    PatchEventResponseBody& operator=(PatchEventResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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

    class Start : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Start& obj) { 
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, Start& obj) { 
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
        DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
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
        DARABONBA_PTR_TO_JSON(Method, method_);
        DARABONBA_PTR_TO_JSON(Minutes, minutes_);
      };
      friend void from_json(const Darabonba::Json& j, Reminders& obj) { 
        DARABONBA_PTR_FROM_JSON(Method, method_);
        DARABONBA_PTR_FROM_JSON(Minutes, minutes_);
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
      inline string getMinutes() const { DARABONBA_PTR_GET_DEFAULT(minutes_, "") };
      inline Reminders& setMinutes(string minutes) { DARABONBA_PTR_SET_VALUE(minutes_, minutes) };


    protected:
      shared_ptr<string> method_ {};
      shared_ptr<string> minutes_ {};
    };

    class Recurrence : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Recurrence& obj) { 
        DARABONBA_PTR_TO_JSON(Pattern, pattern_);
        DARABONBA_PTR_TO_JSON(Range, range_);
      };
      friend void from_json(const Darabonba::Json& j, Recurrence& obj) { 
        DARABONBA_PTR_FROM_JSON(Pattern, pattern_);
        DARABONBA_PTR_FROM_JSON(Range, range_);
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
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(NumberOfOccurrences, numberOfOccurrences_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Range& obj) { 
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(NumberOfOccurrences, numberOfOccurrences_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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
          DARABONBA_PTR_TO_JSON(DayOfMonth, dayOfMonth_);
          DARABONBA_PTR_TO_JSON(DaysOfWeek, daysOfWeek_);
          DARABONBA_PTR_TO_JSON(Index, index_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Pattern& obj) { 
          DARABONBA_PTR_FROM_JSON(DayOfMonth, dayOfMonth_);
          DARABONBA_PTR_FROM_JSON(DaysOfWeek, daysOfWeek_);
          DARABONBA_PTR_FROM_JSON(Index, index_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
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

    class Organizer : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Organizer& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
        DARABONBA_PTR_TO_JSON(Self, self_);
      };
      friend void from_json(const Darabonba::Json& j, Organizer& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
        DARABONBA_PTR_FROM_JSON(Self, self_);
      };
      Organizer() = default ;
      Organizer(const Organizer &) = default ;
      Organizer(Organizer &&) = default ;
      Organizer(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Organizer() = default ;
      Organizer& operator=(const Organizer &) = default ;
      Organizer& operator=(Organizer &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->id_ == nullptr && this->responseStatus_ == nullptr && this->self_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Organizer& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Organizer& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // responseStatus Field Functions 
      bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
      void deleteResponseStatus() { this->responseStatus_ = nullptr;};
      inline string getResponseStatus() const { DARABONBA_PTR_GET_DEFAULT(responseStatus_, "") };
      inline Organizer& setResponseStatus(string responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };


      // self Field Functions 
      bool hasSelf() const { return this->self_ != nullptr;};
      void deleteSelf() { this->self_ = nullptr;};
      inline bool getSelf() const { DARABONBA_PTR_GET_DEFAULT(self_, false) };
      inline Organizer& setSelf(bool self) { DARABONBA_PTR_SET_VALUE(self_, self) };


    protected:
      shared_ptr<string> displayName_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> responseStatus_ {};
      shared_ptr<bool> self_ {};
    };

    class OnlineMeetingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OnlineMeetingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(conferenceId, conferenceId_);
        DARABONBA_PTR_TO_JSON(type, type_);
        DARABONBA_PTR_TO_JSON(url, url_);
      };
      friend void from_json(const Darabonba::Json& j, OnlineMeetingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(conferenceId, conferenceId_);
        DARABONBA_PTR_FROM_JSON(type, type_);
        DARABONBA_PTR_FROM_JSON(url, url_);
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
      virtual bool empty() const override { return this->conferenceId_ == nullptr
        && this->type_ == nullptr && this->url_ == nullptr; };
      // conferenceId Field Functions 
      bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
      void deleteConferenceId() { this->conferenceId_ = nullptr;};
      inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
      inline OnlineMeetingInfo& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OnlineMeetingInfo& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // url Field Functions 
      bool hasUrl() const { return this->url_ != nullptr;};
      void deleteUrl() { this->url_ = nullptr;};
      inline string getUrl() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
      inline OnlineMeetingInfo& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    protected:
      shared_ptr<string> conferenceId_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> url_ {};
    };

    class Location : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Location& obj) { 
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(MeetingRooms, meetingRooms_);
      };
      friend void from_json(const Darabonba::Json& j, Location& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(MeetingRooms, meetingRooms_);
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
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->meetingRooms_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Location& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // meetingRooms Field Functions 
      bool hasMeetingRooms() const { return this->meetingRooms_ != nullptr;};
      void deleteMeetingRooms() { this->meetingRooms_ = nullptr;};
      inline const vector<string> & getMeetingRooms() const { DARABONBA_PTR_GET_CONST(meetingRooms_, vector<string>) };
      inline vector<string> getMeetingRooms() { DARABONBA_PTR_GET(meetingRooms_, vector<string>) };
      inline Location& setMeetingRooms(const vector<string> & meetingRooms) { DARABONBA_PTR_SET_VALUE(meetingRooms_, meetingRooms) };
      inline Location& setMeetingRooms(vector<string> && meetingRooms) { DARABONBA_PTR_SET_RVALUE(meetingRooms_, meetingRooms) };


    protected:
      shared_ptr<string> displayName_ {};
      shared_ptr<vector<string>> meetingRooms_ {};
    };

    class End : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const End& obj) { 
        DARABONBA_PTR_TO_JSON(Date, date_);
        DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
        DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
      };
      friend void from_json(const Darabonba::Json& j, End& obj) { 
        DARABONBA_PTR_FROM_JSON(Date, date_);
        DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
        DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
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

    class Categories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Categories& obj) { 
        DARABONBA_PTR_TO_JSON(categoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(displayName, displayName_);
      };
      friend void from_json(const Darabonba::Json& j, Categories& obj) { 
        DARABONBA_PTR_FROM_JSON(categoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      };
      Categories() = default ;
      Categories(const Categories &) = default ;
      Categories(Categories &&) = default ;
      Categories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Categories() = default ;
      Categories& operator=(const Categories &) = default ;
      Categories& operator=(Categories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->displayName_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline Categories& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Categories& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    protected:
      shared_ptr<string> categoryId_ {};
      shared_ptr<string> displayName_ {};
    };

    class CardInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CardInstances& obj) { 
        DARABONBA_PTR_TO_JSON(outTrackId, outTrackId_);
        DARABONBA_PTR_TO_JSON(scenario, scenario_);
      };
      friend void from_json(const Darabonba::Json& j, CardInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(outTrackId, outTrackId_);
        DARABONBA_PTR_FROM_JSON(scenario, scenario_);
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
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsOptional, isOptional_);
        DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
        DARABONBA_PTR_TO_JSON(Self, self_);
      };
      friend void from_json(const Darabonba::Json& j, Attendees& obj) { 
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsOptional, isOptional_);
        DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
        DARABONBA_PTR_FROM_JSON(Self, self_);
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
      virtual bool empty() const override { return this->displayName_ == nullptr
        && this->id_ == nullptr && this->isOptional_ == nullptr && this->responseStatus_ == nullptr && this->self_ == nullptr; };
      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Attendees& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


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


      // responseStatus Field Functions 
      bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
      void deleteResponseStatus() { this->responseStatus_ = nullptr;};
      inline string getResponseStatus() const { DARABONBA_PTR_GET_DEFAULT(responseStatus_, "") };
      inline Attendees& setResponseStatus(string responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };


      // self Field Functions 
      bool hasSelf() const { return this->self_ != nullptr;};
      void deleteSelf() { this->self_ = nullptr;};
      inline bool getSelf() const { DARABONBA_PTR_GET_DEFAULT(self_, false) };
      inline Attendees& setSelf(bool self) { DARABONBA_PTR_SET_VALUE(self_, self) };


    protected:
      shared_ptr<string> displayName_ {};
      shared_ptr<string> id_ {};
      shared_ptr<bool> isOptional_ {};
      shared_ptr<string> responseStatus_ {};
      shared_ptr<bool> self_ {};
    };

    virtual bool empty() const override { return this->attendees_ == nullptr
        && this->cardInstances_ == nullptr && this->categories_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->end_ == nullptr
        && this->freeBusyStatus_ == nullptr && this->id_ == nullptr && this->isAllDay_ == nullptr && this->location_ == nullptr && this->onlineMeetingInfo_ == nullptr
        && this->organizer_ == nullptr && this->recurrence_ == nullptr && this->reminders_ == nullptr && this->requestId_ == nullptr && this->richTextDescription_ == nullptr
        && this->start_ == nullptr && this->summary_ == nullptr && this->uiConfigs_ == nullptr && this->updateTime_ == nullptr; };
    // attendees Field Functions 
    bool hasAttendees() const { return this->attendees_ != nullptr;};
    void deleteAttendees() { this->attendees_ = nullptr;};
    inline const vector<PatchEventResponseBody::Attendees> & getAttendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<PatchEventResponseBody::Attendees>) };
    inline vector<PatchEventResponseBody::Attendees> getAttendees() { DARABONBA_PTR_GET(attendees_, vector<PatchEventResponseBody::Attendees>) };
    inline PatchEventResponseBody& setAttendees(const vector<PatchEventResponseBody::Attendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
    inline PatchEventResponseBody& setAttendees(vector<PatchEventResponseBody::Attendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


    // cardInstances Field Functions 
    bool hasCardInstances() const { return this->cardInstances_ != nullptr;};
    void deleteCardInstances() { this->cardInstances_ = nullptr;};
    inline const vector<PatchEventResponseBody::CardInstances> & getCardInstances() const { DARABONBA_PTR_GET_CONST(cardInstances_, vector<PatchEventResponseBody::CardInstances>) };
    inline vector<PatchEventResponseBody::CardInstances> getCardInstances() { DARABONBA_PTR_GET(cardInstances_, vector<PatchEventResponseBody::CardInstances>) };
    inline PatchEventResponseBody& setCardInstances(const vector<PatchEventResponseBody::CardInstances> & cardInstances) { DARABONBA_PTR_SET_VALUE(cardInstances_, cardInstances) };
    inline PatchEventResponseBody& setCardInstances(vector<PatchEventResponseBody::CardInstances> && cardInstances) { DARABONBA_PTR_SET_RVALUE(cardInstances_, cardInstances) };


    // categories Field Functions 
    bool hasCategories() const { return this->categories_ != nullptr;};
    void deleteCategories() { this->categories_ = nullptr;};
    inline const vector<PatchEventResponseBody::Categories> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<PatchEventResponseBody::Categories>) };
    inline vector<PatchEventResponseBody::Categories> getCategories() { DARABONBA_PTR_GET(categories_, vector<PatchEventResponseBody::Categories>) };
    inline PatchEventResponseBody& setCategories(const vector<PatchEventResponseBody::Categories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
    inline PatchEventResponseBody& setCategories(vector<PatchEventResponseBody::Categories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline PatchEventResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PatchEventResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline const PatchEventResponseBody::End & getEnd() const { DARABONBA_PTR_GET_CONST(end_, PatchEventResponseBody::End) };
    inline PatchEventResponseBody::End getEnd() { DARABONBA_PTR_GET(end_, PatchEventResponseBody::End) };
    inline PatchEventResponseBody& setEnd(const PatchEventResponseBody::End & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
    inline PatchEventResponseBody& setEnd(PatchEventResponseBody::End && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


    // freeBusyStatus Field Functions 
    bool hasFreeBusyStatus() const { return this->freeBusyStatus_ != nullptr;};
    void deleteFreeBusyStatus() { this->freeBusyStatus_ = nullptr;};
    inline string getFreeBusyStatus() const { DARABONBA_PTR_GET_DEFAULT(freeBusyStatus_, "") };
    inline PatchEventResponseBody& setFreeBusyStatus(string freeBusyStatus) { DARABONBA_PTR_SET_VALUE(freeBusyStatus_, freeBusyStatus) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PatchEventResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isAllDay Field Functions 
    bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
    void deleteIsAllDay() { this->isAllDay_ = nullptr;};
    inline bool getIsAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
    inline PatchEventResponseBody& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


    // location Field Functions 
    bool hasLocation() const { return this->location_ != nullptr;};
    void deleteLocation() { this->location_ = nullptr;};
    inline const PatchEventResponseBody::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, PatchEventResponseBody::Location) };
    inline PatchEventResponseBody::Location getLocation() { DARABONBA_PTR_GET(location_, PatchEventResponseBody::Location) };
    inline PatchEventResponseBody& setLocation(const PatchEventResponseBody::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
    inline PatchEventResponseBody& setLocation(PatchEventResponseBody::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


    // onlineMeetingInfo Field Functions 
    bool hasOnlineMeetingInfo() const { return this->onlineMeetingInfo_ != nullptr;};
    void deleteOnlineMeetingInfo() { this->onlineMeetingInfo_ = nullptr;};
    inline const PatchEventResponseBody::OnlineMeetingInfo & getOnlineMeetingInfo() const { DARABONBA_PTR_GET_CONST(onlineMeetingInfo_, PatchEventResponseBody::OnlineMeetingInfo) };
    inline PatchEventResponseBody::OnlineMeetingInfo getOnlineMeetingInfo() { DARABONBA_PTR_GET(onlineMeetingInfo_, PatchEventResponseBody::OnlineMeetingInfo) };
    inline PatchEventResponseBody& setOnlineMeetingInfo(const PatchEventResponseBody::OnlineMeetingInfo & onlineMeetingInfo) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfo_, onlineMeetingInfo) };
    inline PatchEventResponseBody& setOnlineMeetingInfo(PatchEventResponseBody::OnlineMeetingInfo && onlineMeetingInfo) { DARABONBA_PTR_SET_RVALUE(onlineMeetingInfo_, onlineMeetingInfo) };


    // organizer Field Functions 
    bool hasOrganizer() const { return this->organizer_ != nullptr;};
    void deleteOrganizer() { this->organizer_ = nullptr;};
    inline const PatchEventResponseBody::Organizer & getOrganizer() const { DARABONBA_PTR_GET_CONST(organizer_, PatchEventResponseBody::Organizer) };
    inline PatchEventResponseBody::Organizer getOrganizer() { DARABONBA_PTR_GET(organizer_, PatchEventResponseBody::Organizer) };
    inline PatchEventResponseBody& setOrganizer(const PatchEventResponseBody::Organizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
    inline PatchEventResponseBody& setOrganizer(PatchEventResponseBody::Organizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline const PatchEventResponseBody::Recurrence & getRecurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, PatchEventResponseBody::Recurrence) };
    inline PatchEventResponseBody::Recurrence getRecurrence() { DARABONBA_PTR_GET(recurrence_, PatchEventResponseBody::Recurrence) };
    inline PatchEventResponseBody& setRecurrence(const PatchEventResponseBody::Recurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
    inline PatchEventResponseBody& setRecurrence(PatchEventResponseBody::Recurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


    // reminders Field Functions 
    bool hasReminders() const { return this->reminders_ != nullptr;};
    void deleteReminders() { this->reminders_ = nullptr;};
    inline const vector<PatchEventResponseBody::Reminders> & getReminders() const { DARABONBA_PTR_GET_CONST(reminders_, vector<PatchEventResponseBody::Reminders>) };
    inline vector<PatchEventResponseBody::Reminders> getReminders() { DARABONBA_PTR_GET(reminders_, vector<PatchEventResponseBody::Reminders>) };
    inline PatchEventResponseBody& setReminders(const vector<PatchEventResponseBody::Reminders> & reminders) { DARABONBA_PTR_SET_VALUE(reminders_, reminders) };
    inline PatchEventResponseBody& setReminders(vector<PatchEventResponseBody::Reminders> && reminders) { DARABONBA_PTR_SET_RVALUE(reminders_, reminders) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PatchEventResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // richTextDescription Field Functions 
    bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
    void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
    inline const PatchEventResponseBody::RichTextDescription & getRichTextDescription() const { DARABONBA_PTR_GET_CONST(richTextDescription_, PatchEventResponseBody::RichTextDescription) };
    inline PatchEventResponseBody::RichTextDescription getRichTextDescription() { DARABONBA_PTR_GET(richTextDescription_, PatchEventResponseBody::RichTextDescription) };
    inline PatchEventResponseBody& setRichTextDescription(const PatchEventResponseBody::RichTextDescription & richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };
    inline PatchEventResponseBody& setRichTextDescription(PatchEventResponseBody::RichTextDescription && richTextDescription) { DARABONBA_PTR_SET_RVALUE(richTextDescription_, richTextDescription) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline const PatchEventResponseBody::Start & getStart() const { DARABONBA_PTR_GET_CONST(start_, PatchEventResponseBody::Start) };
    inline PatchEventResponseBody::Start getStart() { DARABONBA_PTR_GET(start_, PatchEventResponseBody::Start) };
    inline PatchEventResponseBody& setStart(const PatchEventResponseBody::Start & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
    inline PatchEventResponseBody& setStart(PatchEventResponseBody::Start && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


    // summary Field Functions 
    bool hasSummary() const { return this->summary_ != nullptr;};
    void deleteSummary() { this->summary_ = nullptr;};
    inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
    inline PatchEventResponseBody& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


    // uiConfigs Field Functions 
    bool hasUiConfigs() const { return this->uiConfigs_ != nullptr;};
    void deleteUiConfigs() { this->uiConfigs_ = nullptr;};
    inline const vector<PatchEventResponseBody::UiConfigs> & getUiConfigs() const { DARABONBA_PTR_GET_CONST(uiConfigs_, vector<PatchEventResponseBody::UiConfigs>) };
    inline vector<PatchEventResponseBody::UiConfigs> getUiConfigs() { DARABONBA_PTR_GET(uiConfigs_, vector<PatchEventResponseBody::UiConfigs>) };
    inline PatchEventResponseBody& setUiConfigs(const vector<PatchEventResponseBody::UiConfigs> & uiConfigs) { DARABONBA_PTR_SET_VALUE(uiConfigs_, uiConfigs) };
    inline PatchEventResponseBody& setUiConfigs(vector<PatchEventResponseBody::UiConfigs> && uiConfigs) { DARABONBA_PTR_SET_RVALUE(uiConfigs_, uiConfigs) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline PatchEventResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    shared_ptr<vector<PatchEventResponseBody::Attendees>> attendees_ {};
    shared_ptr<vector<PatchEventResponseBody::CardInstances>> cardInstances_ {};
    shared_ptr<vector<PatchEventResponseBody::Categories>> categories_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<string> description_ {};
    shared_ptr<PatchEventResponseBody::End> end_ {};
    shared_ptr<string> freeBusyStatus_ {};
    shared_ptr<string> id_ {};
    shared_ptr<bool> isAllDay_ {};
    shared_ptr<PatchEventResponseBody::Location> location_ {};
    shared_ptr<PatchEventResponseBody::OnlineMeetingInfo> onlineMeetingInfo_ {};
    shared_ptr<PatchEventResponseBody::Organizer> organizer_ {};
    shared_ptr<PatchEventResponseBody::Recurrence> recurrence_ {};
    shared_ptr<vector<PatchEventResponseBody::Reminders>> reminders_ {};
    // requestId
    shared_ptr<string> requestId_ {};
    shared_ptr<PatchEventResponseBody::RichTextDescription> richTextDescription_ {};
    shared_ptr<PatchEventResponseBody::Start> start_ {};
    shared_ptr<string> summary_ {};
    shared_ptr<vector<PatchEventResponseBody::UiConfigs>> uiConfigs_ {};
    shared_ptr<string> updateTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
