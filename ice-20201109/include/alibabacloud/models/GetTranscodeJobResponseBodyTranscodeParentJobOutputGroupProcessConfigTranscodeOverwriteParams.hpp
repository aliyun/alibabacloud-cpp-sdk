// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_GETTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig.hpp>
#include <alibabacloud/models/GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams &&) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams() = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& operator=(const GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams &) = default ;
    GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& operator=(GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->audio_ != nullptr
        && this->container_ != nullptr && this->muxConfig_ != nullptr && this->transConfig_ != nullptr && this->video_ != nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio audio() { DARABONBA_PTR_GET(audio_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setAudio(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setAudio(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer container() { DARABONBA_PTR_GET(container_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setContainer(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setContainer(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setMuxConfig(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setMuxConfig(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setTransConfig(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setTransConfig(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo) };
    inline Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo video() { DARABONBA_PTR_GET(video_, Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setVideo(const Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParams& setVideo(Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio settings.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsAudio> audio_ = nullptr;
    // The encapsulation format settings.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsContainer> container_ = nullptr;
    // The encapsulation settings.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig> muxConfig_ = nullptr;
    // The conditional transcoding configurations.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsTransConfig> transConfig_ = nullptr;
    // The video settings.
    std::shared_ptr<Models::GetTranscodeJobResponseBodyTranscodeParentJobOutputGroupProcessConfigTranscodeOverwriteParamsVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
