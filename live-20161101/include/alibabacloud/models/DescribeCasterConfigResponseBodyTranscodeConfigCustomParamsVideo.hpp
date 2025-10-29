// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYTRANSCODECONFIGCUSTOMPARAMSVIDEO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERCONFIGRESPONSEBODYTRANSCODECONFIGCUSTOMPARAMSVIDEO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo& obj) { 
      DARABONBA_PTR_TO_JSON(bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(fps, fps_);
      DARABONBA_PTR_TO_JSON(height, height_);
      DARABONBA_PTR_TO_JSON(width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo& obj) { 
      DARABONBA_PTR_FROM_JSON(bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(fps, fps_);
      DARABONBA_PTR_FROM_JSON(height, height_);
      DARABONBA_PTR_FROM_JSON(width, width_);
    };
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo() = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo(const DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo &) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo(DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo &&) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo() = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo& operator=(const DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo &) = default ;
    DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo& operator=(DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->fps_ == nullptr && return this->height_ == nullptr && return this->width_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline int32_t fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0) };
    inline DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo& setFps(int32_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int32_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
    inline DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int32_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
    inline DescribeCasterConfigResponseBodyTranscodeConfigCustomParamsVideo& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The video bitrate.
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    // The video frame rate.
    std::shared_ptr<int32_t> fps_ = nullptr;
    // The video height. Unit: pixels.
    std::shared_ptr<int32_t> height_ = nullptr;
    // The video width. Unit: pixels.
    std::shared_ptr<int32_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
