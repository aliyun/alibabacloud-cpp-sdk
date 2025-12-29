// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHWELCOMETEXTANDMUSICSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHWELCOMETEXTANDMUSICSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class PushWelcomeTextAndMusicShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushWelcomeTextAndMusicShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_TO_JSON(TemplateVariable, templateVariableShrink_);
    };
    friend void from_json(const Darabonba::Json& j, PushWelcomeTextAndMusicShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_FROM_JSON(TemplateVariable, templateVariableShrink_);
    };
    PushWelcomeTextAndMusicShrinkRequest() = default ;
    PushWelcomeTextAndMusicShrinkRequest(const PushWelcomeTextAndMusicShrinkRequest &) = default ;
    PushWelcomeTextAndMusicShrinkRequest(PushWelcomeTextAndMusicShrinkRequest &&) = default ;
    PushWelcomeTextAndMusicShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushWelcomeTextAndMusicShrinkRequest() = default ;
    PushWelcomeTextAndMusicShrinkRequest& operator=(const PushWelcomeTextAndMusicShrinkRequest &) = default ;
    PushWelcomeTextAndMusicShrinkRequest& operator=(PushWelcomeTextAndMusicShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomName_ == nullptr && this->roomNo_ == nullptr && this->templateVariableShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline PushWelcomeTextAndMusicShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline PushWelcomeTextAndMusicShrinkRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline PushWelcomeTextAndMusicShrinkRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // templateVariableShrink Field Functions 
    bool hasTemplateVariableShrink() const { return this->templateVariableShrink_ != nullptr;};
    void deleteTemplateVariableShrink() { this->templateVariableShrink_ = nullptr;};
    inline string getTemplateVariableShrink() const { DARABONBA_PTR_GET_DEFAULT(templateVariableShrink_, "") };
    inline PushWelcomeTextAndMusicShrinkRequest& setTemplateVariableShrink(string templateVariableShrink) { DARABONBA_PTR_SET_VALUE(templateVariableShrink_, templateVariableShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> roomName_ {};
    shared_ptr<string> roomNo_ {};
    shared_ptr<string> templateVariableShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
