// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSEND_HPP_
#define ALIBABACLOUD_MODELS_LISTEVENTSVIEWRESPONSEBODYEVENTSEND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListEventsViewResponseBodyEventsEnd : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEventsViewResponseBodyEventsEnd& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DateTime, dateTime_);
      DARABONBA_PTR_TO_JSON(TimeZone, timeZone_);
    };
    friend void from_json(const Darabonba::Json& j, ListEventsViewResponseBodyEventsEnd& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DateTime, dateTime_);
      DARABONBA_PTR_FROM_JSON(TimeZone, timeZone_);
    };
    ListEventsViewResponseBodyEventsEnd() = default ;
    ListEventsViewResponseBodyEventsEnd(const ListEventsViewResponseBodyEventsEnd &) = default ;
    ListEventsViewResponseBodyEventsEnd(ListEventsViewResponseBodyEventsEnd &&) = default ;
    ListEventsViewResponseBodyEventsEnd(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEventsViewResponseBodyEventsEnd() = default ;
    ListEventsViewResponseBodyEventsEnd& operator=(const ListEventsViewResponseBodyEventsEnd &) = default ;
    ListEventsViewResponseBodyEventsEnd& operator=(ListEventsViewResponseBodyEventsEnd &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->date_ != nullptr
        && this->dateTime_ != nullptr && this->timeZone_ != nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string date() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline ListEventsViewResponseBodyEventsEnd& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // dateTime Field Functions 
    bool hasDateTime() const { return this->dateTime_ != nullptr;};
    void deleteDateTime() { this->dateTime_ = nullptr;};
    inline string dateTime() const { DARABONBA_PTR_GET_DEFAULT(dateTime_, "") };
    inline ListEventsViewResponseBodyEventsEnd& setDateTime(string dateTime) { DARABONBA_PTR_SET_VALUE(dateTime_, dateTime) };


    // timeZone Field Functions 
    bool hasTimeZone() const { return this->timeZone_ != nullptr;};
    void deleteTimeZone() { this->timeZone_ = nullptr;};
    inline string timeZone() const { DARABONBA_PTR_GET_DEFAULT(timeZone_, "") };
    inline ListEventsViewResponseBodyEventsEnd& setTimeZone(string timeZone) { DARABONBA_PTR_SET_VALUE(timeZone_, timeZone) };


  protected:
    std::shared_ptr<string> date_ = nullptr;
    std::shared_ptr<string> dateTime_ = nullptr;
    std::shared_ptr<string> timeZone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
