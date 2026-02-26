// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSIGHTS_HPP_
#define ALIBABACLOUD_MODELS_INSIGHTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageInsight.hpp>
#include <alibabacloud/models/VideoInsight.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class Insights : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Insights& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, Insights& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    Insights() = default ;
    Insights(const Insights &) = default ;
    Insights(Insights &&) = default ;
    Insights(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Insights() = default ;
    Insights& operator=(const Insights &) = default ;
    Insights& operator=(Insights &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr
        && this->video_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const ImageInsight & getImage() const { DARABONBA_PTR_GET_CONST(image_, ImageInsight) };
    inline ImageInsight getImage() { DARABONBA_PTR_GET(image_, ImageInsight) };
    inline Insights& setImage(const ImageInsight & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline Insights& setImage(ImageInsight && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const VideoInsight & getVideo() const { DARABONBA_PTR_GET_CONST(video_, VideoInsight) };
    inline VideoInsight getVideo() { DARABONBA_PTR_GET(video_, VideoInsight) };
    inline Insights& setVideo(const VideoInsight & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline Insights& setVideo(VideoInsight && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The summary and description of the image.
    shared_ptr<ImageInsight> image_ {};
    // The summary and description of the video.
    shared_ptr<VideoInsight> video_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
