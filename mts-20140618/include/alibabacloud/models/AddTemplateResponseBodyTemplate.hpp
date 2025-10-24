// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateAudio.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateContainer.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateMuxConfig.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateTransConfig.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddTemplateResponseBodyTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateResponseBodyTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateResponseBodyTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    AddTemplateResponseBodyTemplate() = default ;
    AddTemplateResponseBodyTemplate(const AddTemplateResponseBodyTemplate &) = default ;
    AddTemplateResponseBodyTemplate(AddTemplateResponseBodyTemplate &&) = default ;
    AddTemplateResponseBodyTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateResponseBodyTemplate() = default ;
    AddTemplateResponseBodyTemplate& operator=(const AddTemplateResponseBodyTemplate &) = default ;
    AddTemplateResponseBodyTemplate& operator=(AddTemplateResponseBodyTemplate &&) = default ;
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
    inline const Models::AddTemplateResponseBodyTemplateAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::AddTemplateResponseBodyTemplateAudio) };
    inline Models::AddTemplateResponseBodyTemplateAudio audio() { DARABONBA_PTR_GET(audio_, Models::AddTemplateResponseBodyTemplateAudio) };
    inline AddTemplateResponseBodyTemplate& setAudio(const Models::AddTemplateResponseBodyTemplateAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline AddTemplateResponseBodyTemplate& setAudio(Models::AddTemplateResponseBodyTemplateAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::AddTemplateResponseBodyTemplateContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::AddTemplateResponseBodyTemplateContainer) };
    inline Models::AddTemplateResponseBodyTemplateContainer container() { DARABONBA_PTR_GET(container_, Models::AddTemplateResponseBodyTemplateContainer) };
    inline AddTemplateResponseBodyTemplate& setContainer(const Models::AddTemplateResponseBodyTemplateContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline AddTemplateResponseBodyTemplate& setContainer(Models::AddTemplateResponseBodyTemplateContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline AddTemplateResponseBodyTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::AddTemplateResponseBodyTemplateMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::AddTemplateResponseBodyTemplateMuxConfig) };
    inline Models::AddTemplateResponseBodyTemplateMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::AddTemplateResponseBodyTemplateMuxConfig) };
    inline AddTemplateResponseBodyTemplate& setMuxConfig(const Models::AddTemplateResponseBodyTemplateMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline AddTemplateResponseBodyTemplate& setMuxConfig(Models::AddTemplateResponseBodyTemplateMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline AddTemplateResponseBodyTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline AddTemplateResponseBodyTemplate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::AddTemplateResponseBodyTemplateTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::AddTemplateResponseBodyTemplateTransConfig) };
    inline Models::AddTemplateResponseBodyTemplateTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::AddTemplateResponseBodyTemplateTransConfig) };
    inline AddTemplateResponseBodyTemplate& setTransConfig(const Models::AddTemplateResponseBodyTemplateTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline AddTemplateResponseBodyTemplate& setTransConfig(Models::AddTemplateResponseBodyTemplateTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::AddTemplateResponseBodyTemplateVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::AddTemplateResponseBodyTemplateVideo) };
    inline Models::AddTemplateResponseBodyTemplateVideo video() { DARABONBA_PTR_GET(video_, Models::AddTemplateResponseBodyTemplateVideo) };
    inline AddTemplateResponseBodyTemplate& setVideo(const Models::AddTemplateResponseBodyTemplateVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline AddTemplateResponseBodyTemplate& setVideo(Models::AddTemplateResponseBodyTemplateVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio codec configurations.
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateAudio> audio_ = nullptr;
    // The container format settings.
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateContainer> container_ = nullptr;
    // The ID of the transcoding template. We recommend that you keep this ID for subsequent operation calls.
    std::shared_ptr<string> id_ = nullptr;
    // The transmuxing settings.
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateMuxConfig> muxConfig_ = nullptr;
    // The name of the transcoding template.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the template. Valid values:
    // 
    // *   **Normal**: The template is normal.
    // *   **Deleted**: The template is deleted.
    std::shared_ptr<string> state_ = nullptr;
    // The general transcoding settings.
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateTransConfig> transConfig_ = nullptr;
    // The video codec configurations.
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
