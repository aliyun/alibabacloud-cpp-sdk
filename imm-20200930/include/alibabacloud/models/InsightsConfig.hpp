// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSIGHTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_INSIGHTSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageInsightsConfig.hpp>
#include <alibabacloud/models/VideoInsightsConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class InsightsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InsightsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Image, image_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, InsightsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Image, image_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    InsightsConfig() = default ;
    InsightsConfig(const InsightsConfig &) = default ;
    InsightsConfig(InsightsConfig &&) = default ;
    InsightsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InsightsConfig() = default ;
    InsightsConfig& operator=(const InsightsConfig &) = default ;
    InsightsConfig& operator=(InsightsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->image_ == nullptr
        && this->language_ == nullptr && this->video_ == nullptr; };
    // image Field Functions 
    bool hasImage() const { return this->image_ != nullptr;};
    void deleteImage() { this->image_ = nullptr;};
    inline const ImageInsightsConfig & getImage() const { DARABONBA_PTR_GET_CONST(image_, ImageInsightsConfig) };
    inline ImageInsightsConfig getImage() { DARABONBA_PTR_GET(image_, ImageInsightsConfig) };
    inline InsightsConfig& setImage(const ImageInsightsConfig & image) { DARABONBA_PTR_SET_VALUE(image_, image) };
    inline InsightsConfig& setImage(ImageInsightsConfig && image) { DARABONBA_PTR_SET_RVALUE(image_, image) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline InsightsConfig& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const VideoInsightsConfig & getVideo() const { DARABONBA_PTR_GET_CONST(video_, VideoInsightsConfig) };
    inline VideoInsightsConfig getVideo() { DARABONBA_PTR_GET(video_, VideoInsightsConfig) };
    inline InsightsConfig& setVideo(const VideoInsightsConfig & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline InsightsConfig& setVideo(VideoInsightsConfig && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    shared_ptr<ImageInsightsConfig> image_ {};
    // The language of the source content.
    shared_ptr<string> language_ {};
    shared_ptr<VideoInsightsConfig> video_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
