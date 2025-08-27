// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
    };
    HotelOrderQueryRequest() = default ;
    HotelOrderQueryRequest(const HotelOrderQueryRequest &) = default ;
    HotelOrderQueryRequest(HotelOrderQueryRequest &&) = default ;
    HotelOrderQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderQueryRequest() = default ;
    HotelOrderQueryRequest& operator=(const HotelOrderQueryRequest &) = default ;
    HotelOrderQueryRequest& operator=(HotelOrderQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline HotelOrderQueryRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
