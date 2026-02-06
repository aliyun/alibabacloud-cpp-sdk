// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeleteImageType, deleteImageType_);
      DARABONBA_PTR_TO_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_TO_JSON(ImageType, imageType_);
      DARABONBA_PTR_TO_JSON(ImageURLs, imageURLs_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeleteImageType, deleteImageType_);
      DARABONBA_PTR_FROM_JSON(ImageIds, imageIds_);
      DARABONBA_PTR_FROM_JSON(ImageType, imageType_);
      DARABONBA_PTR_FROM_JSON(ImageURLs, imageURLs_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    DeleteImageRequest() = default ;
    DeleteImageRequest(const DeleteImageRequest &) = default ;
    DeleteImageRequest(DeleteImageRequest &&) = default ;
    DeleteImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteImageRequest() = default ;
    DeleteImageRequest& operator=(const DeleteImageRequest &) = default ;
    DeleteImageRequest& operator=(DeleteImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deleteImageType_ == nullptr
        && this->imageIds_ == nullptr && this->imageType_ == nullptr && this->imageURLs_ == nullptr && this->videoId_ == nullptr; };
    // deleteImageType Field Functions 
    bool hasDeleteImageType() const { return this->deleteImageType_ != nullptr;};
    void deleteDeleteImageType() { this->deleteImageType_ = nullptr;};
    inline string getDeleteImageType() const { DARABONBA_PTR_GET_DEFAULT(deleteImageType_, "") };
    inline DeleteImageRequest& setDeleteImageType(string deleteImageType) { DARABONBA_PTR_SET_VALUE(deleteImageType_, deleteImageType) };


    // imageIds Field Functions 
    bool hasImageIds() const { return this->imageIds_ != nullptr;};
    void deleteImageIds() { this->imageIds_ = nullptr;};
    inline string getImageIds() const { DARABONBA_PTR_GET_DEFAULT(imageIds_, "") };
    inline DeleteImageRequest& setImageIds(string imageIds) { DARABONBA_PTR_SET_VALUE(imageIds_, imageIds) };


    // imageType Field Functions 
    bool hasImageType() const { return this->imageType_ != nullptr;};
    void deleteImageType() { this->imageType_ = nullptr;};
    inline string getImageType() const { DARABONBA_PTR_GET_DEFAULT(imageType_, "") };
    inline DeleteImageRequest& setImageType(string imageType) { DARABONBA_PTR_SET_VALUE(imageType_, imageType) };


    // imageURLs Field Functions 
    bool hasImageURLs() const { return this->imageURLs_ != nullptr;};
    void deleteImageURLs() { this->imageURLs_ = nullptr;};
    inline string getImageURLs() const { DARABONBA_PTR_GET_DEFAULT(imageURLs_, "") };
    inline DeleteImageRequest& setImageURLs(string imageURLs) { DARABONBA_PTR_SET_VALUE(imageURLs_, imageURLs) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline DeleteImageRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The method that is used to delete images. Valid values:
    // 
    // *   **ImageURL**: deletes images based on URLs.
    // *   **ImageId**: deletes images based on image IDs.
    // *   **VideoId**: deletes images associated with a video based on the video ID.
    // 
    // This parameter is required.
    shared_ptr<string> deleteImageType_ {};
    // The ID of the image. You can specify up to 20 image IDs and separate them with commas (,). You can use one of the following methods to obtain the image ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Media Files** > **Image** to view the image ID.
    // *   Obtain the image ID from the response to the [CreateUploadImage](~~CreateUploadImage~~) operation that you call to obtain the upload credential and URL.
    // *   Obtain the image ID from the response to the [SearchMedia](~~SearchMedia~~) operation that you call to query images.
    // 
    // >  This parameter takes effect and is required only if you set **DeleteImageType** to **ImageId**.
    shared_ptr<string> imageIds_ {};
    // The type of images that you want to delete. The images are associated with the video. Valid values:
    // 
    // *   **CoverSnapshot**: thumbnail snapshot.
    // *   **NormalSnapshot**: regular snapshot.
    // *   **SpriteSnapshot**: sprite snapshot.
    // *   **SpriteOriginSnapshot**: sprite source snapshot.
    // *   **All**: images of all the preceding types. You can specify multiple types other than `All` for this parameter. Separate multiple types with commas (,).
    // 
    // >  This parameter takes effect and is required only if you set **DeleteImageType** to **VideoId**.
    shared_ptr<string> imageType_ {};
    // The URL of the image. You can obtain the value of `ImageURL` from the response to the [CreateUploadImage](~~CreateUploadImage~~) operation. You can specify up to 20 URLs and separate them with commas (,).
    // 
    // >  This parameter takes effect and is required only if you set **DeleteImageType** to **ImageURL**.
    shared_ptr<string> imageURLs_ {};
    // The ID of the video. You can specify only one ID. You can use one of the following methods to obtain the ID:
    // 
    // *   Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). In the left-side navigation pane, choose **Media Files** > **Audio/Video**. On the Video and Audio page, view the ID of the media file.
    // *   Obtain the video ID from the response to the [CreateUploadVideo](~~CreateUploadVideo~~) operation that you call to obtain the upload credential and URL.
    // *   Obtain the video ID from the response to the [SearchMedia](~~SearchMedia~~) operation that you call to query videos.
    // 
    // >  This parameter takes effect and is required only if you set **DeleteImageType** to **VideoId**.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
