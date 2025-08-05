// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERSORDERS_HPP_
#define ALIBABACLOUD_MODELS_EVENTCENTERQUERYEVENTSREQUESTBODYPARAMETERSORDERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eventbridge20200401
{
namespace Models
{
  class EventCenterQueryEventsRequestBodyParametersOrders : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EventCenterQueryEventsRequestBodyParametersOrders& obj) { 
      DARABONBA_PTR_TO_JSON(Column, column_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Op, op_);
    };
    friend void from_json(const Darabonba::Json& j, EventCenterQueryEventsRequestBodyParametersOrders& obj) { 
      DARABONBA_PTR_FROM_JSON(Column, column_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Op, op_);
    };
    EventCenterQueryEventsRequestBodyParametersOrders() = default ;
    EventCenterQueryEventsRequestBodyParametersOrders(const EventCenterQueryEventsRequestBodyParametersOrders &) = default ;
    EventCenterQueryEventsRequestBodyParametersOrders(EventCenterQueryEventsRequestBodyParametersOrders &&) = default ;
    EventCenterQueryEventsRequestBodyParametersOrders(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EventCenterQueryEventsRequestBodyParametersOrders() = default ;
    EventCenterQueryEventsRequestBodyParametersOrders& operator=(const EventCenterQueryEventsRequestBodyParametersOrders &) = default ;
    EventCenterQueryEventsRequestBodyParametersOrders& operator=(EventCenterQueryEventsRequestBodyParametersOrders &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->column_ != nullptr
        && this->desc_ != nullptr && this->op_ != nullptr; };
    // column Field Functions 
    bool hasColumn() const { return this->column_ != nullptr;};
    void deleteColumn() { this->column_ = nullptr;};
    inline string column() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
    inline EventCenterQueryEventsRequestBodyParametersOrders& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline bool desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, false) };
    inline EventCenterQueryEventsRequestBodyParametersOrders& setDesc(bool desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // op Field Functions 
    bool hasOp() const { return this->op_ != nullptr;};
    void deleteOp() { this->op_ = nullptr;};
    inline string op() const { DARABONBA_PTR_GET_DEFAULT(op_, "") };
    inline EventCenterQueryEventsRequestBodyParametersOrders& setOp(string op) { DARABONBA_PTR_SET_VALUE(op_, op) };


  protected:
    // The column name.
    std::shared_ptr<string> column_ = nullptr;
    // Specifies whether to sort the query results in descending order.
    std::shared_ptr<bool> desc_ = nullptr;
    // The operator.
    std::shared_ptr<string> op_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eventbridge20200401
#endif
