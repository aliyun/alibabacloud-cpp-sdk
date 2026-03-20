// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_READSCHEDULERXCALENDARREQUEST_HPP_
#define ALIBABACLOUD_MODELS_READSCHEDULERXCALENDARREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class ReadSchedulerxCalendarRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReadSchedulerxCalendarRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_TO_JSON(FetchCalendarDetail, fetchCalendarDetail_);
      DARABONBA_PTR_TO_JSON(FetchSystemCalendar, fetchSystemCalendar_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Year, year_);
    };
    friend void from_json(const Darabonba::Json& j, ReadSchedulerxCalendarRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarName, calendarName_);
      DARABONBA_PTR_FROM_JSON(FetchCalendarDetail, fetchCalendarDetail_);
      DARABONBA_PTR_FROM_JSON(FetchSystemCalendar, fetchSystemCalendar_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Year, year_);
    };
    ReadSchedulerxCalendarRequest() = default ;
    ReadSchedulerxCalendarRequest(const ReadSchedulerxCalendarRequest &) = default ;
    ReadSchedulerxCalendarRequest(ReadSchedulerxCalendarRequest &&) = default ;
    ReadSchedulerxCalendarRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReadSchedulerxCalendarRequest() = default ;
    ReadSchedulerxCalendarRequest& operator=(const ReadSchedulerxCalendarRequest &) = default ;
    ReadSchedulerxCalendarRequest& operator=(ReadSchedulerxCalendarRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarName_ == nullptr
        && this->fetchCalendarDetail_ == nullptr && this->fetchSystemCalendar_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->regionId_ == nullptr
        && this->year_ == nullptr; };
    // calendarName Field Functions 
    bool hasCalendarName() const { return this->calendarName_ != nullptr;};
    void deleteCalendarName() { this->calendarName_ = nullptr;};
    inline string getCalendarName() const { DARABONBA_PTR_GET_DEFAULT(calendarName_, "") };
    inline ReadSchedulerxCalendarRequest& setCalendarName(string calendarName) { DARABONBA_PTR_SET_VALUE(calendarName_, calendarName) };


    // fetchCalendarDetail Field Functions 
    bool hasFetchCalendarDetail() const { return this->fetchCalendarDetail_ != nullptr;};
    void deleteFetchCalendarDetail() { this->fetchCalendarDetail_ = nullptr;};
    inline bool getFetchCalendarDetail() const { DARABONBA_PTR_GET_DEFAULT(fetchCalendarDetail_, false) };
    inline ReadSchedulerxCalendarRequest& setFetchCalendarDetail(bool fetchCalendarDetail) { DARABONBA_PTR_SET_VALUE(fetchCalendarDetail_, fetchCalendarDetail) };


    // fetchSystemCalendar Field Functions 
    bool hasFetchSystemCalendar() const { return this->fetchSystemCalendar_ != nullptr;};
    void deleteFetchSystemCalendar() { this->fetchSystemCalendar_ = nullptr;};
    inline bool getFetchSystemCalendar() const { DARABONBA_PTR_GET_DEFAULT(fetchSystemCalendar_, false) };
    inline ReadSchedulerxCalendarRequest& setFetchSystemCalendar(bool fetchSystemCalendar) { DARABONBA_PTR_SET_VALUE(fetchSystemCalendar_, fetchSystemCalendar) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ReadSchedulerxCalendarRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ReadSchedulerxCalendarRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ReadSchedulerxCalendarRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // year Field Functions 
    bool hasYear() const { return this->year_ != nullptr;};
    void deleteYear() { this->year_ = nullptr;};
    inline int32_t getYear() const { DARABONBA_PTR_GET_DEFAULT(year_, 0) };
    inline ReadSchedulerxCalendarRequest& setYear(int32_t year) { DARABONBA_PTR_SET_VALUE(year_, year) };


  protected:
    // The calendar name.
    shared_ptr<string> calendarName_ {};
    // Specifies whether to retrieve calendar details. The default value is false.
    // 
    // *   false: Returns only basic information without the detailed list of days for each month.
    // *   true: Returns the detailed list of days for each month.
    shared_ptr<bool> fetchCalendarDetail_ {};
    // Specifies whether to retrieve system calendars. The default value is false.
    // 
    // *   false: Returns only user-defined calendars.
    // *   true: Returns both system calendars and user-defined calendars.
    shared_ptr<bool> fetchSystemCalendar_ {};
    // The maximum number of entries to return on this call. The default value is 20.
    shared_ptr<int32_t> maxResults_ {};
    // A token that specifies the starting position for retrieving the next page of data. You do not need to provide this parameter for the first request. An empty value indicates that all data has been read.
    shared_ptr<string> nextToken_ {};
    // The region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The year.
    shared_ptr<int32_t> year_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
