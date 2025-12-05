// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPENJMETERSCENESRESPONSEBODYJMETERSCENE_HPP_
#define ALIBABACLOUD_MODELS_LISTOPENJMETERSCENESRESPONSEBODYJMETERSCENE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PTS20201020
{
namespace Models
{
  class ListOpenJMeterScenesResponseBodyJMeterScene : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOpenJMeterScenesResponseBodyJMeterScene& obj) { 
      DARABONBA_PTR_TO_JSON(DurationStr, durationStr_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListOpenJMeterScenesResponseBodyJMeterScene& obj) { 
      DARABONBA_PTR_FROM_JSON(DurationStr, durationStr_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListOpenJMeterScenesResponseBodyJMeterScene() = default ;
    ListOpenJMeterScenesResponseBodyJMeterScene(const ListOpenJMeterScenesResponseBodyJMeterScene &) = default ;
    ListOpenJMeterScenesResponseBodyJMeterScene(ListOpenJMeterScenesResponseBodyJMeterScene &&) = default ;
    ListOpenJMeterScenesResponseBodyJMeterScene(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOpenJMeterScenesResponseBodyJMeterScene() = default ;
    ListOpenJMeterScenesResponseBodyJMeterScene& operator=(const ListOpenJMeterScenesResponseBodyJMeterScene &) = default ;
    ListOpenJMeterScenesResponseBodyJMeterScene& operator=(ListOpenJMeterScenesResponseBodyJMeterScene &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->durationStr_ == nullptr
        && return this->sceneId_ == nullptr && return this->sceneName_ == nullptr && return this->status_ == nullptr; };
    // durationStr Field Functions 
    bool hasDurationStr() const { return this->durationStr_ != nullptr;};
    void deleteDurationStr() { this->durationStr_ = nullptr;};
    inline string durationStr() const { DARABONBA_PTR_GET_DEFAULT(durationStr_, "") };
    inline ListOpenJMeterScenesResponseBodyJMeterScene& setDurationStr(string durationStr) { DARABONBA_PTR_SET_VALUE(durationStr_, durationStr) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListOpenJMeterScenesResponseBodyJMeterScene& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline ListOpenJMeterScenesResponseBodyJMeterScene& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListOpenJMeterScenesResponseBodyJMeterScene& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The stress testing duration.
    std::shared_ptr<string> durationStr_ = nullptr;
    // The scenario ID.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The scenario name.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The status of the scenario. Valid values:
    // 
    // *   PREPARING: The scenario is being prepared.
    // *   PREPARED: The scenario has been prepared.
    // *   STARTING: The scenario is starting.
    // *   RUNNING: The scenario is running.
    // *   STOPPING: The scenario is being stopped.
    // *   STOPPED: The scenario waits for startup
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PTS20201020
#endif
