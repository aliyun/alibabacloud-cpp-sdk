// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTLOGDEVICEINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTLOGDEVICEINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmasAppmonitor20190611
{
namespace Models
{
  class GetTlogDeviceInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTlogDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Model, model_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTlogDeviceInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Model, model_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTlogDeviceInfoResponseBody() = default ;
    GetTlogDeviceInfoResponseBody(const GetTlogDeviceInfoResponseBody &) = default ;
    GetTlogDeviceInfoResponseBody(GetTlogDeviceInfoResponseBody &&) = default ;
    GetTlogDeviceInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTlogDeviceInfoResponseBody() = default ;
    GetTlogDeviceInfoResponseBody& operator=(const GetTlogDeviceInfoResponseBody &) = default ;
    GetTlogDeviceInfoResponseBody& operator=(GetTlogDeviceInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Model : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Model& obj) { 
        DARABONBA_PTR_TO_JSON(AppBuild, appBuild_);
        DARABONBA_PTR_TO_JSON(AppId, appId_);
        DARABONBA_PTR_TO_JSON(AppKey, appKey_);
        DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_TO_JSON(Brand, brand_);
        DARABONBA_PTR_TO_JSON(ClientTime, clientTime_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DeviceModel, deviceModel_);
        DARABONBA_PTR_TO_JSON(Geo, geo_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Imsi, imsi_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Os, os_);
        DARABONBA_PTR_TO_JSON(OsVersion, osVersion_);
        DARABONBA_PTR_TO_JSON(ServerTime, serverTime_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, Model& obj) { 
        DARABONBA_PTR_FROM_JSON(AppBuild, appBuild_);
        DARABONBA_PTR_FROM_JSON(AppId, appId_);
        DARABONBA_PTR_FROM_JSON(AppKey, appKey_);
        DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
        DARABONBA_PTR_FROM_JSON(Brand, brand_);
        DARABONBA_PTR_FROM_JSON(ClientTime, clientTime_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DeviceModel, deviceModel_);
        DARABONBA_PTR_FROM_JSON(Geo, geo_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Imsi, imsi_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Os, os_);
        DARABONBA_PTR_FROM_JSON(OsVersion, osVersion_);
        DARABONBA_PTR_FROM_JSON(ServerTime, serverTime_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      Model() = default ;
      Model(const Model &) = default ;
      Model(Model &&) = default ;
      Model(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Model() = default ;
      Model& operator=(const Model &) = default ;
      Model& operator=(Model &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->appBuild_ == nullptr
        && this->appId_ == nullptr && this->appKey_ == nullptr && this->appVersion_ == nullptr && this->brand_ == nullptr && this->clientTime_ == nullptr
        && this->deviceId_ == nullptr && this->deviceModel_ == nullptr && this->geo_ == nullptr && this->id_ == nullptr && this->imsi_ == nullptr
        && this->ip_ == nullptr && this->os_ == nullptr && this->osVersion_ == nullptr && this->serverTime_ == nullptr && this->updateTime_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // appBuild Field Functions 
      bool hasAppBuild() const { return this->appBuild_ != nullptr;};
      void deleteAppBuild() { this->appBuild_ = nullptr;};
      inline string getAppBuild() const { DARABONBA_PTR_GET_DEFAULT(appBuild_, "") };
      inline Model& setAppBuild(string appBuild) { DARABONBA_PTR_SET_VALUE(appBuild_, appBuild) };


      // appId Field Functions 
      bool hasAppId() const { return this->appId_ != nullptr;};
      void deleteAppId() { this->appId_ = nullptr;};
      inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
      inline Model& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


      // appKey Field Functions 
      bool hasAppKey() const { return this->appKey_ != nullptr;};
      void deleteAppKey() { this->appKey_ = nullptr;};
      inline string getAppKey() const { DARABONBA_PTR_GET_DEFAULT(appKey_, "") };
      inline Model& setAppKey(string appKey) { DARABONBA_PTR_SET_VALUE(appKey_, appKey) };


      // appVersion Field Functions 
      bool hasAppVersion() const { return this->appVersion_ != nullptr;};
      void deleteAppVersion() { this->appVersion_ = nullptr;};
      inline string getAppVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
      inline Model& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


      // brand Field Functions 
      bool hasBrand() const { return this->brand_ != nullptr;};
      void deleteBrand() { this->brand_ = nullptr;};
      inline string getBrand() const { DARABONBA_PTR_GET_DEFAULT(brand_, "") };
      inline Model& setBrand(string brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };


      // clientTime Field Functions 
      bool hasClientTime() const { return this->clientTime_ != nullptr;};
      void deleteClientTime() { this->clientTime_ = nullptr;};
      inline int64_t getClientTime() const { DARABONBA_PTR_GET_DEFAULT(clientTime_, 0L) };
      inline Model& setClientTime(int64_t clientTime) { DARABONBA_PTR_SET_VALUE(clientTime_, clientTime) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Model& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // deviceModel Field Functions 
      bool hasDeviceModel() const { return this->deviceModel_ != nullptr;};
      void deleteDeviceModel() { this->deviceModel_ = nullptr;};
      inline string getDeviceModel() const { DARABONBA_PTR_GET_DEFAULT(deviceModel_, "") };
      inline Model& setDeviceModel(string deviceModel) { DARABONBA_PTR_SET_VALUE(deviceModel_, deviceModel) };


      // geo Field Functions 
      bool hasGeo() const { return this->geo_ != nullptr;};
      void deleteGeo() { this->geo_ = nullptr;};
      inline string getGeo() const { DARABONBA_PTR_GET_DEFAULT(geo_, "") };
      inline Model& setGeo(string geo) { DARABONBA_PTR_SET_VALUE(geo_, geo) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Model& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // imsi Field Functions 
      bool hasImsi() const { return this->imsi_ != nullptr;};
      void deleteImsi() { this->imsi_ = nullptr;};
      inline string getImsi() const { DARABONBA_PTR_GET_DEFAULT(imsi_, "") };
      inline Model& setImsi(string imsi) { DARABONBA_PTR_SET_VALUE(imsi_, imsi) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Model& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline Model& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // osVersion Field Functions 
      bool hasOsVersion() const { return this->osVersion_ != nullptr;};
      void deleteOsVersion() { this->osVersion_ = nullptr;};
      inline string getOsVersion() const { DARABONBA_PTR_GET_DEFAULT(osVersion_, "") };
      inline Model& setOsVersion(string osVersion) { DARABONBA_PTR_SET_VALUE(osVersion_, osVersion) };


      // serverTime Field Functions 
      bool hasServerTime() const { return this->serverTime_ != nullptr;};
      void deleteServerTime() { this->serverTime_ = nullptr;};
      inline int64_t getServerTime() const { DARABONBA_PTR_GET_DEFAULT(serverTime_, 0L) };
      inline Model& setServerTime(int64_t serverTime) { DARABONBA_PTR_SET_VALUE(serverTime_, serverTime) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline Model& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Model& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline Model& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      shared_ptr<string> appBuild_ {};
      shared_ptr<string> appId_ {};
      // appKey
      shared_ptr<string> appKey_ {};
      shared_ptr<string> appVersion_ {};
      shared_ptr<string> brand_ {};
      shared_ptr<int64_t> clientTime_ {};
      shared_ptr<string> deviceId_ {};
      shared_ptr<string> deviceModel_ {};
      shared_ptr<string> geo_ {};
      shared_ptr<string> id_ {};
      shared_ptr<string> imsi_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> os_ {};
      shared_ptr<string> osVersion_ {};
      shared_ptr<int64_t> serverTime_ {};
      shared_ptr<int64_t> updateTime_ {};
      // userId
      shared_ptr<string> userId_ {};
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->message_ == nullptr && this->model_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline int64_t getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, 0L) };
    inline GetTlogDeviceInfoResponseBody& setErrorCode(int64_t errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTlogDeviceInfoResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // model Field Functions 
    bool hasModel() const { return this->model_ != nullptr;};
    void deleteModel() { this->model_ = nullptr;};
    inline const GetTlogDeviceInfoResponseBody::Model & getModel() const { DARABONBA_PTR_GET_CONST(model_, GetTlogDeviceInfoResponseBody::Model) };
    inline GetTlogDeviceInfoResponseBody::Model getModel() { DARABONBA_PTR_GET(model_, GetTlogDeviceInfoResponseBody::Model) };
    inline GetTlogDeviceInfoResponseBody& setModel(const GetTlogDeviceInfoResponseBody::Model & model) { DARABONBA_PTR_SET_VALUE(model_, model) };
    inline GetTlogDeviceInfoResponseBody& setModel(GetTlogDeviceInfoResponseBody::Model && model) { DARABONBA_PTR_SET_RVALUE(model_, model) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTlogDeviceInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTlogDeviceInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<int64_t> errorCode_ {};
    shared_ptr<string> message_ {};
    shared_ptr<GetTlogDeviceInfoResponseBody::Model> model_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmasAppmonitor20190611
#endif
