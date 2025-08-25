// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHANGEVIDEOSIZERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_CHANGEVIDEOSIZERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class ChangeVideoSizeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ChangeVideoSizeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VideoCoverUrl, videoCoverUrl_);
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, ChangeVideoSizeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoCoverUrl, videoCoverUrl_);
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    ChangeVideoSizeResponseBodyData() = default ;
    ChangeVideoSizeResponseBodyData(const ChangeVideoSizeResponseBodyData &) = default ;
    ChangeVideoSizeResponseBodyData(ChangeVideoSizeResponseBodyData &&) = default ;
    ChangeVideoSizeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ChangeVideoSizeResponseBodyData() = default ;
    ChangeVideoSizeResponseBodyData& operator=(const ChangeVideoSizeResponseBodyData &) = default ;
    ChangeVideoSizeResponseBodyData& operator=(ChangeVideoSizeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoCoverUrl_ != nullptr
        && this->videoUrl_ != nullptr; };
    // videoCoverUrl Field Functions 
    bool hasVideoCoverUrl() const { return this->videoCoverUrl_ != nullptr;};
    void deleteVideoCoverUrl() { this->videoCoverUrl_ = nullptr;};
    inline string videoCoverUrl() const { DARABONBA_PTR_GET_DEFAULT(videoCoverUrl_, "") };
    inline ChangeVideoSizeResponseBodyData& setVideoCoverUrl(string videoCoverUrl) { DARABONBA_PTR_SET_VALUE(videoCoverUrl_, videoCoverUrl) };


    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline ChangeVideoSizeResponseBodyData& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<string> videoCoverUrl_ = nullptr;
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
