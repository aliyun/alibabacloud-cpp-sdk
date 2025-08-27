// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTELORDERCREATERESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_HOTELORDERCREATERESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class HotelOrderCreateResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotelOrderCreateResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_TO_JSON(payment_no, paymentNo_);
      DARABONBA_PTR_TO_JSON(total_price, totalPrice_);
    };
    friend void from_json(const Darabonba::Json& j, HotelOrderCreateResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(btrip_order_id, btripOrderId_);
      DARABONBA_PTR_FROM_JSON(payment_no, paymentNo_);
      DARABONBA_PTR_FROM_JSON(total_price, totalPrice_);
    };
    HotelOrderCreateResponseBodyModule() = default ;
    HotelOrderCreateResponseBodyModule(const HotelOrderCreateResponseBodyModule &) = default ;
    HotelOrderCreateResponseBodyModule(HotelOrderCreateResponseBodyModule &&) = default ;
    HotelOrderCreateResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotelOrderCreateResponseBodyModule() = default ;
    HotelOrderCreateResponseBodyModule& operator=(const HotelOrderCreateResponseBodyModule &) = default ;
    HotelOrderCreateResponseBodyModule& operator=(HotelOrderCreateResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->btripOrderId_ != nullptr
        && this->paymentNo_ != nullptr && this->totalPrice_ != nullptr; };
    // btripOrderId Field Functions 
    bool hasBtripOrderId() const { return this->btripOrderId_ != nullptr;};
    void deleteBtripOrderId() { this->btripOrderId_ = nullptr;};
    inline int64_t btripOrderId() const { DARABONBA_PTR_GET_DEFAULT(btripOrderId_, 0L) };
    inline HotelOrderCreateResponseBodyModule& setBtripOrderId(int64_t btripOrderId) { DARABONBA_PTR_SET_VALUE(btripOrderId_, btripOrderId) };


    // paymentNo Field Functions 
    bool hasPaymentNo() const { return this->paymentNo_ != nullptr;};
    void deletePaymentNo() { this->paymentNo_ = nullptr;};
    inline string paymentNo() const { DARABONBA_PTR_GET_DEFAULT(paymentNo_, "") };
    inline HotelOrderCreateResponseBodyModule& setPaymentNo(string paymentNo) { DARABONBA_PTR_SET_VALUE(paymentNo_, paymentNo) };


    // totalPrice Field Functions 
    bool hasTotalPrice() const { return this->totalPrice_ != nullptr;};
    void deleteTotalPrice() { this->totalPrice_ = nullptr;};
    inline int64_t totalPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPrice_, 0L) };
    inline HotelOrderCreateResponseBodyModule& setTotalPrice(int64_t totalPrice) { DARABONBA_PTR_SET_VALUE(totalPrice_, totalPrice) };


  protected:
    std::shared_ptr<int64_t> btripOrderId_ = nullptr;
    std::shared_ptr<string> paymentNo_ = nullptr;
    std::shared_ptr<int64_t> totalPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
