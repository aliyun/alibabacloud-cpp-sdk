// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTROOMGENIESCENESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTROOMGENIESCENESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ImportRoomGenieScenesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportRoomGenieScenesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_TO_JSON(SceneList, sceneListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ImportRoomGenieScenesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      DARABONBA_PTR_FROM_JSON(SceneList, sceneListShrink_);
    };
    ImportRoomGenieScenesShrinkRequest() = default ;
    ImportRoomGenieScenesShrinkRequest(const ImportRoomGenieScenesShrinkRequest &) = default ;
    ImportRoomGenieScenesShrinkRequest(ImportRoomGenieScenesShrinkRequest &&) = default ;
    ImportRoomGenieScenesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportRoomGenieScenesShrinkRequest() = default ;
    ImportRoomGenieScenesShrinkRequest& operator=(const ImportRoomGenieScenesShrinkRequest &) = default ;
    ImportRoomGenieScenesShrinkRequest& operator=(ImportRoomGenieScenesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hotelId_ == nullptr
        && this->roomNo_ == nullptr && this->sceneListShrink_ == nullptr; };
    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ImportRoomGenieScenesShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline ImportRoomGenieScenesShrinkRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    // sceneListShrink Field Functions 
    bool hasSceneListShrink() const { return this->sceneListShrink_ != nullptr;};
    void deleteSceneListShrink() { this->sceneListShrink_ = nullptr;};
    inline string getSceneListShrink() const { DARABONBA_PTR_GET_DEFAULT(sceneListShrink_, "") };
    inline ImportRoomGenieScenesShrinkRequest& setSceneListShrink(string sceneListShrink) { DARABONBA_PTR_SET_VALUE(sceneListShrink_, sceneListShrink) };


  protected:
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> roomNo_ {};
    shared_ptr<string> sceneListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
