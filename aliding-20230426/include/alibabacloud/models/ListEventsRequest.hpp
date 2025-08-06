// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_TO_JSON(MaxAttendees, maxAttendees_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SeriesMasterId, seriesMasterId_);
      DARABONBA_PTR_TO_JSON(ShowDeleted, showDeleted_);
      DARABONBA_PTR_TO_JSON(SyncToken, syncToken_);
      DARABONBA_PTR_TO_JSON(TimeMax, timeMax_);
      DARABONBA_PTR_TO_JSON(TimeMin, timeMin_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CalendarId, calendarId_);
      DARABONBA_PTR_FROM_JSON(MaxAttendees, maxAttendees_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SeriesMasterId, seriesMasterId_);
      DARABONBA_PTR_FROM_JSON(ShowDeleted, showDeleted_);
      DARABONBA_PTR_FROM_JSON(SyncToken, syncToken_);
      DARABONBA_PTR_FROM_JSON(TimeMax, timeMax_);
      DARABONBA_PTR_FROM_JSON(TimeMin, timeMin_);
    };
    ListEventsRequest() = default ;
    ListEventsRequest(const ListEventsRequest &) = default ;
    ListEventsRequest(ListEventsRequest &&) = default ;
    ListEventsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsRequest() = default ;
    ListEventsRequest& operator=(const ListEventsRequest &) = default ;
    ListEventsRequest& operator=(ListEventsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->calendarId_ != nullptr
        && this->maxAttendees_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->seriesMasterId_ != nullptr && this->showDeleted_ != nullptr
        && this->syncToken_ != nullptr && this->timeMax_ != nullptr && this->timeMin_ != nullptr; };
    // calendarId Field Functions 
    bool hasCalendarId() const { return this->calendarId_ != nullptr;};
    void deleteCalendarId() { this->calendarId_ = nullptr;};
    inline string calendarId() const { DARABONBA_PTR_GET_DEFAULT(calendarId_, "") };
    inline ListEventsRequest& setCalendarId(string calendarId) { DARABONBA_PTR_SET_VALUE(calendarId_, calendarId) };


    // maxAttendees Field Functions 
    bool hasMaxAttendees() const { return this->maxAttendees_ != nullptr;};
    void deleteMaxAttendees() { this->maxAttendees_ = nullptr;};
    inline int32_t maxAttendees() const { DARABONBA_PTR_GET_DEFAULT(maxAttendees_, 0) };
    inline ListEventsRequest& setMaxAttendees(int32_t maxAttendees) { DARABONBA_PTR_SET_VALUE(maxAttendees_, maxAttendees) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListEventsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListEventsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // seriesMasterId Field Functions 
    bool hasSeriesMasterId() const { return this->seriesMasterId_ != nullptr;};
    void deleteSeriesMasterId() { this->seriesMasterId_ = nullptr;};
    inline string seriesMasterId() const { DARABONBA_PTR_GET_DEFAULT(seriesMasterId_, "") };
    inline ListEventsRequest& setSeriesMasterId(string seriesMasterId) { DARABONBA_PTR_SET_VALUE(seriesMasterId_, seriesMasterId) };


    // showDeleted Field Functions 
    bool hasShowDeleted() const { return this->showDeleted_ != nullptr;};
    void deleteShowDeleted() { this->showDeleted_ = nullptr;};
    inline bool showDeleted() const { DARABONBA_PTR_GET_DEFAULT(showDeleted_, false) };
    inline ListEventsRequest& setShowDeleted(bool showDeleted) { DARABONBA_PTR_SET_VALUE(showDeleted_, showDeleted) };


    // syncToken Field Functions 
    bool hasSyncToken() const { return this->syncToken_ != nullptr;};
    void deleteSyncToken() { this->syncToken_ = nullptr;};
    inline string syncToken() const { DARABONBA_PTR_GET_DEFAULT(syncToken_, "") };
    inline ListEventsRequest& setSyncToken(string syncToken) { DARABONBA_PTR_SET_VALUE(syncToken_, syncToken) };


    // timeMax Field Functions 
    bool hasTimeMax() const { return this->timeMax_ != nullptr;};
    void deleteTimeMax() { this->timeMax_ = nullptr;};
    inline string timeMax() const { DARABONBA_PTR_GET_DEFAULT(timeMax_, "") };
    inline ListEventsRequest& setTimeMax(string timeMax) { DARABONBA_PTR_SET_VALUE(timeMax_, timeMax) };


    // timeMin Field Functions 
    bool hasTimeMin() const { return this->timeMin_ != nullptr;};
    void deleteTimeMin() { this->timeMin_ = nullptr;};
    inline string timeMin() const { DARABONBA_PTR_GET_DEFAULT(timeMin_, "") };
    inline ListEventsRequest& setTimeMin(string timeMin) { DARABONBA_PTR_SET_VALUE(timeMin_, timeMin) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> calendarId_ = nullptr;
    std::shared_ptr<int32_t> maxAttendees_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> seriesMasterId_ = nullptr;
    std::shared_ptr<bool> showDeleted_ = nullptr;
    std::shared_ptr<string> syncToken_ = nullptr;
    std::shared_ptr<string> timeMax_ = nullptr;
    std::shared_ptr<string> timeMin_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
