// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTROOMCONTROLDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTROOMCONTROLDEVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class ImportRoomControlDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportRoomControlDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableInfraredDeviceImport, enableInfraredDeviceImport_);
      DARABONBA_PTR_TO_JSON(EnableMeshDeviceImport, enableMeshDeviceImport_);
      DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
      DARABONBA_PTR_TO_JSON(LocationDevices, locationDevices_);
      DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
    };
    friend void from_json(const Darabonba::Json& j, ImportRoomControlDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableInfraredDeviceImport, enableInfraredDeviceImport_);
      DARABONBA_PTR_FROM_JSON(EnableMeshDeviceImport, enableMeshDeviceImport_);
      DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
      DARABONBA_PTR_FROM_JSON(LocationDevices, locationDevices_);
      DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
    };
    ImportRoomControlDevicesRequest() = default ;
    ImportRoomControlDevicesRequest(const ImportRoomControlDevicesRequest &) = default ;
    ImportRoomControlDevicesRequest(ImportRoomControlDevicesRequest &&) = default ;
    ImportRoomControlDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportRoomControlDevicesRequest() = default ;
    ImportRoomControlDevicesRequest& operator=(const ImportRoomControlDevicesRequest &) = default ;
    ImportRoomControlDevicesRequest& operator=(ImportRoomControlDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LocationDevices : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LocationDevices& obj) { 
        DARABONBA_PTR_TO_JSON(Devices, devices_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(LocationName, locationName_);
      };
      friend void from_json(const Darabonba::Json& j, LocationDevices& obj) { 
        DARABONBA_PTR_FROM_JSON(Devices, devices_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
      };
      LocationDevices() = default ;
      LocationDevices(const LocationDevices &) = default ;
      LocationDevices(LocationDevices &&) = default ;
      LocationDevices(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LocationDevices() = default ;
      LocationDevices& operator=(const LocationDevices &) = default ;
      LocationDevices& operator=(LocationDevices &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Devices : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Devices& obj) { 
          DARABONBA_PTR_TO_JSON(AliasList, aliasList_);
          DARABONBA_PTR_TO_JSON(Brand, brand_);
          DARABONBA_PTR_TO_JSON(City, city_);
          DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
          DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_TO_JSON(Dn, dn_);
          DARABONBA_PTR_TO_JSON(InfraredId, infraredId_);
          DARABONBA_PTR_TO_JSON(InfraredIndex, infraredIndex_);
          DARABONBA_PTR_TO_JSON(InfraredVersion, infraredVersion_);
          DARABONBA_PTR_TO_JSON(MultiKeySwitchExt, multiKeySwitchExt_);
          DARABONBA_PTR_TO_JSON(Name, name_);
          DARABONBA_PTR_TO_JSON(Number, number_);
          DARABONBA_PTR_TO_JSON(Pk, pk_);
          DARABONBA_PTR_TO_JSON(Province, province_);
          DARABONBA_PTR_TO_JSON(ServiceProvider, serviceProvider_);
        };
        friend void from_json(const Darabonba::Json& j, Devices& obj) { 
          DARABONBA_PTR_FROM_JSON(AliasList, aliasList_);
          DARABONBA_PTR_FROM_JSON(Brand, brand_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
          DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(Dn, dn_);
          DARABONBA_PTR_FROM_JSON(InfraredId, infraredId_);
          DARABONBA_PTR_FROM_JSON(InfraredIndex, infraredIndex_);
          DARABONBA_PTR_FROM_JSON(InfraredVersion, infraredVersion_);
          DARABONBA_PTR_FROM_JSON(MultiKeySwitchExt, multiKeySwitchExt_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
          DARABONBA_PTR_FROM_JSON(Number, number_);
          DARABONBA_PTR_FROM_JSON(Pk, pk_);
          DARABONBA_PTR_FROM_JSON(Province, province_);
          DARABONBA_PTR_FROM_JSON(ServiceProvider, serviceProvider_);
        };
        Devices() = default ;
        Devices(const Devices &) = default ;
        Devices(Devices &&) = default ;
        Devices(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Devices() = default ;
        Devices& operator=(const Devices &) = default ;
        Devices& operator=(Devices &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MultiKeySwitchExt : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MultiKeySwitchExt& obj) { 
            DARABONBA_PTR_TO_JSON(SwitchList, switchList_);
          };
          friend void from_json(const Darabonba::Json& j, MultiKeySwitchExt& obj) { 
            DARABONBA_PTR_FROM_JSON(SwitchList, switchList_);
          };
          MultiKeySwitchExt() = default ;
          MultiKeySwitchExt(const MultiKeySwitchExt &) = default ;
          MultiKeySwitchExt(MultiKeySwitchExt &&) = default ;
          MultiKeySwitchExt(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MultiKeySwitchExt() = default ;
          MultiKeySwitchExt& operator=(const MultiKeySwitchExt &) = default ;
          MultiKeySwitchExt& operator=(MultiKeySwitchExt &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class SwitchList : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const SwitchList& obj) { 
              DARABONBA_PTR_TO_JSON(AliasList, aliasList_);
              DARABONBA_PTR_TO_JSON(Category, category_);
              DARABONBA_PTR_TO_JSON(DeviceIndex, deviceIndex_);
              DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
              DARABONBA_PTR_TO_JSON(Location, location_);
            };
            friend void from_json(const Darabonba::Json& j, SwitchList& obj) { 
              DARABONBA_PTR_FROM_JSON(AliasList, aliasList_);
              DARABONBA_PTR_FROM_JSON(Category, category_);
              DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
              DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
              DARABONBA_PTR_FROM_JSON(Location, location_);
            };
            SwitchList() = default ;
            SwitchList(const SwitchList &) = default ;
            SwitchList(SwitchList &&) = default ;
            SwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~SwitchList() = default ;
            SwitchList& operator=(const SwitchList &) = default ;
            SwitchList& operator=(SwitchList &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->aliasList_ == nullptr
        && this->category_ == nullptr && this->deviceIndex_ == nullptr && this->deviceName_ == nullptr && this->location_ == nullptr; };
            // aliasList Field Functions 
            bool hasAliasList() const { return this->aliasList_ != nullptr;};
            void deleteAliasList() { this->aliasList_ = nullptr;};
            inline const vector<string> & getAliasList() const { DARABONBA_PTR_GET_CONST(aliasList_, vector<string>) };
            inline vector<string> getAliasList() { DARABONBA_PTR_GET(aliasList_, vector<string>) };
            inline SwitchList& setAliasList(const vector<string> & aliasList) { DARABONBA_PTR_SET_VALUE(aliasList_, aliasList) };
            inline SwitchList& setAliasList(vector<string> && aliasList) { DARABONBA_PTR_SET_RVALUE(aliasList_, aliasList) };


            // category Field Functions 
            bool hasCategory() const { return this->category_ != nullptr;};
            void deleteCategory() { this->category_ = nullptr;};
            inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
            inline SwitchList& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


            // deviceIndex Field Functions 
            bool hasDeviceIndex() const { return this->deviceIndex_ != nullptr;};
            void deleteDeviceIndex() { this->deviceIndex_ = nullptr;};
            inline int32_t getDeviceIndex() const { DARABONBA_PTR_GET_DEFAULT(deviceIndex_, 0) };
            inline SwitchList& setDeviceIndex(int32_t deviceIndex) { DARABONBA_PTR_SET_VALUE(deviceIndex_, deviceIndex) };


            // deviceName Field Functions 
            bool hasDeviceName() const { return this->deviceName_ != nullptr;};
            void deleteDeviceName() { this->deviceName_ = nullptr;};
            inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
            inline SwitchList& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


            // location Field Functions 
            bool hasLocation() const { return this->location_ != nullptr;};
            void deleteLocation() { this->location_ = nullptr;};
            inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
            inline SwitchList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          protected:
            shared_ptr<vector<string>> aliasList_ {};
            shared_ptr<string> category_ {};
            shared_ptr<int32_t> deviceIndex_ {};
            shared_ptr<string> deviceName_ {};
            shared_ptr<string> location_ {};
          };

          virtual bool empty() const override { return this->switchList_ == nullptr; };
          // switchList Field Functions 
          bool hasSwitchList() const { return this->switchList_ != nullptr;};
          void deleteSwitchList() { this->switchList_ = nullptr;};
          inline const vector<MultiKeySwitchExt::SwitchList> & getSwitchList() const { DARABONBA_PTR_GET_CONST(switchList_, vector<MultiKeySwitchExt::SwitchList>) };
          inline vector<MultiKeySwitchExt::SwitchList> getSwitchList() { DARABONBA_PTR_GET(switchList_, vector<MultiKeySwitchExt::SwitchList>) };
          inline MultiKeySwitchExt& setSwitchList(const vector<MultiKeySwitchExt::SwitchList> & switchList) { DARABONBA_PTR_SET_VALUE(switchList_, switchList) };
          inline MultiKeySwitchExt& setSwitchList(vector<MultiKeySwitchExt::SwitchList> && switchList) { DARABONBA_PTR_SET_RVALUE(switchList_, switchList) };


        protected:
          shared_ptr<vector<MultiKeySwitchExt::SwitchList>> switchList_ {};
        };

        virtual bool empty() const override { return this->aliasList_ == nullptr
        && this->brand_ == nullptr && this->city_ == nullptr && this->connectType_ == nullptr && this->deviceName_ == nullptr && this->dn_ == nullptr
        && this->infraredId_ == nullptr && this->infraredIndex_ == nullptr && this->infraredVersion_ == nullptr && this->multiKeySwitchExt_ == nullptr && this->name_ == nullptr
        && this->number_ == nullptr && this->pk_ == nullptr && this->province_ == nullptr && this->serviceProvider_ == nullptr; };
        // aliasList Field Functions 
        bool hasAliasList() const { return this->aliasList_ != nullptr;};
        void deleteAliasList() { this->aliasList_ = nullptr;};
        inline const vector<string> & getAliasList() const { DARABONBA_PTR_GET_CONST(aliasList_, vector<string>) };
        inline vector<string> getAliasList() { DARABONBA_PTR_GET(aliasList_, vector<string>) };
        inline Devices& setAliasList(const vector<string> & aliasList) { DARABONBA_PTR_SET_VALUE(aliasList_, aliasList) };
        inline Devices& setAliasList(vector<string> && aliasList) { DARABONBA_PTR_SET_RVALUE(aliasList_, aliasList) };


        // brand Field Functions 
        bool hasBrand() const { return this->brand_ != nullptr;};
        void deleteBrand() { this->brand_ = nullptr;};
        inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
        inline Devices& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


        // city Field Functions 
        bool hasCity() const { return this->city_ != nullptr;};
        void deleteCity() { this->city_ = nullptr;};
        inline string getCity() const { DARABONBA_PTR_GET_DEFAULT(city_, "") };
        inline Devices& setCity(string city) { DARABONBA_PTR_SET_VALUE(city_, city) };


        // connectType Field Functions 
        bool hasConnectType() const { return this->connectType_ != nullptr;};
        void deleteConnectType() { this->connectType_ = nullptr;};
        inline string getConnectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
        inline Devices& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


        // deviceName Field Functions 
        bool hasDeviceName() const { return this->deviceName_ != nullptr;};
        void deleteDeviceName() { this->deviceName_ = nullptr;};
        inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
        inline Devices& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


        // dn Field Functions 
        bool hasDn() const { return this->dn_ != nullptr;};
        void deleteDn() { this->dn_ = nullptr;};
        inline string getDn() const { DARABONBA_PTR_GET_DEFAULT(dn_, "") };
        inline Devices& setDn(string dn) { DARABONBA_PTR_SET_VALUE(dn_, dn) };


        // infraredId Field Functions 
        bool hasInfraredId() const { return this->infraredId_ != nullptr;};
        void deleteInfraredId() { this->infraredId_ = nullptr;};
        inline string getInfraredId() const { DARABONBA_PTR_GET_DEFAULT(infraredId_, "") };
        inline Devices& setInfraredId(string infraredId) { DARABONBA_PTR_SET_VALUE(infraredId_, infraredId) };


        // infraredIndex Field Functions 
        bool hasInfraredIndex() const { return this->infraredIndex_ != nullptr;};
        void deleteInfraredIndex() { this->infraredIndex_ = nullptr;};
        inline string getInfraredIndex() const { DARABONBA_PTR_GET_DEFAULT(infraredIndex_, "") };
        inline Devices& setInfraredIndex(string infraredIndex) { DARABONBA_PTR_SET_VALUE(infraredIndex_, infraredIndex) };


        // infraredVersion Field Functions 
        bool hasInfraredVersion() const { return this->infraredVersion_ != nullptr;};
        void deleteInfraredVersion() { this->infraredVersion_ = nullptr;};
        inline string getInfraredVersion() const { DARABONBA_PTR_GET_DEFAULT(infraredVersion_, "") };
        inline Devices& setInfraredVersion(string infraredVersion) { DARABONBA_PTR_SET_VALUE(infraredVersion_, infraredVersion) };


        // multiKeySwitchExt Field Functions 
        bool hasMultiKeySwitchExt() const { return this->multiKeySwitchExt_ != nullptr;};
        void deleteMultiKeySwitchExt() { this->multiKeySwitchExt_ = nullptr;};
        inline const Devices::MultiKeySwitchExt & getMultiKeySwitchExt() const { DARABONBA_PTR_GET_CONST(multiKeySwitchExt_, Devices::MultiKeySwitchExt) };
        inline Devices::MultiKeySwitchExt getMultiKeySwitchExt() { DARABONBA_PTR_GET(multiKeySwitchExt_, Devices::MultiKeySwitchExt) };
        inline Devices& setMultiKeySwitchExt(const Devices::MultiKeySwitchExt & multiKeySwitchExt) { DARABONBA_PTR_SET_VALUE(multiKeySwitchExt_, multiKeySwitchExt) };
        inline Devices& setMultiKeySwitchExt(Devices::MultiKeySwitchExt && multiKeySwitchExt) { DARABONBA_PTR_SET_RVALUE(multiKeySwitchExt_, multiKeySwitchExt) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Devices& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // number Field Functions 
        bool hasNumber() const { return this->number_ != nullptr;};
        void deleteNumber() { this->number_ = nullptr;};
        inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
        inline Devices& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


        // pk Field Functions 
        bool hasPk() const { return this->pk_ != nullptr;};
        void deletePk() { this->pk_ = nullptr;};
        inline string getPk() const { DARABONBA_PTR_GET_DEFAULT(pk_, "") };
        inline Devices& setPk(string pk) { DARABONBA_PTR_SET_VALUE(pk_, pk) };


        // province Field Functions 
        bool hasProvince() const { return this->province_ != nullptr;};
        void deleteProvince() { this->province_ = nullptr;};
        inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
        inline Devices& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


        // serviceProvider Field Functions 
        bool hasServiceProvider() const { return this->serviceProvider_ != nullptr;};
        void deleteServiceProvider() { this->serviceProvider_ = nullptr;};
        inline string getServiceProvider() const { DARABONBA_PTR_GET_DEFAULT(serviceProvider_, "") };
        inline Devices& setServiceProvider(string serviceProvider) { DARABONBA_PTR_SET_VALUE(serviceProvider_, serviceProvider) };


      protected:
        shared_ptr<vector<string>> aliasList_ {};
        shared_ptr<string> brand_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> connectType_ {};
        // This parameter is required.
        shared_ptr<string> deviceName_ {};
        shared_ptr<string> dn_ {};
        shared_ptr<string> infraredId_ {};
        shared_ptr<string> infraredIndex_ {};
        shared_ptr<string> infraredVersion_ {};
        shared_ptr<Devices::MultiKeySwitchExt> multiKeySwitchExt_ {};
        // This parameter is required.
        shared_ptr<string> name_ {};
        shared_ptr<string> number_ {};
        shared_ptr<string> pk_ {};
        shared_ptr<string> province_ {};
        shared_ptr<string> serviceProvider_ {};
      };

      virtual bool empty() const override { return this->devices_ == nullptr
        && this->location_ == nullptr && this->locationName_ == nullptr; };
      // devices Field Functions 
      bool hasDevices() const { return this->devices_ != nullptr;};
      void deleteDevices() { this->devices_ = nullptr;};
      inline const vector<LocationDevices::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<LocationDevices::Devices>) };
      inline vector<LocationDevices::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<LocationDevices::Devices>) };
      inline LocationDevices& setDevices(const vector<LocationDevices::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
      inline LocationDevices& setDevices(vector<LocationDevices::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline LocationDevices& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // locationName Field Functions 
      bool hasLocationName() const { return this->locationName_ != nullptr;};
      void deleteLocationName() { this->locationName_ = nullptr;};
      inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
      inline LocationDevices& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


    protected:
      shared_ptr<vector<LocationDevices::Devices>> devices_ {};
      // This parameter is required.
      shared_ptr<string> location_ {};
      shared_ptr<string> locationName_ {};
    };

    virtual bool empty() const override { return this->enableInfraredDeviceImport_ == nullptr
        && this->enableMeshDeviceImport_ == nullptr && this->hotelId_ == nullptr && this->locationDevices_ == nullptr && this->roomNo_ == nullptr; };
    // enableInfraredDeviceImport Field Functions 
    bool hasEnableInfraredDeviceImport() const { return this->enableInfraredDeviceImport_ != nullptr;};
    void deleteEnableInfraredDeviceImport() { this->enableInfraredDeviceImport_ = nullptr;};
    inline string getEnableInfraredDeviceImport() const { DARABONBA_PTR_GET_DEFAULT(enableInfraredDeviceImport_, "") };
    inline ImportRoomControlDevicesRequest& setEnableInfraredDeviceImport(string enableInfraredDeviceImport) { DARABONBA_PTR_SET_VALUE(enableInfraredDeviceImport_, enableInfraredDeviceImport) };


    // enableMeshDeviceImport Field Functions 
    bool hasEnableMeshDeviceImport() const { return this->enableMeshDeviceImport_ != nullptr;};
    void deleteEnableMeshDeviceImport() { this->enableMeshDeviceImport_ = nullptr;};
    inline string getEnableMeshDeviceImport() const { DARABONBA_PTR_GET_DEFAULT(enableMeshDeviceImport_, "") };
    inline ImportRoomControlDevicesRequest& setEnableMeshDeviceImport(string enableMeshDeviceImport) { DARABONBA_PTR_SET_VALUE(enableMeshDeviceImport_, enableMeshDeviceImport) };


    // hotelId Field Functions 
    bool hasHotelId() const { return this->hotelId_ != nullptr;};
    void deleteHotelId() { this->hotelId_ = nullptr;};
    inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
    inline ImportRoomControlDevicesRequest& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


    // locationDevices Field Functions 
    bool hasLocationDevices() const { return this->locationDevices_ != nullptr;};
    void deleteLocationDevices() { this->locationDevices_ = nullptr;};
    inline const vector<ImportRoomControlDevicesRequest::LocationDevices> & getLocationDevices() const { DARABONBA_PTR_GET_CONST(locationDevices_, vector<ImportRoomControlDevicesRequest::LocationDevices>) };
    inline vector<ImportRoomControlDevicesRequest::LocationDevices> getLocationDevices() { DARABONBA_PTR_GET(locationDevices_, vector<ImportRoomControlDevicesRequest::LocationDevices>) };
    inline ImportRoomControlDevicesRequest& setLocationDevices(const vector<ImportRoomControlDevicesRequest::LocationDevices> & locationDevices) { DARABONBA_PTR_SET_VALUE(locationDevices_, locationDevices) };
    inline ImportRoomControlDevicesRequest& setLocationDevices(vector<ImportRoomControlDevicesRequest::LocationDevices> && locationDevices) { DARABONBA_PTR_SET_RVALUE(locationDevices_, locationDevices) };


    // roomNo Field Functions 
    bool hasRoomNo() const { return this->roomNo_ != nullptr;};
    void deleteRoomNo() { this->roomNo_ = nullptr;};
    inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
    inline ImportRoomControlDevicesRequest& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


  protected:
    shared_ptr<string> enableInfraredDeviceImport_ {};
    shared_ptr<string> enableMeshDeviceImport_ {};
    // This parameter is required.
    shared_ptr<string> hotelId_ {};
    // This parameter is required.
    shared_ptr<vector<ImportRoomControlDevicesRequest::LocationDevices>> locationDevices_ {};
    // This parameter is required.
    shared_ptr<string> roomNo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
