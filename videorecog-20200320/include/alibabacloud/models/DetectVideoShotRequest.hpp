// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETECTVIDEOSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETECTVIDEOSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videorecog20200320
{
namespace Models
{
  class DetectVideoShotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetectVideoShotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DetectVideoShotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    DetectVideoShotRequest() = default ;
    DetectVideoShotRequest(const DetectVideoShotRequest &) = default ;
    DetectVideoShotRequest(DetectVideoShotRequest &&) = default ;
    DetectVideoShotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetectVideoShotRequest() = default ;
    DetectVideoShotRequest& operator=(const DetectVideoShotRequest &) = default ;
    DetectVideoShotRequest& operator=(DetectVideoShotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->videoUrl_ == nullptr; };
    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string getVideoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline DetectVideoShotRequest& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    // This parameter is required.
    shared_ptr<string> videoUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videorecog20200320
#endif
