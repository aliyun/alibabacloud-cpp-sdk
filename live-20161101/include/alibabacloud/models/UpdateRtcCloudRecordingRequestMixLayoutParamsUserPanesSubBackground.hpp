// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSUSERPANESSUBBACKGROUND_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSUSERPANESSUBBACKGROUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground& obj) { 
      DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground() = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground(const UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground &) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground(UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground &&) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground() = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground& operator=(const UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground &) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground& operator=(UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->renderMode_ != nullptr
        && this->url_ != nullptr; };
    // renderMode Field Functions 
    bool hasRenderMode() const { return this->renderMode_ != nullptr;};
    void deleteRenderMode() { this->renderMode_ = nullptr;};
    inline int32_t renderMode() const { DARABONBA_PTR_GET_DEFAULT(renderMode_, 0) };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground& setRenderMode(int32_t renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsUserPanesSubBackground& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int32_t> renderMode_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
