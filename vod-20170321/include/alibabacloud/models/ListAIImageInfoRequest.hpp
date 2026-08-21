// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAIIMAGEINFOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAIIMAGEINFOREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListAIImageInfoRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAIImageInfoRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAIImageInfoRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    ListAIImageInfoRequest() = default ;
    ListAIImageInfoRequest(const ListAIImageInfoRequest &) = default ;
    ListAIImageInfoRequest(ListAIImageInfoRequest &&) = default ;
    ListAIImageInfoRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAIImageInfoRequest() = default ;
    ListAIImageInfoRequest& operator=(const ListAIImageInfoRequest &) = default ;
    ListAIImageInfoRequest& operator=(ListAIImageInfoRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoId_ == nullptr; };
    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string getVideoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline ListAIImageInfoRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The video ID. You can obtain the video ID by using one of the following methods:
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
