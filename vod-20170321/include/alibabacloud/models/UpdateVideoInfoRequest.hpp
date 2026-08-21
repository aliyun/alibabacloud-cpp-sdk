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
      DARABONBA_PTR_TO_JSON(ReferenceId, referenceId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateVideoInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CoverURL, coverURL_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ReferenceId, referenceId_);
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
    virtual bool empty() const override { return this->cateId_ == nullptr
        && this->coverURL_ == nullptr && this->description_ == nullptr && this->referenceId_ == nullptr && this->tags_ == nullptr && this->title_ == nullptr
        && this->userData_ == nullptr && this->videoId_ == nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline UpdateVideoInfoRequest& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // coverURL Field Functions 
    bool hasCoverURL() const { return this->coverURL_ != nullptr;};
    void deleteCoverURL() { this->coverURL_ = nullptr;};
    inline string getCoverURL() const { DARABONBA_PTR_GET_DEFAULT(coverURL_, "") };
    inline UpdateVideoInfoRequest& setCoverURL(string coverURL) { DARABONBA_PTR_SET_VALUE(coverURL_, coverURL) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateVideoInfoRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // referenceId Field Functions 
    bool hasReferenceId() const { return this->referenceId_ != nullptr;};
    void deleteReferenceId() { this->referenceId_ = nullptr;};
    inline string getReferenceId() const { DARABONBA_PTR_GET_DEFAULT(referenceId_, "") };
    inline UpdateVideoInfoRequest& setReferenceId(string referenceId) { DARABONBA_PTR_SET_VALUE(referenceId_, referenceId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline UpdateVideoInfoRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline UpdateVideoInfoRequest& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline UpdateVideoInfoRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline UpdateVideoInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The category ID. You can obtain the ID by using one of the following methods:
    // - Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Configuration Management** > **Media Management** > **Categories** to view the category ID.
    // - Obtain the category ID from the value of the CateId response parameter when you call the [AddCategory](https://help.aliyun.com/document_detail/56401.html) operation to create a category.
    // - Call the [GetCategories](https://help.aliyun.com/document_detail/56406.html) operation to query the category ID, which is the value of the CateId response parameter.
    shared_ptr<int64_t> cateId_ {};
    // The thumbnail URL of the audio or video file.
    shared_ptr<string> coverURL_ {};
    // The description of the audio or video file.
    // 
    // - The description can be up to 1024 bytes in length.
    // - The value is encoded in UTF-8.
    shared_ptr<string> description_ {};
    // The custom ID. Only lowercase letters, uppercase letters, digits, hyphens, and underscores are supported. The value must be 6 to 64 characters in length and is unique at the user level.
    shared_ptr<string> referenceId_ {};
    // The tags.
    // 
    // - Each tag can be up to 32 bytes in length. A maximum of 16 tags can be specified.
    // - Separate multiple tags with commas (,).
    // - The value is encoded in UTF-8.
    shared_ptr<string> tags_ {};
    // The title of the audio or video file.
    // 
    // - The title can be up to 128 bytes in length.
    // - The value is encoded in UTF-8.
    shared_ptr<string> title_ {};
    // The custom settings. The value is a JSON string that supports settings such as message callbacks and upload acceleration. For more information, see [UserData](https://help.aliyun.com/document_detail/86952.html).
    shared_ptr<string> userData_ {};
    // The audio or video ID. You can obtain the ID by using one of the following methods:
    // - For videos uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the audio or video ID.
    // - Obtain the video ID from the value of the VideoId response parameter when you call the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation to obtain the upload URL and credential.
    // - After the video is uploaded, call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the audio or video ID, which is the value of the VideoId response parameter.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
