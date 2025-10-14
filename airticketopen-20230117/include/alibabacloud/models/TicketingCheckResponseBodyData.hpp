// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETINGCHECKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_TICKETINGCHECKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketingCheckResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketingCheckResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
    };
    friend void from_json(const Darabonba::Json& j, TicketingCheckResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
    };
    TicketingCheckResponseBodyData() = default ;
    TicketingCheckResponseBodyData(const TicketingCheckResponseBodyData &) = default ;
    TicketingCheckResponseBodyData(TicketingCheckResponseBodyData &&) = default ;
    TicketingCheckResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketingCheckResponseBodyData() = default ;
    TicketingCheckResponseBodyData& operator=(const TicketingCheckResponseBodyData &) = default ;
    TicketingCheckResponseBodyData& operator=(TicketingCheckResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline TicketingCheckResponseBodyData& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


  protected:
    // order number
    std::shared_ptr<int64_t> orderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
