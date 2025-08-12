// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPVWSCENEINFOSSCENEINFO_HPP_
#define ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPVWSCENEINFOSSCENEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartCasterResponseBodyPvwSceneInfosSceneInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCasterResponseBodyPvwSceneInfosSceneInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
    };
    friend void from_json(const Darabonba::Json& j, StartCasterResponseBodyPvwSceneInfosSceneInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
    };
    StartCasterResponseBodyPvwSceneInfosSceneInfo() = default ;
    StartCasterResponseBodyPvwSceneInfosSceneInfo(const StartCasterResponseBodyPvwSceneInfosSceneInfo &) = default ;
    StartCasterResponseBodyPvwSceneInfosSceneInfo(StartCasterResponseBodyPvwSceneInfosSceneInfo &&) = default ;
    StartCasterResponseBodyPvwSceneInfosSceneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCasterResponseBodyPvwSceneInfosSceneInfo() = default ;
    StartCasterResponseBodyPvwSceneInfosSceneInfo& operator=(const StartCasterResponseBodyPvwSceneInfosSceneInfo &) = default ;
    StartCasterResponseBodyPvwSceneInfosSceneInfo& operator=(StartCasterResponseBodyPvwSceneInfosSceneInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sceneId_ != nullptr
        && this->streamUrl_ != nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline StartCasterResponseBodyPvwSceneInfosSceneInfo& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline StartCasterResponseBodyPvwSceneInfosSceneInfo& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


  protected:
    // The ID of the scene.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The streaming URL of the PVW scene in the production studio. The value is not a stream relay URL.
    std::shared_ptr<string> streamUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
