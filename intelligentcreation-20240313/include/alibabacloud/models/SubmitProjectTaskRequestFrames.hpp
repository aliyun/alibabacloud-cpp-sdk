// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMES_HPP_
#define ALIBABACLOUD_MODELS_SUBMITPROJECTTASKREQUESTFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitProjectTaskRequestFramesLayers.hpp>
#include <alibabacloud/models/SubmitProjectTaskRequestFramesSubtitle.hpp>
#include <alibabacloud/models/SubmitProjectTaskRequestFramesVideoScript.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SubmitProjectTaskRequestFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitProjectTaskRequestFrames& obj) { 
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(layers, layers_);
      DARABONBA_PTR_TO_JSON(subtitle, subtitle_);
      DARABONBA_PTR_TO_JSON(videoScript, videoScript_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitProjectTaskRequestFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(layers, layers_);
      DARABONBA_PTR_FROM_JSON(subtitle, subtitle_);
      DARABONBA_PTR_FROM_JSON(videoScript, videoScript_);
    };
    SubmitProjectTaskRequestFrames() = default ;
    SubmitProjectTaskRequestFrames(const SubmitProjectTaskRequestFrames &) = default ;
    SubmitProjectTaskRequestFrames(SubmitProjectTaskRequestFrames &&) = default ;
    SubmitProjectTaskRequestFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitProjectTaskRequestFrames() = default ;
    SubmitProjectTaskRequestFrames& operator=(const SubmitProjectTaskRequestFrames &) = default ;
    SubmitProjectTaskRequestFrames& operator=(SubmitProjectTaskRequestFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->layers_ == nullptr && return this->subtitle_ == nullptr && return this->videoScript_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline SubmitProjectTaskRequestFrames& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<Models::SubmitProjectTaskRequestFramesLayers> & layers() const { DARABONBA_PTR_GET_CONST(layers_, vector<Models::SubmitProjectTaskRequestFramesLayers>) };
    inline vector<Models::SubmitProjectTaskRequestFramesLayers> layers() { DARABONBA_PTR_GET(layers_, vector<Models::SubmitProjectTaskRequestFramesLayers>) };
    inline SubmitProjectTaskRequestFrames& setLayers(const vector<Models::SubmitProjectTaskRequestFramesLayers> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline SubmitProjectTaskRequestFrames& setLayers(vector<Models::SubmitProjectTaskRequestFramesLayers> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // subtitle Field Functions 
    bool hasSubtitle() const { return this->subtitle_ != nullptr;};
    void deleteSubtitle() { this->subtitle_ = nullptr;};
    inline const Models::SubmitProjectTaskRequestFramesSubtitle & subtitle() const { DARABONBA_PTR_GET_CONST(subtitle_, Models::SubmitProjectTaskRequestFramesSubtitle) };
    inline Models::SubmitProjectTaskRequestFramesSubtitle subtitle() { DARABONBA_PTR_GET(subtitle_, Models::SubmitProjectTaskRequestFramesSubtitle) };
    inline SubmitProjectTaskRequestFrames& setSubtitle(const Models::SubmitProjectTaskRequestFramesSubtitle & subtitle) { DARABONBA_PTR_SET_VALUE(subtitle_, subtitle) };
    inline SubmitProjectTaskRequestFrames& setSubtitle(Models::SubmitProjectTaskRequestFramesSubtitle && subtitle) { DARABONBA_PTR_SET_RVALUE(subtitle_, subtitle) };


    // videoScript Field Functions 
    bool hasVideoScript() const { return this->videoScript_ != nullptr;};
    void deleteVideoScript() { this->videoScript_ = nullptr;};
    inline const Models::SubmitProjectTaskRequestFramesVideoScript & videoScript() const { DARABONBA_PTR_GET_CONST(videoScript_, Models::SubmitProjectTaskRequestFramesVideoScript) };
    inline Models::SubmitProjectTaskRequestFramesVideoScript videoScript() { DARABONBA_PTR_GET(videoScript_, Models::SubmitProjectTaskRequestFramesVideoScript) };
    inline SubmitProjectTaskRequestFrames& setVideoScript(const Models::SubmitProjectTaskRequestFramesVideoScript & videoScript) { DARABONBA_PTR_SET_VALUE(videoScript_, videoScript) };
    inline SubmitProjectTaskRequestFrames& setVideoScript(Models::SubmitProjectTaskRequestFramesVideoScript && videoScript) { DARABONBA_PTR_SET_RVALUE(videoScript_, videoScript) };


  protected:
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<vector<Models::SubmitProjectTaskRequestFramesLayers>> layers_ = nullptr;
    std::shared_ptr<Models::SubmitProjectTaskRequestFramesSubtitle> subtitle_ = nullptr;
    std::shared_ptr<Models::SubmitProjectTaskRequestFramesVideoScript> videoScript_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
