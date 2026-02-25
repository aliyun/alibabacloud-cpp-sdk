// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITMEDIACENSORJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITMEDIACENSORJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitMediaCensorJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitMediaCensorJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Barrages, barrages_);
      DARABONBA_PTR_TO_JSON(CoverImages, coverImages_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoCensorConfig, videoCensorConfig_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitMediaCensorJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Barrages, barrages_);
      DARABONBA_PTR_FROM_JSON(CoverImages, coverImages_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ExternalUrl, externalUrl_);
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoCensorConfig, videoCensorConfig_);
    };
    SubmitMediaCensorJobRequest() = default ;
    SubmitMediaCensorJobRequest(const SubmitMediaCensorJobRequest &) = default ;
    SubmitMediaCensorJobRequest(SubmitMediaCensorJobRequest &&) = default ;
    SubmitMediaCensorJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitMediaCensorJobRequest() = default ;
    SubmitMediaCensorJobRequest& operator=(const SubmitMediaCensorJobRequest &) = default ;
    SubmitMediaCensorJobRequest& operator=(SubmitMediaCensorJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->barrages_ == nullptr
        && this->coverImages_ == nullptr && this->description_ == nullptr && this->externalUrl_ == nullptr && this->input_ == nullptr && this->ownerAccount_ == nullptr
        && this->ownerId_ == nullptr && this->pipelineId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->title_ == nullptr
        && this->userData_ == nullptr && this->videoCensorConfig_ == nullptr; };
    // barrages Field Functions 
    bool hasBarrages() const { return this->barrages_ != nullptr;};
    void deleteBarrages() { this->barrages_ = nullptr;};
    inline string getBarrages() const { DARABONBA_PTR_GET_DEFAULT(barrages_, "") };
    inline SubmitMediaCensorJobRequest& setBarrages(string barrages) { DARABONBA_PTR_SET_VALUE(barrages_, barrages) };


    // coverImages Field Functions 
    bool hasCoverImages() const { return this->coverImages_ != nullptr;};
    void deleteCoverImages() { this->coverImages_ = nullptr;};
    inline string getCoverImages() const { DARABONBA_PTR_GET_DEFAULT(coverImages_, "") };
    inline SubmitMediaCensorJobRequest& setCoverImages(string coverImages) { DARABONBA_PTR_SET_VALUE(coverImages_, coverImages) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline SubmitMediaCensorJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // externalUrl Field Functions 
    bool hasExternalUrl() const { return this->externalUrl_ != nullptr;};
    void deleteExternalUrl() { this->externalUrl_ = nullptr;};
    inline string getExternalUrl() const { DARABONBA_PTR_GET_DEFAULT(externalUrl_, "") };
    inline SubmitMediaCensorJobRequest& setExternalUrl(string externalUrl) { DARABONBA_PTR_SET_VALUE(externalUrl_, externalUrl) };


    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline string getInput() const { DARABONBA_PTR_GET_DEFAULT(input_, "") };
    inline SubmitMediaCensorJobRequest& setInput(string input) { DARABONBA_PTR_SET_VALUE(input_, input) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline SubmitMediaCensorJobRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SubmitMediaCensorJobRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pipelineId Field Functions 
    bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
    void deletePipelineId() { this->pipelineId_ = nullptr;};
    inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
    inline SubmitMediaCensorJobRequest& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline SubmitMediaCensorJobRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline SubmitMediaCensorJobRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitMediaCensorJobRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitMediaCensorJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoCensorConfig Field Functions 
    bool hasVideoCensorConfig() const { return this->videoCensorConfig_ != nullptr;};
    void deleteVideoCensorConfig() { this->videoCensorConfig_ = nullptr;};
    inline string getVideoCensorConfig() const { DARABONBA_PTR_GET_DEFAULT(videoCensorConfig_, "") };
    inline SubmitMediaCensorJobRequest& setVideoCensorConfig(string videoCensorConfig) { DARABONBA_PTR_SET_VALUE(videoCensorConfig_, videoCensorConfig) };


  protected:
    // The live comments.
    shared_ptr<string> barrages_ {};
    // The OSS URL of the image file that is used as the thumbnail. To view the OSS URL of the image file, you can log on to the **MPS console** and choose **Media Management** > **Media List** in the left-side navigation pane. You can specify up to five thumbnails in a JSON array.
    // 
    // *   Bucket: the name of the OSS bucket that stores the input file.
    // 
    // *   Location: the OSS region. The OSS region must be the same as the region in which your MPS service is activated.
    // 
    // *   Object: the OSS object to be moderated.
    // 
    //     **
    // 
    //     **Note**The name of the object cannot start with a forward slash (/). Otherwise, the operation fails to be called.
    shared_ptr<string> coverImages_ {};
    // The description of the video. The value can be up to 128 bytes in size.
    shared_ptr<string> description_ {};
    // The URL of the video.
    shared_ptr<string> externalUrl_ {};
    // The Object Storage Service (OSS) URL of the media file to be moderated. To view the OSS URL of the media file, you can log on to the **MPS console** and choose **Media Management** > **Media List** in the left-side navigation pane. To moderate an image file, use the `CoverImage` parameter to specify the OSS URL of the image file. The value is a JSON object. For more information, see the "Input" section of the [Parameter details](https://help.aliyun.com/document_detail/29253.html) topic.
    // 
    // *   Bucket: the name of the OSS bucket that stores the input file.
    // 
    // *   Location: the OSS region. The OSS region must be the same as the region in which your MPS service is activated.
    // 
    // *   Object: the OSS object to be moderated.
    // 
    //     **
    // 
    //     **Note**The name of the object cannot start with a forward slash (/). Otherwise, the operation fails to be called.
    shared_ptr<string> input_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the MPS queue. This ID can be used to associate the job with a notification method. To view the ID of the MPS queue, you can log on to the **MPS console** and choose **Global Settings** > **Pipelines** in the left-side navigation pane. An empty string ("") indicates that the default MPS queue is used to run the job. By default, an MPS queue can process a maximum of 10 concurrent content moderation jobs. To increase the limit, [submit a ticket](https://workorder-intl.console.aliyun.com/?spm=5176.12246746.top-nav.ditem-sub.35da7bbcitpQnr#/ticket/createIndex).
    // 
    // > MPS queues are automatically created by the system. For more information about how to query and update MPS queues, see the [UpdatePipeline](https://help.aliyun.com/document_detail/188374.html) topic.
    shared_ptr<string> pipelineId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The title of the video. The value can be up to 64 bytes in size.
    shared_ptr<string> title_ {};
    // The custom data. The value can be up to 128 bytes in size.
    shared_ptr<string> userData_ {};
    // The video moderation configurations and the OSS URLs of the output snapshots. To view the OSS URL of the media file, you can log on to the **MPS console** and choose **Media Management** > **Media List** in the left-side navigation pane.
    // 
    // The value is a JSON object.
    // 
    // *   OutputFile:
    // 
    //     *   Bucket: the name of the OSS bucket that stores the output file.
    //     *   Location: the OSS region. The OSS region must be the same as the region in which your MPS service is activated.
    //     *   Object: the OSS object to be generated. In the value, {Count} indicates the sequence number of the frame snapshot.
    // 
    // *   StoreVideoTimeline: specifies whether to generate the `{jobId}.video_timeline` file. The file is stored in OSS. A value of true indicates that the file is generated. A value of false indicates that the file is not generated. If you do not specify this parameter, the file is not generated by default. For more information about the format of the file, see the "VideoTimelines" parameter in the [QueryMediaCensorJobDetail](https://help.aliyun.com/document_detail/91779.html) topic.
    // 
    // *   SaveType: the output mode. A value of abnormal indicates that snapshots are generated only for illegal frames. A value of all indicates that snapshots are generated for all frames.
    // 
    // *   Biztype: the moderation template. If you do not specify this parameter or set the value to common, the default template is used. You can submit a ticket to create a custom moderation template. Then, set this parameter to your user ID to use the custom moderation template.
    // 
    // *   Scenes: the moderation scenarios. You can specify the moderation scenarios that you want to use. If you do not specify this parameter, the terrorism and porn moderation scenarios are used by default. Valid values:
    // 
    //     *   porn: pornographic content detection
    //     *   terrorism: terrorist content detection
    //     *   ad: ad violation detection
    //     *   live: undesirable scene detection
    //     *   logo: special logo detection
    //     *   audio: audio anti-spam
    // 
    // > If the input file contains audio tracks and the audio moderation scenario is specified, the audio tracks are moderated. If the input file does not contain audio tracks, you do not need to specify the audio moderation scenario.
    // 
    // This parameter is required.
    shared_ptr<string> videoCensorConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
