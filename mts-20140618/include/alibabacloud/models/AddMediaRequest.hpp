// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMEDIAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDMEDIAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddMediaRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMediaRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileURL, fileURL_);
      DARABONBA_PTR_TO_JSON(InputUnbind, inputUnbind_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_TO_JSON(MediaWorkflowUserData, mediaWorkflowUserData_);
      DARABONBA_PTR_TO_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, AddMediaRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileURL, fileURL_);
      DARABONBA_PTR_FROM_JSON(InputUnbind, inputUnbind_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowId, mediaWorkflowId_);
      DARABONBA_PTR_FROM_JSON(MediaWorkflowUserData, mediaWorkflowUserData_);
      DARABONBA_PTR_FROM_JSON(OverrideParams, overrideParams_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    AddMediaRequest() = default ;
    AddMediaRequest(const AddMediaRequest &) = default ;
    AddMediaRequest(AddMediaRequest &&) = default ;
    AddMediaRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMediaRequest() = default ;
    AddMediaRequest& operator=(const AddMediaRequest &) = default ;
    AddMediaRequest& operator=(AddMediaRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cateId_ == nullptr
        && this->coverURL_ == nullptr && this->description_ == nullptr && this->fileURL_ == nullptr && this->inputUnbind_ == nullptr && this->mediaWorkflowId_ == nullptr
        && this->mediaWorkflowUserData_ == nullptr && this->overrideParams_ == nullptr && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline AddMediaRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline AddMediaRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddMediaRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileURL Field Functions 
    bool hasFileURL() const { return this->fileURL_ != nullptr;};
    void deleteFileURL() { this->fileURL_ = nullptr;};
    inline string getFileURL() const { DARABONBA_PTR_GET_DEFAULT(fileURL_, "") };
    inline AddMediaRequest& setFileURL(string fileURL) { DARABONBA_PTR_SET_VALUE(fileURL_, fileURL) };


    // inputUnbind Field Functions 
    bool hasInputUnbind() const { return this->inputUnbind_ != nullptr;};
    void deleteInputUnbind() { this->inputUnbind_ = nullptr;};
    inline bool getInputUnbind() const { DARABONBA_PTR_GET_DEFAULT(inputUnbind_, false) };
    inline AddMediaRequest& setInputUnbind(bool inputUnbind) { DARABONBA_PTR_SET_VALUE(inputUnbind_, inputUnbind) };


    // mediaWorkflowId Field Functions 
    bool hasMediaWorkflowId() const { return this->mediaWorkflowId_ != nullptr;};
    void deleteMediaWorkflowId() { this->mediaWorkflowId_ = nullptr;};
    inline string getMediaWorkflowId() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowId_, "") };
    inline AddMediaRequest& setMediaWorkflowId(string mediaWorkflowId) { DARABONBA_PTR_SET_VALUE(mediaWorkflowId_, mediaWorkflowId) };


    // mediaWorkflowUserData Field Functions 
    bool hasMediaWorkflowUserData() const { return this->mediaWorkflowUserData_ != nullptr;};
    void deleteMediaWorkflowUserData() { this->mediaWorkflowUserData_ = nullptr;};
    inline string getMediaWorkflowUserData() const { DARABONBA_PTR_GET_DEFAULT(mediaWorkflowUserData_, "") };
    inline AddMediaRequest& setMediaWorkflowUserData(string mediaWorkflowUserData) { DARABONBA_PTR_SET_VALUE(mediaWorkflowUserData_, mediaWorkflowUserData) };


    // overrideParams Field Functions 
    bool hasOverrideParams() const { return this->overrideParams_ != nullptr;};
    void deleteOverrideParams() { this->overrideParams_ = nullptr;};
    inline string getOverrideParams() const { DARABONBA_PTR_GET_DEFAULT(overrideParams_, "") };
    inline AddMediaRequest& setOverrideParams(string overrideParams) { DARABONBA_PTR_SET_VALUE(overrideParams_, overrideParams) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline AddMediaRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddMediaRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline AddMediaRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline AddMediaRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline AddMediaRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline AddMediaRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


  protected:
    // The ID of the category to which the media file belongs. The value cannot be negative.
    shared_ptr<int64_t> cateId_ {};
    // The URL of the thumbnail. To obtain the URL, you can log on to the **MPS console** and choose **Workflows** > **Media Buckets**. Alternatively, you can log on to the **OSS console** and click **My OSS Paths**.
    // 
    // *   The value can be up to 3,200 bytes in length.
    // *   The URL complies with RFC 2396 and is encoded in UTF-8, with reserved characters being percent-encoded. For more information, see [URL encoding](https://help.aliyun.com/document_detail/423796.html).
    shared_ptr<string> coverURL_ {};
    // The description of the media file.
    // 
    // *   The description can be up to 1,024 bytes in length.
    // *   The value must be encoded in UTF-8.
    shared_ptr<string> description_ {};
    // The URL of the input file. You can obtain the URL in the MPS or OSS console. For more information, see the **Triggering and matching rule for a workflow** section of this topic.
    // 
    // *   Only OSS HTTP URLs are supported. Alibaba Cloud CDN URLs and HTTPS URLs are not supported.
    // *   The value can be up to 3,200 bytes in size.
    // *   The URL complies with RFC 2396 and is encoded in UTF-8. For more information, see [URL encoding](https://help.aliyun.com/document_detail/423796.html).
    // 
    // This parameter is required.
    shared_ptr<string> fileURL_ {};
    // Specifies whether to check if the media workflow supports the specified input path. We recommend that you set this parameter to true to prevent errors that may result from invalid paths. Valid values:
    // 
    // *   **true**: checks whether the workflow supports the specified input path.
    // *   **false**: does not check whether the workflow supports the specified input path.
    shared_ptr<bool> inputUnbind_ {};
    // The ID of the media workflow that you want to run for the media file. To query the ID of a media workflow, you can log on to the MPS console or call the [AddMediaWorkflow](https://help.aliyun.com/document_detail/44437.html) operation.
    shared_ptr<string> mediaWorkflowId_ {};
    // The custom data of the media workflow.
    // 
    // *   The value can be up to 1,024 bytes in length.
    // *   The value must be encoded in UTF-8.
    shared_ptr<string> mediaWorkflowUserData_ {};
    // The subtitle settings that are used to overwrite the original settings.
    // 
    // *   Example 1: Use `{"WebVTTSubtitleOverrides",[{"RefActivityName":"subtitleNode","WebVTTSubtitleURL":"http://test.oss-cn-hangzhou.aliyuncs.com/example1.vtt"}]}` to overwrite the original subtitle settings during HTTP Live Streaming (HLS) packaging.
    // *   Example 2: Use `{"subtitleTransNodeName":{"InputConfig":{"Format":"stl","InputFile":{"URL":"http://subtitleBucket.oss-cn-hangzhou.aliyuncs.com/package/example/CENG.stl"}}}}` to overwrite the original subtitle settings during Dynamic Adaptive Streaming over HTTP (DASH) packaging.
    shared_ptr<string> overrideParams_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The tags that you want to add to the media file.
    // 
    // > In MPS, each tag that is specified for a media file is independent. You can search for all the media files that have the same tags in the Media Library.
    // 
    // *   You can specify up to 16 tags for a media file. Separate multiple tags with commas (,).
    // *   Each tag can be up to 32 bytes in size
    // *   The value must be encoded in UTF-8.
    shared_ptr<string> tags_ {};
    // The title of the media file.
    // 
    // *   The title can be up to 128 bytes in length.
    // *   The value must be encoded in UTF-8.
    shared_ptr<string> title_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
