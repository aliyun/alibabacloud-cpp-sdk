// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOAPPREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VIDEOAPPREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGenieiap_1_0
{
namespace Models
{
  class VideoAppReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoAppReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, VideoAppReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    VideoAppReportRequest() = default ;
    VideoAppReportRequest(const VideoAppReportRequest &) = default ;
    VideoAppReportRequest(VideoAppReportRequest &&) = default ;
    VideoAppReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoAppReportRequest() = default ;
    VideoAppReportRequest& operator=(const VideoAppReportRequest &) = default ;
    VideoAppReportRequest& operator=(VideoAppReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, UserInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      UserInfo() = default ;
      UserInfo(const UserInfo &) = default ;
      UserInfo(UserInfo &&) = default ;
      UserInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserInfo() = default ;
      UserInfo& operator=(const UserInfo &) = default ;
      UserInfo& operator=(UserInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline UserInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline UserInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline UserInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline UserInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline UserInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // 编码类型对应的值
      // 
      // - 编码类型是SKILL_ID时，其值为应用的Skill ID。
      // - 编码类型是PACKAGE_NAME时，其值为对应客户端App的packageName。
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // 编码类型，获取天猫精灵的用户标识的途径有多种，不同途径对应不同的编码类型。
      // - PACKAGE_NAME：apk包名，Android应用客户链路的编码类型。
      // - SKILL_ID：技能ID，云端链路的编码类型。
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // 用户标识，设置为userOpenId或userUnionId。
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // 用户Id的类型  
      // - OPEN_ID：默认的用户ID标识。
      // - UNION_ID: 组织维度的用户ID标识，在天猫精灵技能应用开放平台申请过组织后才会有该值。
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // 组织ID，如果IdType为UNION_ID时必填。
      shared_ptr<string> organizationId_ {};
    };

    class Payload : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Payload& obj) { 
        DARABONBA_PTR_TO_JSON(endTime, endTime_);
        DARABONBA_PTR_TO_JSON(isLogin, isLogin_);
        DARABONBA_PTR_TO_JSON(isVip, isVip_);
        DARABONBA_PTR_TO_JSON(loginNick, loginNick_);
        DARABONBA_PTR_TO_JSON(originUuid, originUuid_);
        DARABONBA_PTR_TO_JSON(phone, phone_);
        DARABONBA_PTR_TO_JSON(pkgName, pkgName_);
        DARABONBA_PTR_TO_JSON(startTime, startTime_);
      };
      friend void from_json(const Darabonba::Json& j, Payload& obj) { 
        DARABONBA_PTR_FROM_JSON(endTime, endTime_);
        DARABONBA_PTR_FROM_JSON(isLogin, isLogin_);
        DARABONBA_PTR_FROM_JSON(isVip, isVip_);
        DARABONBA_PTR_FROM_JSON(loginNick, loginNick_);
        DARABONBA_PTR_FROM_JSON(originUuid, originUuid_);
        DARABONBA_PTR_FROM_JSON(phone, phone_);
        DARABONBA_PTR_FROM_JSON(pkgName, pkgName_);
        DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      };
      Payload() = default ;
      Payload(const Payload &) = default ;
      Payload(Payload &&) = default ;
      Payload(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Payload() = default ;
      Payload& operator=(const Payload &) = default ;
      Payload& operator=(Payload &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->endTime_ == nullptr
        && this->isLogin_ == nullptr && this->isVip_ == nullptr && this->loginNick_ == nullptr && this->originUuid_ == nullptr && this->phone_ == nullptr
        && this->pkgName_ == nullptr && this->startTime_ == nullptr; };
      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Payload& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // isLogin Field Functions 
      bool hasIsLogin() const { return this->isLogin_ != nullptr;};
      void deleteIsLogin() { this->isLogin_ = nullptr;};
      inline bool getIsLogin() const { DARABONBA_PTR_GET_DEFAULT(isLogin_, false) };
      inline Payload& setIsLogin(bool isLogin) { DARABONBA_PTR_SET_VALUE(isLogin_, isLogin) };


      // isVip Field Functions 
      bool hasIsVip() const { return this->isVip_ != nullptr;};
      void deleteIsVip() { this->isVip_ = nullptr;};
      inline bool getIsVip() const { DARABONBA_PTR_GET_DEFAULT(isVip_, false) };
      inline Payload& setIsVip(bool isVip) { DARABONBA_PTR_SET_VALUE(isVip_, isVip) };


      // loginNick Field Functions 
      bool hasLoginNick() const { return this->loginNick_ != nullptr;};
      void deleteLoginNick() { this->loginNick_ = nullptr;};
      inline string getLoginNick() const { DARABONBA_PTR_GET_DEFAULT(loginNick_, "") };
      inline Payload& setLoginNick(string loginNick) { DARABONBA_PTR_SET_VALUE(loginNick_, loginNick) };


      // originUuid Field Functions 
      bool hasOriginUuid() const { return this->originUuid_ != nullptr;};
      void deleteOriginUuid() { this->originUuid_ = nullptr;};
      inline string getOriginUuid() const { DARABONBA_PTR_GET_DEFAULT(originUuid_, "") };
      inline Payload& setOriginUuid(string originUuid) { DARABONBA_PTR_SET_VALUE(originUuid_, originUuid) };


      // phone Field Functions 
      bool hasPhone() const { return this->phone_ != nullptr;};
      void deletePhone() { this->phone_ = nullptr;};
      inline string getPhone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
      inline Payload& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


      // pkgName Field Functions 
      bool hasPkgName() const { return this->pkgName_ != nullptr;};
      void deletePkgName() { this->pkgName_ = nullptr;};
      inline string getPkgName() const { DARABONBA_PTR_GET_DEFAULT(pkgName_, "") };
      inline Payload& setPkgName(string pkgName) { DARABONBA_PTR_SET_VALUE(pkgName_, pkgName) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Payload& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    protected:
      // 会员的结束时间。
      // 
      // This parameter is required.
      shared_ptr<int64_t> endTime_ {};
      // 会员是否登录。
      // 
      // This parameter is required.
      shared_ptr<bool> isLogin_ {};
      // 该账号是否为会员。
      // 
      // This parameter is required.
      shared_ptr<bool> isVip_ {};
      // 账号的昵称。
      shared_ptr<string> loginNick_ {};
      // 明文uuid
      shared_ptr<string> originUuid_ {};
      // 账户的手机号码。
      shared_ptr<string> phone_ {};
      // 应用包名。
      // 
      // This parameter is required.
      shared_ptr<string> pkgName_ {};
      // 会员的开始时间。
      // 
      // This parameter is required.
      shared_ptr<int64_t> startTime_ {};
    };

    class DeviceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DeviceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_TO_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IdType, idType_);
        DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
      };
      friend void from_json(const Darabonba::Json& j, DeviceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(EncodeKey, encodeKey_);
        DARABONBA_PTR_FROM_JSON(EncodeType, encodeType_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IdType, idType_);
        DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
      };
      DeviceInfo() = default ;
      DeviceInfo(const DeviceInfo &) = default ;
      DeviceInfo(DeviceInfo &&) = default ;
      DeviceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DeviceInfo() = default ;
      DeviceInfo& operator=(const DeviceInfo &) = default ;
      DeviceInfo& operator=(DeviceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->encodeKey_ == nullptr
        && this->encodeType_ == nullptr && this->id_ == nullptr && this->idType_ == nullptr && this->organizationId_ == nullptr; };
      // encodeKey Field Functions 
      bool hasEncodeKey() const { return this->encodeKey_ != nullptr;};
      void deleteEncodeKey() { this->encodeKey_ = nullptr;};
      inline string getEncodeKey() const { DARABONBA_PTR_GET_DEFAULT(encodeKey_, "") };
      inline DeviceInfo& setEncodeKey(string encodeKey) { DARABONBA_PTR_SET_VALUE(encodeKey_, encodeKey) };


      // encodeType Field Functions 
      bool hasEncodeType() const { return this->encodeType_ != nullptr;};
      void deleteEncodeType() { this->encodeType_ = nullptr;};
      inline string getEncodeType() const { DARABONBA_PTR_GET_DEFAULT(encodeType_, "") };
      inline DeviceInfo& setEncodeType(string encodeType) { DARABONBA_PTR_SET_VALUE(encodeType_, encodeType) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline DeviceInfo& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // idType Field Functions 
      bool hasIdType() const { return this->idType_ != nullptr;};
      void deleteIdType() { this->idType_ = nullptr;};
      inline string getIdType() const { DARABONBA_PTR_GET_DEFAULT(idType_, "") };
      inline DeviceInfo& setIdType(string idType) { DARABONBA_PTR_SET_VALUE(idType_, idType) };


      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline DeviceInfo& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    protected:
      // 编码类型对应的值
      // 
      // - 编码类型是SKILL_ID时，其值为应用的Skill ID。
      // - 编码类型是PACKAGE_NAME时，其值为对应客户端App的packageName。
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID from Tmall Genie, and each method corresponds to a different encoding type.
      // - PACKAGE_NAME: APK package name, used for Android application customer flows.
      // - SKILL_ID: Skill ID, used for cloud-based flows.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to either deviceOpenId or deviceUnionId.
      shared_ptr<string> id_ {};
      // Type of the device ID.
      // - OPEN_ID: The default device ID.
      // - UNION_ID: Organization-level device ID. This value is available only after an organization has been registered on the Tmall Genie Skill Application Open Platform.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->payload_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const VideoAppReportRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, VideoAppReportRequest::DeviceInfo) };
    inline VideoAppReportRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, VideoAppReportRequest::DeviceInfo) };
    inline VideoAppReportRequest& setDeviceInfo(const VideoAppReportRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline VideoAppReportRequest& setDeviceInfo(VideoAppReportRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const VideoAppReportRequest::Payload & getPayload() const { DARABONBA_PTR_GET_CONST(payload_, VideoAppReportRequest::Payload) };
    inline VideoAppReportRequest::Payload getPayload() { DARABONBA_PTR_GET(payload_, VideoAppReportRequest::Payload) };
    inline VideoAppReportRequest& setPayload(const VideoAppReportRequest::Payload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline VideoAppReportRequest& setPayload(VideoAppReportRequest::Payload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const VideoAppReportRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, VideoAppReportRequest::UserInfo) };
    inline VideoAppReportRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, VideoAppReportRequest::UserInfo) };
    inline VideoAppReportRequest& setUserInfo(const VideoAppReportRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline VideoAppReportRequest& setUserInfo(VideoAppReportRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identity information
    shared_ptr<VideoAppReportRequest::DeviceInfo> deviceInfo_ {};
    // 业务参数
    shared_ptr<VideoAppReportRequest::Payload> payload_ {};
    // 用户标识信息
    // 
    // This parameter is required.
    shared_ptr<VideoAppReportRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGenieiap_1_0
#endif
