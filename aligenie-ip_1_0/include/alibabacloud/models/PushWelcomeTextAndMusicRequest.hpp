// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUSHWELCOMETEXTANDMUSICREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUSHWELCOMETEXTANDMUSICREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class PushWelcomeTextAndMusicRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PushWelcomeTextAndMusicRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomName, roomName_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_TO_JSON(TemplateVariable, templateVariable_);
    };
    friend void from_json(const Darabonba::Json& j, PushWelcomeTextAndMusicRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomName, roomName_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_FROM_JSON(TemplateVariable, templateVariable_);
    };
    PushWelcomeTextAndMusicRequest() = default ;
    PushWelcomeTextAndMusicRequest(const PushWelcomeTextAndMusicRequest &) = default ;
    PushWelcomeTextAndMusicRequest(PushWelcomeTextAndMusicRequest &&) = default ;
    PushWelcomeTextAndMusicRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PushWelcomeTextAndMusicRequest() = default ;
    PushWelcomeTextAndMusicRequest& operator=(const PushWelcomeTextAndMusicRequest &) = default ;
    PushWelcomeTextAndMusicRequest& operator=(PushWelcomeTextAndMusicRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomName_ == nullptr && this->roomNo_ == nullptr && this->templateVariable_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline PushWelcomeTextAndMusicRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomName Field Functions 
    bool hasRoomName() const { return this->roomName_ != nullptr;};
    void deleteRoomName() { this->roomName_ = nullptr;};
    inline string getRoomName() const { DARABONBA_PTR_GET_DEFAULT(roomName_, "") };
    inline PushWelcomeTextAndMusicRequest& setRoomName(string roomName) { DARABONBA_PTR_SET_VALUE(roomName_, roomName) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline PushWelcomeTextAndMusicRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // templateVariable Field Functions 
    bool hasTemplateVariable() const { return this->templateVariable_ != nullptr;};
    void deleteTemplateVariable() { this->templateVariable_ = nullptr;};
    inline const map<string, string> & getTemplateVariable() const { DARABONBA_PTR_GET_CONST(templateVariable_, map<string, string>) };
    inline map<string, string> getTemplateVariable() { DARABONBA_PTR_GET(templateVariable_, map<string, string>) };
    inline PushWelcomeTextAndMusicRequest& setTemplateVariable(const map<string, string> & templateVariable) { DARABONBA_PTR_SET_VALUE(templateVariable_, templateVariable) };
    inline PushWelcomeTextAndMusicRequest& setTemplateVariable(map<string, string> && templateVariable) { DARABONBA_PTR_SET_RVALUE(templateVariable_, templateVariable) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    shared_ptr<string> roomName_ {};
    shared_ptr<string> roomNo_ {};
    shared_ptr<map<string, string>> templateVariable_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
