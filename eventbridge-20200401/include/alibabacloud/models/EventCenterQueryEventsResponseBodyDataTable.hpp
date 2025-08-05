// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSRESPONSEBODYDATATABLE_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSRESPONSEBODYDATATABLE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsResponseBodyDataTable : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsResponseBodyDataTable& obj) { 
      DARABONBA_ANY_TO_JSON(RowData, rowData_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsResponseBodyDataTable& obj) { 
      DARABONBA_ANY_FROM_JSON(RowData, rowData_);
    };
    EventCenterQueryEventsResponseBodyDataTable() = default ;
    EventCenterQueryEventsResponseBodyDataTable(const EventCenterQueryEventsResponseBodyDataTable &) = default ;
    EventCenterQueryEventsResponseBodyDataTable(EventCenterQueryEventsResponseBodyDataTable &&) = default ;
    EventCenterQueryEventsResponseBodyDataTable(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsResponseBodyDataTable() = default ;
    EventCenterQueryEventsResponseBodyDataTable& operator=(const EventCenterQueryEventsResponseBodyDataTable &) = default ;
    EventCenterQueryEventsResponseBodyDataTable& operator=(EventCenterQueryEventsResponseBodyDataTable &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->rowData_ != nullptr; };
    // rowData Field Functions 
    bool hasRowData() const { return this->rowData_ != nullptr;};
    void deleteRowData() { this->rowData_ = nullptr;};
    inline     const Darabonba::Json & rowData() const { DARABONBA_GET(rowData_) };
    Darabonba::Json & rowData() { DARABONBA_GET(rowData_) };
    inline EventCenterQueryEventsResponseBodyDataTable& setRowData(const Darabonba::Json & rowData) { DARABONBA_SET_VALUE(rowData_, rowData) };
    inline EventCenterQueryEventsResponseBodyDataTable& setRowData(Darabonba::Json & rowData) { DARABONBA_SET_RVALUE(rowData_, rowData) };


  protected:
    Darabonba::Json rowData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
