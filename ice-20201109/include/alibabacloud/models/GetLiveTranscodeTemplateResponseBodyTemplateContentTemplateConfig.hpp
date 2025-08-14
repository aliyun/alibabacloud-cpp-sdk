// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODYTEMPLATECONTENTTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETLIVETRANSCODETEMPLATERESPONSEBODYTEMPLATECONTENTTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams.hpp>
#include <alibabacloud/models/GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AudioParams, audioParams_);
      DARABONBA_PTR_TO_JSON(VideoParams, videoParams_);
    };
    friend void from_json(const Darabonba::Json& j, GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioParams, audioParams_);
      DARABONBA_PTR_FROM_JSON(VideoParams, videoParams_);
    };
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig() = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig(const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig &) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig(GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig &&) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig() = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig& operator=(const GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig &) = default ;
    GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig& operator=(GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audioParams_ != nullptr
        && this->videoParams_ != nullptr; };
    // audioParams Field Functions 
    bool hasAudioParams() const { return this->audioParams_ != nullptr;};
    void deleteAudioParams() { this->audioParams_ = nullptr;};
    inline const Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams & audioParams() const { DARABONBA_PTR_GET_CONST(audioParams_, Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams) };
    inline Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams audioParams() { DARABONBA_PTR_GET(audioParams_, Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams) };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig& setAudioParams(const Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams & audioParams) { DARABONBA_PTR_SET_VALUE(audioParams_, audioParams) };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig& setAudioParams(Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams && audioParams) { DARABONBA_PTR_SET_RVALUE(audioParams_, audioParams) };


    // videoParams Field Functions 
    bool hasVideoParams() const { return this->videoParams_ != nullptr;};
    void deleteVideoParams() { this->videoParams_ = nullptr;};
    inline const Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams & videoParams() const { DARABONBA_PTR_GET_CONST(videoParams_, Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams) };
    inline Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams videoParams() { DARABONBA_PTR_GET(videoParams_, Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams) };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig& setVideoParams(const Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams & videoParams) { DARABONBA_PTR_SET_VALUE(videoParams_, videoParams) };
    inline GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfig& setVideoParams(Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams && videoParams) { DARABONBA_PTR_SET_RVALUE(videoParams_, videoParams) };


  protected:
    // The audio parameters.
    std::shared_ptr<Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigAudioParams> audioParams_ = nullptr;
    // The video parameters.
    std::shared_ptr<Models::GetLiveTranscodeTemplateResponseBodyTemplateContentTemplateConfigVideoParams> videoParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
