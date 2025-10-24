// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLISTANALYSISJOBTEMPLATELISTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_QUERYANALYSISJOBLISTRESPONSEBODYANALYSISJOBLISTANALYSISJOBTEMPLATELISTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateAudio.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateContainer.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateMuxConfig.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateTransConfig.hpp>
#include <alibabacloud/models/QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TransConfig, transConfig_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate(const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate(QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate &&) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate() = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& operator=(const QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate &) = default ;
    QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& operator=(QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate &&) = default ;
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
    inline const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateAudio) };
    inline Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateAudio audio() { DARABONBA_PTR_GET(audio_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateAudio) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setAudio(const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setAudio(Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateContainer) };
    inline Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateContainer container() { DARABONBA_PTR_GET(container_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateContainer) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setContainer(const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setContainer(Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateMuxConfig) };
    inline Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateMuxConfig) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setMuxConfig(const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setMuxConfig(Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // transConfig Field Functions 
    bool hasTransConfig() const { return this->transConfig_ != nullptr;};
    void deleteTransConfig() { this->transConfig_ = nullptr;};
    inline const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateTransConfig & transConfig() const { DARABONBA_PTR_GET_CONST(transConfig_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateTransConfig) };
    inline Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateTransConfig transConfig() { DARABONBA_PTR_GET(transConfig_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateTransConfig) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setTransConfig(const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateTransConfig & transConfig) { DARABONBA_PTR_SET_VALUE(transConfig_, transConfig) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setTransConfig(Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateTransConfig && transConfig) { DARABONBA_PTR_SET_RVALUE(transConfig_, transConfig) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateVideo) };
    inline Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateVideo video() { DARABONBA_PTR_GET(video_, Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateVideo) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setVideo(const Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplate& setVideo(Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio codec configurations.
    std::shared_ptr<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateAudio> audio_ = nullptr;
    // The container format configurations.
    std::shared_ptr<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateContainer> container_ = nullptr;
    // The transcoding template ID.
    std::shared_ptr<string> id_ = nullptr;
    // The transmuxing configurations.
    std::shared_ptr<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateMuxConfig> muxConfig_ = nullptr;
    // The name of the template.
    std::shared_ptr<string> name_ = nullptr;
    // The state of the template. Valid values:
    // 
    // *   **Normal**
    // *   **Deleted**
    std::shared_ptr<string> state_ = nullptr;
    // The general transcoding configurations.
    std::shared_ptr<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateTransConfig> transConfig_ = nullptr;
    // The video codec configurations.
    std::shared_ptr<Models::QueryAnalysisJobListResponseBodyAnalysisJobListAnalysisJobTemplateListTemplateVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
