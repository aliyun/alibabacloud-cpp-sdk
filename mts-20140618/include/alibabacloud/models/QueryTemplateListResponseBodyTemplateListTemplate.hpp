// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELISTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELISTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplateAudio.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplateContainer.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplateMuxConfig.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplateTransConfig.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplateVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryTemplateListResponseBodyTemplateListTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateListResponseBodyTemplateListTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateListResponseBodyTemplateListTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    QueryTemplateListResponseBodyTemplateListTemplate() = default ;
    QueryTemplateListResponseBodyTemplateListTemplate(const QueryTemplateListResponseBodyTemplateListTemplate &) = default ;
    QueryTemplateListResponseBodyTemplateListTemplate(QueryTemplateListResponseBodyTemplateListTemplate &&) = default ;
    QueryTemplateListResponseBodyTemplateListTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateListResponseBodyTemplateListTemplate() = default ;
    QueryTemplateListResponseBodyTemplateListTemplate& operator=(const QueryTemplateListResponseBodyTemplateListTemplate &) = default ;
    QueryTemplateListResponseBodyTemplateListTemplate& operator=(QueryTemplateListResponseBodyTemplateListTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->container_ == nullptr && return this->creationTime_ == nullptr && return this->id_ == nullptr && return this->muxConfig_ == nullptr && return this->name_ == nullptr
        && return this->state_ == nullptr && return this->transConfig_ == nullptr && return this->video_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::QueryTemplateListResponseBodyTemplateListTemplateAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::QueryTemplateListResponseBodyTemplateListTemplateAudio) };
    inline Models::QueryTemplateListResponseBodyTemplateListTemplateAudio audio() { DARABONBA_PTR_GET(audio_, Models::QueryTemplateListResponseBodyTemplateListTemplateAudio) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setAudio(const Models::QueryTemplateListResponseBodyTemplateListTemplateAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setAudio(Models::QueryTemplateListResponseBodyTemplateListTemplateAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::QueryTemplateListResponseBodyTemplateListTemplateContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::QueryTemplateListResponseBodyTemplateListTemplateContainer) };
    inline Models::QueryTemplateListResponseBodyTemplateListTemplateContainer container() { DARABONBA_PTR_GET(container_, Models::QueryTemplateListResponseBodyTemplateListTemplateContainer) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setContainer(const Models::QueryTemplateListResponseBodyTemplateListTemplateContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setContainer(Models::QueryTemplateListResponseBodyTemplateListTemplateContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfig) };
    inline Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfig) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setMuxConfig(const Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setMuxConfig(Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::QueryTemplateListResponseBodyTemplateListTemplateTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::QueryTemplateListResponseBodyTemplateListTemplateTransConfig) };
    inline Models::QueryTemplateListResponseBodyTemplateListTemplateTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::QueryTemplateListResponseBodyTemplateListTemplateTransConfig) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setTransConfig(const Models::QueryTemplateListResponseBodyTemplateListTemplateTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setTransConfig(Models::QueryTemplateListResponseBodyTemplateListTemplateTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::QueryTemplateListResponseBodyTemplateListTemplateVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::QueryTemplateListResponseBodyTemplateListTemplateVideo) };
    inline Models::QueryTemplateListResponseBodyTemplateListTemplateVideo video() { DARABONBA_PTR_GET(video_, Models::QueryTemplateListResponseBodyTemplateListTemplateVideo) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setVideo(const Models::QueryTemplateListResponseBodyTemplateListTemplateVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline QueryTemplateListResponseBodyTemplateListTemplate& setVideo(Models::QueryTemplateListResponseBodyTemplateListTemplateVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio codec configurations.
    std::shared_ptr<Models::QueryTemplateListResponseBodyTemplateListTemplateAudio> audio_ = nullptr;
    // The container format configurations.
    std::shared_ptr<Models::QueryTemplateListResponseBodyTemplateListTemplateContainer> container_ = nullptr;
    // The time when the template was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The transcoding template ID.
    std::shared_ptr<string> id_ = nullptr;
    // The transmuxing configurations.
    std::shared_ptr<Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfig> muxConfig_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The status of the template. Valid values:
    // 
    // *   **Normal**
    // *   **Deleted**
    std::shared_ptr<string> state_ = nullptr;
    // The general transcoding configurations.
    std::shared_ptr<Models::QueryTemplateListResponseBodyTemplateListTemplateTransConfig> transConfig_ = nullptr;
    // The video codec configurations.
    std::shared_ptr<Models::QueryTemplateListResponseBodyTemplateListTemplateVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
