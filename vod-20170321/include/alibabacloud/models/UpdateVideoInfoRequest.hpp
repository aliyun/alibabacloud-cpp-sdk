// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEVIDEOINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEVIDEOINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class UpdateVideoInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateVideoInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    UpdateVideoInfoRequest() = default ;
    UpdateVideoInfoRequest(const UpdateVideoInfoRequest &) = default ;
    UpdateVideoInfoRequest(UpdateVideoInfoRequest &&) = default ;
    UpdateVideoInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateVideoInfoRequest() = default ;
    UpdateVideoInfoRequest& operator=(const UpdateVideoInfoRequest &) = default ;
    UpdateVideoInfoRequest& operator=(UpdateVideoInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->coverURL_ != nullptr && this->description_ != nullptr && this->tags_ != nullptr && this->title_ != nullptr && this->userData_ != nullptr
        && this->videoId_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline UpdateVideoInfoRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string coverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline UpdateVideoInfoRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVideoInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string tags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline UpdateVideoInfoRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateVideoInfoRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string userData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateVideoInfoRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline UpdateVideoInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The category ID. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Configuration Management** > **Media Management** > **Categories** to view the category ID of the media file.
    // *   View the value of the CateId parameter returned by the [AddCategory](https://help.aliyun.com/document_detail/56401.html) operation that you called to create a category.
    // *   View the value of the CateId parameter returned by the [GetCategories](https://help.aliyun.com/document_detail/56406.html) operation that you called to query a category.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The URL of the audio/video thumbnail.
    std::shared_ptr<string> coverURL_ = nullptr;
    // The description of the audio or video file.
    // 
    // *   The description can be up to 1,024 bytes in length.
    // *   The value is encoded in UTF-8.
    std::shared_ptr<string> description_ = nullptr;
    // The tags of the media file.
    // 
    // *   Each tag can be up to 32 bytes in length. You can specify up to 16 tags.
    // *   Separate multiple tags with commas (,).
    // *   The value is encoded in UTF-8.
    std::shared_ptr<string> tags_ = nullptr;
    // The title of the audio or video file.
    // 
    // *   The name cannot exceed 128 bytes.
    // *   The value is encoded in UTF-8.
    std::shared_ptr<string> title_ = nullptr;
    // Custom settings. This is a JSON string that supports message callbacks, upload acceleration, and other settings. For more information, please refer to [UserData](https://help.aliyun.com/document_detail/86952.html).
    std::shared_ptr<string> userData_ = nullptr;
    // The ID of the audio or video file. Perform the following operations to obtain the storage address:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the Video and Audio page, view the ID of the audio or video file. This method is applicable to files that are uploaded by using the ApsaraVideo VOD console.
    // *   Obtain the value of VideoId from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you called to obtain the upload URL and credential.
    // *   View the value of the VideoId parameter returned by the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation that you called to query media information after the audio or video file is uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
