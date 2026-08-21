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
      DARABONBA_PTR_TO_JSON(ReferenceIds, referenceIds_);
      DARABONBA_PTR_TO_JSON(VideoIds, videoIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteMezzaninesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Force, force_);
      DARABONBA_PTR_FROM_JSON(ReferenceIds, referenceIds_);
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
        && this->referenceIds_ == nullptr && this->videoIds_ == nullptr; };
    // force Field Functions 
    bool hasForce() const { return this->force_ != nullptr;};
    void deleteForce() { this->force_ = nullptr;};
    inline bool getForce() const { DARABONBA_PTR_GET_DEFAULT(force_, false) };
    inline DeleteMezzaninesRequest& setForce(bool force) { DARABONBA_PTR_SET_VALUE(force_, force) };


    // referenceIds Field Functions 
    bool hasReferenceIds() const { return this->referenceIds_ != nullptr;};
    void deleteReferenceIds() { this->referenceIds_ = nullptr;};
    inline string getReferenceIds() const { DARABONBA_PTR_GET_DEFAULT(referenceIds_, "") };
    inline DeleteMezzaninesRequest& setReferenceIds(string referenceIds) { DARABONBA_PTR_SET_VALUE(referenceIds_, referenceIds) };


    // videoIds Field Functions 
    bool hasVideoIds() const { return this->videoIds_ != nullptr;};
    void deleteVideoIds() { this->videoIds_ = nullptr;};
    inline string getVideoIds() const { DARABONBA_PTR_GET_DEFAULT(videoIds_, "") };
    inline DeleteMezzaninesRequest& setVideoIds(string videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };


  protected:
    // Specifies whether to force delete the source file. Valid values:
    // - **false** (default): No.
    // - **true**: Yes.
    // 
    // > If the video transcoding pattern is set to no transcoding or asynchronous transcoding, the source file is used as the original stream for playback and cannot be deleted by default. To force delete the source file of such a video, go to Settings and set this parameter to **true**.
    shared_ptr<bool> force_ {};
    // The list of custom IDs. Specify one or more custom IDs separated by commas (,). A maximum of 20 IDs are supported.
    shared_ptr<string> referenceIds_ {};
    // The list of audio or video IDs whose source files you want to delete. You can specify a maximum of 20 IDs at a time. Separate multiple IDs with commas (,). You can obtain the IDs by using the following methods:
    // - For audio or video files uploaded through the console, log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com) and choose **Media Files** > **Audio/Video** to view the audio or video IDs.
    // - When you call the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation to obtain the upload URL and credential, the audio or video ID is the value of the VideoId response parameter.
    // - After the audio or video file is uploaded, you can call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to query the audio or video ID, which is the value of the VideoId response parameter.
    shared_ptr<string> videoIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
