// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INTERPOLATEVIDEOFRAMEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INTERPOLATEVIDEOFRAMEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class InterpolateVideoFrameAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InterpolateVideoFrameAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(FrameRate, frameRate_);
      DARABONBA_TO_JSON(VideoURL, videoURLObject_);
    };
    friend void from_json(const Darabonba::Json& j, InterpolateVideoFrameAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(FrameRate, frameRate_);
      DARABONBA_FROM_JSON(VideoURL, videoURLObject_);
    };
    InterpolateVideoFrameAdvanceRequest() = default ;
    InterpolateVideoFrameAdvanceRequest(const InterpolateVideoFrameAdvanceRequest &) = default ;
    InterpolateVideoFrameAdvanceRequest(InterpolateVideoFrameAdvanceRequest &&) = default ;
    InterpolateVideoFrameAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InterpolateVideoFrameAdvanceRequest() = default ;
    InterpolateVideoFrameAdvanceRequest& operator=(const InterpolateVideoFrameAdvanceRequest &) = default ;
    InterpolateVideoFrameAdvanceRequest& operator=(InterpolateVideoFrameAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bitrate_ != nullptr
        && this->frameRate_ != nullptr && this->videoURLObject_ != nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline int32_t bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, 0) };
    inline InterpolateVideoFrameAdvanceRequest& setBitrate(int32_t bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // frameRate Field Functions 
    bool hasFrameRate() const { return this->frameRate_ != nullptr;};
    void deleteFrameRate() { this->frameRate_ = nullptr;};
    inline int32_t frameRate() const { DARABONBA_PTR_GET_DEFAULT(frameRate_, 0) };
    inline InterpolateVideoFrameAdvanceRequest& setFrameRate(int32_t frameRate) { DARABONBA_PTR_SET_VALUE(frameRate_, frameRate) };


    // videoURLObject Field Functions 
    bool hasVideoURLObject() const { return this->videoURLObject_ != nullptr;};
    void deleteVideoURLObject() { this->videoURLObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoURLObject() const { DARABONBA_GET(videoURLObject_) };
    inline InterpolateVideoFrameAdvanceRequest& setVideoURLObject(shared_ptr<Darabonba::IStream> videoURLObject) { DARABONBA_SET_VALUE(videoURLObject_, videoURLObject) };


  protected:
    std::shared_ptr<int32_t> bitrate_ = nullptr;
    std::shared_ptr<int32_t> frameRate_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoURLObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
