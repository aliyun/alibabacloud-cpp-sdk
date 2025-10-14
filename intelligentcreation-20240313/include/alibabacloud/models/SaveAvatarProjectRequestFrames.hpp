// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUESTFRAMES_HPP_
#define ALIBABACLOUD_MODELS_SAVEAVATARPROJECTREQUESTFRAMES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SaveAvatarProjectRequestFramesLayers.hpp>
#include <alibabacloud/models/SaveAvatarProjectRequestFramesVideoScript.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace IntelligentCreation20240313
{
namespace Models
{
  class SaveAvatarProjectRequestFrames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveAvatarProjectRequestFrames& obj) { 
      DARABONBA_PTR_TO_JSON(index, index_);
      DARABONBA_PTR_TO_JSON(layers, layers_);
      DARABONBA_PTR_TO_JSON(videoScript, videoScript_);
    };
    friend void from_json(const Darabonba::Json& j, SaveAvatarProjectRequestFrames& obj) { 
      DARABONBA_PTR_FROM_JSON(index, index_);
      DARABONBA_PTR_FROM_JSON(layers, layers_);
      DARABONBA_PTR_FROM_JSON(videoScript, videoScript_);
    };
    SaveAvatarProjectRequestFrames() = default ;
    SaveAvatarProjectRequestFrames(const SaveAvatarProjectRequestFrames &) = default ;
    SaveAvatarProjectRequestFrames(SaveAvatarProjectRequestFrames &&) = default ;
    SaveAvatarProjectRequestFrames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveAvatarProjectRequestFrames() = default ;
    SaveAvatarProjectRequestFrames& operator=(const SaveAvatarProjectRequestFrames &) = default ;
    SaveAvatarProjectRequestFrames& operator=(SaveAvatarProjectRequestFrames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->index_ == nullptr
        && return this->layers_ == nullptr && return this->videoScript_ == nullptr; };
    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline SaveAvatarProjectRequestFrames& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // layers Field Functions 
    bool hasLayers() const { return this->layers_ != nullptr;};
    void deleteLayers() { this->layers_ = nullptr;};
    inline const vector<Models::SaveAvatarProjectRequestFramesLayers> & layers() const { DARABONBA_PTR_GET_CONST(layers_, vector<Models::SaveAvatarProjectRequestFramesLayers>) };
    inline vector<Models::SaveAvatarProjectRequestFramesLayers> layers() { DARABONBA_PTR_GET(layers_, vector<Models::SaveAvatarProjectRequestFramesLayers>) };
    inline SaveAvatarProjectRequestFrames& setLayers(const vector<Models::SaveAvatarProjectRequestFramesLayers> & layers) { DARABONBA_PTR_SET_VALUE(layers_, layers) };
    inline SaveAvatarProjectRequestFrames& setLayers(vector<Models::SaveAvatarProjectRequestFramesLayers> && layers) { DARABONBA_PTR_SET_RVALUE(layers_, layers) };


    // videoScript Field Functions 
    bool hasVideoScript() const { return this->videoScript_ != nullptr;};
    void deleteVideoScript() { this->videoScript_ = nullptr;};
    inline const Models::SaveAvatarProjectRequestFramesVideoScript & videoScript() const { DARABONBA_PTR_GET_CONST(videoScript_, Models::SaveAvatarProjectRequestFramesVideoScript) };
    inline Models::SaveAvatarProjectRequestFramesVideoScript videoScript() { DARABONBA_PTR_GET(videoScript_, Models::SaveAvatarProjectRequestFramesVideoScript) };
    inline SaveAvatarProjectRequestFrames& setVideoScript(const Models::SaveAvatarProjectRequestFramesVideoScript & videoScript) { DARABONBA_PTR_SET_VALUE(videoScript_, videoScript) };
    inline SaveAvatarProjectRequestFrames& setVideoScript(Models::SaveAvatarProjectRequestFramesVideoScript && videoScript) { DARABONBA_PTR_SET_RVALUE(videoScript_, videoScript) };


  protected:
    std::shared_ptr<int32_t> index_ = nullptr;
    std::shared_ptr<vector<Models::SaveAvatarProjectRequestFramesLayers>> layers_ = nullptr;
    std::shared_ptr<Models::SaveAvatarProjectRequestFramesVideoScript> videoScript_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace IntelligentCreation20240313
#endif
