// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODY_HPP_
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
  class ListEventsViewResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(events, events_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(events, events_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListEventsViewResponseBody() = default ;
    ListEventsViewResponseBody(const ListEventsViewResponseBody &) = default ;
    ListEventsViewResponseBody(ListEventsViewResponseBody &&) = default ;
    ListEventsViewResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewResponseBody() = default ;
    ListEventsViewResponseBody& operator=(const ListEventsViewResponseBody &) = default ;
    ListEventsViewResponseBody& operator=(ListEventsViewResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Events : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Events& obj) { 
        DARABONBA_PTR_TO_JSON(Attendees, attendees_);
        DARABONBA_PTR_TO_JSON(Categories, categories_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(End, end_);
        DARABONBA_PTR_TO_JSON(ExtendedProperties, extendedProperties_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsAllDay, isAllDay_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(MeetingRooms, meetingRooms_);
        DARABONBA_PTR_TO_JSON(OnlineMeetingInfo, onlineMeetingInfo_);
        DARABONBA_PTR_TO_JSON(Organizer, organizer_);
        DARABONBA_PTR_TO_JSON(OriginStart, originStart_);
        DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
        DARABONBA_PTR_TO_JSON(RichTextDescription, richTextDescription_);
        DARABONBA_PTR_TO_JSON(SeriesMasterId, seriesMasterId_);
        DARABONBA_PTR_TO_JSON(Start, start_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Summary, summary_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Events& obj) { 
        DARABONBA_PTR_FROM_JSON(Attendees, attendees_);
        DARABONBA_PTR_FROM_JSON(Categories, categories_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(End, end_);
        DARABONBA_PTR_FROM_JSON(ExtendedProperties, extendedProperties_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsAllDay, isAllDay_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(MeetingRooms, meetingRooms_);
        DARABONBA_PTR_FROM_JSON(OnlineMeetingInfo, onlineMeetingInfo_);
        DARABONBA_PTR_FROM_JSON(Organizer, organizer_);
        DARABONBA_PTR_FROM_JSON(OriginStart, originStart_);
        DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
        DARABONBA_PTR_FROM_JSON(RichTextDescription, richTextDescription_);
        DARABONBA_PTR_FROM_JSON(SeriesMasterId, seriesMasterId_);
        DARABONBA_PTR_FROM_JSON(Start, start_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Summary, summary_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Events() = default ;
      Events(const Events &) = default ;
      Events(Events &&) = default ;
      Events(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Events() = default ;
      Events& operator=(const Events &) = default ;
      Events& operator=(Events &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
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
          DARABONBA_PTR_TO_JSON(Text, text_);
        };
        friend void from_json(const Darabonba::Json& j, RichTextDescription& obj) { 
          DARABONBA_PTR_FROM_JSON(Text, text_);
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

      class OriginStart : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OriginStart& obj) { 
          DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
        };
        friend void from_json(const Darabonba::Json& j, OriginStart& obj) { 
          DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
        };
        OriginStart() = default ;
        OriginStart(const OriginStart &) = default ;
        OriginStart(OriginStart &&) = default ;
        OriginStart(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OriginStart() = default ;
        OriginStart& operator=(const OriginStart &) = default ;
        OriginStart& operator=(OriginStart &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dateTime_ == nullptr; };
        // dateTime Field Functions 
        bool hasDateTime() const { return this->dateTime_ != nullptr;};
        void deleteDateTime() { this->dateTime_ = nullptr;};
        inline string getDateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
        inline OriginStart& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


      protected:
        shared_ptr<string> dateTime_ {};
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
          DARABONBA_PTR_TO_JSON(ConferenceId, conferenceId_);
          DARABONBA_ANY_TO_JSON(ExtraInfo, extraInfo_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Url, url_);
        };
        friend void from_json(const Darabonba::Json& j, OnlineMeetingInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(ConferenceId, conferenceId_);
          DARABONBA_ANY_FROM_JSON(ExtraInfo, extraInfo_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Url, url_);
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
        && this->extraInfo_ == nullptr && this->type_ == nullptr && this->url_ == nullptr; };
        // conferenceId Field Functions 
        bool hasConferenceId() const { return this->conferenceId_ != nullptr;};
        void deleteConferenceId() { this->conferenceId_ = nullptr;};
        inline string getConferenceId() const { DARABONBA_PTR_GET_DEFAULT(conferenceId_, "") };
        inline OnlineMeetingInfo& setConferenceId(string conferenceId) { DARABONBA_PTR_SET_VALUE(conferenceId_, conferenceId) };


        // extraInfo Field Functions 
        bool hasExtraInfo() const { return this->extraInfo_ != nullptr;};
        void deleteExtraInfo() { this->extraInfo_ = nullptr;};
        inline         const Darabonba::Json & getExtraInfo() const { DARABONBA_GET(extraInfo_) };
        Darabonba::Json & getExtraInfo() { DARABONBA_GET(extraInfo_) };
        inline OnlineMeetingInfo& setExtraInfo(const Darabonba::Json & extraInfo) { DARABONBA_SET_VALUE(extraInfo_, extraInfo) };
        inline OnlineMeetingInfo& setExtraInfo(Darabonba::Json && extraInfo) { DARABONBA_SET_RVALUE(extraInfo_, extraInfo) };


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
        Darabonba::Json extraInfo_ {};
        shared_ptr<string> type_ {};
        shared_ptr<string> url_ {};
      };

      class MeetingRooms : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MeetingRooms& obj) { 
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
          DARABONBA_PTR_TO_JSON(ResponseStatus, responseStatus_);
          DARABONBA_PTR_TO_JSON(RoomId, roomId_);
        };
        friend void from_json(const Darabonba::Json& j, MeetingRooms& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
          DARABONBA_PTR_FROM_JSON(ResponseStatus, responseStatus_);
          DARABONBA_PTR_FROM_JSON(RoomId, roomId_);
        };
        MeetingRooms() = default ;
        MeetingRooms(const MeetingRooms &) = default ;
        MeetingRooms(MeetingRooms &&) = default ;
        MeetingRooms(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MeetingRooms() = default ;
        MeetingRooms& operator=(const MeetingRooms &) = default ;
        MeetingRooms& operator=(MeetingRooms &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->displayName_ == nullptr
        && this->responseStatus_ == nullptr && this->roomId_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline MeetingRooms& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


        // responseStatus Field Functions 
        bool hasResponseStatus() const { return this->responseStatus_ != nullptr;};
        void deleteResponseStatus() { this->responseStatus_ = nullptr;};
        inline string getResponseStatus() const { DARABONBA_PTR_GET_DEFAULT(responseStatus_, "") };
        inline MeetingRooms& setResponseStatus(string responseStatus) { DARABONBA_PTR_SET_VALUE(responseStatus_, responseStatus) };


        // roomId Field Functions 
        bool hasRoomId() const { return this->roomId_ != nullptr;};
        void deleteRoomId() { this->roomId_ = nullptr;};
        inline string getRoomId() const { DARABONBA_PTR_GET_DEFAULT(roomId_, "") };
        inline MeetingRooms& setRoomId(string roomId) { DARABONBA_PTR_SET_VALUE(roomId_, roomId) };


      protected:
        shared_ptr<string> displayName_ {};
        shared_ptr<string> responseStatus_ {};
        shared_ptr<string> roomId_ {};
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

      class ExtendedProperties : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ExtendedProperties& obj) { 
          DARABONBA_PTR_TO_JSON(SharedProperties, sharedProperties_);
        };
        friend void from_json(const Darabonba::Json& j, ExtendedProperties& obj) { 
          DARABONBA_PTR_FROM_JSON(SharedProperties, sharedProperties_);
        };
        ExtendedProperties() = default ;
        ExtendedProperties(const ExtendedProperties &) = default ;
        ExtendedProperties(ExtendedProperties &&) = default ;
        ExtendedProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ExtendedProperties() = default ;
        ExtendedProperties& operator=(const ExtendedProperties &) = default ;
        ExtendedProperties& operator=(ExtendedProperties &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SharedProperties : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SharedProperties& obj) { 
            DARABONBA_PTR_TO_JSON(BelongCorpId, belongCorpId_);
            DARABONBA_PTR_TO_JSON(SourceOpenCid, sourceOpenCid_);
          };
          friend void from_json(const Darabonba::Json& j, SharedProperties& obj) { 
            DARABONBA_PTR_FROM_JSON(BelongCorpId, belongCorpId_);
            DARABONBA_PTR_FROM_JSON(SourceOpenCid, sourceOpenCid_);
          };
          SharedProperties() = default ;
          SharedProperties(const SharedProperties &) = default ;
          SharedProperties(SharedProperties &&) = default ;
          SharedProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SharedProperties() = default ;
          SharedProperties& operator=(const SharedProperties &) = default ;
          SharedProperties& operator=(SharedProperties &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->belongCorpId_ == nullptr
        && this->sourceOpenCid_ == nullptr; };
          // belongCorpId Field Functions 
          bool hasBelongCorpId() const { return this->belongCorpId_ != nullptr;};
          void deleteBelongCorpId() { this->belongCorpId_ = nullptr;};
          inline string getBelongCorpId() const { DARABONBA_PTR_GET_DEFAULT(belongCorpId_, "") };
          inline SharedProperties& setBelongCorpId(string belongCorpId) { DARABONBA_PTR_SET_VALUE(belongCorpId_, belongCorpId) };


          // sourceOpenCid Field Functions 
          bool hasSourceOpenCid() const { return this->sourceOpenCid_ != nullptr;};
          void deleteSourceOpenCid() { this->sourceOpenCid_ = nullptr;};
          inline string getSourceOpenCid() const { DARABONBA_PTR_GET_DEFAULT(sourceOpenCid_, "") };
          inline SharedProperties& setSourceOpenCid(string sourceOpenCid) { DARABONBA_PTR_SET_VALUE(sourceOpenCid_, sourceOpenCid) };


        protected:
          shared_ptr<string> belongCorpId_ {};
          shared_ptr<string> sourceOpenCid_ {};
        };

        virtual bool empty() const override { return this->sharedProperties_ == nullptr; };
        // sharedProperties Field Functions 
        bool hasSharedProperties() const { return this->sharedProperties_ != nullptr;};
        void deleteSharedProperties() { this->sharedProperties_ = nullptr;};
        inline const ExtendedProperties::SharedProperties & getSharedProperties() const { DARABONBA_PTR_GET_CONST(sharedProperties_, ExtendedProperties::SharedProperties) };
        inline ExtendedProperties::SharedProperties getSharedProperties() { DARABONBA_PTR_GET(sharedProperties_, ExtendedProperties::SharedProperties) };
        inline ExtendedProperties& setSharedProperties(const ExtendedProperties::SharedProperties & sharedProperties) { DARABONBA_PTR_SET_VALUE(sharedProperties_, sharedProperties) };
        inline ExtendedProperties& setSharedProperties(ExtendedProperties::SharedProperties && sharedProperties) { DARABONBA_PTR_SET_RVALUE(sharedProperties_, sharedProperties) };


      protected:
        shared_ptr<ExtendedProperties::SharedProperties> sharedProperties_ {};
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
          DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        };
        friend void from_json(const Darabonba::Json& j, Categories& obj) { 
          DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
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
        virtual bool empty() const override { return this->displayName_ == nullptr; };
        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline Categories& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      protected:
        shared_ptr<string> displayName_ {};
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
        && this->categories_ == nullptr && this->createTime_ == nullptr && this->description_ == nullptr && this->end_ == nullptr && this->extendedProperties_ == nullptr
        && this->id_ == nullptr && this->isAllDay_ == nullptr && this->location_ == nullptr && this->meetingRooms_ == nullptr && this->onlineMeetingInfo_ == nullptr
        && this->organizer_ == nullptr && this->originStart_ == nullptr && this->recurrence_ == nullptr && this->richTextDescription_ == nullptr && this->seriesMasterId_ == nullptr
        && this->start_ == nullptr && this->status_ == nullptr && this->summary_ == nullptr && this->updateTime_ == nullptr; };
      // attendees Field Functions 
      bool hasAttendees() const { return this->attendees_ != nullptr;};
      void deleteAttendees() { this->attendees_ = nullptr;};
      inline const vector<Events::Attendees> & getAttendees() const { DARABONBA_PTR_GET_CONST(attendees_, vector<Events::Attendees>) };
      inline vector<Events::Attendees> getAttendees() { DARABONBA_PTR_GET(attendees_, vector<Events::Attendees>) };
      inline Events& setAttendees(const vector<Events::Attendees> & attendees) { DARABONBA_PTR_SET_VALUE(attendees_, attendees) };
      inline Events& setAttendees(vector<Events::Attendees> && attendees) { DARABONBA_PTR_SET_RVALUE(attendees_, attendees) };


      // categories Field Functions 
      bool hasCategories() const { return this->categories_ != nullptr;};
      void deleteCategories() { this->categories_ = nullptr;};
      inline const vector<Events::Categories> & getCategories() const { DARABONBA_PTR_GET_CONST(categories_, vector<Events::Categories>) };
      inline vector<Events::Categories> getCategories() { DARABONBA_PTR_GET(categories_, vector<Events::Categories>) };
      inline Events& setCategories(const vector<Events::Categories> & categories) { DARABONBA_PTR_SET_VALUE(categories_, categories) };
      inline Events& setCategories(vector<Events::Categories> && categories) { DARABONBA_PTR_SET_RVALUE(categories_, categories) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Events& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Events& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // end Field Functions 
      bool hasEnd() const { return this->end_ != nullptr;};
      void deleteEnd() { this->end_ = nullptr;};
      inline const Events::End & getEnd() const { DARABONBA_PTR_GET_CONST(end_, Events::End) };
      inline Events::End getEnd() { DARABONBA_PTR_GET(end_, Events::End) };
      inline Events& setEnd(const Events::End & end) { DARABONBA_PTR_SET_VALUE(end_, end) };
      inline Events& setEnd(Events::End && end) { DARABONBA_PTR_SET_RVALUE(end_, end) };


      // extendedProperties Field Functions 
      bool hasExtendedProperties() const { return this->extendedProperties_ != nullptr;};
      void deleteExtendedProperties() { this->extendedProperties_ = nullptr;};
      inline const Events::ExtendedProperties & getExtendedProperties() const { DARABONBA_PTR_GET_CONST(extendedProperties_, Events::ExtendedProperties) };
      inline Events::ExtendedProperties getExtendedProperties() { DARABONBA_PTR_GET(extendedProperties_, Events::ExtendedProperties) };
      inline Events& setExtendedProperties(const Events::ExtendedProperties & extendedProperties) { DARABONBA_PTR_SET_VALUE(extendedProperties_, extendedProperties) };
      inline Events& setExtendedProperties(Events::ExtendedProperties && extendedProperties) { DARABONBA_PTR_SET_RVALUE(extendedProperties_, extendedProperties) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Events& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isAllDay Field Functions 
      bool hasIsAllDay() const { return this->isAllDay_ != nullptr;};
      void deleteIsAllDay() { this->isAllDay_ = nullptr;};
      inline bool getIsAllDay() const { DARABONBA_PTR_GET_DEFAULT(isAllDay_, false) };
      inline Events& setIsAllDay(bool isAllDay) { DARABONBA_PTR_SET_VALUE(isAllDay_, isAllDay) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline const Events::Location & getLocation() const { DARABONBA_PTR_GET_CONST(location_, Events::Location) };
      inline Events::Location getLocation() { DARABONBA_PTR_GET(location_, Events::Location) };
      inline Events& setLocation(const Events::Location & location) { DARABONBA_PTR_SET_VALUE(location_, location) };
      inline Events& setLocation(Events::Location && location) { DARABONBA_PTR_SET_RVALUE(location_, location) };


      // meetingRooms Field Functions 
      bool hasMeetingRooms() const { return this->meetingRooms_ != nullptr;};
      void deleteMeetingRooms() { this->meetingRooms_ = nullptr;};
      inline const vector<Events::MeetingRooms> & getMeetingRooms() const { DARABONBA_PTR_GET_CONST(meetingRooms_, vector<Events::MeetingRooms>) };
      inline vector<Events::MeetingRooms> getMeetingRooms() { DARABONBA_PTR_GET(meetingRooms_, vector<Events::MeetingRooms>) };
      inline Events& setMeetingRooms(const vector<Events::MeetingRooms> & meetingRooms) { DARABONBA_PTR_SET_VALUE(meetingRooms_, meetingRooms) };
      inline Events& setMeetingRooms(vector<Events::MeetingRooms> && meetingRooms) { DARABONBA_PTR_SET_RVALUE(meetingRooms_, meetingRooms) };


      // onlineMeetingInfo Field Functions 
      bool hasOnlineMeetingInfo() const { return this->onlineMeetingInfo_ != nullptr;};
      void deleteOnlineMeetingInfo() { this->onlineMeetingInfo_ = nullptr;};
      inline const Events::OnlineMeetingInfo & getOnlineMeetingInfo() const { DARABONBA_PTR_GET_CONST(onlineMeetingInfo_, Events::OnlineMeetingInfo) };
      inline Events::OnlineMeetingInfo getOnlineMeetingInfo() { DARABONBA_PTR_GET(onlineMeetingInfo_, Events::OnlineMeetingInfo) };
      inline Events& setOnlineMeetingInfo(const Events::OnlineMeetingInfo & onlineMeetingInfo) { DARABONBA_PTR_SET_VALUE(onlineMeetingInfo_, onlineMeetingInfo) };
      inline Events& setOnlineMeetingInfo(Events::OnlineMeetingInfo && onlineMeetingInfo) { DARABONBA_PTR_SET_RVALUE(onlineMeetingInfo_, onlineMeetingInfo) };


      // organizer Field Functions 
      bool hasOrganizer() const { return this->organizer_ != nullptr;};
      void deleteOrganizer() { this->organizer_ = nullptr;};
      inline const Events::Organizer & getOrganizer() const { DARABONBA_PTR_GET_CONST(organizer_, Events::Organizer) };
      inline Events::Organizer getOrganizer() { DARABONBA_PTR_GET(organizer_, Events::Organizer) };
      inline Events& setOrganizer(const Events::Organizer & organizer) { DARABONBA_PTR_SET_VALUE(organizer_, organizer) };
      inline Events& setOrganizer(Events::Organizer && organizer) { DARABONBA_PTR_SET_RVALUE(organizer_, organizer) };


      // originStart Field Functions 
      bool hasOriginStart() const { return this->originStart_ != nullptr;};
      void deleteOriginStart() { this->originStart_ = nullptr;};
      inline const Events::OriginStart & getOriginStart() const { DARABONBA_PTR_GET_CONST(originStart_, Events::OriginStart) };
      inline Events::OriginStart getOriginStart() { DARABONBA_PTR_GET(originStart_, Events::OriginStart) };
      inline Events& setOriginStart(const Events::OriginStart & originStart) { DARABONBA_PTR_SET_VALUE(originStart_, originStart) };
      inline Events& setOriginStart(Events::OriginStart && originStart) { DARABONBA_PTR_SET_RVALUE(originStart_, originStart) };


      // recurrence Field Functions 
      bool hasRecurrence() const { return this->recurrence_ != nullptr;};
      void deleteRecurrence() { this->recurrence_ = nullptr;};
      inline const Events::Recurrence & getRecurrence() const { DARABONBA_PTR_GET_CONST(recurrence_, Events::Recurrence) };
      inline Events::Recurrence getRecurrence() { DARABONBA_PTR_GET(recurrence_, Events::Recurrence) };
      inline Events& setRecurrence(const Events::Recurrence & recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };
      inline Events& setRecurrence(Events::Recurrence && recurrence) { DARABONBA_PTR_SET_RVALUE(recurrence_, recurrence) };


      // richTextDescription Field Functions 
      bool hasRichTextDescription() const { return this->richTextDescription_ != nullptr;};
      void deleteRichTextDescription() { this->richTextDescription_ = nullptr;};
      inline const Events::RichTextDescription & getRichTextDescription() const { DARABONBA_PTR_GET_CONST(richTextDescription_, Events::RichTextDescription) };
      inline Events::RichTextDescription getRichTextDescription() { DARABONBA_PTR_GET(richTextDescription_, Events::RichTextDescription) };
      inline Events& setRichTextDescription(const Events::RichTextDescription & richTextDescription) { DARABONBA_PTR_SET_VALUE(richTextDescription_, richTextDescription) };
      inline Events& setRichTextDescription(Events::RichTextDescription && richTextDescription) { DARABONBA_PTR_SET_RVALUE(richTextDescription_, richTextDescription) };


      // seriesMasterId Field Functions 
      bool hasSeriesMasterId() const { return this->seriesMasterId_ != nullptr;};
      void deleteSeriesMasterId() { this->seriesMasterId_ = nullptr;};
      inline string getSeriesMasterId() const { DARABONBA_PTR_GET_DEFAULT(seriesMasterId_, "") };
      inline Events& setSeriesMasterId(string seriesMasterId) { DARABONBA_PTR_SET_VALUE(seriesMasterId_, seriesMasterId) };


      // start Field Functions 
      bool hasStart() const { return this->start_ != nullptr;};
      void deleteStart() { this->start_ = nullptr;};
      inline const Events::Start & getStart() const { DARABONBA_PTR_GET_CONST(start_, Events::Start) };
      inline Events::Start getStart() { DARABONBA_PTR_GET(start_, Events::Start) };
      inline Events& setStart(const Events::Start & start) { DARABONBA_PTR_SET_VALUE(start_, start) };
      inline Events& setStart(Events::Start && start) { DARABONBA_PTR_SET_RVALUE(start_, start) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Events& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // summary Field Functions 
      bool hasSummary() const { return this->summary_ != nullptr;};
      void deleteSummary() { this->summary_ = nullptr;};
      inline string getSummary() const { DARABONBA_PTR_GET_DEFAULT(summary_, "") };
      inline Events& setSummary(string summary) { DARABONBA_PTR_SET_VALUE(summary_, summary) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Events& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      shared_ptr<vector<Events::Attendees>> attendees_ {};
      shared_ptr<vector<Events::Categories>> categories_ {};
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<Events::End> end_ {};
      shared_ptr<Events::ExtendedProperties> extendedProperties_ {};
      shared_ptr<string> id_ {};
      shared_ptr<bool> isAllDay_ {};
      shared_ptr<Events::Location> location_ {};
      shared_ptr<vector<Events::MeetingRooms>> meetingRooms_ {};
      shared_ptr<Events::OnlineMeetingInfo> onlineMeetingInfo_ {};
      shared_ptr<Events::Organizer> organizer_ {};
      shared_ptr<Events::OriginStart> originStart_ {};
      shared_ptr<Events::Recurrence> recurrence_ {};
      shared_ptr<Events::RichTextDescription> richTextDescription_ {};
      shared_ptr<string> seriesMasterId_ {};
      shared_ptr<Events::Start> start_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> summary_ {};
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->events_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // events Field Functions 
    bool hasEvents() const { return this->events_ != nullptr;};
    void deleteEvents() { this->events_ = nullptr;};
    inline const vector<ListEventsViewResponseBody::Events> & getEvents() const { DARABONBA_PTR_GET_CONST(events_, vector<ListEventsViewResponseBody::Events>) };
    inline vector<ListEventsViewResponseBody::Events> getEvents() { DARABONBA_PTR_GET(events_, vector<ListEventsViewResponseBody::Events>) };
    inline ListEventsViewResponseBody& setEvents(const vector<ListEventsViewResponseBody::Events> & events) { DARABONBA_PTR_SET_VALUE(events_, events) };
    inline ListEventsViewResponseBody& setEvents(vector<ListEventsViewResponseBody::Events> && events) { DARABONBA_PTR_SET_RVALUE(events_, events) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventsViewResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEventsViewResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListEventsViewResponseBody::Events>> events_ {};
    shared_ptr<string> nextToken_ {};
    // requestId
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
