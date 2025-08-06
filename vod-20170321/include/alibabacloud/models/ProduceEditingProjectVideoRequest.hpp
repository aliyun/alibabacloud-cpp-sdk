// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRODUCEEDITINGPROJECTVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PRODUCEEDITINGPROJECTVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ProduceEditingProjectVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ProduceEditingProjectVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(MediaMetadata, mediaMetadata_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ProduceConfig, produceConfig_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Timeline, timeline_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, ProduceEditingProjectVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(MediaMetadata, mediaMetadata_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ProduceConfig, produceConfig_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Timeline, timeline_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    ProduceEditingProjectVideoRequest() = default ;
    ProduceEditingProjectVideoRequest(const ProduceEditingProjectVideoRequest &) = default ;
    ProduceEditingProjectVideoRequest(ProduceEditingProjectVideoRequest &&) = default ;
    ProduceEditingProjectVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ProduceEditingProjectVideoRequest() = default ;
    ProduceEditingProjectVideoRequest& operator=(const ProduceEditingProjectVideoRequest &) = default ;
    ProduceEditingProjectVideoRequest& operator=(ProduceEditingProjectVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->coverURL_ != nullptr && this->description_ != nullptr && this->mediaMetadata_ != nullptr && this->ownerId_ != nullptr && this->produceConfig_ != nullptr
        && this->projectId_ != nullptr && this->resourceOwnerAccount_ != nullptr && this->resourceOwnerId_ != nullptr && this->timeline_ != nullptr && this->title_ != nullptr
        && this->userData_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ProduceEditingProjectVideoRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline ProduceEditingProjectVideoRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ProduceEditingProjectVideoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // mediaMetadata Field Functions 
    bool hasMediaMetadata() const { return this->mediaMetadata_ != nullptr;};
    void deleteMediaMetadata() { this->mediaMetadata_ = nullptr;};
    inline string mediaMetadata() const { DARABONBA_PTR_GET_DEFAULT(mediaMetadata_, "") };
    inline ProduceEditingProjectVideoRequest& setMediaMetadata(string mediaMetadata) { DARABONBA_PTR_SET_VALUE(mediaMetadata_, mediaMetadata) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ProduceEditingProjectVideoRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // produceConfig Field Functions 
    bool hasProduceConfig() const { return this->produceConfig_ != nullptr;};
    void deleteProduceConfig() { this->produceConfig_ = nullptr;};
    inline string produceConfig() const { DARABONBA_PTR_GET_DEFAULT(produceConfig_, "") };
    inline ProduceEditingProjectVideoRequest& setProduceConfig(string produceConfig) { DARABONBA_PTR_SET_VALUE(produceConfig_, produceConfig) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ProduceEditingProjectVideoRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string resourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ProduceEditingProjectVideoRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t resourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ProduceEditingProjectVideoRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // timeline Field Functions 
    bool hasTimeline() const { return this->timeline_ != nullptr;};
    void deleteTimeline() { this->timeline_ = nullptr;};
    inline string timeline() const { DARABONBA_PTR_GET_DEFAULT(timeline_, "") };
    inline ProduceEditingProjectVideoRequest& setTimeline(string timeline) { DARABONBA_PTR_SET_VALUE(timeline_, timeline) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ProduceEditingProjectVideoRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline ProduceEditingProjectVideoRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The ID of the application. Default value: **app-1000000**. For more information, see [Multi-application service](https://help.aliyun.com/document_detail/113600.html).
    std::shared_ptr<string> appId_ = nullptr;
    // The thumbnail URL of the online editing project.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The description of the online editing project.
    std::shared_ptr<string> description_ = nullptr;
    // The video metadata. The value must be in JSON format. For more information about the parameter structure, see [MediaMetadata](~~52839#title_rtf_ry5_gjp~~).
    std::shared_ptr<string> mediaMetadata_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The configuration of video production. The value must be in the JSON format. For more information about the parameter structure, see [ProduceConfig](~~52839#title-ybl-7cs-y7d~~).
    // 
    // >  StorageLocation is required if you produce videos in a region other than China (Shanghai).
    std::shared_ptr<string> produceConfig_ = nullptr;
    // The ID of the online editing project. You can use one of the following methods to obtain the ID of the online editing project:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Production Center** > **Video Editing** to view the ID of the online editing project.
    // *   Obtain the value of ProjectId from the response to the [AddEditingProject](https://help.aliyun.com/document_detail/69048.html) operation.
    std::shared_ptr<string> projectId_ = nullptr;
    std::shared_ptr<string> resourceOwnerAccount_ = nullptr;
    std::shared_ptr<int64_t> resourceOwnerId_ = nullptr;
    // The timeline of the online editing project. The value must be in JSON format. For more information about the parameter structure, see [Timeline](~~52839#07bc7fe0f2xuh~~).
    std::shared_ptr<string> timeline_ = nullptr;
    // The title of the online editing project.
    std::shared_ptr<string> title_ = nullptr;
    // The custom configurations, such as the callback configuration. The value must be a JSON string. For more information about the parameter structure, see [UserData](~~86952#title_vz7_xzs_0c5~~).
    // 
    // > The callback configurations take effect only after you specify an HTTP URL for receiving callback notifications and select the event types in the ApsaraVideo VOD console.
    std::shared_ptr<string> userData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
