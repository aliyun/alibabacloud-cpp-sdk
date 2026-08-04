// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYMODECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PLAYMODECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayModeControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayModeControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenPlayModeControlRequest, openPlayModeControlRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PlayModeControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenPlayModeControlRequest, openPlayModeControlRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    PlayModeControlRequest() = default ;
    PlayModeControlRequest(const PlayModeControlRequest &) = default ;
    PlayModeControlRequest(PlayModeControlRequest &&) = default ;
    PlayModeControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayModeControlRequest() = default ;
    PlayModeControlRequest& operator=(const PlayModeControlRequest &) = default ;
    PlayModeControlRequest& operator=(PlayModeControlRequest &&) = default ;
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
      // Value corresponding to the encoding type.
      // 
      // When the encoding type is `SKILL_ID`, the value is the application\\"s Skill ID. When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the User Identifier for Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used for the Android application customer ingest endpoint. `SKILL_ID`: Skill ID, used for the cloud-side ingest endpoint.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User Identifier, set to userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of User ID
      // 
      // `OPEN_ID`: The default User ID identity. `UNION_ID`: Organization-dimension User ID identity. This value is available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class OpenPlayModeControlRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenPlayModeControlRequest& obj) { 
        DARABONBA_PTR_TO_JSON(OpenPlayMode, openPlayMode_);
      };
      friend void from_json(const Darabonba::Json& j, OpenPlayModeControlRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(OpenPlayMode, openPlayMode_);
      };
      OpenPlayModeControlRequest() = default ;
      OpenPlayModeControlRequest(const OpenPlayModeControlRequest &) = default ;
      OpenPlayModeControlRequest(OpenPlayModeControlRequest &&) = default ;
      OpenPlayModeControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenPlayModeControlRequest() = default ;
      OpenPlayModeControlRequest& operator=(const OpenPlayModeControlRequest &) = default ;
      OpenPlayModeControlRequest& operator=(OpenPlayModeControlRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->openPlayMode_ == nullptr; };
      // openPlayMode Field Functions 
      bool hasOpenPlayMode() const { return this->openPlayMode_ != nullptr;};
      void deleteOpenPlayMode() { this->openPlayMode_ = nullptr;};
      inline string getOpenPlayMode() const { DARABONBA_PTR_GET_DEFAULT(openPlayMode_, "") };
      inline OpenPlayModeControlRequest& setOpenPlayMode(string openPlayMode) { DARABONBA_PTR_SET_VALUE(openPlayMode_, openPlayMode) };


    protected:
      // Playback mode
      // 
      // List loop: Repeat; Shuffle: Shuffle; Single track loop: RepeatOne; NAT mode: Normal;
      // 
      // This parameter is required.
      shared_ptr<string> openPlayMode_ {};
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
      // Value corresponding to the encoding type
      // 
      // When the encoding type is `SKILL_ID`, the value is the application\\"s Skill ID. When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID for Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used for Android application customer journeys. `SKILL_ID`: Skill ID, used for cloud-based journeys.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to deviceOpenId or deviceUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of device ID
      // 
      // `OPEN_ID`: Default device ID identity. `UNION_ID`: Organization-dimension device ID identity, available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->openPlayModeControlRequest_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const PlayModeControlRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, PlayModeControlRequest::DeviceInfo) };
    inline PlayModeControlRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, PlayModeControlRequest::DeviceInfo) };
    inline PlayModeControlRequest& setDeviceInfo(const PlayModeControlRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline PlayModeControlRequest& setDeviceInfo(PlayModeControlRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openPlayModeControlRequest Field Functions 
    bool hasOpenPlayModeControlRequest() const { return this->openPlayModeControlRequest_ != nullptr;};
    void deleteOpenPlayModeControlRequest() { this->openPlayModeControlRequest_ = nullptr;};
    inline const PlayModeControlRequest::OpenPlayModeControlRequest & getOpenPlayModeControlRequest() const { DARABONBA_PTR_GET_CONST(openPlayModeControlRequest_, PlayModeControlRequest::OpenPlayModeControlRequest) };
    inline PlayModeControlRequest::OpenPlayModeControlRequest getOpenPlayModeControlRequest() { DARABONBA_PTR_GET(openPlayModeControlRequest_, PlayModeControlRequest::OpenPlayModeControlRequest) };
    inline PlayModeControlRequest& setOpenPlayModeControlRequest(const PlayModeControlRequest::OpenPlayModeControlRequest & openPlayModeControlRequest) { DARABONBA_PTR_SET_VALUE(openPlayModeControlRequest_, openPlayModeControlRequest) };
    inline PlayModeControlRequest& setOpenPlayModeControlRequest(PlayModeControlRequest::OpenPlayModeControlRequest && openPlayModeControlRequest) { DARABONBA_PTR_SET_RVALUE(openPlayModeControlRequest_, openPlayModeControlRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const PlayModeControlRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, PlayModeControlRequest::UserInfo) };
    inline PlayModeControlRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, PlayModeControlRequest::UserInfo) };
    inline PlayModeControlRequest& setUserInfo(const PlayModeControlRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline PlayModeControlRequest& setUserInfo(PlayModeControlRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identity information
    // 
    // This parameter is required.
    shared_ptr<PlayModeControlRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    // 
    // This parameter is required.
    shared_ptr<PlayModeControlRequest::OpenPlayModeControlRequest> openPlayModeControlRequest_ {};
    // User Identifier information
    // 
    // This parameter is required.
    shared_ptr<PlayModeControlRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
