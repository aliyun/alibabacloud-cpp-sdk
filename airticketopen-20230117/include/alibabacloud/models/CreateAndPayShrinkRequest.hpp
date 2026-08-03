// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEANDPAYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEANDPAYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class CreateAndPayShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAndPayShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_TO_JSON(Contact, contactShrink_);
      DARABONBA_PTR_TO_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_TO_JSON(Guests, guestsShrink_);
      DARABONBA_PTR_TO_JSON(ItemOfferId, itemOfferId_);
      DARABONBA_PTR_TO_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_TO_JSON(TracerId, tracerId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAndPayShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountNo, accountNo_);
      DARABONBA_PTR_FROM_JSON(Contact, contactShrink_);
      DARABONBA_PTR_FROM_JSON(ExternalOrderNo, externalOrderNo_);
      DARABONBA_PTR_FROM_JSON(Guests, guestsShrink_);
      DARABONBA_PTR_FROM_JSON(ItemOfferId, itemOfferId_);
      DARABONBA_PTR_FROM_JSON(RoomCount, roomCount_);
      DARABONBA_PTR_FROM_JSON(TracerId, tracerId_);
    };
    CreateAndPayShrinkRequest() = default ;
    CreateAndPayShrinkRequest(const CreateAndPayShrinkRequest &) = default ;
    CreateAndPayShrinkRequest(CreateAndPayShrinkRequest &&) = default ;
    CreateAndPayShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAndPayShrinkRequest() = default ;
    CreateAndPayShrinkRequest& operator=(const CreateAndPayShrinkRequest &) = default ;
    CreateAndPayShrinkRequest& operator=(CreateAndPayShrinkRequest &&) = default ;
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
    inline CreateAndPayShrinkRequest& setAccountNo(int64_t accountNo) { DARABONBA_PTR_SET_VALUE(accountNo_, accountNo) };


    // contactShrink Field Functions 
    bool hasContactShrink() const { return this->contactShrink_ != nullptr;};
    void deleteContactShrink() { this->contactShrink_ = nullptr;};
    inline string getContactShrink() const { DARABONBA_PTR_GET_DEFAULT(contactShrink_, "") };
    inline CreateAndPayShrinkRequest& setContactShrink(string contactShrink) { DARABONBA_PTR_SET_VALUE(contactShrink_, contactShrink) };


    // externalOrderNo Field Functions 
    bool hasExternalOrderNo() const { return this->externalOrderNo_ != nullptr;};
    void deleteExternalOrderNo() { this->externalOrderNo_ = nullptr;};
    inline string getExternalOrderNo() const { DARABONBA_PTR_GET_DEFAULT(externalOrderNo_, "") };
    inline CreateAndPayShrinkRequest& setExternalOrderNo(string externalOrderNo) { DARABONBA_PTR_SET_VALUE(externalOrderNo_, externalOrderNo) };


    // guestsShrink Field Functions 
    bool hasGuestsShrink() const { return this->guestsShrink_ != nullptr;};
    void deleteGuestsShrink() { this->guestsShrink_ = nullptr;};
    inline string getGuestsShrink() const { DARABONBA_PTR_GET_DEFAULT(guestsShrink_, "") };
    inline CreateAndPayShrinkRequest& setGuestsShrink(string guestsShrink) { DARABONBA_PTR_SET_VALUE(guestsShrink_, guestsShrink) };


    // itemOfferId Field Functions 
    bool hasItemOfferId() const { return this->itemOfferId_ != nullptr;};
    void deleteItemOfferId() { this->itemOfferId_ = nullptr;};
    inline string getItemOfferId() const { DARABONBA_PTR_GET_DEFAULT(itemOfferId_, "") };
    inline CreateAndPayShrinkRequest& setItemOfferId(string itemOfferId) { DARABONBA_PTR_SET_VALUE(itemOfferId_, itemOfferId) };


    // roomCount Field Functions 
    bool hasRoomCount() const { return this->roomCount_ != nullptr;};
    void deleteRoomCount() { this->roomCount_ = nullptr;};
    inline int32_t getRoomCount() const { DARABONBA_PTR_GET_DEFAULT(roomCount_, 0) };
    inline CreateAndPayShrinkRequest& setRoomCount(int32_t roomCount) { DARABONBA_PTR_SET_VALUE(roomCount_, roomCount) };


    // tracerId Field Functions 
    bool hasTracerId() const { return this->tracerId_ != nullptr;};
    void deleteTracerId() { this->tracerId_ = nullptr;};
    inline string getTracerId() const { DARABONBA_PTR_GET_DEFAULT(tracerId_, "") };
    inline CreateAndPayShrinkRequest& setTracerId(string tracerId) { DARABONBA_PTR_SET_VALUE(tracerId_, tracerId) };


  protected:
    // This parameter is required.
    shared_ptr<int64_t> accountNo_ {};
    // This parameter is required.
    shared_ptr<string> contactShrink_ {};
    shared_ptr<string> externalOrderNo_ {};
    // This parameter is required.
    shared_ptr<string> guestsShrink_ {};
    // This parameter is required.
    shared_ptr<string> itemOfferId_ {};
    // This parameter is required.
    shared_ptr<int32_t> roomCount_ {};
    shared_ptr<string> tracerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
