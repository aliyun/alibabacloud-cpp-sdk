// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateAudio.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateContainer.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateMuxConfig.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateTransConfig.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateTemplateResponseBodyTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateResponseBodyTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateResponseBodyTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    UpdateTemplateResponseBodyTemplate() = default ;
    UpdateTemplateResponseBodyTemplate(const UpdateTemplateResponseBodyTemplate &) = default ;
    UpdateTemplateResponseBodyTemplate(UpdateTemplateResponseBodyTemplate &&) = default ;
    UpdateTemplateResponseBodyTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateResponseBodyTemplate() = default ;
    UpdateTemplateResponseBodyTemplate& operator=(const UpdateTemplateResponseBodyTemplate &) = default ;
    UpdateTemplateResponseBodyTemplate& operator=(UpdateTemplateResponseBodyTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->container_ == nullptr && return this->id_ == nullptr && return this->muxConfig_ == nullptr && return this->name_ == nullptr && return this->state_ == nullptr
        && return this->transConfig_ == nullptr && return this->video_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::UpdateTemplateResponseBodyTemplateAudio) };
    inline Models::UpdateTemplateResponseBodyTemplateAudio audio() { DARABONBA_PTR_GET(audio_, Models::UpdateTemplateResponseBodyTemplateAudio) };
    inline UpdateTemplateResponseBodyTemplate& setAudio(const Models::UpdateTemplateResponseBodyTemplateAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline UpdateTemplateResponseBodyTemplate& setAudio(Models::UpdateTemplateResponseBodyTemplateAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::UpdateTemplateResponseBodyTemplateContainer) };
    inline Models::UpdateTemplateResponseBodyTemplateContainer container() { DARABONBA_PTR_GET(container_, Models::UpdateTemplateResponseBodyTemplateContainer) };
    inline UpdateTemplateResponseBodyTemplate& setContainer(const Models::UpdateTemplateResponseBodyTemplateContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline UpdateTemplateResponseBodyTemplate& setContainer(Models::UpdateTemplateResponseBodyTemplateContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateTemplateResponseBodyTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::UpdateTemplateResponseBodyTemplateMuxConfig) };
    inline Models::UpdateTemplateResponseBodyTemplateMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::UpdateTemplateResponseBodyTemplateMuxConfig) };
    inline UpdateTemplateResponseBodyTemplate& setMuxConfig(const Models::UpdateTemplateResponseBodyTemplateMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline UpdateTemplateResponseBodyTemplate& setMuxConfig(Models::UpdateTemplateResponseBodyTemplateMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateTemplateResponseBodyTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline UpdateTemplateResponseBodyTemplate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::UpdateTemplateResponseBodyTemplateTransConfig) };
    inline Models::UpdateTemplateResponseBodyTemplateTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::UpdateTemplateResponseBodyTemplateTransConfig) };
    inline UpdateTemplateResponseBodyTemplate& setTransConfig(const Models::UpdateTemplateResponseBodyTemplateTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline UpdateTemplateResponseBodyTemplate& setTransConfig(Models::UpdateTemplateResponseBodyTemplateTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::UpdateTemplateResponseBodyTemplateVideo) };
    inline Models::UpdateTemplateResponseBodyTemplateVideo video() { DARABONBA_PTR_GET(video_, Models::UpdateTemplateResponseBodyTemplateVideo) };
    inline UpdateTemplateResponseBodyTemplate& setVideo(const Models::UpdateTemplateResponseBodyTemplateVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline UpdateTemplateResponseBodyTemplate& setVideo(Models::UpdateTemplateResponseBodyTemplateVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio codec settings.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateAudio> audio_ = nullptr;
    // The container format.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateContainer> container_ = nullptr;
    // The container configurations.
    std::shared_ptr<string> id_ = nullptr;
    // The transmuxing configurations for WebP.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateMuxConfig> muxConfig_ = nullptr;
    // The audio codec configurations.
    std::shared_ptr<string> name_ = nullptr;
    // The transmuxing configurations.
    std::shared_ptr<string> state_ = nullptr;
    // Indicates whether the audio bitrate is checked. If the bitrate of the output audio is greater than the bitrate of the input audio, the bitrate of the input audio is retained after transcoding. In this case, the specified audio bitrate does not take effect. This parameter has a lower priority than the IsCheckAudioBitrateFail parameter. Valid values:
    // 
    // *   **true**: The audio bitrate is checked.
    // 
    // *   **false**: The audio bitrate is not checked.
    // 
    // *   Default value:
    // 
    //     *   If the parameter is left empty and the codec of the output audio is different from that of the input audio, the default value is false.
    //     *   If the parameter is left empty and the codec of the output audio is the same as that of the input audio, the default value is true.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateTransConfig> transConfig_ = nullptr;
    // The video codec configurations.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
