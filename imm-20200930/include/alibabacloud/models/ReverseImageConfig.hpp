// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REVERSEIMAGECONFIG_HPP_
#define ALIBABACLOUD_MODELS_REVERSEIMAGECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageReverseImageConfig.hpp>
#include <alibabacloud/models/VideoReverseImageConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ReverseImageConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReverseImageConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, ReverseImageConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    ReverseImageConfig() = default ;
    ReverseImageConfig(const ReverseImageConfig &) = default ;
    ReverseImageConfig(ReverseImageConfig &&) = default ;
    ReverseImageConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReverseImageConfig() = default ;
    ReverseImageConfig& operator=(const ReverseImageConfig &) = default ;
    ReverseImageConfig& operator=(ReverseImageConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr
        && this->video_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const ImageReverseImageConfig & getImage() const { DARABONBA_PTR_GET_CONST(image_, ImageReverseImageConfig) };
    inline ImageReverseImageConfig getImage() { DARABONBA_PTR_GET(image_, ImageReverseImageConfig) };
    inline ReverseImageConfig& setImage(const ImageReverseImageConfig & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline ReverseImageConfig& setImage(ImageReverseImageConfig && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const VideoReverseImageConfig & getVideo() const { DARABONBA_PTR_GET_CONST(video_, VideoReverseImageConfig) };
    inline VideoReverseImageConfig getVideo() { DARABONBA_PTR_GET(video_, VideoReverseImageConfig) };
    inline ReverseImageConfig& setVideo(const VideoReverseImageConfig & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline ReverseImageConfig& setVideo(VideoReverseImageConfig && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The image-to-image search configuration.
    shared_ptr<ImageReverseImageConfig> image_ {};
    // The image-to-video search configuration.
    shared_ptr<VideoReverseImageConfig> video_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
