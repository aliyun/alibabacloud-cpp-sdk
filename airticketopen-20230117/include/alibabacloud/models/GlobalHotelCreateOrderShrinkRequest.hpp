// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELCREATEORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELCREATEORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelCreateOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelCreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Contact, contactShrink_);
      DARABONBA_PTR_TO_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_TO_JSON(Guests, guestsShrink_);
      DARABONBA_PTR_TO_JSON(ItemOfferId, itemOfferId_);
      DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelCreateOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Contact, contactShrink_);
      DARABONBA_PTR_FROM_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_FROM_JSON(Guests, guestsShrink_);
      DARABONBA_PTR_FROM_JSON(ItemOfferId, itemOfferId_);
      DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelCreateOrderShrinkRequest() = default ;
    GlobalHotelCreateOrderShrinkRequest(const GlobalHotelCreateOrderShrinkRequest &) = default ;
    GlobalHotelCreateOrderShrinkRequest(GlobalHotelCreateOrderShrinkRequest &&) = default ;
    GlobalHotelCreateOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelCreateOrderShrinkRequest() = default ;
    GlobalHotelCreateOrderShrinkRequest& operator=(const GlobalHotelCreateOrderShrinkRequest &) = default ;
    GlobalHotelCreateOrderShrinkRequest& operator=(GlobalHotelCreateOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->contactShrink_ == nullptr && this->externalOrderNo_ == nullptr && this->guestsShrink_ == nullptr && this->itemOfferId_ == nullptr && this->roomCount_ == nullptr
        && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelCreateOrderShrinkRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // contactShrink Field Functions 
    bool hasContactShrink() const { return this->contactShrink_ != nullptr;};
    void deleteContactShrink() { this->contactShrink_ = nullptr;};
    inline string getContactShrink() const { DARABONBA_PTR_GET_DEFAULT(contactShrink_, "") };
    inline GlobalHotelCreateOrderShrinkRequest& setContactShrink(string contactShrink) { DARABONBA_PTR_SET_VALUE(contactShrink_, contactShrink) };


    // externalOrderNo Field Functions 
    bool hasExternalOrderNo() const { return this->externalOrderNo_ != nullptr;};
    void deleteExternalOrderNo() { this->externalOrderNo_ = nullptr;};
    inline string getExternalOrderNo() const { DARABONBA_PTR_GET_DEFAULT(externalOrderNo_, "") };
    inline GlobalHotelCreateOrderShrinkRequest& setExternalOrderNo(string externalOrderNo) { DARABONBA_PTR_SET_VALUE(externalOrderNo_, externalOrderNo) };


    // guestsShrink Field Functions 
    bool hasGuestsShrink() const { return this->guestsShrink_ != nullptr;};
    void deleteGuestsShrink() { this->guestsShrink_ = nullptr;};
    inline string getGuestsShrink() const { DARABONBA_PTR_GET_DEFAULT(guestsShrink_, "") };
    inline GlobalHotelCreateOrderShrinkRequest& setGuestsShrink(string guestsShrink) { DARABONBA_PTR_SET_VALUE(guestsShrink_, guestsShrink) };


    // itemOfferId Field Functions 
    bool hasItemOfferId() const { return this->itemOfferId_ != nullptr;};
    void deleteItemOfferId() { this->itemOfferId_ = nullptr;};
    inline string getItemOfferId() const { DARABONBA_PTR_GET_DEFAULT(itemOfferId_, "") };
    inline GlobalHotelCreateOrderShrinkRequest& setItemOfferId(string itemOfferId) { DARABONBA_PTR_SET_VALUE(itemOfferId_, itemOfferId) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline GlobalHotelCreateOrderShrinkRequest& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelCreateOrderShrinkRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The distributor account ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // The contact information.
    // 
    // This parameter is required.
    shared_ptr<string> contactShrink_ {};
    // The external order number.
    // 
    // This parameter is required.
    shared_ptr<string> externalOrderNo_ {};
    // The guests grouped by room.
    // 
    // This parameter is required.
    shared_ptr<string> guestsShrink_ {};
    // The offer ID.
    // 
    // This parameter is required.
    shared_ptr<string> itemOfferId_ {};
    // The number of rooms.
    // 
    // This parameter is required.
    shared_ptr<int32_t> roomCount_ {};
    // TraceId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
