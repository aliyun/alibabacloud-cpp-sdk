// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDPLAYERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDPLAYERREQUEST_HPP_
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
  class CloudPlayerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudPlayerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurPlayIndex, curPlayIndex_);
      DARABONBA_PTR_TO_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_TO_JSON(PlayMode, playMode_);
      DARABONBA_PTR_TO_JSON(SongId, songId_);
      DARABONBA_PTR_TO_JSON(SongIdList, songIdList_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(UserInfo, userInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CloudPlayerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurPlayIndex, curPlayIndex_);
      DARABONBA_PTR_FROM_JSON(DeviceInfo, deviceInfo_);
      DARABONBA_PTR_FROM_JSON(PlayMode, playMode_);
      DARABONBA_PTR_FROM_JSON(SongId, songId_);
      DARABONBA_PTR_FROM_JSON(SongIdList, songIdList_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(UserInfo, userInfo_);
    };
    CloudPlayerRequest() = default ;
    CloudPlayerRequest(const CloudPlayerRequest &) = default ;
    CloudPlayerRequest(CloudPlayerRequest &&) = default ;
    CloudPlayerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudPlayerRequest() = default ;
    CloudPlayerRequest& operator=(const CloudPlayerRequest &) = default ;
    CloudPlayerRequest& operator=(CloudPlayerRequest &&) = default ;
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
      // Encoding key
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Open ID
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // ID Type
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID (can be empty)
      shared_ptr<string> organizationId_ {};
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
      // Encoding key
      // 
      // This parameter is required.
      shared_ptr<string> encodeKey_ {};
      // Encoding type
      // 
      // This parameter is required.
      shared_ptr<string> encodeType_ {};
      // Open ID
      // 
      // This parameter is required.
      shared_ptr<string> id_ {};
      // ID Type
      // 
      // This parameter is required.
      shared_ptr<string> idType_ {};
      // Organization ID (can be empty)
      shared_ptr<string> organizationId_ {};
    };

    virtual bool empty() const override { return this->curPlayIndex_ == nullptr
        && this->deviceInfo_ == nullptr && this->playMode_ == nullptr && this->songId_ == nullptr && this->songIdList_ == nullptr && this->source_ == nullptr
        && this->userInfo_ == nullptr; };
    // curPlayIndex Field Functions 
    bool hasCurPlayIndex() const { return this->curPlayIndex_ != nullptr;};
    void deleteCurPlayIndex() { this->curPlayIndex_ = nullptr;};
    inline int32_t getCurPlayIndex() const { DARABONBA_PTR_GET_DEFAULT(curPlayIndex_, 0) };
    inline CloudPlayerRequest& setCurPlayIndex(int32_t curPlayIndex) { DARABONBA_PTR_SET_VALUE(curPlayIndex_, curPlayIndex) };


    // deviceInfo Field Functions 
    bool hasDeviceInfo() const { return this->deviceInfo_ != nullptr;};
    void deleteDeviceInfo() { this->deviceInfo_ = nullptr;};
    inline const CloudPlayerRequest::DeviceInfo & getDeviceInfo() const { DARABONBA_PTR_GET_CONST(deviceInfo_, CloudPlayerRequest::DeviceInfo) };
    inline CloudPlayerRequest::DeviceInfo getDeviceInfo() { DARABONBA_PTR_GET(deviceInfo_, CloudPlayerRequest::DeviceInfo) };
    inline CloudPlayerRequest& setDeviceInfo(const CloudPlayerRequest::DeviceInfo & deviceInfo) { DARABONBA_PTR_SET_VALUE(deviceInfo_, deviceInfo) };
    inline CloudPlayerRequest& setDeviceInfo(CloudPlayerRequest::DeviceInfo && deviceInfo) { DARABONBA_PTR_SET_RVALUE(deviceInfo_, deviceInfo) };


    // playMode Field Functions 
    bool hasPlayMode() const { return this->playMode_ != nullptr;};
    void deletePlayMode() { this->playMode_ = nullptr;};
    inline string getPlayMode() const { DARABONBA_PTR_GET_DEFAULT(playMode_, "") };
    inline CloudPlayerRequest& setPlayMode(string playMode) { DARABONBA_PTR_SET_VALUE(playMode_, playMode) };


    // songId Field Functions 
    bool hasSongId() const { return this->songId_ != nullptr;};
    void deleteSongId() { this->songId_ = nullptr;};
    inline string getSongId() const { DARABONBA_PTR_GET_DEFAULT(songId_, "") };
    inline CloudPlayerRequest& setSongId(string songId) { DARABONBA_PTR_SET_VALUE(songId_, songId) };


    // songIdList Field Functions 
    bool hasSongIdList() const { return this->songIdList_ != nullptr;};
    void deleteSongIdList() { this->songIdList_ = nullptr;};
    inline const vector<string> & getSongIdList() const { DARABONBA_PTR_GET_CONST(songIdList_, vector<string>) };
    inline vector<string> getSongIdList() { DARABONBA_PTR_GET(songIdList_, vector<string>) };
    inline CloudPlayerRequest& setSongIdList(const vector<string> & songIdList) { DARABONBA_PTR_SET_VALUE(songIdList_, songIdList) };
    inline CloudPlayerRequest& setSongIdList(vector<string> && songIdList) { DARABONBA_PTR_SET_RVALUE(songIdList_, songIdList) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CloudPlayerRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // userInfo Field Functions 
    bool hasUserInfo() const { return this->userInfo_ != nullptr;};
    void deleteUserInfo() { this->userInfo_ = nullptr;};
    inline const CloudPlayerRequest::UserInfo & getUserInfo() const { DARABONBA_PTR_GET_CONST(userInfo_, CloudPlayerRequest::UserInfo) };
    inline CloudPlayerRequest::UserInfo getUserInfo() { DARABONBA_PTR_GET(userInfo_, CloudPlayerRequest::UserInfo) };
    inline CloudPlayerRequest& setUserInfo(const CloudPlayerRequest::UserInfo & userInfo) { DARABONBA_PTR_SET_VALUE(userInfo_, userInfo) };
    inline CloudPlayerRequest& setUserInfo(CloudPlayerRequest::UserInfo && userInfo) { DARABONBA_PTR_SET_RVALUE(userInfo_, userInfo) };


  protected:
    // Index of the currently playing song. Starts from 1.
    // 
    // This parameter is required.
    shared_ptr<int32_t> curPlayIndex_ {};
    // Device identity information
    // 
    // This parameter is required.
    shared_ptr<CloudPlayerRequest::DeviceInfo> deviceInfo_ {};
    // Playback pattern
    // 
    // This parameter is required.
    shared_ptr<string> playMode_ {};
    // Song ID (used to recompute the index when the index is invalid)
    shared_ptr<string> songId_ {};
    // List of song IDs (1–200 songs)
    // 
    // This parameter is required.
    shared_ptr<vector<string>> songIdList_ {};
    // Source of cloud-recommended songs
    // 
    // This parameter is required.
    shared_ptr<string> source_ {};
    // Open user information
    // 
    // This parameter is required.
    shared_ptr<CloudPlayerRequest::UserInfo> userInfo_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
