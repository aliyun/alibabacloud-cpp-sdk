// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSMIXBACKGROUND_HPP_
#define ALIBABACLOUD_MODELS_STARTRTCCLOUDRECORDINGREQUESTMIXLAYOUTPARAMSMIXBACKGROUND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartRtcCloudRecordingRequestMixLayoutParamsMixBackground : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartRtcCloudRecordingRequestMixLayoutParamsMixBackground& obj) { 
      DARABONBA_PTR_TO_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, StartRtcCloudRecordingRequestMixLayoutParamsMixBackground& obj) { 
      DARABONBA_PTR_FROM_JSON(RenderMode, renderMode_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    StartRtcCloudRecordingRequestMixLayoutParamsMixBackground() = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsMixBackground(const StartRtcCloudRecordingRequestMixLayoutParamsMixBackground &) = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsMixBackground(StartRtcCloudRecordingRequestMixLayoutParamsMixBackground &&) = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsMixBackground(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartRtcCloudRecordingRequestMixLayoutParamsMixBackground() = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsMixBackground& operator=(const StartRtcCloudRecordingRequestMixLayoutParamsMixBackground &) = default ;
    StartRtcCloudRecordingRequestMixLayoutParamsMixBackground& operator=(StartRtcCloudRecordingRequestMixLayoutParamsMixBackground &&) = default ;
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
    inline StartRtcCloudRecordingRequestMixLayoutParamsMixBackground& setRenderMode(int32_t renderMode) { DARABONBA_PTR_SET_VALUE(renderMode_, renderMode) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline StartRtcCloudRecordingRequestMixLayoutParamsMixBackground& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<int32_t> renderMode_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
