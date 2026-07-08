// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCAPTURERENDERINGINSTANCESCREENSHOTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHCAPTURERENDERINGINSTANCESCREENSHOTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchCaptureRenderingInstanceScreenshotRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCaptureRenderingInstanceScreenshotRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Quality, quality_);
      DARABONBA_PTR_TO_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCaptureRenderingInstanceScreenshotRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Quality, quality_);
      DARABONBA_PTR_FROM_JSON(RenderingInstanceIds, renderingInstanceIds_);
    };
    BatchCaptureRenderingInstanceScreenshotRequest() = default ;
    BatchCaptureRenderingInstanceScreenshotRequest(const BatchCaptureRenderingInstanceScreenshotRequest &) = default ;
    BatchCaptureRenderingInstanceScreenshotRequest(BatchCaptureRenderingInstanceScreenshotRequest &&) = default ;
    BatchCaptureRenderingInstanceScreenshotRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCaptureRenderingInstanceScreenshotRequest() = default ;
    BatchCaptureRenderingInstanceScreenshotRequest& operator=(const BatchCaptureRenderingInstanceScreenshotRequest &) = default ;
    BatchCaptureRenderingInstanceScreenshotRequest& operator=(BatchCaptureRenderingInstanceScreenshotRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->quality_ == nullptr
        && this->renderingInstanceIds_ == nullptr; };
    // quality Field Functions 
    bool hasQuality() const { return this->quality_ != nullptr;};
    void deleteQuality() { this->quality_ = nullptr;};
    inline int32_t getQuality() const { DARABONBA_PTR_GET_DEFAULT(quality_, 0) };
    inline BatchCaptureRenderingInstanceScreenshotRequest& setQuality(int32_t quality) { DARABONBA_PTR_SET_VALUE(quality_, quality) };


    // renderingInstanceIds Field Functions 
    bool hasRenderingInstanceIds() const { return this->renderingInstanceIds_ != nullptr;};
    void deleteRenderingInstanceIds() { this->renderingInstanceIds_ = nullptr;};
    inline const vector<string> & getRenderingInstanceIds() const { DARABONBA_PTR_GET_CONST(renderingInstanceIds_, vector<string>) };
    inline vector<string> getRenderingInstanceIds() { DARABONBA_PTR_GET(renderingInstanceIds_, vector<string>) };
    inline BatchCaptureRenderingInstanceScreenshotRequest& setRenderingInstanceIds(const vector<string> & renderingInstanceIds) { DARABONBA_PTR_SET_VALUE(renderingInstanceIds_, renderingInstanceIds) };
    inline BatchCaptureRenderingInstanceScreenshotRequest& setRenderingInstanceIds(vector<string> && renderingInstanceIds) { DARABONBA_PTR_SET_RVALUE(renderingInstanceIds_, renderingInstanceIds) };


  protected:
    // The image quality. Valid values: 1 to 100.
    shared_ptr<int32_t> quality_ {};
    // The list of instance IDs. A maximum of 100 instance IDs can be specified.
    // 
    // This parameter is required.
    shared_ptr<vector<string>> renderingInstanceIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
