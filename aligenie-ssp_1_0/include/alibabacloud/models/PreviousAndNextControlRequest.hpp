// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PREVIOUSANDNEXTCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class PreviousAndNextControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PreviousAndNextControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenControlPlayingListRequest, openControlPlayingListRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, PreviousAndNextControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenControlPlayingListRequest, openControlPlayingListRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    PreviousAndNextControlRequest() = default ;
    PreviousAndNextControlRequest(const PreviousAndNextControlRequest &) = default ;
    PreviousAndNextControlRequest(PreviousAndNextControlRequest &&) = default ;
    PreviousAndNextControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PreviousAndNextControlRequest() = default ;
    PreviousAndNextControlRequest& operator=(const PreviousAndNextControlRequest &) = default ;
    PreviousAndNextControlRequest& operator=(PreviousAndNextControlRequest &&) = default ;
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
      // When the encoding type is `SKILL_ID`, the value is the Skill ID of the application. When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identity from Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used for Android application client-side flows. `SKILL_ID`: Skill ID, used for cloud-side flows.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier, set to userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The type of User ID.
      // 
      // `OPEN_ID`: The default user identity. `UNION_ID`: The organization-dimension user identity, which is available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class OpenControlPlayingListRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenControlPlayingListRequest& obj) { 
        DARABONBA_PTR_TO_JSON(Cmd, cmd_);
        DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(IsFromDevice, isFromDevice_);
      };
      friend void from_json(const Darabonba::Json& j, OpenControlPlayingListRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(Cmd, cmd_);
        DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(IsFromDevice, isFromDevice_);
      };
      OpenControlPlayingListRequest() = default ;
      OpenControlPlayingListRequest(const OpenControlPlayingListRequest &) = default ;
      OpenControlPlayingListRequest(OpenControlPlayingListRequest &&) = default ;
      OpenControlPlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenControlPlayingListRequest() = default ;
      OpenControlPlayingListRequest& operator=(const OpenControlPlayingListRequest &) = default ;
      OpenControlPlayingListRequest& operator=(OpenControlPlayingListRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cmd_ == nullptr
        && this->extendInfo_ == nullptr && this->isFromDevice_ == nullptr; };
      // cmd Field Functions 
      bool hasCmd() const { return this->cmd_ != nullptr;};
      void deleteCmd() { this->cmd_ = nullptr;};
      inline string getCmd() const { DARABONBA_PTR_GET_DEFAULT(cmd_, "") };
      inline OpenControlPlayingListRequest& setCmd(string cmd) { DARABONBA_PTR_SET_VALUE(cmd_, cmd) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline       const Darabonba::Json & getExtendInfo() const { DARABONBA_GET(extendInfo_) };
      Darabonba::Json & getExtendInfo() { DARABONBA_GET(extendInfo_) };
      inline OpenControlPlayingListRequest& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
      inline OpenControlPlayingListRequest& setExtendInfo(Darabonba::Json && extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


      // isFromDevice Field Functions 
      bool hasIsFromDevice() const { return this->isFromDevice_ != nullptr;};
      void deleteIsFromDevice() { this->isFromDevice_ = nullptr;};
      inline bool getIsFromDevice() const { DARABONBA_PTR_GET_DEFAULT(isFromDevice_, false) };
      inline OpenControlPlayingListRequest& setIsFromDevice(bool isFromDevice) { DARABONBA_PTR_SET_VALUE(isFromDevice_, isFromDevice) };


    protected:
      // Next track: NEXT; Previous track: PREVIOUS
      // 
      // This parameter is required.
      shared_ptr<string> cmd_ {};
      Darabonba::Json extendInfo_ {};
      // Whether initiated by the device. Default is false.
      shared_ptr<bool> isFromDevice_ {};
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
      // The value corresponding to the encoding type.
      // 
      // When the encoding type is `SKILL_ID`, the value is the Skill ID of the application. When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
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
      // The type of Device ID.
      // 
      // `OPEN_ID`: The default device identity. `UNION_ID`: The organization-dimension device identity, which is available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->openControlPlayingListRequest_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const PreviousAndNextControlRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, PreviousAndNextControlRequest::DeviceInfo) };
    inline PreviousAndNextControlRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, PreviousAndNextControlRequest::DeviceInfo) };
    inline PreviousAndNextControlRequest& setDeviceInfo(const PreviousAndNextControlRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline PreviousAndNextControlRequest& setDeviceInfo(PreviousAndNextControlRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openControlPlayingListRequest Field Functions 
    bool hasOpenControlPlayingListRequest() const { return this->openControlPlayingListRequest_ != nullptr;};
    void deleteOpenControlPlayingListRequest() { this->openControlPlayingListRequest_ = nullptr;};
    inline const PreviousAndNextControlRequest::OpenControlPlayingListRequest & getOpenControlPlayingListRequest() const { DARABONBA_PTR_GET_CONST(openControlPlayingListRequest_, PreviousAndNextControlRequest::OpenControlPlayingListRequest) };
    inline PreviousAndNextControlRequest::OpenControlPlayingListRequest getOpenControlPlayingListRequest() { DARABONBA_PTR_GET(openControlPlayingListRequest_, PreviousAndNextControlRequest::OpenControlPlayingListRequest) };
    inline PreviousAndNextControlRequest& setOpenControlPlayingListRequest(const PreviousAndNextControlRequest::OpenControlPlayingListRequest & openControlPlayingListRequest) { DARABONBA_PTR_SET_VALUE(openControlPlayingListRequest_, openControlPlayingListRequest) };
    inline PreviousAndNextControlRequest& setOpenControlPlayingListRequest(PreviousAndNextControlRequest::OpenControlPlayingListRequest && openControlPlayingListRequest) { DARABONBA_PTR_SET_RVALUE(openControlPlayingListRequest_, openControlPlayingListRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const PreviousAndNextControlRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, PreviousAndNextControlRequest::UserInfo) };
    inline PreviousAndNextControlRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, PreviousAndNextControlRequest::UserInfo) };
    inline PreviousAndNextControlRequest& setUserInfo(const PreviousAndNextControlRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline PreviousAndNextControlRequest& setUserInfo(PreviousAndNextControlRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device ID information
    // 
    // This parameter is required.
    shared_ptr<PreviousAndNextControlRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    // 
    // This parameter is required.
    shared_ptr<PreviousAndNextControlRequest::OpenControlPlayingListRequest> openControlPlayingListRequest_ {};
    // User identity information
    // 
    // This parameter is required.
    shared_ptr<PreviousAndNextControlRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
