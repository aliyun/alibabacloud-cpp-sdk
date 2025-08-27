// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCANCELRESPONSEBODYMODULE_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCANCELRESPONSEBODYMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCancelResponseBodyModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCancelResponseBodyModule& obj) { 
      DARABONBA_PTR_TO_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_change_order_id, outChangeOrderId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCancelResponseBodyModule& obj) { 
      DARABONBA_PTR_FROM_JSON(change_order_id, changeOrderId_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_change_order_id, outChangeOrderId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    TrainOrderCancelResponseBodyModule() = default ;
    TrainOrderCancelResponseBodyModule(const TrainOrderCancelResponseBodyModule &) = default ;
    TrainOrderCancelResponseBodyModule(TrainOrderCancelResponseBodyModule &&) = default ;
    TrainOrderCancelResponseBodyModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCancelResponseBodyModule() = default ;
    TrainOrderCancelResponseBodyModule& operator=(const TrainOrderCancelResponseBodyModule &) = default ;
    TrainOrderCancelResponseBodyModule& operator=(TrainOrderCancelResponseBodyModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeOrderId_ != nullptr
        && this->orderId_ != nullptr && this->outChangeOrderId_ != nullptr && this->outOrderId_ != nullptr && this->status_ != nullptr; };
    // changeOrderId Field Functions 
    bool hasChangeOrderId() const { return this->changeOrderId_ != nullptr;};
    void deleteChangeOrderId() { this->changeOrderId_ = nullptr;};
    inline string changeOrderId() const { DARABONBA_PTR_GET_DEFAULT(changeOrderId_, "") };
    inline TrainOrderCancelResponseBodyModule& setChangeOrderId(string changeOrderId) { DARABONBA_PTR_SET_VALUE(changeOrderId_, changeOrderId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainOrderCancelResponseBodyModule& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outChangeOrderId Field Functions 
    bool hasOutChangeOrderId() const { return this->outChangeOrderId_ != nullptr;};
    void deleteOutChangeOrderId() { this->outChangeOrderId_ = nullptr;};
    inline string outChangeOrderId() const { DARABONBA_PTR_GET_DEFAULT(outChangeOrderId_, "") };
    inline TrainOrderCancelResponseBodyModule& setOutChangeOrderId(string outChangeOrderId) { DARABONBA_PTR_SET_VALUE(outChangeOrderId_, outChangeOrderId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainOrderCancelResponseBodyModule& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline bool status() const { DARABONBA_PTR_GET_DEFAULT(status_, false) };
    inline TrainOrderCancelResponseBodyModule& setStatus(bool status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> changeOrderId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<string> outChangeOrderId_ = nullptr;
    std::shared_ptr<string> outOrderId_ = nullptr;
    std::shared_ptr<bool> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
