// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODYRESPONSE_HPP_
#define ALIBABACLOUD_MODELS_LISTCALENDARSRESPONSEBODYRESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCalendarsResponseBodyResponseCalendars.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListCalendarsResponseBodyResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCalendarsResponseBodyResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Calendars, calendars_);
    };
    friend void from_json(const Darabonba::Json& j, ListCalendarsResponseBodyResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Calendars, calendars_);
    };
    ListCalendarsResponseBodyResponse() = default ;
    ListCalendarsResponseBodyResponse(const ListCalendarsResponseBodyResponse &) = default ;
    ListCalendarsResponseBodyResponse(ListCalendarsResponseBodyResponse &&) = default ;
    ListCalendarsResponseBodyResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCalendarsResponseBodyResponse() = default ;
    ListCalendarsResponseBodyResponse& operator=(const ListCalendarsResponseBodyResponse &) = default ;
    ListCalendarsResponseBodyResponse& operator=(ListCalendarsResponseBodyResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->calendars_ == nullptr; };
    // calendars Field Functions 
    bool hasCalendars() const { return this->calendars_ != nullptr;};
    void deleteCalendars() { this->calendars_ = nullptr;};
    inline const vector<Models::ListCalendarsResponseBodyResponseCalendars> & calendars() const { DARABONBA_PTR_GET_CONST(calendars_, vector<Models::ListCalendarsResponseBodyResponseCalendars>) };
    inline vector<Models::ListCalendarsResponseBodyResponseCalendars> calendars() { DARABONBA_PTR_GET(calendars_, vector<Models::ListCalendarsResponseBodyResponseCalendars>) };
    inline ListCalendarsResponseBodyResponse& setCalendars(const vector<Models::ListCalendarsResponseBodyResponseCalendars> & calendars) { DARABONBA_PTR_SET_VALUE(calendars_, calendars) };
    inline ListCalendarsResponseBodyResponse& setCalendars(vector<Models::ListCalendarsResponseBodyResponseCalendars> && calendars) { DARABONBA_PTR_SET_RVALUE(calendars_, calendars) };


  protected:
    std::shared_ptr<vector<Models::ListCalendarsResponseBodyResponseCalendars>> calendars_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
