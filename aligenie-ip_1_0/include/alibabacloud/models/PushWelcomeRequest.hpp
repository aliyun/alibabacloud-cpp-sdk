// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHWELCOMEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHWELCOMEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class PushWelcomeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushWelcomeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_TO_JSON(WelcomeMusicUrl, welcomeMusicUrl_);
      DARABONBA_PTR_TO_JSON(WelcomeText, welcomeText_);
    };
    friend void from_json(const Darabonba::Json& j, PushWelcomeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_FROM_JSON(WelcomeMusicUrl, welcomeMusicUrl_);
      DARABONBA_PTR_FROM_JSON(WelcomeText, welcomeText_);
    };
    PushWelcomeRequest() = default ;
    PushWelcomeRequest(const PushWelcomeRequest &) = default ;
    PushWelcomeRequest(PushWelcomeRequest &&) = default ;
    PushWelcomeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushWelcomeRequest() = default ;
    PushWelcomeRequest& operator=(const PushWelcomeRequest &) = default ;
    PushWelcomeRequest& operator=(PushWelcomeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomName_ == nullptr && this->roomNo_ == nullptr && this->welcomeMusicUrl_ == nullptr && this->welcomeText_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline PushWelcomeRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline PushWelcomeRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline PushWelcomeRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // welcomeMusicUrl Field Functions 
    bool hasWelcomeMusicUrl() const { return this->welcomeMusicUrl_ != nullptr;};
    void deleteWelcomeMusicUrl() { this->welcomeMusicUrl_ = nullptr;};
    inline string getWelcomeMusicUrl() const { DARABONBA_PTR_GET_DEFAULT(welcomeMusicUrl_, "") };
    inline PushWelcomeRequest& setWelcomeMusicUrl(string welcomeMusicUrl) { DARABONBA_PTR_SET_VALUE(welcomeMusicUrl_, welcomeMusicUrl) };


    // welcomeText Field Functions 
    bool hasWelcomeText() const { return this->welcomeText_ != nullptr;};
    void deleteWelcomeText() { this->welcomeText_ = nullptr;};
    inline string getWelcomeText() const { DARABONBA_PTR_GET_DEFAULT(welcomeText_, "") };
    inline PushWelcomeRequest& setWelcomeText(string welcomeText) { DARABONBA_PTR_SET_VALUE(welcomeText_, welcomeText) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> roomName_ {};
    shared_ptr<string> roomNo_ {};
    shared_ptr<string> welcomeMusicUrl_ {};
    // This parameter is required.
    shared_ptr<string> welcomeText_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
