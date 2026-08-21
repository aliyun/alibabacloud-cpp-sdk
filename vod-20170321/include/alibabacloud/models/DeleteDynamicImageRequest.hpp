// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDYNAMICIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDYNAMICIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteDynamicImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDynamicImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicImageIds, dynamicImageIds_);
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDynamicImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicImageIds, dynamicImageIds_);
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    DeleteDynamicImageRequest() = default ;
    DeleteDynamicImageRequest(const DeleteDynamicImageRequest &) = default ;
    DeleteDynamicImageRequest(DeleteDynamicImageRequest &&) = default ;
    DeleteDynamicImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDynamicImageRequest() = default ;
    DeleteDynamicImageRequest& operator=(const DeleteDynamicImageRequest &) = default ;
    DeleteDynamicImageRequest& operator=(DeleteDynamicImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicImageIds_ == nullptr
        && this->videoId_ == nullptr; };
    // dynamicImageIds Field Functions 
    bool hasDynamicImageIds() const { return this->dynamicImageIds_ != nullptr;};
    void deleteDynamicImageIds() { this->dynamicImageIds_ = nullptr;};
    inline string getDynamicImageIds() const { DARABONBA_PTR_GET_DEFAULT(dynamicImageIds_, "") };
    inline DeleteDynamicImageRequest& setDynamicImageIds(string dynamicImageIds) { DARABONBA_PTR_SET_VALUE(dynamicImageIds_, dynamicImageIds) };


    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline DeleteDynamicImageRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The list of animated sticker IDs. The animated sticker ID is the value of the DynamicImageId response parameter returned by the [ListDynamicImage](https://help.aliyun.com/document_detail/180958.html) operation.
    // 
    // - Separate multiple IDs with commas (,). You can specify a maximum of 10 IDs.
    // - **If you do not specify this parameter, all animated stickers associated with the specified VideoId are deleted. However, if the video has more than 10 animated stickers, the deletion request is rejected.**
    shared_ptr<string> dynamicImageIds_ {};
    // The ID of the video associated with the animated stickers that you want to delete. You can obtain the video ID by using one of the following methods:
    // - For videos uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the video ID.
    // - Obtain the video ID from the value of the VideoId response parameter when you call the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation to obtain the upload URL and credential.
    // - After the video is uploaded, call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the video ID, which is the value of the VideoId response parameter.
    // 
    // This parameter is required.
    shared_ptr<string> videoId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
