// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMAGEINSIGHTSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_IMAGEINSIGHTSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ImageInsightsCaptionConfig.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ImageInsightsConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImageInsightsConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Caption, caption_);
    };
    friend void from_json(const Darabonba::Json& j, ImageInsightsConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
    };
    ImageInsightsConfig() = default ;
    ImageInsightsConfig(const ImageInsightsConfig &) = default ;
    ImageInsightsConfig(ImageInsightsConfig &&) = default ;
    ImageInsightsConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImageInsightsConfig() = default ;
    ImageInsightsConfig& operator=(const ImageInsightsConfig &) = default ;
    ImageInsightsConfig& operator=(ImageInsightsConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caption_ == nullptr; };
    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline const ImageInsightsCaptionConfig & getCaption() const { DARABONBA_PTR_GET_CONST(caption_, ImageInsightsCaptionConfig) };
    inline ImageInsightsCaptionConfig getCaption() { DARABONBA_PTR_GET(caption_, ImageInsightsCaptionConfig) };
    inline ImageInsightsConfig& setCaption(const ImageInsightsCaptionConfig & caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };
    inline ImageInsightsConfig& setCaption(ImageInsightsCaptionConfig && caption) { DARABONBA_PTR_SET_RVALUE(caption_, caption) };


  protected:
    // The image content recognition Caption configuration.
    shared_ptr<ImageInsightsCaptionConfig> caption_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
