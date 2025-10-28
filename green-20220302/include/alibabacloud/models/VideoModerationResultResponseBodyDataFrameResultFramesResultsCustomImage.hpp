// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESRESULTSCUSTOMIMAGE_HPP_
#define ALIBABACLOUD_MODELS_VIDEOMODERATIONRESULTRESPONSEBODYDATAFRAMERESULTFRAMESRESULTSCUSTOMIMAGE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Green20220302
{
namespace Models
{
  class VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage& obj) { 
      DARABONBA_PTR_TO_JSON(ImageId, imageId_);
      DARABONBA_PTR_TO_JSON(LibId, libId_);
    };
    friend void from_json(const Darabonba::Json& j, VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage& obj) { 
      DARABONBA_PTR_FROM_JSON(ImageId, imageId_);
      DARABONBA_PTR_FROM_JSON(LibId, libId_);
    };
    VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage() = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage(const VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage(VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage &&) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage() = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage& operator=(const VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage &) = default ;
    VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage& operator=(VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->imageId_ == nullptr
        && return this->libId_ == nullptr; };
    // imageId Field Functions 
    bool hasImageId() const { return this->imageId_ != nullptr;};
    void deleteImageId() { this->imageId_ = nullptr;};
    inline string imageId() const { DARABONBA_PTR_GET_DEFAULT(imageId_, "") };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage& setImageId(string imageId) { DARABONBA_PTR_SET_VALUE(imageId_, imageId) };


    // libId Field Functions 
    bool hasLibId() const { return this->libId_ != nullptr;};
    void deleteLibId() { this->libId_ = nullptr;};
    inline string libId() const { DARABONBA_PTR_GET_DEFAULT(libId_, "") };
    inline VideoModerationResultResponseBodyDataFrameResultFramesResultsCustomImage& setLibId(string libId) { DARABONBA_PTR_SET_VALUE(libId_, libId) };


  protected:
    // The ID of the custom image that is hit.
    std::shared_ptr<string> imageId_ = nullptr;
    // The ID of the custom image library that is hit.
    std::shared_ptr<string> libId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Green20220302
#endif
