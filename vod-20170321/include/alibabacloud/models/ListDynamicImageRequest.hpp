// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDYNAMICIMAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDYNAMICIMAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListDynamicImageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDynamicImageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoId, videoId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDynamicImageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoId, videoId_);
    };
    ListDynamicImageRequest() = default ;
    ListDynamicImageRequest(const ListDynamicImageRequest &) = default ;
    ListDynamicImageRequest(ListDynamicImageRequest &&) = default ;
    ListDynamicImageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDynamicImageRequest() = default ;
    ListDynamicImageRequest& operator=(const ListDynamicImageRequest &) = default ;
    ListDynamicImageRequest& operator=(ListDynamicImageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoId_ == nullptr; };
    // videoId Field Functions 
    bool hasVideoId() const { return this->videoId_ != nullptr;};
    void deleteVideoId() { this->videoId_ = nullptr;};
    inline string videoId() const { DARABONBA_PTR_GET_DEFAULT(videoId_, "") };
    inline ListDynamicImageRequest& setVideoId(string videoId) { DARABONBA_PTR_SET_VALUE(videoId_, videoId) };


  protected:
    // The ID of the video.
    // 
    // This parameter is required.
    std::shared_ptr<string> videoId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
