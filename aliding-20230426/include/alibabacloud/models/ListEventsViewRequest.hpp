// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsViewRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(MaxAttendees, maxAttendees_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TimeMax, timeMax_);
      DARABONBA_PTR_TO_JSON(TimeMin, timeMin_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(MaxAttendees, maxAttendees_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TimeMax, timeMax_);
      DARABONBA_PTR_FROM_JSON(TimeMin, timeMin_);
    };
    ListEventsViewRequest() = default ;
    ListEventsViewRequest(const ListEventsViewRequest &) = default ;
    ListEventsViewRequest(ListEventsViewRequest &&) = default ;
    ListEventsViewRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewRequest() = default ;
    ListEventsViewRequest& operator=(const ListEventsViewRequest &) = default ;
    ListEventsViewRequest& operator=(ListEventsViewRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendarId_ == nullptr
        && this->maxAttendees_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->timeMax_ == nullptr && this->timeMin_ == nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string getCalendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline ListEventsViewRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // maxAttendees Field Functions 
    bool hasMaxAttendees() const { return this->maxAttendees_ != nullptr;};
    void deleteMaxAttendees() { this->maxAttendees_ = nullptr;};
    inline int32_t getMaxAttendees() const { DARABONBA_PTR_GET_DEFAULT(maxAttendees_, 0) };
    inline ListEventsViewRequest& setMaxAttendees(int32_t maxAttendees) { DARABONBA_PTR_SET_VALUE(maxAttendees_, maxAttendees) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEventsViewRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventsViewRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // timeMax Field Functions 
    bool hasTimeMax() const { return this->timeMax_ != nullptr;};
    void deleteTimeMax() { this->timeMax_ = nullptr;};
    inline string getTimeMax() const { DARABONBA_PTR_GET_DEFAULT(timeMax_, "") };
    inline ListEventsViewRequest& setTimeMax(string timeMax) { DARABONBA_PTR_SET_VALUE(timeMax_, timeMax) };


    // timeMin Field Functions 
    bool hasTimeMin() const { return this->timeMin_ != nullptr;};
    void deleteTimeMin() { this->timeMin_ = nullptr;};
    inline string getTimeMin() const { DARABONBA_PTR_GET_DEFAULT(timeMin_, "") };
    inline ListEventsViewRequest& setTimeMin(string timeMin) { DARABONBA_PTR_SET_VALUE(timeMin_, timeMin) };


  protected:
    // This parameter is required.
    shared_ptr<string> calendarId_ {};
    shared_ptr<int32_t> maxAttendees_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> timeMax_ {};
    shared_ptr<string> timeMin_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
