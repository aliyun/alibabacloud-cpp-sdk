// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERSCALCULATIONS_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERSCALCULATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsRequestBodyParametersCalculations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsRequestBodyParametersCalculations& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(Op, op_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsRequestBodyParametersCalculations& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
    };
    EventCenterQueryEventsRequestBodyParametersCalculations() = default ;
    EventCenterQueryEventsRequestBodyParametersCalculations(const EventCenterQueryEventsRequestBodyParametersCalculations &) = default ;
    EventCenterQueryEventsRequestBodyParametersCalculations(EventCenterQueryEventsRequestBodyParametersCalculations &&) = default ;
    EventCenterQueryEventsRequestBodyParametersCalculations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsRequestBodyParametersCalculations() = default ;
    EventCenterQueryEventsRequestBodyParametersCalculations& operator=(const EventCenterQueryEventsRequestBodyParametersCalculations &) = default ;
    EventCenterQueryEventsRequestBodyParametersCalculations& operator=(EventCenterQueryEventsRequestBodyParametersCalculations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->op_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline EventCenterQueryEventsRequestBodyParametersCalculations& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline EventCenterQueryEventsRequestBodyParametersCalculations& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


  protected:
    // The column name.
    std::shared_ptr<string> column_ = nullptr;
    // The operator.
    std::shared_ptr<string> op_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
