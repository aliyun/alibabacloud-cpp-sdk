// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PLAYANDPAUSECONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PLAYANDPAUSECONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PlayAndPauseControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PlayAndPauseControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenPlayAndPauseControlParam, openPlayAndPauseControlParam_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PlayAndPauseControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenPlayAndPauseControlParam, openPlayAndPauseControlParam_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    PlayAndPauseControlRequest() = default ;
    PlayAndPauseControlRequest(const PlayAndPauseControlRequest &) = default ;
    PlayAndPauseControlRequest(PlayAndPauseControlRequest &&) = default ;
    PlayAndPauseControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PlayAndPauseControlRequest() = default ;
    PlayAndPauseControlRequest& operator=(const PlayAndPauseControlRequest &) = default ;
    PlayAndPauseControlRequest& operator=(PlayAndPauseControlRequest &&) = default ;
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
      // The value corresponding to the encoding type.
      // 
      // When the encoding type is `SKILL_ID`, the value is the application\\"s Skill ID. When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identifier from Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used for the Android application customer flow. `SKILL_ID`: Skill ID, used for the cloud-based flow.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier, set to either userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The type of User ID.
      // 
      // `OPEN_ID`: The default user ID identity. `UNION_ID`: The organization-dimension user ID identity. This value is available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when IdType is `UNION_ID`.
      shared_ptr<string> organizationId_ {};
    };

    class OpenPlayAndPauseControlParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenPlayAndPauseControlParam& obj) { 
        DARABONBA_PTR_TO_JSON(OpenPlayAndPauseCommand, openPlayAndPauseCommand_);
      };
      friend void from_json(const Darabonba::Json& j, OpenPlayAndPauseControlParam& obj) { 
        DARABONBA_PTR_FROM_JSON(OpenPlayAndPauseCommand, openPlayAndPauseCommand_);
      };
      OpenPlayAndPauseControlParam() = default ;
      OpenPlayAndPauseControlParam(const OpenPlayAndPauseControlParam &) = default ;
      OpenPlayAndPauseControlParam(OpenPlayAndPauseControlParam &&) = default ;
      OpenPlayAndPauseControlParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenPlayAndPauseControlParam() = default ;
      OpenPlayAndPauseControlParam& operator=(const OpenPlayAndPauseControlParam &) = default ;
      OpenPlayAndPauseControlParam& operator=(OpenPlayAndPauseControlParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->openPlayAndPauseCommand_ == nullptr; };
      // openPlayAndPauseCommand Field Functions 
      bool hasOpenPlayAndPauseCommand() const { return this->openPlayAndPauseCommand_ != nullptr;};
      void deleteOpenPlayAndPauseCommand() { this->openPlayAndPauseCommand_ = nullptr;};
      inline string getOpenPlayAndPauseCommand() const { DARABONBA_PTR_GET_DEFAULT(openPlayAndPauseCommand_, "") };
      inline OpenPlayAndPauseControlParam& setOpenPlayAndPauseCommand(string openPlayAndPauseCommand) { DARABONBA_PTR_SET_VALUE(openPlayAndPauseCommand_, openPlayAndPauseCommand) };


    protected:
      // Playback: Play; Pause: Pause.
      // 
      // This parameter is required.
      shared_ptr<string> openPlayAndPauseCommand_ {};
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
      // Value corresponding to the encoding type.
      // 
      // If the encoding type is `SKILL_ID`, the value is the application\\"s Skill ID. If the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device identity for Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used for the Android application customer link. `SKILL_ID`: Skill ID, used for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID, which can be set to deviceOpenId or deviceUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The type of Device ID.
      // 
      // `OPEN_ID`: The default device ID identity. `UNION_ID`: The organization-dimension device ID identity. This value is available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. This parameter is required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->openPlayAndPauseControlParam_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const PlayAndPauseControlRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, PlayAndPauseControlRequest::DeviceInfo) };
    inline PlayAndPauseControlRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, PlayAndPauseControlRequest::DeviceInfo) };
    inline PlayAndPauseControlRequest& setDeviceInfo(const PlayAndPauseControlRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline PlayAndPauseControlRequest& setDeviceInfo(PlayAndPauseControlRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openPlayAndPauseControlParam Field Functions 
    bool hasOpenPlayAndPauseControlParam() const { return this->openPlayAndPauseControlParam_ != nullptr;};
    void deleteOpenPlayAndPauseControlParam() { this->openPlayAndPauseControlParam_ = nullptr;};
    inline const PlayAndPauseControlRequest::OpenPlayAndPauseControlParam & getOpenPlayAndPauseControlParam() const { DARABONBA_PTR_GET_CONST(openPlayAndPauseControlParam_, PlayAndPauseControlRequest::OpenPlayAndPauseControlParam) };
    inline PlayAndPauseControlRequest::OpenPlayAndPauseControlParam getOpenPlayAndPauseControlParam() { DARABONBA_PTR_GET(openPlayAndPauseControlParam_, PlayAndPauseControlRequest::OpenPlayAndPauseControlParam) };
    inline PlayAndPauseControlRequest& setOpenPlayAndPauseControlParam(const PlayAndPauseControlRequest::OpenPlayAndPauseControlParam & openPlayAndPauseControlParam) { DARABONBA_PTR_SET_VALUE(openPlayAndPauseControlParam_, openPlayAndPauseControlParam) };
    inline PlayAndPauseControlRequest& setOpenPlayAndPauseControlParam(PlayAndPauseControlRequest::OpenPlayAndPauseControlParam && openPlayAndPauseControlParam) { DARABONBA_PTR_SET_RVALUE(openPlayAndPauseControlParam_, openPlayAndPauseControlParam) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const PlayAndPauseControlRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, PlayAndPauseControlRequest::UserInfo) };
    inline PlayAndPauseControlRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, PlayAndPauseControlRequest::UserInfo) };
    inline PlayAndPauseControlRequest& setUserInfo(const PlayAndPauseControlRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline PlayAndPauseControlRequest& setUserInfo(PlayAndPauseControlRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identity information
    // 
    // This parameter is required.
    shared_ptr<PlayAndPauseControlRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    // 
    // This parameter is required.
    shared_ptr<PlayAndPauseControlRequest::OpenPlayAndPauseControlParam> openPlayAndPauseControlParam_ {};
    // User identity information
    // 
    // This parameter is required.
    shared_ptr<PlayAndPauseControlRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
