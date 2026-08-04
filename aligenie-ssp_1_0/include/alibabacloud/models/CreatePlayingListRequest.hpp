// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLAYINGLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLAYINGLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CreatePlayingListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePlayingListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequest_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePlayingListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(OpenCreatePlayingListRequest, openCreatePlayingListRequest_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CreatePlayingListRequest() = default ;
    CreatePlayingListRequest(const CreatePlayingListRequest &) = default ;
    CreatePlayingListRequest(CreatePlayingListRequest &&) = default ;
    CreatePlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePlayingListRequest() = default ;
    CreatePlayingListRequest& operator=(const CreatePlayingListRequest &) = default ;
    CreatePlayingListRequest& operator=(CreatePlayingListRequest &&) = default ;
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
      // When the encoding type is `SKILL_ID`, the value is the application\\"s Skill ID.  
      // When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the user identifier for Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used as the encoding type for the Android application customer link.  
      // `SKILL_ID`: Skill ID, used as the encoding type for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // User identifier, set to either userOpenId or userUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of User ID.
      // 
      // `OPEN_ID`: Default User ID identity.  
      // `UNION_ID`: Organization-dimension User ID identity. This value is available only after an organization has been requested on the Tmall Genie skill application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    class OpenCreatePlayingListRequest : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OpenCreatePlayingListRequest& obj) { 
        DARABONBA_PTR_TO_JSON(ContentList, contentList_);
        DARABONBA_PTR_TO_JSON(ContentType, contentType_);
        DARABONBA_ANY_TO_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_TO_JSON(Index, index_);
        DARABONBA_PTR_TO_JSON(NeedAlbumContinued, needAlbumContinued_);
        DARABONBA_PTR_TO_JSON(PlayFrom, playFrom_);
        DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
      };
      friend void from_json(const Darabonba::Json& j, OpenCreatePlayingListRequest& obj) { 
        DARABONBA_PTR_FROM_JSON(ContentList, contentList_);
        DARABONBA_PTR_FROM_JSON(ContentType, contentType_);
        DARABONBA_ANY_FROM_JSON(ExtendInfo, extendInfo_);
        DARABONBA_PTR_FROM_JSON(Index, index_);
        DARABONBA_PTR_FROM_JSON(NeedAlbumContinued, needAlbumContinued_);
        DARABONBA_PTR_FROM_JSON(PlayFrom, playFrom_);
        DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
      };
      OpenCreatePlayingListRequest() = default ;
      OpenCreatePlayingListRequest(const OpenCreatePlayingListRequest &) = default ;
      OpenCreatePlayingListRequest(OpenCreatePlayingListRequest &&) = default ;
      OpenCreatePlayingListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OpenCreatePlayingListRequest() = default ;
      OpenCreatePlayingListRequest& operator=(const OpenCreatePlayingListRequest &) = default ;
      OpenCreatePlayingListRequest& operator=(OpenCreatePlayingListRequest &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ContentList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ContentList& obj) { 
          DARABONBA_PTR_TO_JSON(RawId, rawId_);
          DARABONBA_PTR_TO_JSON(Source, source_);
        };
        friend void from_json(const Darabonba::Json& j, ContentList& obj) { 
          DARABONBA_PTR_FROM_JSON(RawId, rawId_);
          DARABONBA_PTR_FROM_JSON(Source, source_);
        };
        ContentList() = default ;
        ContentList(const ContentList &) = default ;
        ContentList(ContentList &&) = default ;
        ContentList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ContentList() = default ;
        ContentList& operator=(const ContentList &) = default ;
        ContentList& operator=(ContentList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->rawId_ == nullptr
        && this->source_ == nullptr; };
        // rawId Field Functions 
        bool hasRawId() const { return this->rawId_ != nullptr;};
        void deleteRawId() { this->rawId_ = nullptr;};
        inline string getRawId() const { DARABONBA_PTR_GET_DEFAULT(rawId_, "") };
        inline ContentList& setRawId(string rawId) { DARABONBA_PTR_SET_VALUE(rawId_, rawId) };


        // source Field Functions 
        bool hasSource() const { return this->source_ != nullptr;};
        void deleteSource() { this->source_ = nullptr;};
        inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
        inline ContentList& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      protected:
        // Third-party ID.
        // 
        // If the content type is "content", this is the content ID. If it is "album", this is the album ID.
        // 
        // This parameter is required.
        shared_ptr<string> rawId_ {};
        // Source
        // 
        // This parameter is required.
        shared_ptr<string> source_ {};
      };

      virtual bool empty() const override { return this->contentList_ == nullptr
        && this->contentType_ == nullptr && this->extendInfo_ == nullptr && this->index_ == nullptr && this->needAlbumContinued_ == nullptr && this->playFrom_ == nullptr
        && this->playMode_ == nullptr; };
      // contentList Field Functions 
      bool hasContentList() const { return this->contentList_ != nullptr;};
      void deleteContentList() { this->contentList_ = nullptr;};
      inline const vector<OpenCreatePlayingListRequest::ContentList> & getContentList() const { DARABONBA_PTR_GET_CONST(contentList_, vector<OpenCreatePlayingListRequest::ContentList>) };
      inline vector<OpenCreatePlayingListRequest::ContentList> getContentList() { DARABONBA_PTR_GET(contentList_, vector<OpenCreatePlayingListRequest::ContentList>) };
      inline OpenCreatePlayingListRequest& setContentList(const vector<OpenCreatePlayingListRequest::ContentList> & contentList) { DARABONBA_PTR_SET_VALUE(contentList_, contentList) };
      inline OpenCreatePlayingListRequest& setContentList(vector<OpenCreatePlayingListRequest::ContentList> && contentList) { DARABONBA_PTR_SET_RVALUE(contentList_, contentList) };


      // contentType Field Functions 
      bool hasContentType() const { return this->contentType_ != nullptr;};
      void deleteContentType() { this->contentType_ = nullptr;};
      inline string getContentType() const { DARABONBA_PTR_GET_DEFAULT(contentType_, "") };
      inline OpenCreatePlayingListRequest& setContentType(string contentType) { DARABONBA_PTR_SET_VALUE(contentType_, contentType) };


      // extendInfo Field Functions 
      bool hasExtendInfo() const { return this->extendInfo_ != nullptr;};
      void deleteExtendInfo() { this->extendInfo_ = nullptr;};
      inline       const Darabonba::Json & getExtendInfo() const { DARABONBA_GET(extendInfo_) };
      Darabonba::Json & getExtendInfo() { DARABONBA_GET(extendInfo_) };
      inline OpenCreatePlayingListRequest& setExtendInfo(const Darabonba::Json & extendInfo) { DARABONBA_SET_VALUE(extendInfo_, extendInfo) };
      inline OpenCreatePlayingListRequest& setExtendInfo(Darabonba::Json && extendInfo) { DARABONBA_SET_RVALUE(extendInfo_, extendInfo) };


      // index Field Functions 
      bool hasIndex() const { return this->index_ != nullptr;};
      void deleteIndex() { this->index_ = nullptr;};
      inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
      inline OpenCreatePlayingListRequest& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


      // needAlbumContinued Field Functions 
      bool hasNeedAlbumContinued() const { return this->needAlbumContinued_ != nullptr;};
      void deleteNeedAlbumContinued() { this->needAlbumContinued_ = nullptr;};
      inline bool getNeedAlbumContinued() const { DARABONBA_PTR_GET_DEFAULT(needAlbumContinued_, false) };
      inline OpenCreatePlayingListRequest& setNeedAlbumContinued(bool needAlbumContinued) { DARABONBA_PTR_SET_VALUE(needAlbumContinued_, needAlbumContinued) };


      // playFrom Field Functions 
      bool hasPlayFrom() const { return this->playFrom_ != nullptr;};
      void deletePlayFrom() { this->playFrom_ = nullptr;};
      inline string getPlayFrom() const { DARABONBA_PTR_GET_DEFAULT(playFrom_, "") };
      inline OpenCreatePlayingListRequest& setPlayFrom(string playFrom) { DARABONBA_PTR_SET_VALUE(playFrom_, playFrom) };


      // playMode Field Functions 
      bool hasPlayMode() const { return this->playMode_ != nullptr;};
      void deletePlayMode() { this->playMode_ = nullptr;};
      inline string getPlayMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
      inline OpenCreatePlayingListRequest& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


    protected:
      // Playback content list.
      // 
      // If the content type is "content", multiple entries are supported. If it is "album", only the first entry takes effect.
      // 
      // This parameter is required.
      shared_ptr<vector<OpenCreatePlayingListRequest::ContentList>> contentList_ {};
      // Content type for playback.
      // 
      // Values: "content" for content, "album" for album, and "collect" for playlist.
      // 
      // This parameter is required.
      shared_ptr<string> contentType_ {};
      // extension information
      Darabonba::Json extendInfo_ {};
      // Playback index.
      // 
      // Can be empty. Default is 0, indicating playback starts from the beginning.
      shared_ptr<int32_t> index_ {};
      // Whether to resume album playback. For example, if the user previously listened up to episode 5 of an album, whether to continue from episode 5. Default is true.
      shared_ptr<bool> needAlbumContinued_ {};
      // Playback source, the UUID for configuring playback control capabilities.
      // 
      // Can be empty. Default is "default".
      shared_ptr<string> playFrom_ {};
      // Playback pattern.
      // 
      // Repeat: list loop; Shuffle: random; RepeatOne: single track loop; Normal: sequential playback.
      shared_ptr<string> playMode_ {};
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
      // When the encoding type is `SKILL_ID`, the value is the application\\"s Skill ID.  
      // When the encoding type is `PACKAGE_NAME`, the value is the packageName of the corresponding client app.
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type. There are multiple ways to obtain the device ID for Tmall Genie, and each method corresponds to a different encoding type.
      // 
      // `PACKAGE_NAME`: APK package name, used as the encoding type for the Android application customer link.  
      // `SKILL_ID`: Skill ID, used as the encoding type for the cloud-based link.
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Device ID, set to either deviceOpenId or deviceUnionId.
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // Type of device ID.
      // 
      // `OPEN_ID`: Default device ID identity.  
      // `UNION_ID`: Organization-dimension device ID identity. This value is available only after an organization has been requested on the Tmall Genie skill application Open Platform.
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID. Required if IdType is UNION_ID.
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->deviceInfo_ == nullptr
        && this->openCreatePlayingListRequest_ == nullptr && this->userInfo_ == nullptr; };
    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CreatePlayingListRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CreatePlayingListRequest::DeviceInfo) };
    inline CreatePlayingListRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CreatePlayingListRequest::DeviceInfo) };
    inline CreatePlayingListRequest& setDeviceInfo(const CreatePlayingListRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CreatePlayingListRequest& setDeviceInfo(CreatePlayingListRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // openCreatePlayingListRequest Field Functions 
    bool hasOpenCreatePlayingListRequest() const { return this->openCreatePlayingListRequest_ != nullptr;};
    void deleteOpenCreatePlayingListRequest() { this->openCreatePlayingListRequest_ = nullptr;};
    inline const CreatePlayingListRequest::OpenCreatePlayingListRequest & getOpenCreatePlayingListRequest() const { DARABONBA_PTR_GET_CONST(openCreatePlayingListRequest_, CreatePlayingListRequest::OpenCreatePlayingListRequest) };
    inline CreatePlayingListRequest::OpenCreatePlayingListRequest getOpenCreatePlayingListRequest() { DARABONBA_PTR_GET(openCreatePlayingListRequest_, CreatePlayingListRequest::OpenCreatePlayingListRequest) };
    inline CreatePlayingListRequest& setOpenCreatePlayingListRequest(const CreatePlayingListRequest::OpenCreatePlayingListRequest & openCreatePlayingListRequest) { DARABONBA_PTR_SET_VALUE(openCreatePlayingListRequest_, openCreatePlayingListRequest) };
    inline CreatePlayingListRequest& setOpenCreatePlayingListRequest(CreatePlayingListRequest::OpenCreatePlayingListRequest && openCreatePlayingListRequest) { DARABONBA_PTR_SET_RVALUE(openCreatePlayingListRequest_, openCreatePlayingListRequest) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CreatePlayingListRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CreatePlayingListRequest::UserInfo) };
    inline CreatePlayingListRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, CreatePlayingListRequest::UserInfo) };
    inline CreatePlayingListRequest& setUserInfo(const CreatePlayingListRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CreatePlayingListRequest& setUserInfo(CreatePlayingListRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Device ID information
    // 
    // This parameter is required.
    shared_ptr<CreatePlayingListRequest::DeviceInfo> deviceInfo_ {};
    // Business parameters
    // 
    // This parameter is required.
    shared_ptr<CreatePlayingListRequest::OpenCreatePlayingListRequest> openCreatePlayingListRequest_ {};
    // User identity information
    // 
    // This parameter is required.
    shared_ptr<CreatePlayingListRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
