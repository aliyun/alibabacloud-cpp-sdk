// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCAPTURERENDERINGINSTANCESCREENSHOTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCAPTURERENDERINGINSTANCESCREENSHOTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchCaptureRenderingInstanceScreenshotShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCaptureRenderingInstanceScreenshotShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCaptureRenderingInstanceScreenshotShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIdsShrink_);
    };
    BatchCaptureRenderingInstanceScreenshotShrinkRequest() = default ;
    BatchCaptureRenderingInstanceScreenshotShrinkRequest(const BatchCaptureRenderingInstanceScreenshotShrinkRequest &) = default ;
    BatchCaptureRenderingInstanceScreenshotShrinkRequest(BatchCaptureRenderingInstanceScreenshotShrinkRequest &&) = default ;
    BatchCaptureRenderingInstanceScreenshotShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCaptureRenderingInstanceScreenshotShrinkRequest() = default ;
    BatchCaptureRenderingInstanceScreenshotShrinkRequest& operator=(const BatchCaptureRenderingInstanceScreenshotShrinkRequest &) = default ;
    BatchCaptureRenderingInstanceScreenshotShrinkRequest& operator=(BatchCaptureRenderingInstanceScreenshotShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quality_ == nullptr
        && this->renderingInstanceIdsShrink_ == nullptr; };
    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int32_t getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0) };
    inline BatchCaptureRenderingInstanceScreenshotShrinkRequest& setQuality(int32_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // renderingInstanceIdsShrink Field Functions 
    bool hasRenderingInstanceIdsShrink() const { return this->renderingInstanceIdsShrink_ != nullptr;};
    void deleteRenderingInstanceIdsShrink() { this->renderingInstanceIdsShrink_ = nullptr;};
    inline string getRenderingInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(renderingInstanceIdsShrink_, "") };
    inline BatchCaptureRenderingInstanceScreenshotShrinkRequest& setRenderingInstanceIdsShrink(string renderingInstanceIdsShrink) { DARABONBA_PTR_SET_VALUE(renderingInstanceIdsShrink_, renderingInstanceIdsShrink) };


  protected:
    // The image quality. Valid values: 1 to 100.
    shared_ptr<int32_t> quality_ {};
    // The list of instance IDs. A maximum of 100 instance IDs can be specified.
    // 
    // This parameter is required.
    shared_ptr<string> renderingInstanceIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
