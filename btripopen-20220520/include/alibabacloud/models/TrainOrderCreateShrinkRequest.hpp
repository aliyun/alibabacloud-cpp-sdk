// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCREATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCREATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCreateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCreateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_TO_JSON(book_train_infos, bookTrainInfosShrink_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(btrip_user_name, btripUserName_);
      DARABONBA_PTR_TO_JSON(business_info, businessInfoShrink_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfoShrink_);
      DARABONBA_PTR_TO_JSON(force_match, forceMatch_);
      DARABONBA_PTR_TO_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_open_info_s, passengerOpenInfoSShrink_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCreateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_FROM_JSON(book_train_infos, bookTrainInfosShrink_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(btrip_user_name, btripUserName_);
      DARABONBA_PTR_FROM_JSON(business_info, businessInfoShrink_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfoShrink_);
      DARABONBA_PTR_FROM_JSON(force_match, forceMatch_);
      DARABONBA_PTR_FROM_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_open_info_s, passengerOpenInfoSShrink_);
    };
    TrainOrderCreateShrinkRequest() = default ;
    TrainOrderCreateShrinkRequest(const TrainOrderCreateShrinkRequest &) = default ;
    TrainOrderCreateShrinkRequest(TrainOrderCreateShrinkRequest &&) = default ;
    TrainOrderCreateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCreateShrinkRequest() = default ;
    TrainOrderCreateShrinkRequest& operator=(const TrainOrderCreateShrinkRequest &) = default ;
    TrainOrderCreateShrinkRequest& operator=(TrainOrderCreateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptNoSeat_ != nullptr
        && this->bookTrainInfosShrink_ != nullptr && this->btripUserId_ != nullptr && this->btripUserName_ != nullptr && this->businessInfoShrink_ != nullptr && this->contactInfoShrink_ != nullptr
        && this->forceMatch_ != nullptr && this->isPayNow_ != nullptr && this->outOrderId_ != nullptr && this->passengerOpenInfoSShrink_ != nullptr; };
    // acceptNoSeat Field Functions 
    bool hasAcceptNoSeat() const { return this->acceptNoSeat_ != nullptr;};
    void deleteAcceptNoSeat() { this->acceptNoSeat_ = nullptr;};
    inline string acceptNoSeat() const { DARABONBA_PTR_GET_DEFAULT(acceptNoSeat_, "") };
    inline TrainOrderCreateShrinkRequest& setAcceptNoSeat(string acceptNoSeat) { DARABONBA_PTR_SET_VALUE(acceptNoSeat_, acceptNoSeat) };


    // bookTrainInfosShrink Field Functions 
    bool hasBookTrainInfosShrink() const { return this->bookTrainInfosShrink_ != nullptr;};
    void deleteBookTrainInfosShrink() { this->bookTrainInfosShrink_ = nullptr;};
    inline string bookTrainInfosShrink() const { DARABONBA_PTR_GET_DEFAULT(bookTrainInfosShrink_, "") };
    inline TrainOrderCreateShrinkRequest& setBookTrainInfosShrink(string bookTrainInfosShrink) { DARABONBA_PTR_SET_VALUE(bookTrainInfosShrink_, bookTrainInfosShrink) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline TrainOrderCreateShrinkRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // btripUserName Field Functions 
    bool hasBtripUserName() const { return this->btripUserName_ != nullptr;};
    void deleteBtripUserName() { this->btripUserName_ = nullptr;};
    inline string btripUserName() const { DARABONBA_PTR_GET_DEFAULT(btripUserName_, "") };
    inline TrainOrderCreateShrinkRequest& setBtripUserName(string btripUserName) { DARABONBA_PTR_SET_VALUE(btripUserName_, btripUserName) };


    // businessInfoShrink Field Functions 
    bool hasBusinessInfoShrink() const { return this->businessInfoShrink_ != nullptr;};
    void deleteBusinessInfoShrink() { this->businessInfoShrink_ = nullptr;};
    inline string businessInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(businessInfoShrink_, "") };
    inline TrainOrderCreateShrinkRequest& setBusinessInfoShrink(string businessInfoShrink) { DARABONBA_PTR_SET_VALUE(businessInfoShrink_, businessInfoShrink) };


    // contactInfoShrink Field Functions 
    bool hasContactInfoShrink() const { return this->contactInfoShrink_ != nullptr;};
    void deleteContactInfoShrink() { this->contactInfoShrink_ = nullptr;};
    inline string contactInfoShrink() const { DARABONBA_PTR_GET_DEFAULT(contactInfoShrink_, "") };
    inline TrainOrderCreateShrinkRequest& setContactInfoShrink(string contactInfoShrink) { DARABONBA_PTR_SET_VALUE(contactInfoShrink_, contactInfoShrink) };


    // forceMatch Field Functions 
    bool hasForceMatch() const { return this->forceMatch_ != nullptr;};
    void deleteForceMatch() { this->forceMatch_ = nullptr;};
    inline string forceMatch() const { DARABONBA_PTR_GET_DEFAULT(forceMatch_, "") };
    inline TrainOrderCreateShrinkRequest& setForceMatch(string forceMatch) { DARABONBA_PTR_SET_VALUE(forceMatch_, forceMatch) };


    // isPayNow Field Functions 
    bool hasIsPayNow() const { return this->isPayNow_ != nullptr;};
    void deleteIsPayNow() { this->isPayNow_ = nullptr;};
    inline bool isPayNow() const { DARABONBA_PTR_GET_DEFAULT(isPayNow_, false) };
    inline TrainOrderCreateShrinkRequest& setIsPayNow(bool isPayNow) { DARABONBA_PTR_SET_VALUE(isPayNow_, isPayNow) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainOrderCreateShrinkRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerOpenInfoSShrink Field Functions 
    bool hasPassengerOpenInfoSShrink() const { return this->passengerOpenInfoSShrink_ != nullptr;};
    void deletePassengerOpenInfoSShrink() { this->passengerOpenInfoSShrink_ = nullptr;};
    inline string passengerOpenInfoSShrink() const { DARABONBA_PTR_GET_DEFAULT(passengerOpenInfoSShrink_, "") };
    inline TrainOrderCreateShrinkRequest& setPassengerOpenInfoSShrink(string passengerOpenInfoSShrink) { DARABONBA_PTR_SET_VALUE(passengerOpenInfoSShrink_, passengerOpenInfoSShrink) };


  protected:
    std::shared_ptr<string> acceptNoSeat_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bookTrainInfosShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> btripUserName_ = nullptr;
    std::shared_ptr<string> businessInfoShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> contactInfoShrink_ = nullptr;
    std::shared_ptr<string> forceMatch_ = nullptr;
    std::shared_ptr<bool> isPayNow_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> passengerOpenInfoSShrink_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
