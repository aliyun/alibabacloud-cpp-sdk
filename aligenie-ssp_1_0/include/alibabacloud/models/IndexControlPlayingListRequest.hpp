// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INDEXCONTROLPLAYINGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INDEXCONTROLPLAYINGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class IndexControlPlayingListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IndexControlPlayingListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenIndexControlRequest, openIndexControlRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, IndexControlPlayingListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenIndexControlRequest, openIndexControlRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    IndexControlPlayingListRequest() = default ;
    IndexControlPlayingListRequest(const IndexControlPlayingListRequest &) = default ;
    IndexControlPlayingListRequest(IndexControlPlayingListRequest &&) = default ;
    IndexControlPlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IndexControlPlayingListRequest() = default ;
    IndexControlPlayingListRequest& operator=(const IndexControlPlayingListRequest &) = default ;
    IndexControlPlayingListRequest& operator=(IndexControlPlayingListRequest &&) = default ;
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
      // When the encoding type is `SKILL_ID`, the value is the Skill ID of the application. When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the User Identifier for Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used for the Android application customer link. `SKILL_ID`: Skill ID, used for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User Identifier, set to userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of User ID
      // 
      // `OPEN_ID`: The default User ID identity. `UNION_ID`: The organization-dimension User ID identity, which is available only after an organization has been requested on the Tmall Genie Skills Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class OpenIndexControlRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenIndexControlRequest& obj) { 
        DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(NeedContentContinued, needContentContinued_);
      };
      friend void from_json(const Darabonba::Json& j, OpenIndexControlRequest& obj) { 
        DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(NeedContentContinued, needContentContinued_);
      };
      OpenIndexControlRequest() = default ;
      OpenIndexControlRequest(const OpenIndexControlRequest &) = default ;
      OpenIndexControlRequest(OpenIndexControlRequest &&) = default ;
      OpenIndexControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenIndexControlRequest() = default ;
      OpenIndexControlRequest& operator=(const OpenIndexControlRequest &) = default ;
      OpenIndexControlRequest& operator=(OpenIndexControlRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->extendInfo_ == nullptr
        && this->index_ == nullptr && this->needContentContinued_ == nullptr; };
      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline       const Darabonba::Json & getExtendInfo() const { DARABONBA_GET(extendInfo_) };
      Darabonba::Json & getExtendInfo() { DARABONBA_GET(extendInfo_) };
      inline OpenIndexControlRequest& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
      inline OpenIndexControlRequest& setExtendInfo(Darabonba::Json && extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline OpenIndexControlRequest& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // needContentContinued Field Functions 
      bool hasNeedContentContinued() const { return this->needContentContinued_ != nullptr;};
      void deleteNeedContentContinued() { this->needContentContinued_ = nullptr;};
      inline bool getNeedContentContinued() const { DARABONBA_PTR_GET_DEFAULT(needContentContinued_, false) };
      inline OpenIndexControlRequest& setNeedContentContinued(bool needContentContinued) { DARABONBA_PTR_SET_VALUE(needContentContinued_, needContentContinued) };


    protected:
      // Extension information
      Darabonba::Json extendInfo_ {};
      // The index to be played back
      // 
      // This parameter is required.
      shared_ptr<int32_t> index_ {};
      // Whether content playback should continue. Default is false.
      shared_ptr<bool> needContentContinued_ {};
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
      // `PACKAGE_NAME`: APK package name, used for the Android application customer link. `SKILL_ID`: Skill ID, used for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to either deviceOpenId or deviceUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of device ID
      // 
      // `OPEN_ID`: The default device ID identity. `UNION_ID`: Device ID identity at the organization dimension. This value is available only after an organization has been requested on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->openIndexControlRequest_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const IndexControlPlayingListRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, IndexControlPlayingListRequest::DeviceInfo) };
    inline IndexControlPlayingListRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, IndexControlPlayingListRequest::DeviceInfo) };
    inline IndexControlPlayingListRequest& setDeviceInfo(const IndexControlPlayingListRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline IndexControlPlayingListRequest& setDeviceInfo(IndexControlPlayingListRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openIndexControlRequest Field Functions 
    bool hasOpenIndexControlRequest() const { return this->openIndexControlRequest_ != nullptr;};
    void deleteOpenIndexControlRequest() { this->openIndexControlRequest_ = nullptr;};
    inline const IndexControlPlayingListRequest::OpenIndexControlRequest & getOpenIndexControlRequest() const { DARABONBA_PTR_GET_CONST(openIndexControlRequest_, IndexControlPlayingListRequest::OpenIndexControlRequest) };
    inline IndexControlPlayingListRequest::OpenIndexControlRequest getOpenIndexControlRequest() { DARABONBA_PTR_GET(openIndexControlRequest_, IndexControlPlayingListRequest::OpenIndexControlRequest) };
    inline IndexControlPlayingListRequest& setOpenIndexControlRequest(const IndexControlPlayingListRequest::OpenIndexControlRequest & openIndexControlRequest) { DARABONBA_PTR_SET_VALUE(openIndexControlRequest_, openIndexControlRequest) };
    inline IndexControlPlayingListRequest& setOpenIndexControlRequest(IndexControlPlayingListRequest::OpenIndexControlRequest && openIndexControlRequest) { DARABONBA_PTR_SET_RVALUE(openIndexControlRequest_, openIndexControlRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const IndexControlPlayingListRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, IndexControlPlayingListRequest::UserInfo) };
    inline IndexControlPlayingListRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, IndexControlPlayingListRequest::UserInfo) };
    inline IndexControlPlayingListRequest& setUserInfo(const IndexControlPlayingListRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline IndexControlPlayingListRequest& setUserInfo(IndexControlPlayingListRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // This parameter is required.
    shared_ptr<IndexControlPlayingListRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    // 
    // This parameter is required.
    shared_ptr<IndexControlPlayingListRequest::OpenIndexControlRequest> openIndexControlRequest_ {};
    // User Identifier information
    // 
    // This parameter is required.
    shared_ptr<IndexControlPlayingListRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
