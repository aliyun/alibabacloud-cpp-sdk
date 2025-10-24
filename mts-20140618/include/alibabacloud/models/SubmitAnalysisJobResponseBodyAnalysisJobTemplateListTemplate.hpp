// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateAudio.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& operator=(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate &&) = default ;
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
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateAudio) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateAudio audio() { DARABONBA_PTR_GET(audio_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateAudio) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setAudio(const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setAudio(Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer container() { DARABONBA_PTR_GET(container_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setContainer(const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setContainer(Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setMuxConfig(const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setMuxConfig(Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setTransConfig(const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setTransConfig(Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateVideo) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateVideo video() { DARABONBA_PTR_GET(video_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateVideo) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setVideo(const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplate& setVideo(Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio codec configurations.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateAudio> audio_ = nullptr;
    // The container format configurations.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateContainer> container_ = nullptr;
    // The ID of the transcoding template.
    std::shared_ptr<string> id_ = nullptr;
    // The transmuxing configurations.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig> muxConfig_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the template.
    // 
    // *   **Normal**: The template is normal.
    // *   **Deleted**: The template is deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The general transcoding configurations.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig> transConfig_ = nullptr;
    // The video codec configurations.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
