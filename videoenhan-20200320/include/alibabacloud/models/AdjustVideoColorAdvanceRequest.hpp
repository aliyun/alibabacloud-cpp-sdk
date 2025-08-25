// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADJUSTVIDEOCOLORADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADJUSTVIDEOCOLORADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class AdjustVideoColorAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AdjustVideoColorAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_TO_JSON(VideoFormat, videoFormat_);
      DARABONBA_TO_JSON(VideoUrl, videoUrlObject_);
    };
    friend void from_json(const Darabonba::Json& j, AdjustVideoColorAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_FROM_JSON(VideoFormat, videoFormat_);
      DARABONBA_FROM_JSON(VideoUrl, videoUrlObject_);
    };
    AdjustVideoColorAdvanceRequest() = default ;
    AdjustVideoColorAdvanceRequest(const AdjustVideoColorAdvanceRequest &) = default ;
    AdjustVideoColorAdvanceRequest(AdjustVideoColorAdvanceRequest &&) = default ;
    AdjustVideoColorAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AdjustVideoColorAdvanceRequest() = default ;
    AdjustVideoColorAdvanceRequest& operator=(const AdjustVideoColorAdvanceRequest &) = default ;
    AdjustVideoColorAdvanceRequest& operator=(AdjustVideoColorAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mode_ != nullptr
        && this->videoBitrate_ != nullptr && this->videoCodec_ != nullptr && this->videoFormat_ != nullptr && this->videoUrlObject_ != nullptr; };
    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline AdjustVideoColorAdvanceRequest& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int64_t videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0L) };
    inline AdjustVideoColorAdvanceRequest& setVideoBitrate(int64_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // videoCodec Field Functions 
    bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
    void deleteVideoCodec() { this->videoCodec_ = nullptr;};
    inline string videoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
    inline AdjustVideoColorAdvanceRequest& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


    // videoFormat Field Functions 
    bool hasVideoFormat() const { return this->videoFormat_ != nullptr;};
    void deleteVideoFormat() { this->videoFormat_ = nullptr;};
    inline string videoFormat() const { DARABONBA_PTR_GET_DEFAULT(videoFormat_, "") };
    inline AdjustVideoColorAdvanceRequest& setVideoFormat(string videoFormat) { DARABONBA_PTR_SET_VALUE(videoFormat_, videoFormat) };


    // videoUrlObject Field Functions 
    bool hasVideoUrlObject() const { return this->videoUrlObject_ != nullptr;};
    void deleteVideoUrlObject() { this->videoUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> videoUrlObject() const { DARABONBA_GET(videoUrlObject_) };
    inline AdjustVideoColorAdvanceRequest& setVideoUrlObject(shared_ptr<Darabonba::IStream> videoUrlObject) { DARABONBA_SET_VALUE(videoUrlObject_, videoUrlObject) };


  protected:
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<int64_t> videoBitrate_ = nullptr;
    std::shared_ptr<string> videoCodec_ = nullptr;
    std::shared_ptr<string> videoFormat_ = nullptr;
    // This parameter is required.
    shared_ptr<Darabonba::IStream> videoUrlObject_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
