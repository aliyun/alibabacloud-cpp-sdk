// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDANDREMOVEFAVORITECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDANDREMOVEFAVORITECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class AddAndRemoveFavoriteContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddAndRemoveFavoriteContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenAddAndRemoveFavoriteContentRequest, openAddAndRemoveFavoriteContentRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, AddAndRemoveFavoriteContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenAddAndRemoveFavoriteContentRequest, openAddAndRemoveFavoriteContentRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    AddAndRemoveFavoriteContentRequest() = default ;
    AddAndRemoveFavoriteContentRequest(const AddAndRemoveFavoriteContentRequest &) = default ;
    AddAndRemoveFavoriteContentRequest(AddAndRemoveFavoriteContentRequest &&) = default ;
    AddAndRemoveFavoriteContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddAndRemoveFavoriteContentRequest() = default ;
    AddAndRemoveFavoriteContentRequest& operator=(const AddAndRemoveFavoriteContentRequest &) = default ;
    AddAndRemoveFavoriteContentRequest& operator=(AddAndRemoveFavoriteContentRequest &&) = default ;
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
      // Encoding type. There are multiple ways to obtain the user identifier for Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used for the Android application customer link. `SKILL_ID`: Skill ID, used for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User Identifier, set to userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // The type of User ID.
      // 
      // `OPEN_ID`: The default User ID identity. `UNION_ID`: The organization-dimension User ID identity. This value is available only after an organization has been requested on the Tmall Genie Skills Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required when IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class OpenAddAndRemoveFavoriteContentRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenAddAndRemoveFavoriteContentRequest& obj) { 
        DARABONBA_PTR_TO_JSON(FavoriteCmd, favoriteCmd_);
        DARABONBA_PTR_TO_JSON(OpenSourceRawIdPair, openSourceRawIdPair_);
        DARABONBA_PTR_TO_JSON(PackageType, packageType_);
      };
      friend void from_json(const Darabonba::Json& j, OpenAddAndRemoveFavoriteContentRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(FavoriteCmd, favoriteCmd_);
        DARABONBA_PTR_FROM_JSON(OpenSourceRawIdPair, openSourceRawIdPair_);
        DARABONBA_PTR_FROM_JSON(PackageType, packageType_);
      };
      OpenAddAndRemoveFavoriteContentRequest() = default ;
      OpenAddAndRemoveFavoriteContentRequest(const OpenAddAndRemoveFavoriteContentRequest &) = default ;
      OpenAddAndRemoveFavoriteContentRequest(OpenAddAndRemoveFavoriteContentRequest &&) = default ;
      OpenAddAndRemoveFavoriteContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenAddAndRemoveFavoriteContentRequest() = default ;
      OpenAddAndRemoveFavoriteContentRequest& operator=(const OpenAddAndRemoveFavoriteContentRequest &) = default ;
      OpenAddAndRemoveFavoriteContentRequest& operator=(OpenAddAndRemoveFavoriteContentRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OpenSourceRawIdPair : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OpenSourceRawIdPair& obj) { 
          DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
          DARABONBA_PTR_TO_JSON(RawId, rawId_);
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, OpenSourceRawIdPair& obj) { 
          DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
          DARABONBA_PTR_FROM_JSON(RawId, rawId_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
        };
        OpenSourceRawIdPair() = default ;
        OpenSourceRawIdPair(const OpenSourceRawIdPair &) = default ;
        OpenSourceRawIdPair(OpenSourceRawIdPair &&) = default ;
        OpenSourceRawIdPair(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OpenSourceRawIdPair() = default ;
        OpenSourceRawIdPair& operator=(const OpenSourceRawIdPair &) = default ;
        OpenSourceRawIdPair& operator=(OpenSourceRawIdPair &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->extendInfo_ == nullptr
        && this->rawId_ == nullptr && this->source_ == nullptr; };
        // extendInfo Field Functions 
        bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
        void deleteExtendInfo() { this->extendInfo_ = nullptr;};
        inline         const Darabonba::Json & getExtendInfo() const { DARABONBA_GET(extendInfo_) };
        Darabonba::Json & getExtendInfo() { DARABONBA_GET(extendInfo_) };
        inline OpenSourceRawIdPair& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
        inline OpenSourceRawIdPair& setExtendInfo(Darabonba::Json && extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


        // rawId Field Functions 
        bool hasRawId() const { return this->rawId_ != nullptr;};
        void deleteRawId() { this->rawId_ = nullptr;};
        inline string getRawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
        inline OpenSourceRawIdPair& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline OpenSourceRawIdPair& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        // Extension information
        Darabonba::Json extendInfo_ {};
        // Third-party ID
        // 
        // This parameter is required.
        shared_ptr<string> rawId_ {};
        // Source
        // 
        // This parameter is required.
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->favoriteCmd_ == nullptr
        && this->openSourceRawIdPair_ == nullptr && this->packageType_ == nullptr; };
      // favoriteCmd Field Functions 
      bool hasFavoriteCmd() const { return this->favoriteCmd_ != nullptr;};
      void deleteFavoriteCmd() { this->favoriteCmd_ = nullptr;};
      inline string getFavoriteCmd() const { DARABONBA_PTR_GET_DEFAULT(favoriteCmd_, "") };
      inline OpenAddAndRemoveFavoriteContentRequest& setFavoriteCmd(string favoriteCmd) { DARABONBA_PTR_SET_VALUE(favoriteCmd_, favoriteCmd) };


      // openSourceRawIdPair Field Functions 
      bool hasOpenSourceRawIdPair() const { return this->openSourceRawIdPair_ != nullptr;};
      void deleteOpenSourceRawIdPair() { this->openSourceRawIdPair_ = nullptr;};
      inline const OpenAddAndRemoveFavoriteContentRequest::OpenSourceRawIdPair & getOpenSourceRawIdPair() const { DARABONBA_PTR_GET_CONST(openSourceRawIdPair_, OpenAddAndRemoveFavoriteContentRequest::OpenSourceRawIdPair) };
      inline OpenAddAndRemoveFavoriteContentRequest::OpenSourceRawIdPair getOpenSourceRawIdPair() { DARABONBA_PTR_GET(openSourceRawIdPair_, OpenAddAndRemoveFavoriteContentRequest::OpenSourceRawIdPair) };
      inline OpenAddAndRemoveFavoriteContentRequest& setOpenSourceRawIdPair(const OpenAddAndRemoveFavoriteContentRequest::OpenSourceRawIdPair & openSourceRawIdPair) { DARABONBA_PTR_SET_VALUE(openSourceRawIdPair_, openSourceRawIdPair) };
      inline OpenAddAndRemoveFavoriteContentRequest& setOpenSourceRawIdPair(OpenAddAndRemoveFavoriteContentRequest::OpenSourceRawIdPair && openSourceRawIdPair) { DARABONBA_PTR_SET_RVALUE(openSourceRawIdPair_, openSourceRawIdPair) };


      // packageType Field Functions 
      bool hasPackageType() const { return this->packageType_ != nullptr;};
      void deletePackageType() { this->packageType_ = nullptr;};
      inline string getPackageType() const { DARABONBA_PTR_GET_DEFAULT(packageType_, "") };
      inline OpenAddAndRemoveFavoriteContentRequest& setPackageType(string packageType) { DARABONBA_PTR_SET_VALUE(packageType_, packageType) };


    protected:
      // Operation Type
      // 
      // ADD for collect; REMOVE for remove from favorites
      // 
      // This parameter is required.
      shared_ptr<string> favoriteCmd_ {};
      // Object to collect or remove from favorites
      // 
      // This parameter is required.
      shared_ptr<OpenAddAndRemoveFavoriteContentRequest::OpenSourceRawIdPair> openSourceRawIdPair_ {};
      // Content type
      // 
      // Content: CONTENT; Album: ALBUM; Playlist: COLLECT.
      // 
      // This parameter is required.
      shared_ptr<string> packageType_ {};
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
      // When the encoding type is `SKILL_ID`, the value is the Skill ID of the application. When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID for Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used for the Android application customer link. `SKILL_ID`: Skill ID, used for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to deviceOpenId or deviceUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of device ID
      // 
      // `OPEN_ID`: Default device ID identifier. `UNION_ID`: Device ID identifier at the organization dimension. This value is available only after an organization has been registered on the Tmall Genie Skill Application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->openAddAndRemoveFavoriteContentRequest_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const AddAndRemoveFavoriteContentRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, AddAndRemoveFavoriteContentRequest::DeviceInfo) };
    inline AddAndRemoveFavoriteContentRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, AddAndRemoveFavoriteContentRequest::DeviceInfo) };
    inline AddAndRemoveFavoriteContentRequest& setDeviceInfo(const AddAndRemoveFavoriteContentRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline AddAndRemoveFavoriteContentRequest& setDeviceInfo(AddAndRemoveFavoriteContentRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openAddAndRemoveFavoriteContentRequest Field Functions 
    bool hasOpenAddAndRemoveFavoriteContentRequest() const { return this->openAddAndRemoveFavoriteContentRequest_ != nullptr;};
    void deleteOpenAddAndRemoveFavoriteContentRequest() { this->openAddAndRemoveFavoriteContentRequest_ = nullptr;};
    inline const AddAndRemoveFavoriteContentRequest::OpenAddAndRemoveFavoriteContentRequest & getOpenAddAndRemoveFavoriteContentRequest() const { DARABONBA_PTR_GET_CONST(openAddAndRemoveFavoriteContentRequest_, AddAndRemoveFavoriteContentRequest::OpenAddAndRemoveFavoriteContentRequest) };
    inline AddAndRemoveFavoriteContentRequest::OpenAddAndRemoveFavoriteContentRequest getOpenAddAndRemoveFavoriteContentRequest() { DARABONBA_PTR_GET(openAddAndRemoveFavoriteContentRequest_, AddAndRemoveFavoriteContentRequest::OpenAddAndRemoveFavoriteContentRequest) };
    inline AddAndRemoveFavoriteContentRequest& setOpenAddAndRemoveFavoriteContentRequest(const AddAndRemoveFavoriteContentRequest::OpenAddAndRemoveFavoriteContentRequest & openAddAndRemoveFavoriteContentRequest) { DARABONBA_PTR_SET_VALUE(openAddAndRemoveFavoriteContentRequest_, openAddAndRemoveFavoriteContentRequest) };
    inline AddAndRemoveFavoriteContentRequest& setOpenAddAndRemoveFavoriteContentRequest(AddAndRemoveFavoriteContentRequest::OpenAddAndRemoveFavoriteContentRequest && openAddAndRemoveFavoriteContentRequest) { DARABONBA_PTR_SET_RVALUE(openAddAndRemoveFavoriteContentRequest_, openAddAndRemoveFavoriteContentRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const AddAndRemoveFavoriteContentRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, AddAndRemoveFavoriteContentRequest::UserInfo) };
    inline AddAndRemoveFavoriteContentRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, AddAndRemoveFavoriteContentRequest::UserInfo) };
    inline AddAndRemoveFavoriteContentRequest& setUserInfo(const AddAndRemoveFavoriteContentRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline AddAndRemoveFavoriteContentRequest& setUserInfo(AddAndRemoveFavoriteContentRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device identification information
    // 
    // This parameter is required.
    shared_ptr<AddAndRemoveFavoriteContentRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    // 
    // This parameter is required.
    shared_ptr<AddAndRemoveFavoriteContentRequest::OpenAddAndRemoveFavoriteContentRequest> openAddAndRemoveFavoriteContentRequest_ {};
    // User identification information
    // 
    // This parameter is required.
    shared_ptr<AddAndRemoveFavoriteContentRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
