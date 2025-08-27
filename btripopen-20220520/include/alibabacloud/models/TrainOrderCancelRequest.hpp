// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCANCELREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCANCELREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCancelRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCancelRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_change_order_id, outChangeOrderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCancelRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_change_order_id, outChangeOrderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
    };
    TrainOrderCancelRequest() = default ;
    TrainOrderCancelRequest(const TrainOrderCancelRequest &) = default ;
    TrainOrderCancelRequest(TrainOrderCancelRequest &&) = default ;
    TrainOrderCancelRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCancelRequest() = default ;
    TrainOrderCancelRequest& operator=(const TrainOrderCancelRequest &) = default ;
    TrainOrderCancelRequest& operator=(TrainOrderCancelRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeOrderId_ != nullptr
        && this->orderId_ != nullptr && this->outChangeOrderId_ != nullptr && this->outOrderId_ != nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline TrainOrderCancelRequest& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainOrderCancelRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outChangeOrderId Field Functions 
    bool hasOutChangeOrderId() const { return this->outChangeOrderId_ != nullptr;};
    void deleteOutChangeOrderId() { this->outChangeOrderId_ = nullptr;};
    inline string outChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(outChangeOrderId_, "") };
    inline TrainOrderCancelRequest& setOutChangeOrderId(string outChangeOrderId) { DARABONBA_PTR_SET_VALUE(outChangeOrderId_, outChangeOrderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainOrderCancelRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


  protected:
    std::shared_ptr<string> changeOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outChangeOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
