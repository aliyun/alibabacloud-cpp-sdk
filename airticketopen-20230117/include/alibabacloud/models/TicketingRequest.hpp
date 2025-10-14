// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class TicketingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_num, orderNum_);
    };
    friend void from_json(const Darabonba::Json& j, TicketingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_num, orderNum_);
    };
    TicketingRequest() = default ;
    TicketingRequest(const TicketingRequest &) = default ;
    TicketingRequest(TicketingRequest &&) = default ;
    TicketingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketingRequest() = default ;
    TicketingRequest& operator=(const TicketingRequest &) = default ;
    TicketingRequest& operator=(TicketingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->orderNum_ == nullptr; };
    // orderNum Field Functions 
    bool hasOrderNum() const { return this->orderNum_ != nullptr;};
    void deleteOrderNum() { this->orderNum_ = nullptr;};
    inline int64_t orderNum() const { DARABONBA_PTR_GET_DEFAULT(orderNum_, 0L) };
    inline TicketingRequest& setOrderNum(int64_t orderNum) { DARABONBA_PTR_SET_VALUE(orderNum_, orderNum) };


  protected:
    // order number
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
