// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audio_ != nullptr
        && this->container_ != nullptr && this->muxConfig_ != nullptr && this->transConfig_ != nullptr && this->video_ != nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio audio() { DARABONBA_PTR_GET(audio_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setAudio(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setAudio(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer container() { DARABONBA_PTR_GET(container_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setContainer(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setContainer(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setMuxConfig(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setMuxConfig(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setTransConfig(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setTransConfig(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo video() { DARABONBA_PTR_GET(video_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setVideo(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setVideo(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio> audio_ = nullptr;
    // The encapsulation format settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer> container_ = nullptr;
    // The encapsulation settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig> muxConfig_ = nullptr;
    // The conditional transcoding configurations.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig> transConfig_ = nullptr;
    // The video settings.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
