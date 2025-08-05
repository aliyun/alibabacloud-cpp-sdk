// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERSFILTERSNESTEDFILTERS_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERSFILTERSNESTEDFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters() = default ;
    EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters(const EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters &) = default ;
    EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters(EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters &&) = default ;
    EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters() = default ;
    EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters& operator=(const EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters &) = default ;
    EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters& operator=(EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->op_ != nullptr && this->values_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    std::shared_ptr<string> column_ = nullptr;
    std::shared_ptr<string> op_ = nullptr;
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
