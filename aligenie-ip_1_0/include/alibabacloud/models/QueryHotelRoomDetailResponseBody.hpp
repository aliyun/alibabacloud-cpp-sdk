// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYHOTELROOMDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYHOTELROOMDETAILRESPONSEBODY_HPP_
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
  class QueryHotelRoomDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryHotelRoomDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, QueryHotelRoomDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    QueryHotelRoomDetailResponseBody() = default ;
    QueryHotelRoomDetailResponseBody(const QueryHotelRoomDetailResponseBody &) = default ;
    QueryHotelRoomDetailResponseBody(QueryHotelRoomDetailResponseBody &&) = default ;
    QueryHotelRoomDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryHotelRoomDetailResponseBody() = default ;
    QueryHotelRoomDetailResponseBody& operator=(const QueryHotelRoomDetailResponseBody &) = default ;
    QueryHotelRoomDetailResponseBody& operator=(QueryHotelRoomDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(AuthAccounts, authAccounts_);
        DARABONBA_PTR_TO_JSON(ConnectType, connectType_);
        DARABONBA_PTR_TO_JSON(CreatorAccountName, creatorAccountName_);
        DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfos_);
        DARABONBA_PTR_TO_JSON(HotelId, hotelId_);
        DARABONBA_PTR_TO_JSON(HotelName, hotelName_);
        DARABONBA_PTR_TO_JSON(OtherService, otherService_);
        DARABONBA_PTR_TO_JSON(RoomControlInfo, roomControlInfo_);
        DARABONBA_PTR_TO_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_TO_JSON(RoomServiceInfo, roomServiceInfo_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthAccounts, authAccounts_);
        DARABONBA_PTR_FROM_JSON(ConnectType, connectType_);
        DARABONBA_PTR_FROM_JSON(CreatorAccountName, creatorAccountName_);
        DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfos_);
        DARABONBA_PTR_FROM_JSON(HotelId, hotelId_);
        DARABONBA_PTR_FROM_JSON(HotelName, hotelName_);
        DARABONBA_PTR_FROM_JSON(OtherService, otherService_);
        DARABONBA_PTR_FROM_JSON(RoomControlInfo, roomControlInfo_);
        DARABONBA_PTR_FROM_JSON(RoomNo, roomNo_);
        DARABONBA_PTR_FROM_JSON(RoomServiceInfo, roomServiceInfo_);
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
      class RoomServiceInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomServiceInfo& obj) { 
          DARABONBA_PTR_TO_JSON(BookServiceCnt, bookServiceCnt_);
          DARABONBA_PTR_TO_JSON(GoodsServiceCnt, goodsServiceCnt_);
          DARABONBA_PTR_TO_JSON(RepairServiceCnt, repairServiceCnt_);
          DARABONBA_PTR_TO_JSON(RoomServiceCnt, roomServiceCnt_);
        };
        friend void from_json(const Darabonba::Json& j, RoomServiceInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(BookServiceCnt, bookServiceCnt_);
          DARABONBA_PTR_FROM_JSON(GoodsServiceCnt, goodsServiceCnt_);
          DARABONBA_PTR_FROM_JSON(RepairServiceCnt, repairServiceCnt_);
          DARABONBA_PTR_FROM_JSON(RoomServiceCnt, roomServiceCnt_);
        };
        RoomServiceInfo() = default ;
        RoomServiceInfo(const RoomServiceInfo &) = default ;
        RoomServiceInfo(RoomServiceInfo &&) = default ;
        RoomServiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomServiceInfo() = default ;
        RoomServiceInfo& operator=(const RoomServiceInfo &) = default ;
        RoomServiceInfo& operator=(RoomServiceInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bookServiceCnt_ == nullptr
        && this->goodsServiceCnt_ == nullptr && this->repairServiceCnt_ == nullptr && this->roomServiceCnt_ == nullptr; };
        // bookServiceCnt Field Functions 
        bool hasBookServiceCnt() const { return this->bookServiceCnt_ != nullptr;};
        void deleteBookServiceCnt() { this->bookServiceCnt_ = nullptr;};
        inline int32_t getBookServiceCnt() const { DARABONBA_PTR_GET_DEFAULT(bookServiceCnt_, 0) };
        inline RoomServiceInfo& setBookServiceCnt(int32_t bookServiceCnt) { DARABONBA_PTR_SET_VALUE(bookServiceCnt_, bookServiceCnt) };


        // goodsServiceCnt Field Functions 
        bool hasGoodsServiceCnt() const { return this->goodsServiceCnt_ != nullptr;};
        void deleteGoodsServiceCnt() { this->goodsServiceCnt_ = nullptr;};
        inline int32_t getGoodsServiceCnt() const { DARABONBA_PTR_GET_DEFAULT(goodsServiceCnt_, 0) };
        inline RoomServiceInfo& setGoodsServiceCnt(int32_t goodsServiceCnt) { DARABONBA_PTR_SET_VALUE(goodsServiceCnt_, goodsServiceCnt) };


        // repairServiceCnt Field Functions 
        bool hasRepairServiceCnt() const { return this->repairServiceCnt_ != nullptr;};
        void deleteRepairServiceCnt() { this->repairServiceCnt_ = nullptr;};
        inline int32_t getRepairServiceCnt() const { DARABONBA_PTR_GET_DEFAULT(repairServiceCnt_, 0) };
        inline RoomServiceInfo& setRepairServiceCnt(int32_t repairServiceCnt) { DARABONBA_PTR_SET_VALUE(repairServiceCnt_, repairServiceCnt) };


        // roomServiceCnt Field Functions 
        bool hasRoomServiceCnt() const { return this->roomServiceCnt_ != nullptr;};
        void deleteRoomServiceCnt() { this->roomServiceCnt_ = nullptr;};
        inline int32_t getRoomServiceCnt() const { DARABONBA_PTR_GET_DEFAULT(roomServiceCnt_, 0) };
        inline RoomServiceInfo& setRoomServiceCnt(int32_t roomServiceCnt) { DARABONBA_PTR_SET_VALUE(roomServiceCnt_, roomServiceCnt) };


      protected:
        shared_ptr<int32_t> bookServiceCnt_ {};
        shared_ptr<int32_t> goodsServiceCnt_ {};
        shared_ptr<int32_t> repairServiceCnt_ {};
        shared_ptr<int32_t> roomServiceCnt_ {};
      };

      class RoomControlInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RoomControlInfo& obj) { 
          DARABONBA_PTR_TO_JSON(AppId, appId_);
          DARABONBA_PTR_TO_JSON(AppName, appName_);
          DARABONBA_PTR_TO_JSON(DeviceInfos, deviceInfos_);
          DARABONBA_PTR_TO_JSON(RcuUrl, rcuUrl_);
          DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
          DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
        };
        friend void from_json(const Darabonba::Json& j, RoomControlInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(AppId, appId_);
          DARABONBA_PTR_FROM_JSON(AppName, appName_);
          DARABONBA_PTR_FROM_JSON(DeviceInfos, deviceInfos_);
          DARABONBA_PTR_FROM_JSON(RcuUrl, rcuUrl_);
          DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
          DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
        };
        RoomControlInfo() = default ;
        RoomControlInfo(const RoomControlInfo &) = default ;
        RoomControlInfo(RoomControlInfo &&) = default ;
        RoomControlInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RoomControlInfo() = default ;
        RoomControlInfo& operator=(const RoomControlInfo &) = default ;
        RoomControlInfo& operator=(RoomControlInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class DeviceInfos : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DeviceInfos& obj) { 
            DARABONBA_PTR_TO_JSON(CategoryEnName, categoryEnName_);
            DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
            DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_TO_JSON(DeviceConnectType, deviceConnectType_);
            DARABONBA_PTR_TO_JSON(DeviceCount, deviceCount_);
            DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
            DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
            DARABONBA_PTR_TO_JSON(LocationEnName, locationEnName_);
            DARABONBA_PTR_TO_JSON(LocationId, locationId_);
            DARABONBA_PTR_TO_JSON(LocationName, locationName_);
            DARABONBA_PTR_TO_JSON(ProductKey, productKey_);
          };
          friend void from_json(const Darabonba::Json& j, DeviceInfos& obj) { 
            DARABONBA_PTR_FROM_JSON(CategoryEnName, categoryEnName_);
            DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
            DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
            DARABONBA_PTR_FROM_JSON(DeviceConnectType, deviceConnectType_);
            DARABONBA_PTR_FROM_JSON(DeviceCount, deviceCount_);
            DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
            DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
            DARABONBA_PTR_FROM_JSON(LocationEnName, locationEnName_);
            DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
            DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
            DARABONBA_PTR_FROM_JSON(ProductKey, productKey_);
          };
          DeviceInfos() = default ;
          DeviceInfos(const DeviceInfos &) = default ;
          DeviceInfos(DeviceInfos &&) = default ;
          DeviceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DeviceInfos() = default ;
          DeviceInfos& operator=(const DeviceInfos &) = default ;
          DeviceInfos& operator=(DeviceInfos &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->categoryEnName_ == nullptr
        && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->deviceConnectType_ == nullptr && this->deviceCount_ == nullptr && this->deviceId_ == nullptr
        && this->deviceName_ == nullptr && this->locationEnName_ == nullptr && this->locationId_ == nullptr && this->locationName_ == nullptr && this->productKey_ == nullptr; };
          // categoryEnName Field Functions 
          bool hasCategoryEnName() const { return this->categoryEnName_ != nullptr;};
          void deleteCategoryEnName() { this->categoryEnName_ = nullptr;};
          inline string getCategoryEnName() const { DARABONBA_PTR_GET_DEFAULT(categoryEnName_, "") };
          inline DeviceInfos& setCategoryEnName(string categoryEnName) { DARABONBA_PTR_SET_VALUE(categoryEnName_, categoryEnName) };


          // categoryId Field Functions 
          bool hasCategoryId() const { return this->categoryId_ != nullptr;};
          void deleteCategoryId() { this->categoryId_ = nullptr;};
          inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
          inline DeviceInfos& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


          // categoryName Field Functions 
          bool hasCategoryName() const { return this->categoryName_ != nullptr;};
          void deleteCategoryName() { this->categoryName_ = nullptr;};
          inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
          inline DeviceInfos& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


          // deviceConnectType Field Functions 
          bool hasDeviceConnectType() const { return this->deviceConnectType_ != nullptr;};
          void deleteDeviceConnectType() { this->deviceConnectType_ = nullptr;};
          inline string getDeviceConnectType() const { DARABONBA_PTR_GET_DEFAULT(deviceConnectType_, "") };
          inline DeviceInfos& setDeviceConnectType(string deviceConnectType) { DARABONBA_PTR_SET_VALUE(deviceConnectType_, deviceConnectType) };


          // deviceCount Field Functions 
          bool hasDeviceCount() const { return this->deviceCount_ != nullptr;};
          void deleteDeviceCount() { this->deviceCount_ = nullptr;};
          inline int32_t getDeviceCount() const { DARABONBA_PTR_GET_DEFAULT(deviceCount_, 0) };
          inline DeviceInfos& setDeviceCount(int32_t deviceCount) { DARABONBA_PTR_SET_VALUE(deviceCount_, deviceCount) };


          // deviceId Field Functions 
          bool hasDeviceId() const { return this->deviceId_ != nullptr;};
          void deleteDeviceId() { this->deviceId_ = nullptr;};
          inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
          inline DeviceInfos& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


          // deviceName Field Functions 
          bool hasDeviceName() const { return this->deviceName_ != nullptr;};
          void deleteDeviceName() { this->deviceName_ = nullptr;};
          inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
          inline DeviceInfos& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


          // locationEnName Field Functions 
          bool hasLocationEnName() const { return this->locationEnName_ != nullptr;};
          void deleteLocationEnName() { this->locationEnName_ = nullptr;};
          inline string getLocationEnName() const { DARABONBA_PTR_GET_DEFAULT(locationEnName_, "") };
          inline DeviceInfos& setLocationEnName(string locationEnName) { DARABONBA_PTR_SET_VALUE(locationEnName_, locationEnName) };


          // locationId Field Functions 
          bool hasLocationId() const { return this->locationId_ != nullptr;};
          void deleteLocationId() { this->locationId_ = nullptr;};
          inline int64_t getLocationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, 0L) };
          inline DeviceInfos& setLocationId(int64_t locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


          // locationName Field Functions 
          bool hasLocationName() const { return this->locationName_ != nullptr;};
          void deleteLocationName() { this->locationName_ = nullptr;};
          inline string getLocationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
          inline DeviceInfos& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


          // productKey Field Functions 
          bool hasProductKey() const { return this->productKey_ != nullptr;};
          void deleteProductKey() { this->productKey_ = nullptr;};
          inline string getProductKey() const { DARABONBA_PTR_GET_DEFAULT(productKey_, "") };
          inline DeviceInfos& setProductKey(string productKey) { DARABONBA_PTR_SET_VALUE(productKey_, productKey) };


        protected:
          shared_ptr<string> categoryEnName_ {};
          shared_ptr<int64_t> categoryId_ {};
          shared_ptr<string> categoryName_ {};
          shared_ptr<string> deviceConnectType_ {};
          shared_ptr<int32_t> deviceCount_ {};
          shared_ptr<string> deviceId_ {};
          shared_ptr<string> deviceName_ {};
          shared_ptr<string> locationEnName_ {};
          shared_ptr<int64_t> locationId_ {};
          shared_ptr<string> locationName_ {};
          shared_ptr<string> productKey_ {};
        };

        virtual bool empty() const override { return this->appId_ == nullptr
        && this->appName_ == nullptr && this->deviceInfos_ == nullptr && this->rcuUrl_ == nullptr && this->templateId_ == nullptr && this->templateName_ == nullptr; };
        // appId Field Functions 
        bool hasAppId() const { return this->appId_ != nullptr;};
        void deleteAppId() { this->appId_ = nullptr;};
        inline int64_t getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, 0L) };
        inline RoomControlInfo& setAppId(int64_t appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


        // appName Field Functions 
        bool hasAppName() const { return this->appName_ != nullptr;};
        void deleteAppName() { this->appName_ = nullptr;};
        inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
        inline RoomControlInfo& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


        // deviceInfos Field Functions 
        bool hasDeviceInfos() const { return this->deviceInfos_ != nullptr;};
        void deleteDeviceInfos() { this->deviceInfos_ = nullptr;};
        inline const vector<RoomControlInfo::DeviceInfos> & getDeviceInfos() const { DARABONBA_PTR_GET_CONST(deviceInfos_, vector<RoomControlInfo::DeviceInfos>) };
        inline vector<RoomControlInfo::DeviceInfos> getDeviceInfos() { DARABONBA_PTR_GET(deviceInfos_, vector<RoomControlInfo::DeviceInfos>) };
        inline RoomControlInfo& setDeviceInfos(const vector<RoomControlInfo::DeviceInfos> & deviceInfos) { DARABONBA_PTR_SET_VALUE(deviceInfos_, deviceInfos) };
        inline RoomControlInfo& setDeviceInfos(vector<RoomControlInfo::DeviceInfos> && deviceInfos) { DARABONBA_PTR_SET_RVALUE(deviceInfos_, deviceInfos) };


        // rcuUrl Field Functions 
        bool hasRcuUrl() const { return this->rcuUrl_ != nullptr;};
        void deleteRcuUrl() { this->rcuUrl_ = nullptr;};
        inline string getRcuUrl() const { DARABONBA_PTR_GET_DEFAULT(rcuUrl_, "") };
        inline RoomControlInfo& setRcuUrl(string rcuUrl) { DARABONBA_PTR_SET_VALUE(rcuUrl_, rcuUrl) };


        // templateId Field Functions 
        bool hasTemplateId() const { return this->templateId_ != nullptr;};
        void deleteTemplateId() { this->templateId_ = nullptr;};
        inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
        inline RoomControlInfo& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


        // templateName Field Functions 
        bool hasTemplateName() const { return this->templateName_ != nullptr;};
        void deleteTemplateName() { this->templateName_ = nullptr;};
        inline string getTemplateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
        inline RoomControlInfo& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


      protected:
        shared_ptr<int64_t> appId_ {};
        shared_ptr<string> appName_ {};
        shared_ptr<vector<RoomControlInfo::DeviceInfos>> deviceInfos_ {};
        shared_ptr<string> rcuUrl_ {};
        shared_ptr<int64_t> templateId_ {};
        shared_ptr<string> templateName_ {};
      };

      class OtherService : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OtherService& obj) { 
          DARABONBA_PTR_TO_JSON(OpenCall, openCall_);
          DARABONBA_PTR_TO_JSON(UnhandleTickets, unhandleTickets_);
        };
        friend void from_json(const Darabonba::Json& j, OtherService& obj) { 
          DARABONBA_PTR_FROM_JSON(OpenCall, openCall_);
          DARABONBA_PTR_FROM_JSON(UnhandleTickets, unhandleTickets_);
        };
        OtherService() = default ;
        OtherService(const OtherService &) = default ;
        OtherService(OtherService &&) = default ;
        OtherService(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OtherService() = default ;
        OtherService& operator=(const OtherService &) = default ;
        OtherService& operator=(OtherService &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->openCall_ == nullptr
        && this->unhandleTickets_ == nullptr; };
        // openCall Field Functions 
        bool hasOpenCall() const { return this->openCall_ != nullptr;};
        void deleteOpenCall() { this->openCall_ = nullptr;};
        inline bool getOpenCall() const { DARABONBA_PTR_GET_DEFAULT(openCall_, false) };
        inline OtherService& setOpenCall(bool openCall) { DARABONBA_PTR_SET_VALUE(openCall_, openCall) };


        // unhandleTickets Field Functions 
        bool hasUnhandleTickets() const { return this->unhandleTickets_ != nullptr;};
        void deleteUnhandleTickets() { this->unhandleTickets_ = nullptr;};
        inline int32_t getUnhandleTickets() const { DARABONBA_PTR_GET_DEFAULT(unhandleTickets_, 0) };
        inline OtherService& setUnhandleTickets(int32_t unhandleTickets) { DARABONBA_PTR_SET_VALUE(unhandleTickets_, unhandleTickets) };


      protected:
        shared_ptr<bool> openCall_ {};
        shared_ptr<int32_t> unhandleTickets_ {};
      };

      class DeviceInfos : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DeviceInfos& obj) { 
          DARABONBA_PTR_TO_JSON(ActiveTime, activeTime_);
          DARABONBA_PTR_TO_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_TO_JSON(FirmwareVersion, firmwareVersion_);
          DARABONBA_PTR_TO_JSON(Mac, mac_);
          DARABONBA_PTR_TO_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_TO_JSON(Sn, sn_);
          DARABONBA_PTR_TO_JSON(Uuid, uuid_);
        };
        friend void from_json(const Darabonba::Json& j, DeviceInfos& obj) { 
          DARABONBA_PTR_FROM_JSON(ActiveTime, activeTime_);
          DARABONBA_PTR_FROM_JSON(DeviceName, deviceName_);
          DARABONBA_PTR_FROM_JSON(FirmwareVersion, firmwareVersion_);
          DARABONBA_PTR_FROM_JSON(Mac, mac_);
          DARABONBA_PTR_FROM_JSON(OnlineStatus, onlineStatus_);
          DARABONBA_PTR_FROM_JSON(Sn, sn_);
          DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
        };
        DeviceInfos() = default ;
        DeviceInfos(const DeviceInfos &) = default ;
        DeviceInfos(DeviceInfos &&) = default ;
        DeviceInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DeviceInfos() = default ;
        DeviceInfos& operator=(const DeviceInfos &) = default ;
        DeviceInfos& operator=(DeviceInfos &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->activeTime_ == nullptr
        && this->deviceName_ == nullptr && this->firmwareVersion_ == nullptr && this->mac_ == nullptr && this->onlineStatus_ == nullptr && this->sn_ == nullptr
        && this->uuid_ == nullptr; };
        // activeTime Field Functions 
        bool hasActiveTime() const { return this->activeTime_ != nullptr;};
        void deleteActiveTime() { this->activeTime_ = nullptr;};
        inline string getActiveTime() const { DARABONBA_PTR_GET_DEFAULT(activeTime_, "") };
        inline DeviceInfos& setActiveTime(string activeTime) { DARABONBA_PTR_SET_VALUE(activeTime_, activeTime) };


        // deviceName Field Functions 
        bool hasDeviceName() const { return this->deviceName_ != nullptr;};
        void deleteDeviceName() { this->deviceName_ = nullptr;};
        inline string getDeviceName() const { DARABONBA_PTR_GET_DEFAULT(deviceName_, "") };
        inline DeviceInfos& setDeviceName(string deviceName) { DARABONBA_PTR_SET_VALUE(deviceName_, deviceName) };


        // firmwareVersion Field Functions 
        bool hasFirmwareVersion() const { return this->firmwareVersion_ != nullptr;};
        void deleteFirmwareVersion() { this->firmwareVersion_ = nullptr;};
        inline string getFirmwareVersion() const { DARABONBA_PTR_GET_DEFAULT(firmwareVersion_, "") };
        inline DeviceInfos& setFirmwareVersion(string firmwareVersion) { DARABONBA_PTR_SET_VALUE(firmwareVersion_, firmwareVersion) };


        // mac Field Functions 
        bool hasMac() const { return this->mac_ != nullptr;};
        void deleteMac() { this->mac_ = nullptr;};
        inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
        inline DeviceInfos& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


        // onlineStatus Field Functions 
        bool hasOnlineStatus() const { return this->onlineStatus_ != nullptr;};
        void deleteOnlineStatus() { this->onlineStatus_ = nullptr;};
        inline int32_t getOnlineStatus() const { DARABONBA_PTR_GET_DEFAULT(onlineStatus_, 0) };
        inline DeviceInfos& setOnlineStatus(int32_t onlineStatus) { DARABONBA_PTR_SET_VALUE(onlineStatus_, onlineStatus) };


        // sn Field Functions 
        bool hasSn() const { return this->sn_ != nullptr;};
        void deleteSn() { this->sn_ = nullptr;};
        inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
        inline DeviceInfos& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


        // uuid Field Functions 
        bool hasUuid() const { return this->uuid_ != nullptr;};
        void deleteUuid() { this->uuid_ = nullptr;};
        inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
        inline DeviceInfos& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


      protected:
        shared_ptr<string> activeTime_ {};
        shared_ptr<string> deviceName_ {};
        shared_ptr<string> firmwareVersion_ {};
        shared_ptr<string> mac_ {};
        shared_ptr<int32_t> onlineStatus_ {};
        shared_ptr<string> sn_ {};
        shared_ptr<string> uuid_ {};
      };

      class AuthAccounts : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AuthAccounts& obj) { 
          DARABONBA_PTR_TO_JSON(AccountName, accountName_);
          DARABONBA_PTR_TO_JSON(AuthTime, authTime_);
        };
        friend void from_json(const Darabonba::Json& j, AuthAccounts& obj) { 
          DARABONBA_PTR_FROM_JSON(AccountName, accountName_);
          DARABONBA_PTR_FROM_JSON(AuthTime, authTime_);
        };
        AuthAccounts() = default ;
        AuthAccounts(const AuthAccounts &) = default ;
        AuthAccounts(AuthAccounts &&) = default ;
        AuthAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AuthAccounts() = default ;
        AuthAccounts& operator=(const AuthAccounts &) = default ;
        AuthAccounts& operator=(AuthAccounts &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->accountName_ == nullptr
        && this->authTime_ == nullptr; };
        // accountName Field Functions 
        bool hasAccountName() const { return this->accountName_ != nullptr;};
        void deleteAccountName() { this->accountName_ = nullptr;};
        inline string getAccountName() const { DARABONBA_PTR_GET_DEFAULT(accountName_, "") };
        inline AuthAccounts& setAccountName(string accountName) { DARABONBA_PTR_SET_VALUE(accountName_, accountName) };


        // authTime Field Functions 
        bool hasAuthTime() const { return this->authTime_ != nullptr;};
        void deleteAuthTime() { this->authTime_ = nullptr;};
        inline string getAuthTime() const { DARABONBA_PTR_GET_DEFAULT(authTime_, "") };
        inline AuthAccounts& setAuthTime(string authTime) { DARABONBA_PTR_SET_VALUE(authTime_, authTime) };


      protected:
        shared_ptr<string> accountName_ {};
        shared_ptr<string> authTime_ {};
      };

      virtual bool empty() const override { return this->authAccounts_ == nullptr
        && this->connectType_ == nullptr && this->creatorAccountName_ == nullptr && this->deviceInfos_ == nullptr && this->hotelId_ == nullptr && this->hotelName_ == nullptr
        && this->otherService_ == nullptr && this->roomControlInfo_ == nullptr && this->roomNo_ == nullptr && this->roomServiceInfo_ == nullptr; };
      // authAccounts Field Functions 
      bool hasAuthAccounts() const { return this->authAccounts_ != nullptr;};
      void deleteAuthAccounts() { this->authAccounts_ = nullptr;};
      inline const vector<Result::AuthAccounts> & getAuthAccounts() const { DARABONBA_PTR_GET_CONST(authAccounts_, vector<Result::AuthAccounts>) };
      inline vector<Result::AuthAccounts> getAuthAccounts() { DARABONBA_PTR_GET(authAccounts_, vector<Result::AuthAccounts>) };
      inline Result& setAuthAccounts(const vector<Result::AuthAccounts> & authAccounts) { DARABONBA_PTR_SET_VALUE(authAccounts_, authAccounts) };
      inline Result& setAuthAccounts(vector<Result::AuthAccounts> && authAccounts) { DARABONBA_PTR_SET_RVALUE(authAccounts_, authAccounts) };


      // connectType Field Functions 
      bool hasConnectType() const { return this->connectType_ != nullptr;};
      void deleteConnectType() { this->connectType_ = nullptr;};
      inline string getConnectType() const { DARABONBA_PTR_GET_DEFAULT(connectType_, "") };
      inline Result& setConnectType(string connectType) { DARABONBA_PTR_SET_VALUE(connectType_, connectType) };


      // creatorAccountName Field Functions 
      bool hasCreatorAccountName() const { return this->creatorAccountName_ != nullptr;};
      void deleteCreatorAccountName() { this->creatorAccountName_ = nullptr;};
      inline string getCreatorAccountName() const { DARABONBA_PTR_GET_DEFAULT(creatorAccountName_, "") };
      inline Result& setCreatorAccountName(string creatorAccountName) { DARABONBA_PTR_SET_VALUE(creatorAccountName_, creatorAccountName) };


      // deviceInfos Field Functions 
      bool hasDeviceInfos() const { return this->deviceInfos_ != nullptr;};
      void deleteDeviceInfos() { this->deviceInfos_ = nullptr;};
      inline const vector<Result::DeviceInfos> & getDeviceInfos() const { DARABONBA_PTR_GET_CONST(deviceInfos_, vector<Result::DeviceInfos>) };
      inline vector<Result::DeviceInfos> getDeviceInfos() { DARABONBA_PTR_GET(deviceInfos_, vector<Result::DeviceInfos>) };
      inline Result& setDeviceInfos(const vector<Result::DeviceInfos> & deviceInfos) { DARABONBA_PTR_SET_VALUE(deviceInfos_, deviceInfos) };
      inline Result& setDeviceInfos(vector<Result::DeviceInfos> && deviceInfos) { DARABONBA_PTR_SET_RVALUE(deviceInfos_, deviceInfos) };


      // hotelId Field Functions 
      bool hasHotelId() const { return this->hotelId_ != nullptr;};
      void deleteHotelId() { this->hotelId_ = nullptr;};
      inline string getHotelId() const { DARABONBA_PTR_GET_DEFAULT(hotelId_, "") };
      inline Result& setHotelId(string hotelId) { DARABONBA_PTR_SET_VALUE(hotelId_, hotelId) };


      // hotelName Field Functions 
      bool hasHotelName() const { return this->hotelName_ != nullptr;};
      void deleteHotelName() { this->hotelName_ = nullptr;};
      inline string getHotelName() const { DARABONBA_PTR_GET_DEFAULT(hotelName_, "") };
      inline Result& setHotelName(string hotelName) { DARABONBA_PTR_SET_VALUE(hotelName_, hotelName) };


      // otherService Field Functions 
      bool hasOtherService() const { return this->otherService_ != nullptr;};
      void deleteOtherService() { this->otherService_ = nullptr;};
      inline const Result::OtherService & getOtherService() const { DARABONBA_PTR_GET_CONST(otherService_, Result::OtherService) };
      inline Result::OtherService getOtherService() { DARABONBA_PTR_GET(otherService_, Result::OtherService) };
      inline Result& setOtherService(const Result::OtherService & otherService) { DARABONBA_PTR_SET_VALUE(otherService_, otherService) };
      inline Result& setOtherService(Result::OtherService && otherService) { DARABONBA_PTR_SET_RVALUE(otherService_, otherService) };


      // roomControlInfo Field Functions 
      bool hasRoomControlInfo() const { return this->roomControlInfo_ != nullptr;};
      void deleteRoomControlInfo() { this->roomControlInfo_ = nullptr;};
      inline const Result::RoomControlInfo & getRoomControlInfo() const { DARABONBA_PTR_GET_CONST(roomControlInfo_, Result::RoomControlInfo) };
      inline Result::RoomControlInfo getRoomControlInfo() { DARABONBA_PTR_GET(roomControlInfo_, Result::RoomControlInfo) };
      inline Result& setRoomControlInfo(const Result::RoomControlInfo & roomControlInfo) { DARABONBA_PTR_SET_VALUE(roomControlInfo_, roomControlInfo) };
      inline Result& setRoomControlInfo(Result::RoomControlInfo && roomControlInfo) { DARABONBA_PTR_SET_RVALUE(roomControlInfo_, roomControlInfo) };


      // roomNo Field Functions 
      bool hasRoomNo() const { return this->roomNo_ != nullptr;};
      void deleteRoomNo() { this->roomNo_ = nullptr;};
      inline string getRoomNo() const { DARABONBA_PTR_GET_DEFAULT(roomNo_, "") };
      inline Result& setRoomNo(string roomNo) { DARABONBA_PTR_SET_VALUE(roomNo_, roomNo) };


      // roomServiceInfo Field Functions 
      bool hasRoomServiceInfo() const { return this->roomServiceInfo_ != nullptr;};
      void deleteRoomServiceInfo() { this->roomServiceInfo_ = nullptr;};
      inline const Result::RoomServiceInfo & getRoomServiceInfo() const { DARABONBA_PTR_GET_CONST(roomServiceInfo_, Result::RoomServiceInfo) };
      inline Result::RoomServiceInfo getRoomServiceInfo() { DARABONBA_PTR_GET(roomServiceInfo_, Result::RoomServiceInfo) };
      inline Result& setRoomServiceInfo(const Result::RoomServiceInfo & roomServiceInfo) { DARABONBA_PTR_SET_VALUE(roomServiceInfo_, roomServiceInfo) };
      inline Result& setRoomServiceInfo(Result::RoomServiceInfo && roomServiceInfo) { DARABONBA_PTR_SET_RVALUE(roomServiceInfo_, roomServiceInfo) };


    protected:
      shared_ptr<vector<Result::AuthAccounts>> authAccounts_ {};
      shared_ptr<string> connectType_ {};
      shared_ptr<string> creatorAccountName_ {};
      shared_ptr<vector<Result::DeviceInfos>> deviceInfos_ {};
      shared_ptr<string> hotelId_ {};
      shared_ptr<string> hotelName_ {};
      shared_ptr<Result::OtherService> otherService_ {};
      shared_ptr<Result::RoomControlInfo> roomControlInfo_ {};
      shared_ptr<string> roomNo_ {};
      shared_ptr<Result::RoomServiceInfo> roomServiceInfo_ {};
    };

    virtual bool empty() const override { return this->message_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->statusCode_ == nullptr; };
    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryHotelRoomDetailResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryHotelRoomDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryHotelRoomDetailResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryHotelRoomDetailResponseBody::Result) };
    inline QueryHotelRoomDetailResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryHotelRoomDetailResponseBody::Result) };
    inline QueryHotelRoomDetailResponseBody& setResult(const QueryHotelRoomDetailResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryHotelRoomDetailResponseBody& setResult(QueryHotelRoomDetailResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline int32_t getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, 0) };
    inline QueryHotelRoomDetailResponseBody& setStatusCode(int32_t statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<QueryHotelRoomDetailResponseBody::Result> result_ {};
    shared_ptr<int32_t> statusCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieip_1_0
#endif
