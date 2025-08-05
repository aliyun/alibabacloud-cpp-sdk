// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERSFILTERS_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERSFILTERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsRequestBodyParametersFilters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsRequestBodyParametersFilters& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(NestedFilterCombination, nestedFilterCombination_);
      DARABONBA_PTR_TO_JSON(NestedFilters, nestedFilters_);
      DARABONBA_PTR_TO_JSON(Op, op_);
      DARABONBA_PTR_TO_JSON(Values, values_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsRequestBodyParametersFilters& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(NestedFilterCombination, nestedFilterCombination_);
      DARABONBA_PTR_FROM_JSON(NestedFilters, nestedFilters_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
      DARABONBA_PTR_FROM_JSON(Values, values_);
    };
    EventCenterQueryEventsRequestBodyParametersFilters() = default ;
    EventCenterQueryEventsRequestBodyParametersFilters(const EventCenterQueryEventsRequestBodyParametersFilters &) = default ;
    EventCenterQueryEventsRequestBodyParametersFilters(EventCenterQueryEventsRequestBodyParametersFilters &&) = default ;
    EventCenterQueryEventsRequestBodyParametersFilters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsRequestBodyParametersFilters() = default ;
    EventCenterQueryEventsRequestBodyParametersFilters& operator=(const EventCenterQueryEventsRequestBodyParametersFilters &) = default ;
    EventCenterQueryEventsRequestBodyParametersFilters& operator=(EventCenterQueryEventsRequestBodyParametersFilters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->nestedFilterCombination_ != nullptr && this->nestedFilters_ != nullptr && this->op_ != nullptr && this->values_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline EventCenterQueryEventsRequestBodyParametersFilters& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // nestedFilterCombination Field Functions 
    bool hasNestedFilterCombination() const { return this->nestedFilterCombination_ != nullptr;};
    void deleteNestedFilterCombination() { this->nestedFilterCombination_ = nullptr;};
    inline string nestedFilterCombination() const { DARABONBA_PTR_GET_DEFAULT(nestedFilterCombination_, "") };
    inline EventCenterQueryEventsRequestBodyParametersFilters& setNestedFilterCombination(string nestedFilterCombination) { DARABONBA_PTR_SET_VALUE(nestedFilterCombination_, nestedFilterCombination) };


    // nestedFilters Field Functions 
    bool hasNestedFilters() const { return this->nestedFilters_ != nullptr;};
    void deleteNestedFilters() { this->nestedFilters_ = nullptr;};
    inline const vector<Models::EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters> & nestedFilters() const { DARABONBA_PTR_GET_CONST(nestedFilters_, vector<Models::EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters>) };
    inline vector<Models::EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters> nestedFilters() { DARABONBA_PTR_GET(nestedFilters_, vector<Models::EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters>) };
    inline EventCenterQueryEventsRequestBodyParametersFilters& setNestedFilters(const vector<Models::EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters> & nestedFilters) { DARABONBA_PTR_SET_VALUE(nestedFilters_, nestedFilters) };
    inline EventCenterQueryEventsRequestBodyParametersFilters& setNestedFilters(vector<Models::EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters> && nestedFilters) { DARABONBA_PTR_SET_RVALUE(nestedFilters_, nestedFilters) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline EventCenterQueryEventsRequestBodyParametersFilters& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


    // values Field Functions 
    bool hasValues() const { return this->values_ != nullptr;};
    void deleteValues() { this->values_ = nullptr;};
    inline const vector<string> & values() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
    inline vector<string> values() { DARABONBA_PTR_GET(values_, vector<string>) };
    inline EventCenterQueryEventsRequestBodyParametersFilters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
    inline EventCenterQueryEventsRequestBodyParametersFilters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


  protected:
    // The column name.
    std::shared_ptr<string> column_ = nullptr;
    std::shared_ptr<string> nestedFilterCombination_ = nullptr;
    std::shared_ptr<vector<Models::EventCenterQueryEventsRequestBodyParametersFiltersNestedFilters>> nestedFilters_ = nullptr;
    // The operator.
    std::shared_ptr<string> op_ = nullptr;
    // The values that are used together with the operator.
    std::shared_ptr<vector<string>> values_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
