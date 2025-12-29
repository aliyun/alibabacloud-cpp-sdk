// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYROOMCONTROLDEVICESANDSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYROOMCONTROLDEVICESANDSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieip_1_0
{
namespace Models
{
  class QueryRoomControlDevicesAndStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryRoomControlDevicesAndStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryRoomControlDevicesAndStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    QueryRoomControlDevicesAndStatusResponseBody() = default ;
    QueryRoomControlDevicesAndStatusResponseBody(const QueryRoomControlDevicesAndStatusResponseBody &) = default ;
    QueryRoomControlDevicesAndStatusResponseBody(QueryRoomControlDevicesAndStatusResponseBody &&) = default ;
    QueryRoomControlDevicesAndStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryRoomControlDevicesAndStatusResponseBody() = default ;
    QueryRoomControlDevicesAndStatusResponseBody& operator=(const QueryRoomControlDevicesAndStatusResponseBody &) = default ;
    QueryRoomControlDevicesAndStatusResponseBody& operator=(QueryRoomControlDevicesAndStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Devices, devices_);
        DARABONBA_PTR_TO_JSON(Location, location_);
        DARABONBA_PTR_TO_JSON(LocationName, locationName_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Devices, devices_);
        DARABONBA_PTR_FROM_JSON(Location, location_);
        DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
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
          DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
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
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, Devices& obj) { 
          DARABONBA_PTR_FROM_JSON(AliasList, aliasList_);
          DARABONBA_PTR_FROM_JSON(Brand, brand_);
          DARABONBA_PTR_FROM_JSON(City, city_);
          DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
          DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
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
          DARABONBA_PTR_FROM_JSON(Status, status_);
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
              DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
              DARABONBA_PTR_TO_JSON(ElementCode, elementCode_);
              DARABONBA_PTR_TO_JSON(Location, location_);
              DARABONBA_PTR_TO_JSON(Status, status_);
              DARABONBA_PTR_TO_JSON(Tags, tags_);
            };
            friend void from_json(const Darabonba::Json& j, SwitchList& obj) { 
              DARABONBA_PTR_FROM_JSON(AliasList, aliasList_);
              DARABONBA_PTR_FROM_JSON(Category, category_);
              DARABONBA_PTR_FROM_JSON(DeviceIndex, deviceIndex_);
              DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
              DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
              DARABONBA_PTR_FROM_JSON(ElementCode, elementCode_);
              DARABONBA_PTR_FROM_JSON(Location, location_);
              DARABONBA_PTR_FROM_JSON(Status, status_);
              DARABONBA_PTR_FROM_JSON(Tags, tags_);
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
        && this->category_ == nullptr && this->deviceIndex_ == nullptr && this->deviceName_ == nullptr && this->deviceStatus_ == nullptr && this->elementCode_ == nullptr
        && this->location_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr; };
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


            // deviceStatus Field Functions 
            bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
            void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
            inline string getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
            inline SwitchList& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


            // elementCode Field Functions 
            bool hasElementCode() const { return this->elementCode_ != nullptr;};
            void deleteElementCode() { this->elementCode_ = nullptr;};
            inline string getElementCode() const { DARABONBA_PTR_GET_DEFAULT(elementCode_, "") };
            inline SwitchList& setElementCode(string elementCode) { DARABONBA_PTR_SET_VALUE(elementCode_, elementCode) };


            // location Field Functions 
            bool hasLocation() const { return this->location_ != nullptr;};
            void deleteLocation() { this->location_ = nullptr;};
            inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
            inline SwitchList& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


            // status Field Functions 
            bool hasStatus() const { return this->status_ != nullptr;};
            void deleteStatus() { this->status_ = nullptr;};
            inline const map<string, string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, map<string, string>) };
            inline map<string, string> getStatus() { DARABONBA_PTR_GET(status_, map<string, string>) };
            inline SwitchList& setStatus(const map<string, string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
            inline SwitchList& setStatus(map<string, string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


            // tags Field Functions 
            bool hasTags() const { return this->tags_ != nullptr;};
            void deleteTags() { this->tags_ = nullptr;};
            inline const vector<string> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<string>) };
            inline vector<string> getTags() { DARABONBA_PTR_GET(tags_, vector<string>) };
            inline SwitchList& setTags(const vector<string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
            inline SwitchList& setTags(vector<string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


          protected:
            shared_ptr<vector<string>> aliasList_ {};
            shared_ptr<string> category_ {};
            shared_ptr<int32_t> deviceIndex_ {};
            shared_ptr<string> deviceName_ {};
            shared_ptr<string> deviceStatus_ {};
            shared_ptr<string> elementCode_ {};
            shared_ptr<string> location_ {};
            shared_ptr<map<string, string>> status_ {};
            shared_ptr<vector<string>> tags_ {};
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
        && this->brand_ == nullptr && this->city_ == nullptr && this->connectType_ == nullptr && this->deviceName_ == nullptr && this->deviceStatus_ == nullptr
        && this->dn_ == nullptr && this->infraredId_ == nullptr && this->infraredIndex_ == nullptr && this->infraredVersion_ == nullptr && this->multiKeySwitchExt_ == nullptr
        && this->name_ == nullptr && this->number_ == nullptr && this->pk_ == nullptr && this->province_ == nullptr && this->serviceProvider_ == nullptr
        && this->status_ == nullptr; };
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


        // deviceStatus Field Functions 
        bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
        void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
        inline string getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
        inline Devices& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


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


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline const map<string, string> & getStatus() const { DARABONBA_PTR_GET_CONST(status_, map<string, string>) };
        inline map<string, string> getStatus() { DARABONBA_PTR_GET(status_, map<string, string>) };
        inline Devices& setStatus(const map<string, string> & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
        inline Devices& setStatus(map<string, string> && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


      protected:
        shared_ptr<vector<string>> aliasList_ {};
        shared_ptr<string> brand_ {};
        shared_ptr<string> city_ {};
        shared_ptr<string> connectType_ {};
        shared_ptr<string> deviceName_ {};
        shared_ptr<string> deviceStatus_ {};
        shared_ptr<string> dn_ {};
        shared_ptr<string> infraredId_ {};
        shared_ptr<string> infraredIndex_ {};
        shared_ptr<string> infraredVersion_ {};
        shared_ptr<Devices::MultiKeySwitchExt> multiKeySwitchExt_ {};
        shared_ptr<string> name_ {};
        shared_ptr<string> number_ {};
        shared_ptr<string> pk_ {};
        shared_ptr<string> province_ {};
        shared_ptr<string> serviceProvider_ {};
        shared_ptr<map<string, string>> status_ {};
      };

      virtual bool empty() const override { return this->devices_ == nullptr
        && this->location_ == nullptr && this->locationName_ == nullptr && this->roomNo_ == nullptr; };
      // devices Field Functions 
      bool hasDevices() const { return this->devices_ != nullptr;};
      void deleteDevices() { this->devices_ = nullptr;};
      inline const vector<Result::Devices> & getDevices() const { DARABONBA_PTR_GET_CONST(devices_, vector<Result::Devices>) };
      inline vector<Result::Devices> getDevices() { DARABONBA_PTR_GET(devices_, vector<Result::Devices>) };
      inline Result& setDevices(const vector<Result::Devices> & devices) { DARABONBA_PTR_SET_VALUE(devices_, devices) };
      inline Result& setDevices(vector<Result::Devices> && devices) { DARABONBA_PTR_SET_RVALUE(devices_, devices) };


      // location Field Functions 
      bool hasLocation() const { return this->location_ != nullptr;};
      void deleteLocation() { this->location_ = nullptr;};
      inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
      inline Result& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


      // locationName Field Functions 
      bool hasLocationName() const { return this->locationName_ != nullptr;};
      void deleteLocationName() { this->locationName_ = nullptr;};
      inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
      inline Result& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Result& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


    protected:
      shared_ptr<vector<Result::Devices>> devices_ {};
      shared_ptr<string> location_ {};
      shared_ptr<string> locationName_ {};
      shared_ptr<string> roomNo_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline QueryRoomControlDevicesAndStatusResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryRoomControlDevicesAndStatusResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryRoomControlDevicesAndStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryRoomControlDevicesAndStatusResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryRoomControlDevicesAndStatusResponseBody::Result>) };
    inline vector<QueryRoomControlDevicesAndStatusResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryRoomControlDevicesAndStatusResponseBody::Result>) };
    inline QueryRoomControlDevicesAndStatusResponseBody& setResult(const vector<QueryRoomControlDevicesAndStatusResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryRoomControlDevicesAndStatusResponseBody& setResult(vector<QueryRoomControlDevicesAndStatusResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryRoomControlDevicesAndStatusResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<int32_t> code_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<QueryRoomControlDevicesAndStatusResponseBody::Result>> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
