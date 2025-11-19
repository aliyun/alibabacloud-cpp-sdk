// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEMEZZANINESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEMEZZANINESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteMezzaninesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteMezzaninesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Force, force_);
      DARABONBA_PTR_TO_JSON(VideoIds, videoIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMezzaninesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(VideoIds, videoIds_);
    };
    DeleteMezzaninesRequest() = default ;
    DeleteMezzaninesRequest(const DeleteMezzaninesRequest &) = default ;
    DeleteMezzaninesRequest(DeleteMezzaninesRequest &&) = default ;
    DeleteMezzaninesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteMezzaninesRequest() = default ;
    DeleteMezzaninesRequest& operator=(const DeleteMezzaninesRequest &) = default ;
    DeleteMezzaninesRequest& operator=(DeleteMezzaninesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->force_ == nullptr
        && return this->videoIds_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool force() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteMezzaninesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // videoIds Field Functions 
    bool hasVideoIds() const { return this->videoIds_ != nullptr;};
    void deleteVideoIds() { this->videoIds_ = nullptr;};
    inline string videoIds() const { DARABONBA_PTR_GET_DEFAULT(videoIds_, "") };
    inline DeleteMezzaninesRequest& setVideoIds(string videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };


  protected:
    // Specifies whether to forcibly delete the source file. Valid values:
    // 
    // *   **false** (default)
    // *   **true**
    // 
    // >  If a video is uploaded without transcoding or is asynchronously transcoded, the source file of the video is used for original-quality playback. By default, the source file of the video cannot be deleted. To forcibly delete the mezzanine file, set this parameter to **true**.
    std::shared_ptr<bool> force_ = nullptr;
    // The IDs of audio or video files whose source files that you want to delete. You can specify up to 20 IDs. Separate multiple IDs with commas (,). You can use one of the following methods to obtain the ID:
    // 
    // *   After you upload a video in the [ApsaraVideo VOD console](https://vod.console.aliyun.com), you can log on to the ApsaraVideo VOD console and choose **Media Files** > **Audio/Video** to view the ID of the video.
    // *   Obtain the value of VideoId from the response to the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation that you called to obtain the upload URL and credential.
    // *   Obtain the value of VideoId from the response to the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation that you called to query media information after the audio or video file is uploaded.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
