// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHOTELSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHOTELSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class UpdateHotelShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHotelShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppKey, appKey_);
      DARABONBA_PTR_TO_JSON(EstOpenTime, estOpenTime_);
      DARABONBA_PTR_TO_JSON(HotelAddress, hotelAddress_);
      DARABONBA_PTR_TO_JSON(HotelEmail, hotelEmail_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(HotelName, hotelName_);
      DARABONBA_PTR_TO_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_TO_JSON(RelatedPks, relatedPksShrink_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(RoomNum, roomNum_);
      DARABONBA_PTR_TO_JSON(TbOpenId, tbOpenId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHotelShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
      DARABONBA_PTR_FROM_JSON(EstOpenTime, estOpenTime_);
      DARABONBA_PTR_FROM_JSON(HotelAddress, hotelAddress_);
      DARABONBA_PTR_FROM_JSON(HotelEmail, hotelEmail_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(HotelName, hotelName_);
      DARABONBA_PTR_FROM_JSON(PhoneNumber, phoneNumber_);
      DARABONBA_PTR_FROM_JSON(RelatedPks, relatedPksShrink_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(RoomNum, roomNum_);
      DARABONBA_PTR_FROM_JSON(TbOpenId, tbOpenId_);
    };
    UpdateHotelShrinkRequest() = default ;
    UpdateHotelShrinkRequest(const UpdateHotelShrinkRequest &) = default ;
    UpdateHotelShrinkRequest(UpdateHotelShrinkRequest &&) = default ;
    UpdateHotelShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHotelShrinkRequest() = default ;
    UpdateHotelShrinkRequest& operator=(const UpdateHotelShrinkRequest &) = default ;
    UpdateHotelShrinkRequest& operator=(UpdateHotelShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appKey_ == nullptr
        && this->estOpenTime_ == nullptr && this->hotelAddress_ == nullptr && this->hotelEmail_ == nullptr && this->hotelId_ == nullptr && this->hotelName_ == nullptr
        && this->phoneNumber_ == nullptr && this->relatedPksShrink_ == nullptr && this->remark_ == nullptr && this->roomNum_ == nullptr && this->tbOpenId_ == nullptr; };
    // appKey Field Functions 
    bool hasAppKey() const { return this->appKey_ != nullptr;};
    void deleteAppKey() { this->appKey_ = nullptr;};
    inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
    inline UpdateHotelShrinkRequest& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


    // estOpenTime Field Functions 
    bool hasEstOpenTime() const { return this->estOpenTime_ != nullptr;};
    void deleteEstOpenTime() { this->estOpenTime_ = nullptr;};
    inline string getEstOpenTime() const { DARABONBA_PTR_GET_DEFAULT(estOpenTime_, "") };
    inline UpdateHotelShrinkRequest& setEstOpenTime(string estOpenTime) { DARABONBA_PTR_SET_VALUE(estOpenTime_, estOpenTime) };


    // hotelAddress Field Functions 
    bool hasHotelAddress() const { return this->hotelAddress_ != nullptr;};
    void deleteHotelAddress() { this->hotelAddress_ = nullptr;};
    inline string getHotelAddress() const { DARABONBA_PTR_GET_DEFAULT(hotelAddress_, "") };
    inline UpdateHotelShrinkRequest& setHotelAddress(string hotelAddress) { DARABONBA_PTR_SET_VALUE(hotelAddress_, hotelAddress) };


    // hotelEmail Field Functions 
    bool hasHotelEmail() const { return this->hotelEmail_ != nullptr;};
    void deleteHotelEmail() { this->hotelEmail_ = nullptr;};
    inline string getHotelEmail() const { DARABONBA_PTR_GET_DEFAULT(hotelEmail_, "") };
    inline UpdateHotelShrinkRequest& setHotelEmail(string hotelEmail) { DARABONBA_PTR_SET_VALUE(hotelEmail_, hotelEmail) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline UpdateHotelShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // hotelName Field Functions 
    bool hasHotelName() const { return this->hotelName_ != nullptr;};
    void deleteHotelName() { this->hotelName_ = nullptr;};
    inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
    inline UpdateHotelShrinkRequest& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


    // phoneNumber Field Functions 
    bool hasPhoneNumber() const { return this->phoneNumber_ != nullptr;};
    void deletePhoneNumber() { this->phoneNumber_ = nullptr;};
    inline string getPhoneNumber() const { DARABONBA_PTR_GET_DEFAULT(phoneNumber_, "") };
    inline UpdateHotelShrinkRequest& setPhoneNumber(string phoneNumber) { DARABONBA_PTR_SET_VALUE(phoneNumber_, phoneNumber) };


    // relatedPksShrink Field Functions 
    bool hasRelatedPksShrink() const { return this->relatedPksShrink_ != nullptr;};
    void deleteRelatedPksShrink() { this->relatedPksShrink_ = nullptr;};
    inline string getRelatedPksShrink() const { DARABONBA_PTR_GET_DEFAULT(relatedPksShrink_, "") };
    inline UpdateHotelShrinkRequest& setRelatedPksShrink(string relatedPksShrink) { DARABONBA_PTR_SET_VALUE(relatedPksShrink_, relatedPksShrink) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateHotelShrinkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // roomNum Field Functions 
    bool hasRoomNum() const { return this->roomNum_ != nullptr;};
    void deleteRoomNum() { this->roomNum_ = nullptr;};
    inline int32_t getRoomNum() const { DARABONBA_PTR_GET_DEFAULT(roomNum_, 0) };
    inline UpdateHotelShrinkRequest& setRoomNum(int32_t roomNum) { DARABONBA_PTR_SET_VALUE(roomNum_, roomNum) };


    // tbOpenId Field Functions 
    bool hasTbOpenId() const { return this->tbOpenId_ != nullptr;};
    void deleteTbOpenId() { this->tbOpenId_ = nullptr;};
    inline string getTbOpenId() const { DARABONBA_PTR_GET_DEFAULT(tbOpenId_, "") };
    inline UpdateHotelShrinkRequest& setTbOpenId(string tbOpenId) { DARABONBA_PTR_SET_VALUE(tbOpenId_, tbOpenId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appKey_ {};
    shared_ptr<string> estOpenTime_ {};
    shared_ptr<string> hotelAddress_ {};
    shared_ptr<string> hotelEmail_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> hotelName_ {};
    shared_ptr<string> phoneNumber_ {};
    shared_ptr<string> relatedPksShrink_ {};
    shared_ptr<string> remark_ {};
    shared_ptr<int32_t> roomNum_ {};
    // This parameter is required.
    shared_ptr<string> tbOpenId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
