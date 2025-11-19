// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEVIDEOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEVIDEOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DeleteVideoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteVideoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoIds, videoIds_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteVideoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoIds, videoIds_);
    };
    DeleteVideoRequest() = default ;
    DeleteVideoRequest(const DeleteVideoRequest &) = default ;
    DeleteVideoRequest(DeleteVideoRequest &&) = default ;
    DeleteVideoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteVideoRequest() = default ;
    DeleteVideoRequest& operator=(const DeleteVideoRequest &) = default ;
    DeleteVideoRequest& operator=(DeleteVideoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoIds_ == nullptr; };
    // videoIds Field Functions 
    bool hasVideoIds() const { return this->videoIds_ != nullptr;};
    void deleteVideoIds() { this->videoIds_ = nullptr;};
    inline string videoIds() const { DARABONBA_PTR_GET_DEFAULT(videoIds_, "") };
    inline DeleteVideoRequest& setVideoIds(string videoIds) { DARABONBA_PTR_SET_VALUE(videoIds_, videoIds) };


  protected:
    // The list of video IDs. Separate multiple IDs with commas (,). A maximum of 20 IDs can be specified. You can obtain a video ID in one of the following ways:
    // 
    // *   If the video is uploaded by using the [ApsaraVideo VOD console](https://vod.console.aliyun.com), log on to the console and choose **Media Files** > **Audio/Video** to view the ID of the video.
    // *   If the video is uploaded by calling the [CreateUploadVideo](https://help.aliyun.com/document_detail/55407.html) operation, the video ID is the VideoId value in the response.
    // *   You can also call the [SearchMedia](https://help.aliyun.com/document_detail/86044.html) operation to obtain the video ID, which is the VideoId value in the response.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
