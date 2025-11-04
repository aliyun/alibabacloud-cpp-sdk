// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATELIVETRANSCODETEMPLATEREQUESTTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATELIVETRANSCODETEMPLATEREQUESTTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateLiveTranscodeTemplateRequestTemplateConfigAudioParams.hpp>
#include <alibabacloud/models/CreateLiveTranscodeTemplateRequestTemplateConfigVideoParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class CreateLiveTranscodeTemplateRequestTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateLiveTranscodeTemplateRequestTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AudioParams, audioParams_);
      DARABONBA_PTR_TO_JSON(VideoParams, videoParams_);
    };
    friend void from_json(const Darabonba::Json& j, CreateLiveTranscodeTemplateRequestTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioParams, audioParams_);
      DARABONBA_PTR_FROM_JSON(VideoParams, videoParams_);
    };
    CreateLiveTranscodeTemplateRequestTemplateConfig() = default ;
    CreateLiveTranscodeTemplateRequestTemplateConfig(const CreateLiveTranscodeTemplateRequestTemplateConfig &) = default ;
    CreateLiveTranscodeTemplateRequestTemplateConfig(CreateLiveTranscodeTemplateRequestTemplateConfig &&) = default ;
    CreateLiveTranscodeTemplateRequestTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateLiveTranscodeTemplateRequestTemplateConfig() = default ;
    CreateLiveTranscodeTemplateRequestTemplateConfig& operator=(const CreateLiveTranscodeTemplateRequestTemplateConfig &) = default ;
    CreateLiveTranscodeTemplateRequestTemplateConfig& operator=(CreateLiveTranscodeTemplateRequestTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioParams_ == nullptr
        && return this->videoParams_ == nullptr; };
    // audioParams Field Functions 
    bool hasAudioParams() const { return this->audioParams_ != nullptr;};
    void deleteAudioParams() { this->audioParams_ = nullptr;};
    inline const Models::CreateLiveTranscodeTemplateRequestTemplateConfigAudioParams & audioParams() const { DARABONBA_PTR_GET_CONST(audioParams_, Models::CreateLiveTranscodeTemplateRequestTemplateConfigAudioParams) };
    inline Models::CreateLiveTranscodeTemplateRequestTemplateConfigAudioParams audioParams() { DARABONBA_PTR_GET(audioParams_, Models::CreateLiveTranscodeTemplateRequestTemplateConfigAudioParams) };
    inline CreateLiveTranscodeTemplateRequestTemplateConfig& setAudioParams(const Models::CreateLiveTranscodeTemplateRequestTemplateConfigAudioParams & audioParams) { DARABONBA_PTR_SET_VALUE(audioParams_, audioParams) };
    inline CreateLiveTranscodeTemplateRequestTemplateConfig& setAudioParams(Models::CreateLiveTranscodeTemplateRequestTemplateConfigAudioParams && audioParams) { DARABONBA_PTR_SET_RVALUE(audioParams_, audioParams) };


    // videoParams Field Functions 
    bool hasVideoParams() const { return this->videoParams_ != nullptr;};
    void deleteVideoParams() { this->videoParams_ = nullptr;};
    inline const Models::CreateLiveTranscodeTemplateRequestTemplateConfigVideoParams & videoParams() const { DARABONBA_PTR_GET_CONST(videoParams_, Models::CreateLiveTranscodeTemplateRequestTemplateConfigVideoParams) };
    inline Models::CreateLiveTranscodeTemplateRequestTemplateConfigVideoParams videoParams() { DARABONBA_PTR_GET(videoParams_, Models::CreateLiveTranscodeTemplateRequestTemplateConfigVideoParams) };
    inline CreateLiveTranscodeTemplateRequestTemplateConfig& setVideoParams(const Models::CreateLiveTranscodeTemplateRequestTemplateConfigVideoParams & videoParams) { DARABONBA_PTR_SET_VALUE(videoParams_, videoParams) };
    inline CreateLiveTranscodeTemplateRequestTemplateConfig& setVideoParams(Models::CreateLiveTranscodeTemplateRequestTemplateConfigVideoParams && videoParams) { DARABONBA_PTR_SET_RVALUE(videoParams_, videoParams) };


  protected:
    // The audio parameters.
    std::shared_ptr<Models::CreateLiveTranscodeTemplateRequestTemplateConfigAudioParams> audioParams_ = nullptr;
    // The video parameters.
    std::shared_ptr<Models::CreateLiveTranscodeTemplateRequestTemplateConfigVideoParams> videoParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
