// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPGMSCENEINFOSSCENEINFO_HPP_
#define ALIBABACLOUD_MODELS_STARTCASTERRESPONSEBODYPGMSCENEINFOSSCENEINFO_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StartCasterResponseBodyPgmSceneInfosSceneInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartCasterResponseBodyPgmSceneInfosSceneInfo& obj) { 
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
    };
    friend void from_json(const Darabonba::Json& j, StartCasterResponseBodyPgmSceneInfosSceneInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
    };
    StartCasterResponseBodyPgmSceneInfosSceneInfo() = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfo(const StartCasterResponseBodyPgmSceneInfosSceneInfo &) = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfo(StartCasterResponseBodyPgmSceneInfosSceneInfo &&) = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartCasterResponseBodyPgmSceneInfosSceneInfo() = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfo& operator=(const StartCasterResponseBodyPgmSceneInfosSceneInfo &) = default ;
    StartCasterResponseBodyPgmSceneInfosSceneInfo& operator=(StartCasterResponseBodyPgmSceneInfosSceneInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sceneId_ != nullptr
        && this->streamInfos_ != nullptr && this->streamUrl_ != nullptr; };
    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline StartCasterResponseBodyPgmSceneInfosSceneInfo& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // streamInfos Field Functions 
    bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
    void deleteStreamInfos() { this->streamInfos_ = nullptr;};
    inline const Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos & streamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos) };
    inline Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos streamInfos() { DARABONBA_PTR_GET(streamInfos_, Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos) };
    inline StartCasterResponseBodyPgmSceneInfosSceneInfo& setStreamInfos(const Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
    inline StartCasterResponseBodyPgmSceneInfosSceneInfo& setStreamInfos(Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline StartCasterResponseBodyPgmSceneInfosSceneInfo& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


  protected:
    // The ID of the scene.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The stream relay URLs.
    std::shared_ptr<Models::StartCasterResponseBodyPgmSceneInfosSceneInfoStreamInfos> streamInfos_ = nullptr;
    // The streaming URL of the PGM scene in the production studio. The value is not a stream relay URL.
    std::shared_ptr<string> streamUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
