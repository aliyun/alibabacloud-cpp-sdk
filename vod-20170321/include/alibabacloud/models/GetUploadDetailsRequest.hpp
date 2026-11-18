// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUPLOADDETAILSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUPLOADDETAILSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetUploadDetailsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUploadDetailsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_TO_JSON(MediaType, mediaType_);
    };
    friend void from_json(const Darabonba::Json& j, GetUploadDetailsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MediaIds, mediaIds_);
      DARABONBA_PTR_FROM_JSON(MediaType, mediaType_);
    };
    GetUploadDetailsRequest() = default ;
    GetUploadDetailsRequest(const GetUploadDetailsRequest &) = default ;
    GetUploadDetailsRequest(GetUploadDetailsRequest &&) = default ;
    GetUploadDetailsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUploadDetailsRequest() = default ;
    GetUploadDetailsRequest& operator=(const GetUploadDetailsRequest &) = default ;
    GetUploadDetailsRequest& operator=(GetUploadDetailsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->mediaIds_ == nullptr
        && this->mediaType_ == nullptr; };
    // mediaIds Field Functions 
    bool hasMediaIds() const { return this->mediaIds_ != nullptr;};
    void deleteMediaIds() { this->mediaIds_ = nullptr;};
    inline string getMediaIds() const { DARABONBA_PTR_GET_DEFAULT(mediaIds_, "") };
    inline GetUploadDetailsRequest& setMediaIds(string mediaIds) { DARABONBA_PTR_SET_VALUE(mediaIds_, mediaIds) };


    // mediaType Field Functions 
    bool hasMediaType() const { return this->mediaType_ != nullptr;};
    void deleteMediaType() { this->mediaType_ = nullptr;};
    inline string getMediaType() const { DARABONBA_PTR_GET_DEFAULT(mediaType_, "") };
    inline GetUploadDetailsRequest& setMediaType(string mediaType) { DARABONBA_PTR_SET_VALUE(mediaType_, mediaType) };


  protected:
    // The media IDs, which are the audio or video IDs (VideoId). Separate multiple IDs with commas (,). You can specify up to 20 IDs. You can obtain the IDs by using one of the following methods:
    // - For audio or video files uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Library** > **Audio and Video** to view the audio or video IDs.
    // - When you call the [Create upload URLs and credentials for audio and video files](https://help.aliyun.com/document_detail/55407.html) operation to obtain the upload URL and credential, the value of the VideoId response parameter is the media ID.
    // - After an audio or video file is uploaded, you can call the [Search for media information](https://help.aliyun.com/document_detail/86044.html) operation to query the media ID. The value of the VideoId response parameter is the media ID.
    // 
    // This parameter is required.
    shared_ptr<string> mediaIds_ {};
    // The media type. Set the value to **video**, which indicates audio and video files.
    shared_ptr<string> mediaType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
