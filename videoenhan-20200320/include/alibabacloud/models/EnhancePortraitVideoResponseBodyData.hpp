// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENHANCEPORTRAITVIDEORESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ENHANCEPORTRAITVIDEORESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Videoenhan20200320
{
namespace Models
{
  class EnhancePortraitVideoResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnhancePortraitVideoResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(VideoUrl, videoUrl_);
    };
    friend void from_json(const Darabonba::Json& j, EnhancePortraitVideoResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(VideoUrl, videoUrl_);
    };
    EnhancePortraitVideoResponseBodyData() = default ;
    EnhancePortraitVideoResponseBodyData(const EnhancePortraitVideoResponseBodyData &) = default ;
    EnhancePortraitVideoResponseBodyData(EnhancePortraitVideoResponseBodyData &&) = default ;
    EnhancePortraitVideoResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnhancePortraitVideoResponseBodyData() = default ;
    EnhancePortraitVideoResponseBodyData& operator=(const EnhancePortraitVideoResponseBodyData &) = default ;
    EnhancePortraitVideoResponseBodyData& operator=(EnhancePortraitVideoResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->videoUrl_ != nullptr; };
    // videoUrl Field Functions 
    bool hasVideoUrl() const { return this->videoUrl_ != nullptr;};
    void deleteVideoUrl() { this->videoUrl_ = nullptr;};
    inline string videoUrl() const { DARABONBA_PTR_GET_DEFAULT(videoUrl_, "") };
    inline EnhancePortraitVideoResponseBodyData& setVideoUrl(string videoUrl) { DARABONBA_PTR_SET_VALUE(videoUrl_, videoUrl) };


  protected:
    std::shared_ptr<string> videoUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Videoenhan20200320
#endif
