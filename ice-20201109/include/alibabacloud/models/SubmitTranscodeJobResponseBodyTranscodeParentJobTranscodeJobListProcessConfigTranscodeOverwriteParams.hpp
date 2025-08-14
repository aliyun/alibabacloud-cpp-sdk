// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsAudio.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsMuxConfig.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsTransConfig.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audio_ != nullptr
        && this->container_ != nullptr && this->muxConfig_ != nullptr && this->transConfig_ != nullptr && this->video_ != nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsAudio) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsAudio audio() { DARABONBA_PTR_GET(audio_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsAudio) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setAudio(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setAudio(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer container() { DARABONBA_PTR_GET(container_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setContainer(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setContainer(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setMuxConfig(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setMuxConfig(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsTransConfig) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsTransConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setTransConfig(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setTransConfig(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsVideo) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsVideo video() { DARABONBA_PTR_GET(video_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsVideo) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setVideo(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParams& setVideo(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsAudio> audio_ = nullptr;
    // The encapsulation format settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsContainer> container_ = nullptr;
    // The encapsulation settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsMuxConfig> muxConfig_ = nullptr;
    // The conditional transcoding configurations.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsTransConfig> transConfig_ = nullptr;
    // The video settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigTranscodeOverwriteParamsVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
