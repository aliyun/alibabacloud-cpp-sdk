// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCHANGECONFIRMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCHANGECONFIRMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderChangeConfirmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderChangeConfirmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(change_apply_id, changeApplyId_);
      DARABONBA_PTR_TO_JSON(change_settle_amount, changeSettleAmount_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_change_apply_id, outChangeApplyId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderChangeConfirmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(change_apply_id, changeApplyId_);
      DARABONBA_PTR_FROM_JSON(change_settle_amount, changeSettleAmount_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_change_apply_id, outChangeApplyId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
    };
    TrainOrderChangeConfirmRequest() = default ;
    TrainOrderChangeConfirmRequest(const TrainOrderChangeConfirmRequest &) = default ;
    TrainOrderChangeConfirmRequest(TrainOrderChangeConfirmRequest &&) = default ;
    TrainOrderChangeConfirmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderChangeConfirmRequest() = default ;
    TrainOrderChangeConfirmRequest& operator=(const TrainOrderChangeConfirmRequest &) = default ;
    TrainOrderChangeConfirmRequest& operator=(TrainOrderChangeConfirmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeApplyId_ != nullptr
        && this->changeSettleAmount_ != nullptr && this->orderId_ != nullptr && this->outChangeApplyId_ != nullptr && this->outOrderId_ != nullptr; };
    // changeApplyId Field Functions 
    bool hasChangeApplyId() const { return this->changeApplyId_ != nullptr;};
    void deleteChangeApplyId() { this->changeApplyId_ = nullptr;};
    inline string changeApplyId() const { DARABONBA_PTR_GET_DEFAULT(changeApplyId_, "") };
    inline TrainOrderChangeConfirmRequest& setChangeApplyId(string changeApplyId) { DARABONBA_PTR_SET_VALUE(changeApplyId_, changeApplyId) };


    // changeSettleAmount Field Functions 
    bool hasChangeSettleAmount() const { return this->changeSettleAmount_ != nullptr;};
    void deleteChangeSettleAmount() { this->changeSettleAmount_ = nullptr;};
    inline int64_t changeSettleAmount() const { DARABONBA_PTR_GET_DEFAULT(changeSettleAmount_, 0L) };
    inline TrainOrderChangeConfirmRequest& setChangeSettleAmount(int64_t changeSettleAmount) { DARABONBA_PTR_SET_VALUE(changeSettleAmount_, changeSettleAmount) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainOrderChangeConfirmRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outChangeApplyId Field Functions 
    bool hasOutChangeApplyId() const { return this->outChangeApplyId_ != nullptr;};
    void deleteOutChangeApplyId() { this->outChangeApplyId_ = nullptr;};
    inline string outChangeApplyId() const { DARABONBA_PTR_GET_DEFAULT(outChangeApplyId_, "") };
    inline TrainOrderChangeConfirmRequest& setOutChangeApplyId(string outChangeApplyId) { DARABONBA_PTR_SET_VALUE(outChangeApplyId_, outChangeApplyId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainOrderChangeConfirmRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> changeApplyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> changeSettleAmount_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> orderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outChangeApplyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
