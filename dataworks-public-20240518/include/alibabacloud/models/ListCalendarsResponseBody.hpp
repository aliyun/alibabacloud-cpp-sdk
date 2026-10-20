// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListCalendarsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PagingInfo, pagingInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCalendarsResponseBody() = default ;
    ListCalendarsResponseBody(const ListCalendarsResponseBody &) = default ;
    ListCalendarsResponseBody(ListCalendarsResponseBody &&) = default ;
    ListCalendarsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarsResponseBody() = default ;
    ListCalendarsResponseBody& operator=(const ListCalendarsResponseBody &) = default ;
    ListCalendarsResponseBody& operator=(ListCalendarsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PagingInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PagingInfo& obj) { 
        DARABONBA_PTR_TO_JSON(Calendars, calendars_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PagingInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(Calendars, calendars_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PagingInfo() = default ;
      PagingInfo(const PagingInfo &) = default ;
      PagingInfo(PagingInfo &&) = default ;
      PagingInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PagingInfo() = default ;
      PagingInfo& operator=(const PagingInfo &) = default ;
      PagingInfo& operator=(PagingInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Calendars : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Calendars& obj) { 
          DARABONBA_PTR_TO_JSON(AllProjects, allProjects_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(EndDate, endDate_);
          DARABONBA_PTR_TO_JSON(ExpirationReminder, expirationReminder_);
          DARABONBA_PTR_TO_JSON(FallbackPolicy, fallbackPolicy_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(OverduePolicy, overduePolicy_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(ProjectIds, projectIds_);
          DARABONBA_PTR_TO_JSON(SchedulePolicy, schedulePolicy_);
          DARABONBA_PTR_TO_JSON(StartDate, startDate_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Version, version_);
        };
        friend void from_json(const Darabonba::Json& j, Calendars& obj) { 
          DARABONBA_PTR_FROM_JSON(AllProjects, allProjects_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
          DARABONBA_PTR_FROM_JSON(ExpirationReminder, expirationReminder_);
          DARABONBA_PTR_FROM_JSON(FallbackPolicy, fallbackPolicy_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(OverduePolicy, overduePolicy_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(ProjectIds, projectIds_);
          DARABONBA_PTR_FROM_JSON(SchedulePolicy, schedulePolicy_);
          DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Version, version_);
        };
        Calendars() = default ;
        Calendars(const Calendars &) = default ;
        Calendars(Calendars &&) = default ;
        Calendars(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Calendars() = default ;
        Calendars& operator=(const Calendars &) = default ;
        Calendars& operator=(Calendars &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SchedulePolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SchedulePolicy& obj) { 
            DARABONBA_PTR_TO_JSON(NormalDates, normalDates_);
            DARABONBA_PTR_TO_JSON(SkipDates, skipDates_);
          };
          friend void from_json(const Darabonba::Json& j, SchedulePolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(NormalDates, normalDates_);
            DARABONBA_PTR_FROM_JSON(SkipDates, skipDates_);
          };
          SchedulePolicy() = default ;
          SchedulePolicy(const SchedulePolicy &) = default ;
          SchedulePolicy(SchedulePolicy &&) = default ;
          SchedulePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SchedulePolicy() = default ;
          SchedulePolicy& operator=(const SchedulePolicy &) = default ;
          SchedulePolicy& operator=(SchedulePolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->normalDates_ == nullptr
        && this->skipDates_ == nullptr; };
          // normalDates Field Functions 
          bool hasNormalDates() const { return this->normalDates_ != nullptr;};
          void deleteNormalDates() { this->normalDates_ = nullptr;};
          inline const vector<string> & getNormalDates() const { DARABONBA_PTR_GET_CONST(normalDates_, vector<string>) };
          inline vector<string> getNormalDates() { DARABONBA_PTR_GET(normalDates_, vector<string>) };
          inline SchedulePolicy& setNormalDates(const vector<string> & normalDates) { DARABONBA_PTR_SET_VALUE(normalDates_, normalDates) };
          inline SchedulePolicy& setNormalDates(vector<string> && normalDates) { DARABONBA_PTR_SET_RVALUE(normalDates_, normalDates) };


          // skipDates Field Functions 
          bool hasSkipDates() const { return this->skipDates_ != nullptr;};
          void deleteSkipDates() { this->skipDates_ = nullptr;};
          inline const vector<string> & getSkipDates() const { DARABONBA_PTR_GET_CONST(skipDates_, vector<string>) };
          inline vector<string> getSkipDates() { DARABONBA_PTR_GET(skipDates_, vector<string>) };
          inline SchedulePolicy& setSkipDates(const vector<string> & skipDates) { DARABONBA_PTR_SET_VALUE(skipDates_, skipDates) };
          inline SchedulePolicy& setSkipDates(vector<string> && skipDates) { DARABONBA_PTR_SET_RVALUE(skipDates_, skipDates) };


        protected:
          // The list of normal scheduling dates.
          shared_ptr<vector<string>> normalDates_ {};
          // The list of non-scheduling dates. Tasks perform dry runs on these dates.
          shared_ptr<vector<string>> skipDates_ {};
        };

        virtual bool empty() const override { return this->allProjects_ == nullptr
        && this->description_ == nullptr && this->endDate_ == nullptr && this->expirationReminder_ == nullptr && this->fallbackPolicy_ == nullptr && this->id_ == nullptr
        && this->modifyTime_ == nullptr && this->name_ == nullptr && this->overduePolicy_ == nullptr && this->owner_ == nullptr && this->projectIds_ == nullptr
        && this->schedulePolicy_ == nullptr && this->startDate_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
        // allProjects Field Functions 
        bool hasAllProjects() const { return this->allProjects_ != nullptr;};
        void deleteAllProjects() { this->allProjects_ = nullptr;};
        inline bool getAllProjects() const { DARABONBA_PTR_GET_DEFAULT(allProjects_, false) };
        inline Calendars& setAllProjects(bool allProjects) { DARABONBA_PTR_SET_VALUE(allProjects_, allProjects) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline Calendars& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // endDate Field Functions 
        bool hasEndDate() const { return this->endDate_ != nullptr;};
        void deleteEndDate() { this->endDate_ = nullptr;};
        inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
        inline Calendars& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


        // expirationReminder Field Functions 
        bool hasExpirationReminder() const { return this->expirationReminder_ != nullptr;};
        void deleteExpirationReminder() { this->expirationReminder_ = nullptr;};
        inline string getExpirationReminder() const { DARABONBA_PTR_GET_DEFAULT(expirationReminder_, "") };
        inline Calendars& setExpirationReminder(string expirationReminder) { DARABONBA_PTR_SET_VALUE(expirationReminder_, expirationReminder) };


        // fallbackPolicy Field Functions 
        bool hasFallbackPolicy() const { return this->fallbackPolicy_ != nullptr;};
        void deleteFallbackPolicy() { this->fallbackPolicy_ = nullptr;};
        inline string getFallbackPolicy() const { DARABONBA_PTR_GET_DEFAULT(fallbackPolicy_, "") };
        inline Calendars& setFallbackPolicy(string fallbackPolicy) { DARABONBA_PTR_SET_VALUE(fallbackPolicy_, fallbackPolicy) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Calendars& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // modifyTime Field Functions 
        bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
        void deleteModifyTime() { this->modifyTime_ = nullptr;};
        inline int64_t getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, 0L) };
        inline Calendars& setModifyTime(int64_t modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Calendars& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // overduePolicy Field Functions 
        bool hasOverduePolicy() const { return this->overduePolicy_ != nullptr;};
        void deleteOverduePolicy() { this->overduePolicy_ = nullptr;};
        inline string getOverduePolicy() const { DARABONBA_PTR_GET_DEFAULT(overduePolicy_, "") };
        inline Calendars& setOverduePolicy(string overduePolicy) { DARABONBA_PTR_SET_VALUE(overduePolicy_, overduePolicy) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Calendars& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // projectIds Field Functions 
        bool hasProjectIds() const { return this->projectIds_ != nullptr;};
        void deleteProjectIds() { this->projectIds_ = nullptr;};
        inline const vector<int64_t> & getProjectIds() const { DARABONBA_PTR_GET_CONST(projectIds_, vector<int64_t>) };
        inline vector<int64_t> getProjectIds() { DARABONBA_PTR_GET(projectIds_, vector<int64_t>) };
        inline Calendars& setProjectIds(const vector<int64_t> & projectIds) { DARABONBA_PTR_SET_VALUE(projectIds_, projectIds) };
        inline Calendars& setProjectIds(vector<int64_t> && projectIds) { DARABONBA_PTR_SET_RVALUE(projectIds_, projectIds) };


        // schedulePolicy Field Functions 
        bool hasSchedulePolicy() const { return this->schedulePolicy_ != nullptr;};
        void deleteSchedulePolicy() { this->schedulePolicy_ = nullptr;};
        inline const Calendars::SchedulePolicy & getSchedulePolicy() const { DARABONBA_PTR_GET_CONST(schedulePolicy_, Calendars::SchedulePolicy) };
        inline Calendars::SchedulePolicy getSchedulePolicy() { DARABONBA_PTR_GET(schedulePolicy_, Calendars::SchedulePolicy) };
        inline Calendars& setSchedulePolicy(const Calendars::SchedulePolicy & schedulePolicy) { DARABONBA_PTR_SET_VALUE(schedulePolicy_, schedulePolicy) };
        inline Calendars& setSchedulePolicy(Calendars::SchedulePolicy && schedulePolicy) { DARABONBA_PTR_SET_RVALUE(schedulePolicy_, schedulePolicy) };


        // startDate Field Functions 
        bool hasStartDate() const { return this->startDate_ != nullptr;};
        void deleteStartDate() { this->startDate_ = nullptr;};
        inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
        inline Calendars& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Calendars& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // version Field Functions 
        bool hasVersion() const { return this->version_ != nullptr;};
        void deleteVersion() { this->version_ = nullptr;};
        inline int32_t getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, 0) };
        inline Calendars& setVersion(int32_t version) { DARABONBA_PTR_SET_VALUE(version_, version) };


      protected:
        // Indicates whether the calendar is applicable to all workspaces.
        shared_ptr<bool> allProjects_ {};
        // The description of the scheduling calendar.
        shared_ptr<string> description_ {};
        // The end date of the calendar validity period. Format: `yyyy-mm-dd`. This parameter is returned only for strongly constrained calendars.
        shared_ptr<string> endDate_ {};
        // The expiration reminder. This parameter is returned only for strongly constrained calendars. Valid values:
        // 
        // - OneMonthBefore: One month in advance.
        // - OneWeekBefore: One week in advance.
        // - ThreeDaysBefore: Three days in advance.
        shared_ptr<string> expirationReminder_ {};
        // The default scheduling policy for dates that are not configured. This parameter is returned only for weakly constrained calendars. Valid values:
        // 
        // - Normal: Normal scheduling.
        // - Pause: Pause scheduling.
        // - Skip: Dry run.
        shared_ptr<string> fallbackPolicy_ {};
        // The ID of the scheduling calendar.
        shared_ptr<int64_t> id_ {};
        // The time when the calendar was modified. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> modifyTime_ {};
        // The name of the scheduling calendar.
        shared_ptr<string> name_ {};
        // The scheduling policy after the calendar expires. This parameter is returned only for strongly constrained calendars. Valid values:
        // 
        // - Normal: Normal scheduling.
        // - Pause: Pause scheduling.
        // - Skip: Dry run.
        shared_ptr<string> overduePolicy_ {};
        // The account ID of the owner.
        shared_ptr<string> owner_ {};
        // The list of applicable workspace IDs. An empty array is returned if AllProjects is set to true.
        shared_ptr<vector<int64_t>> projectIds_ {};
        // The date scheduling policy.
        shared_ptr<Calendars::SchedulePolicy> schedulePolicy_ {};
        // The start date of the calendar validity period. Format: `yyyy-mm-dd`. This parameter is returned only for strongly constrained calendars.
        shared_ptr<string> startDate_ {};
        // The calendar type. Valid values:
        // 
        // - StrongConstraint: Strongly constrained calendar.
        // - WeakConstraint: Weakly constrained calendar.
        shared_ptr<string> type_ {};
        // The version number.
        shared_ptr<int32_t> version_ {};
      };

      virtual bool empty() const override { return this->calendars_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // calendars Field Functions 
      bool hasCalendars() const { return this->calendars_ != nullptr;};
      void deleteCalendars() { this->calendars_ = nullptr;};
      inline const vector<PagingInfo::Calendars> & getCalendars() const { DARABONBA_PTR_GET_CONST(calendars_, vector<PagingInfo::Calendars>) };
      inline vector<PagingInfo::Calendars> getCalendars() { DARABONBA_PTR_GET(calendars_, vector<PagingInfo::Calendars>) };
      inline PagingInfo& setCalendars(const vector<PagingInfo::Calendars> & calendars) { DARABONBA_PTR_SET_VALUE(calendars_, calendars) };
      inline PagingInfo& setCalendars(vector<PagingInfo::Calendars> && calendars) { DARABONBA_PTR_SET_RVALUE(calendars_, calendars) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PagingInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PagingInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PagingInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of scheduling calendars.
      shared_ptr<vector<PagingInfo::Calendars>> calendars_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of items per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of items.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pagingInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pagingInfo Field Functions 
    bool hasPagingInfo() const { return this->pagingInfo_ != nullptr;};
    void deletePagingInfo() { this->pagingInfo_ = nullptr;};
    inline const ListCalendarsResponseBody::PagingInfo & getPagingInfo() const { DARABONBA_PTR_GET_CONST(pagingInfo_, ListCalendarsResponseBody::PagingInfo) };
    inline ListCalendarsResponseBody::PagingInfo getPagingInfo() { DARABONBA_PTR_GET(pagingInfo_, ListCalendarsResponseBody::PagingInfo) };
    inline ListCalendarsResponseBody& setPagingInfo(const ListCalendarsResponseBody::PagingInfo & pagingInfo) { DARABONBA_PTR_SET_VALUE(pagingInfo_, pagingInfo) };
    inline ListCalendarsResponseBody& setPagingInfo(ListCalendarsResponseBody::PagingInfo && pagingInfo) { DARABONBA_PTR_SET_RVALUE(pagingInfo_, pagingInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCalendarsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The pagination information.
    shared_ptr<ListCalendarsResponseBody::PagingInfo> pagingInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
