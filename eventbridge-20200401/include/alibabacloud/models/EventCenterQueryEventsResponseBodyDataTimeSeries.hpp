// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSRESPONSEBODYDATATIMESERIES_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSRESPONSEBODYDATATIMESERIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsResponseBodyDataTimeSeries : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsResponseBodyDataTimeSeries& obj) { 
      DARABONBA_ANY_TO_JSON(RowData, rowData_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsResponseBodyDataTimeSeries& obj) { 
      DARABONBA_ANY_FROM_JSON(RowData, rowData_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    EventCenterQueryEventsResponseBodyDataTimeSeries() = default ;
    EventCenterQueryEventsResponseBodyDataTimeSeries(const EventCenterQueryEventsResponseBodyDataTimeSeries &) = default ;
    EventCenterQueryEventsResponseBodyDataTimeSeries(EventCenterQueryEventsResponseBodyDataTimeSeries &&) = default ;
    EventCenterQueryEventsResponseBodyDataTimeSeries(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsResponseBodyDataTimeSeries() = default ;
    EventCenterQueryEventsResponseBodyDataTimeSeries& operator=(const EventCenterQueryEventsResponseBodyDataTimeSeries &) = default ;
    EventCenterQueryEventsResponseBodyDataTimeSeries& operator=(EventCenterQueryEventsResponseBodyDataTimeSeries &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rowData_ != nullptr
        && this->time_ != nullptr; };
    // rowData Field Functions 
    bool hasRowData() const { return this->rowData_ != nullptr;};
    void deleteRowData() { this->rowData_ = nullptr;};
    inline     const Darabonba::Json & rowData() const { DARABONBA_GET(rowData_) };
    Darabonba::Json & rowData() { DARABONBA_GET(rowData_) };
    inline EventCenterQueryEventsResponseBodyDataTimeSeries& setRowData(const Darabonba::Json & rowData) { DARABONBA_SET_VALUE(rowData_, rowData) };
    inline EventCenterQueryEventsResponseBodyDataTimeSeries& setRowData(Darabonba::Json & rowData) { DARABONBA_SET_RVALUE(rowData_, rowData) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline EventCenterQueryEventsResponseBodyDataTimeSeries& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    Darabonba::Json rowData_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
