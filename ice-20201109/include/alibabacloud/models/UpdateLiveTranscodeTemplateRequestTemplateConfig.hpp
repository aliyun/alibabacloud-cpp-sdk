// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELIVETRANSCODETEMPLATEREQUESTTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATELIVETRANSCODETEMPLATEREQUESTTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateLiveTranscodeTemplateRequestTemplateConfigAudioParams.hpp>
#include <alibabacloud/models/UpdateLiveTranscodeTemplateRequestTemplateConfigVideoParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class UpdateLiveTranscodeTemplateRequestTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLiveTranscodeTemplateRequestTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AudioParams, audioParams_);
      DARABONBA_PTR_TO_JSON(VideoParams, videoParams_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLiveTranscodeTemplateRequestTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioParams, audioParams_);
      DARABONBA_PTR_FROM_JSON(VideoParams, videoParams_);
    };
    UpdateLiveTranscodeTemplateRequestTemplateConfig() = default ;
    UpdateLiveTranscodeTemplateRequestTemplateConfig(const UpdateLiveTranscodeTemplateRequestTemplateConfig &) = default ;
    UpdateLiveTranscodeTemplateRequestTemplateConfig(UpdateLiveTranscodeTemplateRequestTemplateConfig &&) = default ;
    UpdateLiveTranscodeTemplateRequestTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLiveTranscodeTemplateRequestTemplateConfig() = default ;
    UpdateLiveTranscodeTemplateRequestTemplateConfig& operator=(const UpdateLiveTranscodeTemplateRequestTemplateConfig &) = default ;
    UpdateLiveTranscodeTemplateRequestTemplateConfig& operator=(UpdateLiveTranscodeTemplateRequestTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioParams_ != nullptr
        && this->videoParams_ != nullptr; };
    // audioParams Field Functions 
    bool hasAudioParams() const { return this->audioParams_ != nullptr;};
    void deleteAudioParams() { this->audioParams_ = nullptr;};
    inline const Models::UpdateLiveTranscodeTemplateRequestTemplateConfigAudioParams & audioParams() const { DARABONBA_PTR_GET_CONST(audioParams_, Models::UpdateLiveTranscodeTemplateRequestTemplateConfigAudioParams) };
    inline Models::UpdateLiveTranscodeTemplateRequestTemplateConfigAudioParams audioParams() { DARABONBA_PTR_GET(audioParams_, Models::UpdateLiveTranscodeTemplateRequestTemplateConfigAudioParams) };
    inline UpdateLiveTranscodeTemplateRequestTemplateConfig& setAudioParams(const Models::UpdateLiveTranscodeTemplateRequestTemplateConfigAudioParams & audioParams) { DARABONBA_PTR_SET_VALUE(audioParams_, audioParams) };
    inline UpdateLiveTranscodeTemplateRequestTemplateConfig& setAudioParams(Models::UpdateLiveTranscodeTemplateRequestTemplateConfigAudioParams && audioParams) { DARABONBA_PTR_SET_RVALUE(audioParams_, audioParams) };


    // videoParams Field Functions 
    bool hasVideoParams() const { return this->videoParams_ != nullptr;};
    void deleteVideoParams() { this->videoParams_ = nullptr;};
    inline const Models::UpdateLiveTranscodeTemplateRequestTemplateConfigVideoParams & videoParams() const { DARABONBA_PTR_GET_CONST(videoParams_, Models::UpdateLiveTranscodeTemplateRequestTemplateConfigVideoParams) };
    inline Models::UpdateLiveTranscodeTemplateRequestTemplateConfigVideoParams videoParams() { DARABONBA_PTR_GET(videoParams_, Models::UpdateLiveTranscodeTemplateRequestTemplateConfigVideoParams) };
    inline UpdateLiveTranscodeTemplateRequestTemplateConfig& setVideoParams(const Models::UpdateLiveTranscodeTemplateRequestTemplateConfigVideoParams & videoParams) { DARABONBA_PTR_SET_VALUE(videoParams_, videoParams) };
    inline UpdateLiveTranscodeTemplateRequestTemplateConfig& setVideoParams(Models::UpdateLiveTranscodeTemplateRequestTemplateConfigVideoParams && videoParams) { DARABONBA_PTR_SET_RVALUE(videoParams_, videoParams) };


  protected:
    // The audio parameters.
    std::shared_ptr<Models::UpdateLiveTranscodeTemplateRequestTemplateConfigAudioParams> audioParams_ = nullptr;
    // The video parameters.
    std::shared_ptr<Models::UpdateLiveTranscodeTemplateRequestTemplateConfigVideoParams> videoParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
