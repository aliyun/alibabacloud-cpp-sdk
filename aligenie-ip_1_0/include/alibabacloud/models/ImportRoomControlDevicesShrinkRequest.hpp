// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTROOMCONTROLDEVICESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTROOMCONTROLDEVICESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ImportRoomControlDevicesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportRoomControlDevicesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableInfraredDeviceImport, enableInfraredDeviceImport_);
      DARABONBA_PTR_TO_JSON(EnableMeshDeviceImport, enableMeshDeviceImport_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(LocationDevices, locationDevicesShrink_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, ImportRoomControlDevicesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableInfraredDeviceImport, enableInfraredDeviceImport_);
      DARABONBA_PTR_FROM_JSON(EnableMeshDeviceImport, enableMeshDeviceImport_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(LocationDevices, locationDevicesShrink_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
    };
    ImportRoomControlDevicesShrinkRequest() = default ;
    ImportRoomControlDevicesShrinkRequest(const ImportRoomControlDevicesShrinkRequest &) = default ;
    ImportRoomControlDevicesShrinkRequest(ImportRoomControlDevicesShrinkRequest &&) = default ;
    ImportRoomControlDevicesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportRoomControlDevicesShrinkRequest() = default ;
    ImportRoomControlDevicesShrinkRequest& operator=(const ImportRoomControlDevicesShrinkRequest &) = default ;
    ImportRoomControlDevicesShrinkRequest& operator=(ImportRoomControlDevicesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableInfraredDeviceImport_ == nullptr
        && this->enableMeshDeviceImport_ == nullptr && this->hotelId_ == nullptr && this->locationDevicesShrink_ == nullptr && this->roomNo_ == nullptr; };
    // enableInfraredDeviceImport Field Functions 
    bool hasEnableInfraredDeviceImport() const { return this->enableInfraredDeviceImport_ != nullptr;};
    void deleteEnableInfraredDeviceImport() { this->enableInfraredDeviceImport_ = nullptr;};
    inline string getEnableInfraredDeviceImport() const { DARABONBA_PTR_GET_DEFAULT(enableInfraredDeviceImport_, "") };
    inline ImportRoomControlDevicesShrinkRequest& setEnableInfraredDeviceImport(string enableInfraredDeviceImport) { DARABONBA_PTR_SET_VALUE(enableInfraredDeviceImport_, enableInfraredDeviceImport) };


    // enableMeshDeviceImport Field Functions 
    bool hasEnableMeshDeviceImport() const { return this->enableMeshDeviceImport_ != nullptr;};
    void deleteEnableMeshDeviceImport() { this->enableMeshDeviceImport_ = nullptr;};
    inline string getEnableMeshDeviceImport() const { DARABONBA_PTR_GET_DEFAULT(enableMeshDeviceImport_, "") };
    inline ImportRoomControlDevicesShrinkRequest& setEnableMeshDeviceImport(string enableMeshDeviceImport) { DARABONBA_PTR_SET_VALUE(enableMeshDeviceImport_, enableMeshDeviceImport) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ImportRoomControlDevicesShrinkRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // locationDevicesShrink Field Functions 
    bool hasLocationDevicesShrink() const { return this->locationDevicesShrink_ != nullptr;};
    void deleteLocationDevicesShrink() { this->locationDevicesShrink_ = nullptr;};
    inline string getLocationDevicesShrink() const { DARABONBA_PTR_GET_DEFAULT(locationDevicesShrink_, "") };
    inline ImportRoomControlDevicesShrinkRequest& setLocationDevicesShrink(string locationDevicesShrink) { DARABONBA_PTR_SET_VALUE(locationDevicesShrink_, locationDevicesShrink) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline ImportRoomControlDevicesShrinkRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    shared_ptr<string> enableInfraredDeviceImport_ {};
    shared_ptr<string> enableMeshDeviceImport_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<string> locationDevicesShrink_ {};
    // This parameter is required.
    shared_ptr<string> roomNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
