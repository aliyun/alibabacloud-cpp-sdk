// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSMIXBACKGROUND_HPP_
#define ALIBABACLOUD_MODELS_UPDATERTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSMIXBACKGROUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground& obj) { 
      DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground() = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground(const UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground &) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground(UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground &&) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground() = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground& operator=(const UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground &) = default ;
    UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground& operator=(UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground &&) = default ;
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
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground& setRenderMode(int32_t renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline UpdateRtcCloudRecordingRequestMixLayoutParamsMixBackground& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int32_t> renderMode_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
