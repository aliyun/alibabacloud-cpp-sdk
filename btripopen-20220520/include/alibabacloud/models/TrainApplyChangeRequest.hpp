// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINAPPLYCHANGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINAPPLYCHANGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainApplyChangeRequestChangeTrainInfoS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainApplyChangeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainApplyChangeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_TO_JSON(change_train_info_s, changeTrainInfoS_);
      DARABONBA_PTR_TO_JSON(force_match, forceMatch_);
      DARABONBA_PTR_TO_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_TO_JSON(order_id, orderId_);
      DARABONBA_PTR_TO_JSON(out_change_apply_id, outChangeApplyId_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
    };
    friend void from_json(const Darabonba::Json& j, TrainApplyChangeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_FROM_JSON(change_train_info_s, changeTrainInfoS_);
      DARABONBA_PTR_FROM_JSON(force_match, forceMatch_);
      DARABONBA_PTR_FROM_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_FROM_JSON(order_id, orderId_);
      DARABONBA_PTR_FROM_JSON(out_change_apply_id, outChangeApplyId_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
    };
    TrainApplyChangeRequest() = default ;
    TrainApplyChangeRequest(const TrainApplyChangeRequest &) = default ;
    TrainApplyChangeRequest(TrainApplyChangeRequest &&) = default ;
    TrainApplyChangeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainApplyChangeRequest() = default ;
    TrainApplyChangeRequest& operator=(const TrainApplyChangeRequest &) = default ;
    TrainApplyChangeRequest& operator=(TrainApplyChangeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptNoSeat_ != nullptr
        && this->changeTrainInfoS_ != nullptr && this->forceMatch_ != nullptr && this->isPayNow_ != nullptr && this->orderId_ != nullptr && this->outChangeApplyId_ != nullptr
        && this->outOrderId_ != nullptr; };
    // acceptNoSeat Field Functions 
    bool hasAcceptNoSeat() const { return this->acceptNoSeat_ != nullptr;};
    void deleteAcceptNoSeat() { this->acceptNoSeat_ = nullptr;};
    inline string acceptNoSeat() const { DARABONBA_PTR_GET_DEFAULT(acceptNoSeat_, "") };
    inline TrainApplyChangeRequest& setAcceptNoSeat(string acceptNoSeat) { DARABONBA_PTR_SET_VALUE(acceptNoSeat_, acceptNoSeat) };


    // changeTrainInfoS Field Functions 
    bool hasChangeTrainInfoS() const { return this->changeTrainInfoS_ != nullptr;};
    void deleteChangeTrainInfoS() { this->changeTrainInfoS_ = nullptr;};
    inline const vector<TrainApplyChangeRequestChangeTrainInfoS> & changeTrainInfoS() const { DARABONBA_PTR_GET_CONST(changeTrainInfoS_, vector<TrainApplyChangeRequestChangeTrainInfoS>) };
    inline vector<TrainApplyChangeRequestChangeTrainInfoS> changeTrainInfoS() { DARABONBA_PTR_GET(changeTrainInfoS_, vector<TrainApplyChangeRequestChangeTrainInfoS>) };
    inline TrainApplyChangeRequest& setChangeTrainInfoS(const vector<TrainApplyChangeRequestChangeTrainInfoS> & changeTrainInfoS) { DARABONBA_PTR_SET_VALUE(changeTrainInfoS_, changeTrainInfoS) };
    inline TrainApplyChangeRequest& setChangeTrainInfoS(vector<TrainApplyChangeRequestChangeTrainInfoS> && changeTrainInfoS) { DARABONBA_PTR_SET_RVALUE(changeTrainInfoS_, changeTrainInfoS) };


    // forceMatch Field Functions 
    bool hasForceMatch() const { return this->forceMatch_ != nullptr;};
    void deleteForceMatch() { this->forceMatch_ = nullptr;};
    inline string forceMatch() const { DARABONBA_PTR_GET_DEFAULT(forceMatch_, "") };
    inline TrainApplyChangeRequest& setForceMatch(string forceMatch) { DARABONBA_PTR_SET_VALUE(forceMatch_, forceMatch) };


    // isPayNow Field Functions 
    bool hasIsPayNow() const { return this->isPayNow_ != nullptr;};
    void deleteIsPayNow() { this->isPayNow_ = nullptr;};
    inline bool isPayNow() const { DARABONBA_PTR_GET_DEFAULT(isPayNow_, false) };
    inline TrainApplyChangeRequest& setIsPayNow(bool isPayNow) { DARABONBA_PTR_SET_VALUE(isPayNow_, isPayNow) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline TrainApplyChangeRequest& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // outChangeApplyId Field Functions 
    bool hasOutChangeApplyId() const { return this->outChangeApplyId_ != nullptr;};
    void deleteOutChangeApplyId() { this->outChangeApplyId_ = nullptr;};
    inline string outChangeApplyId() const { DARABONBA_PTR_GET_DEFAULT(outChangeApplyId_, "") };
    inline TrainApplyChangeRequest& setOutChangeApplyId(string outChangeApplyId) { DARABONBA_PTR_SET_VALUE(outChangeApplyId_, outChangeApplyId) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainApplyChangeRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


  protected:
    std::shared_ptr<string> acceptNoSeat_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<TrainApplyChangeRequestChangeTrainInfoS>> changeTrainInfoS_ = nullptr;
    std::shared_ptr<string> forceMatch_ = nullptr;
    std::shared_ptr<bool> isPayNow_ = nullptr;
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
