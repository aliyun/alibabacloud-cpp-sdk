// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TRAINORDERCREATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TrainOrderCreateRequestBookTrainInfos.hpp>
#include <alibabacloud/models/TrainOrderCreateRequestBusinessInfo.hpp>
#include <alibabacloud/models/TrainOrderCreateRequestContactInfo.hpp>
#include <alibabacloud/models/TrainOrderCreateRequestPassengerOpenInfoS.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TrainOrderCreateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TrainOrderCreateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_TO_JSON(book_train_infos, bookTrainInfos_);
      DARABONBA_PTR_TO_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_TO_JSON(btrip_user_name, btripUserName_);
      DARABONBA_PTR_TO_JSON(business_info, businessInfo_);
      DARABONBA_PTR_TO_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_TO_JSON(force_match, forceMatch_);
      DARABONBA_PTR_TO_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_TO_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_TO_JSON(passenger_open_info_s, passengerOpenInfoS_);
    };
    friend void from_json(const Darabonba::Json& j, TrainOrderCreateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accept_no_seat, acceptNoSeat_);
      DARABONBA_PTR_FROM_JSON(book_train_infos, bookTrainInfos_);
      DARABONBA_PTR_FROM_JSON(btrip_user_id, btripUserId_);
      DARABONBA_PTR_FROM_JSON(btrip_user_name, btripUserName_);
      DARABONBA_PTR_FROM_JSON(business_info, businessInfo_);
      DARABONBA_PTR_FROM_JSON(contact_info, contactInfo_);
      DARABONBA_PTR_FROM_JSON(force_match, forceMatch_);
      DARABONBA_PTR_FROM_JSON(is_pay_now, isPayNow_);
      DARABONBA_PTR_FROM_JSON(out_order_id, outOrderId_);
      DARABONBA_PTR_FROM_JSON(passenger_open_info_s, passengerOpenInfoS_);
    };
    TrainOrderCreateRequest() = default ;
    TrainOrderCreateRequest(const TrainOrderCreateRequest &) = default ;
    TrainOrderCreateRequest(TrainOrderCreateRequest &&) = default ;
    TrainOrderCreateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TrainOrderCreateRequest() = default ;
    TrainOrderCreateRequest& operator=(const TrainOrderCreateRequest &) = default ;
    TrainOrderCreateRequest& operator=(TrainOrderCreateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->acceptNoSeat_ != nullptr
        && this->bookTrainInfos_ != nullptr && this->btripUserId_ != nullptr && this->btripUserName_ != nullptr && this->businessInfo_ != nullptr && this->contactInfo_ != nullptr
        && this->forceMatch_ != nullptr && this->isPayNow_ != nullptr && this->outOrderId_ != nullptr && this->passengerOpenInfoS_ != nullptr; };
    // acceptNoSeat Field Functions 
    bool hasAcceptNoSeat() const { return this->acceptNoSeat_ != nullptr;};
    void deleteAcceptNoSeat() { this->acceptNoSeat_ = nullptr;};
    inline string acceptNoSeat() const { DARABONBA_PTR_GET_DEFAULT(acceptNoSeat_, "") };
    inline TrainOrderCreateRequest& setAcceptNoSeat(string acceptNoSeat) { DARABONBA_PTR_SET_VALUE(acceptNoSeat_, acceptNoSeat) };


    // bookTrainInfos Field Functions 
    bool hasBookTrainInfos() const { return this->bookTrainInfos_ != nullptr;};
    void deleteBookTrainInfos() { this->bookTrainInfos_ = nullptr;};
    inline const vector<TrainOrderCreateRequestBookTrainInfos> & bookTrainInfos() const { DARABONBA_PTR_GET_CONST(bookTrainInfos_, vector<TrainOrderCreateRequestBookTrainInfos>) };
    inline vector<TrainOrderCreateRequestBookTrainInfos> bookTrainInfos() { DARABONBA_PTR_GET(bookTrainInfos_, vector<TrainOrderCreateRequestBookTrainInfos>) };
    inline TrainOrderCreateRequest& setBookTrainInfos(const vector<TrainOrderCreateRequestBookTrainInfos> & bookTrainInfos) { DARABONBA_PTR_SET_VALUE(bookTrainInfos_, bookTrainInfos) };
    inline TrainOrderCreateRequest& setBookTrainInfos(vector<TrainOrderCreateRequestBookTrainInfos> && bookTrainInfos) { DARABONBA_PTR_SET_RVALUE(bookTrainInfos_, bookTrainInfos) };


    // btripUserId Field Functions 
    bool hasBtripUserId() const { return this->btripUserId_ != nullptr;};
    void deleteBtripUserId() { this->btripUserId_ = nullptr;};
    inline string btripUserId() const { DARABONBA_PTR_GET_DEFAULT(btripUserId_, "") };
    inline TrainOrderCreateRequest& setBtripUserId(string btripUserId) { DARABONBA_PTR_SET_VALUE(btripUserId_, btripUserId) };


    // btripUserName Field Functions 
    bool hasBtripUserName() const { return this->btripUserName_ != nullptr;};
    void deleteBtripUserName() { this->btripUserName_ = nullptr;};
    inline string btripUserName() const { DARABONBA_PTR_GET_DEFAULT(btripUserName_, "") };
    inline TrainOrderCreateRequest& setBtripUserName(string btripUserName) { DARABONBA_PTR_SET_VALUE(btripUserName_, btripUserName) };


    // businessInfo Field Functions 
    bool hasBusinessInfo() const { return this->businessInfo_ != nullptr;};
    void deleteBusinessInfo() { this->businessInfo_ = nullptr;};
    inline const TrainOrderCreateRequestBusinessInfo & businessInfo() const { DARABONBA_PTR_GET_CONST(businessInfo_, TrainOrderCreateRequestBusinessInfo) };
    inline TrainOrderCreateRequestBusinessInfo businessInfo() { DARABONBA_PTR_GET(businessInfo_, TrainOrderCreateRequestBusinessInfo) };
    inline TrainOrderCreateRequest& setBusinessInfo(const TrainOrderCreateRequestBusinessInfo & businessInfo) { DARABONBA_PTR_SET_VALUE(businessInfo_, businessInfo) };
    inline TrainOrderCreateRequest& setBusinessInfo(TrainOrderCreateRequestBusinessInfo && businessInfo) { DARABONBA_PTR_SET_RVALUE(businessInfo_, businessInfo) };


    // contactInfo Field Functions 
    bool hasContactInfo() const { return this->contactInfo_ != nullptr;};
    void deleteContactInfo() { this->contactInfo_ = nullptr;};
    inline const TrainOrderCreateRequestContactInfo & contactInfo() const { DARABONBA_PTR_GET_CONST(contactInfo_, TrainOrderCreateRequestContactInfo) };
    inline TrainOrderCreateRequestContactInfo contactInfo() { DARABONBA_PTR_GET(contactInfo_, TrainOrderCreateRequestContactInfo) };
    inline TrainOrderCreateRequest& setContactInfo(const TrainOrderCreateRequestContactInfo & contactInfo) { DARABONBA_PTR_SET_VALUE(contactInfo_, contactInfo) };
    inline TrainOrderCreateRequest& setContactInfo(TrainOrderCreateRequestContactInfo && contactInfo) { DARABONBA_PTR_SET_RVALUE(contactInfo_, contactInfo) };


    // forceMatch Field Functions 
    bool hasForceMatch() const { return this->forceMatch_ != nullptr;};
    void deleteForceMatch() { this->forceMatch_ = nullptr;};
    inline string forceMatch() const { DARABONBA_PTR_GET_DEFAULT(forceMatch_, "") };
    inline TrainOrderCreateRequest& setForceMatch(string forceMatch) { DARABONBA_PTR_SET_VALUE(forceMatch_, forceMatch) };


    // isPayNow Field Functions 
    bool hasIsPayNow() const { return this->isPayNow_ != nullptr;};
    void deleteIsPayNow() { this->isPayNow_ = nullptr;};
    inline bool isPayNow() const { DARABONBA_PTR_GET_DEFAULT(isPayNow_, false) };
    inline TrainOrderCreateRequest& setIsPayNow(bool isPayNow) { DARABONBA_PTR_SET_VALUE(isPayNow_, isPayNow) };


    // outOrderId Field Functions 
    bool hasOutOrderId() const { return this->outOrderId_ != nullptr;};
    void deleteOutOrderId() { this->outOrderId_ = nullptr;};
    inline string outOrderId() const { DARABONBA_PTR_GET_DEFAULT(outOrderId_, "") };
    inline TrainOrderCreateRequest& setOutOrderId(string outOrderId) { DARABONBA_PTR_SET_VALUE(outOrderId_, outOrderId) };


    // passengerOpenInfoS Field Functions 
    bool hasPassengerOpenInfoS() const { return this->passengerOpenInfoS_ != nullptr;};
    void deletePassengerOpenInfoS() { this->passengerOpenInfoS_ = nullptr;};
    inline const vector<TrainOrderCreateRequestPassengerOpenInfoS> & passengerOpenInfoS() const { DARABONBA_PTR_GET_CONST(passengerOpenInfoS_, vector<TrainOrderCreateRequestPassengerOpenInfoS>) };
    inline vector<TrainOrderCreateRequestPassengerOpenInfoS> passengerOpenInfoS() { DARABONBA_PTR_GET(passengerOpenInfoS_, vector<TrainOrderCreateRequestPassengerOpenInfoS>) };
    inline TrainOrderCreateRequest& setPassengerOpenInfoS(const vector<TrainOrderCreateRequestPassengerOpenInfoS> & passengerOpenInfoS) { DARABONBA_PTR_SET_VALUE(passengerOpenInfoS_, passengerOpenInfoS) };
    inline TrainOrderCreateRequest& setPassengerOpenInfoS(vector<TrainOrderCreateRequestPassengerOpenInfoS> && passengerOpenInfoS) { DARABONBA_PTR_SET_RVALUE(passengerOpenInfoS_, passengerOpenInfoS) };


  protected:
    std::shared_ptr<string> acceptNoSeat_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<TrainOrderCreateRequestBookTrainInfos>> bookTrainInfos_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> btripUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> btripUserName_ = nullptr;
    std::shared_ptr<TrainOrderCreateRequestBusinessInfo> businessInfo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<TrainOrderCreateRequestContactInfo> contactInfo_ = nullptr;
    std::shared_ptr<string> forceMatch_ = nullptr;
    std::shared_ptr<bool> isPayNow_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> outOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<TrainOrderCreateRequestPassengerOpenInfoS>> passengerOpenInfoS_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
