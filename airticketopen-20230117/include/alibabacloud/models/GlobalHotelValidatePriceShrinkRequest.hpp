// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GLOBALHOTELVALIDATEPRICESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GLOBALHOTELVALIDATEPRICESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class GlobalHotelValidatePriceShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GlobalHotelValidatePriceShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Adults, adults_);
      DARABONBA_PTR_TO_JSON(Children, children_);
      DARABONBA_PTR_TO_JSON(ChildrenAges, childrenAgesShrink_);
      DARABONBA_PTR_TO_JSON(ItemOfferKey, itemOfferKey_);
      DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, GlobalHotelValidatePriceShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Adults, adults_);
      DARABONBA_PTR_FROM_JSON(Children, children_);
      DARABONBA_PTR_FROM_JSON(ChildrenAges, childrenAgesShrink_);
      DARABONBA_PTR_FROM_JSON(ItemOfferKey, itemOfferKey_);
      DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    GlobalHotelValidatePriceShrinkRequest() = default ;
    GlobalHotelValidatePriceShrinkRequest(const GlobalHotelValidatePriceShrinkRequest &) = default ;
    GlobalHotelValidatePriceShrinkRequest(GlobalHotelValidatePriceShrinkRequest &&) = default ;
    GlobalHotelValidatePriceShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GlobalHotelValidatePriceShrinkRequest() = default ;
    GlobalHotelValidatePriceShrinkRequest& operator=(const GlobalHotelValidatePriceShrinkRequest &) = default ;
    GlobalHotelValidatePriceShrinkRequest& operator=(GlobalHotelValidatePriceShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountNo_ == nullptr
        && this->adults_ == nullptr && this->children_ == nullptr && this->childrenAgesShrink_ == nullptr && this->itemOfferKey_ == nullptr && this->roomCount_ == nullptr
        && this->tracerId_ == nullptr; };
    // accountNo Field Functions 
    bool hasAccountNo() const { return this->accountNo_ != nullptr;};
    void deleteAccountNo() { this->accountNo_ = nullptr;};
    inline int64_t getAccountNo() const { DARABONBA_PTR_GET_DEFAULT(accountNo_, 0L) };
    inline GlobalHotelValidatePriceShrinkRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // adults Field Functions 
    bool hasAdults() const { return this->adults_ != nullptr;};
    void deleteAdults() { this->adults_ = nullptr;};
    inline int32_t getAdults() const { DARABONBA_PTR_GET_DEFAULT(adults_, 0) };
    inline GlobalHotelValidatePriceShrinkRequest& setAdults(int32_t adults) { DARABONBA_PTR_SET_VALUE(adults_, adults) };


    // children Field Functions 
    bool hasChildren() const { return this->children_ != nullptr;};
    void deleteChildren() { this->children_ = nullptr;};
    inline int32_t getChildren() const { DARABONBA_PTR_GET_DEFAULT(children_, 0) };
    inline GlobalHotelValidatePriceShrinkRequest& setChildren(int32_t children) { DARABONBA_PTR_SET_VALUE(children_, children) };


    // childrenAgesShrink Field Functions 
    bool hasChildrenAgesShrink() const { return this->childrenAgesShrink_ != nullptr;};
    void deleteChildrenAgesShrink() { this->childrenAgesShrink_ = nullptr;};
    inline string getChildrenAgesShrink() const { DARABONBA_PTR_GET_DEFAULT(childrenAgesShrink_, "") };
    inline GlobalHotelValidatePriceShrinkRequest& setChildrenAgesShrink(string childrenAgesShrink) { DARABONBA_PTR_SET_VALUE(childrenAgesShrink_, childrenAgesShrink) };


    // itemOfferKey Field Functions 
    bool hasItemOfferKey() const { return this->itemOfferKey_ != nullptr;};
    void deleteItemOfferKey() { this->itemOfferKey_ = nullptr;};
    inline string getItemOfferKey() const { DARABONBA_PTR_GET_DEFAULT(itemOfferKey_, "") };
    inline GlobalHotelValidatePriceShrinkRequest& setItemOfferKey(string itemOfferKey) { DARABONBA_PTR_SET_VALUE(itemOfferKey_, itemOfferKey) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline GlobalHotelValidatePriceShrinkRequest& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline GlobalHotelValidatePriceShrinkRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // The distributor account ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // The number of adults per room.
    // 
    // This parameter is required.
    shared_ptr<int32_t> adults_ {};
    // The number of children per room.
    shared_ptr<int32_t> children_ {};
    // The list of children ages.
    shared_ptr<string> childrenAgesShrink_ {};
    // The offer key.
    // 
    // This parameter is required.
    shared_ptr<string> itemOfferKey_ {};
    // The number of rooms.
    // 
    // This parameter is required.
    shared_ptr<int32_t> roomCount_ {};
    // TracerId
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
