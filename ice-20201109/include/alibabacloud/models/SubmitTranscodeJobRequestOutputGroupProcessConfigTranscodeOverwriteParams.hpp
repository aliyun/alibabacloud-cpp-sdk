// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudio.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsContainer.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams(const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams(SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->container_ == nullptr && return this->muxConfig_ == nullptr && return this->transConfig_ == nullptr && return this->video_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudio) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudio audio() { DARABONBA_PTR_GET(audio_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudio) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setAudio(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setAudio(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsContainer) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsContainer container() { DARABONBA_PTR_GET(container_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsContainer) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setContainer(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setContainer(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setMuxConfig(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setMuxConfig(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setTransConfig(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setTransConfig(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsVideo) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsVideo video() { DARABONBA_PTR_GET(video_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsVideo) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setVideo(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParams& setVideo(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio settings.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsAudio> audio_ = nullptr;
    // The encapsulation format settings.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsContainer> container_ = nullptr;
    // The encapsulation settings.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig> muxConfig_ = nullptr;
    // The conditional transcoding configurations.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig> transConfig_ = nullptr;
    // The video settings.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigTranscodeOverwriteParamsVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
