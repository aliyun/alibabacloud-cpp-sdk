// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPPAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTLFLIGHTRESHOPPAYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class IntlFlightReShopPayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IntlFlightReShopPayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_TO_JSON(re_shop_apply_id, reShopApplyId_);
    };
    friend void from_json(const Darabonba::Json& j, IntlFlightReShopPayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(out_re_shop_apply_id, outReShopApplyId_);
      DARABONBA_PTR_FROM_JSON(re_shop_apply_id, reShopApplyId_);
    };
    IntlFlightReShopPayRequest() = default ;
    IntlFlightReShopPayRequest(const IntlFlightReShopPayRequest &) = default ;
    IntlFlightReShopPayRequest(IntlFlightReShopPayRequest &&) = default ;
    IntlFlightReShopPayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IntlFlightReShopPayRequest() = default ;
    IntlFlightReShopPayRequest& operator=(const IntlFlightReShopPayRequest &) = default ;
    IntlFlightReShopPayRequest& operator=(IntlFlightReShopPayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->orderId_ != nullptr
        && this->outOrderId_ != nullptr && this->outReShopApplyId_ != nullptr && this->reShopApplyId_ != nullptr; };
    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline IntlFlightReShopPayRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline IntlFlightReShopPayRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // outReShopApplyId Field Functions 
    bool hasOutReShopApplyId() const { return this->outReShopApplyId_ != nullptr;};
    void deleteOutReShopApplyId() { this->outReShopApplyId_ = nullptr;};
    inline string outReShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(outReShopApplyId_, "") };
    inline IntlFlightReShopPayRequest& setOutReShopApplyId(string outReShopApplyId) { DARABONBA_PTR_SET_VALUE(outReShopApplyId_, outReShopApplyId) };


    // reShopApplyId Field Functions 
    bool hasReShopApplyId() const { return this->reShopApplyId_ != nullptr;};
    void deleteReShopApplyId() { this->reShopApplyId_ = nullptr;};
    inline string reShopApplyId() const { DARABONBA_PTR_GET_DEFAULT(reShopApplyId_, "") };
    inline IntlFlightReShopPayRequest& setReShopApplyId(string reShopApplyId) { DARABONBA_PTR_SET_VALUE(reShopApplyId_, reShopApplyId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<string> outReShopApplyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> reShopApplyId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
