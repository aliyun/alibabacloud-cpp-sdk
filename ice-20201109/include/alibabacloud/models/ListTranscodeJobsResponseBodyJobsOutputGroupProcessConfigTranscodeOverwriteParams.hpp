// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGTRANSCODEOVERWRITEPARAMS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer.hpp>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig.hpp>
#include <map>
#include <alibabacloud/models/ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsVideo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_TO_JSON(Audio, audio_);
      DARABONBA_PTR_TO_JSON(Container, container_);
      DARABONBA_PTR_TO_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Video, video_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& obj) { 
      DARABONBA_PTR_FROM_JSON(Audio, audio_);
      DARABONBA_PTR_FROM_JSON(Container, container_);
      DARABONBA_PTR_FROM_JSON(MuxConfig, muxConfig_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Video, video_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audio_ == nullptr
        && return this->container_ == nullptr && return this->muxConfig_ == nullptr && return this->tags_ == nullptr && return this->video_ == nullptr; };
    // audio Field Functions 
    bool hasAudio() const { return this->audio_ != nullptr;};
    void deleteAudio() { this->audio_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio & audio() const { DARABONBA_PTR_GET_CONST(audio_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio audio() { DARABONBA_PTR_GET(audio_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setAudio(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio & audio) { DARABONBA_PTR_SET_VALUE(audio_, audio) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setAudio(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio && audio) { DARABONBA_PTR_SET_RVALUE(audio_, audio) };


    // container Field Functions 
    bool hasContainer() const { return this->container_ != nullptr;};
    void deleteContainer() { this->container_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer & container() const { DARABONBA_PTR_GET_CONST(container_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer container() { DARABONBA_PTR_GET(container_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setContainer(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer & container) { DARABONBA_PTR_SET_VALUE(container_, container) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setContainer(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer && container) { DARABONBA_PTR_SET_RVALUE(container_, container) };


    // muxConfig Field Functions 
    bool hasMuxConfig() const { return this->muxConfig_ != nullptr;};
    void deleteMuxConfig() { this->muxConfig_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig() const { DARABONBA_PTR_GET_CONST(muxConfig_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig muxConfig() { DARABONBA_PTR_GET(muxConfig_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setMuxConfig(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig & muxConfig) { DARABONBA_PTR_SET_VALUE(muxConfig_, muxConfig) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setMuxConfig(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig && muxConfig) { DARABONBA_PTR_SET_RVALUE(muxConfig_, muxConfig) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const map<string, string> & tags() const { DARABONBA_PTR_GET_CONST(tags_, map<string, string>) };
    inline map<string, string> tags() { DARABONBA_PTR_GET(tags_, map<string, string>) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setTags(const map<string, string> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setTags(map<string, string> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // video Field Functions 
    bool hasVideo() const { return this->video_ != nullptr;};
    void deleteVideo() { this->video_ = nullptr;};
    inline const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsVideo & video() const { DARABONBA_PTR_GET_CONST(video_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsVideo) };
    inline Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsVideo video() { DARABONBA_PTR_GET(video_, Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsVideo) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setVideo(const Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsVideo & video) { DARABONBA_PTR_SET_VALUE(video_, video) };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParams& setVideo(Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsVideo && video) { DARABONBA_PTR_SET_RVALUE(video_, video) };


  protected:
    // The audio settings.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsAudio> audio_ = nullptr;
    // The encapsulation format settings.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsContainer> container_ = nullptr;
    // The encapsulation settings.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsMuxConfig> muxConfig_ = nullptr;
    std::shared_ptr<map<string, string>> tags_ = nullptr;
    // The video settings.
    std::shared_ptr<Models::ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigTranscodeOverwriteParamsVideo> video_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
