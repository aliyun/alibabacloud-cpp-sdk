// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELISTSCENE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECASTERSCENESRESPONSEBODYSCENELISTSCENE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCasterScenesResponseBodySceneListSceneComponentIds.hpp>
#include <alibabacloud/models/DescribeCasterScenesResponseBodySceneListSceneStreamInfos.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeCasterScenesResponseBodySceneListScene : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCasterScenesResponseBodySceneListScene& obj) { 
      DARABONBA_PTR_TO_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(OutputType, outputType_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StreamInfos, streamInfos_);
      DARABONBA_PTR_TO_JSON(StreamUrl, streamUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCasterScenesResponseBodySceneListScene& obj) { 
      DARABONBA_PTR_FROM_JSON(ComponentIds, componentIds_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(OutputType, outputType_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StreamInfos, streamInfos_);
      DARABONBA_PTR_FROM_JSON(StreamUrl, streamUrl_);
    };
    DescribeCasterScenesResponseBodySceneListScene() = default ;
    DescribeCasterScenesResponseBodySceneListScene(const DescribeCasterScenesResponseBodySceneListScene &) = default ;
    DescribeCasterScenesResponseBodySceneListScene(DescribeCasterScenesResponseBodySceneListScene &&) = default ;
    DescribeCasterScenesResponseBodySceneListScene(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCasterScenesResponseBodySceneListScene() = default ;
    DescribeCasterScenesResponseBodySceneListScene& operator=(const DescribeCasterScenesResponseBodySceneListScene &) = default ;
    DescribeCasterScenesResponseBodySceneListScene& operator=(DescribeCasterScenesResponseBodySceneListScene &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->componentIds_ != nullptr
        && this->layoutId_ != nullptr && this->outputType_ != nullptr && this->sceneId_ != nullptr && this->sceneName_ != nullptr && this->status_ != nullptr
        && this->streamInfos_ != nullptr && this->streamUrl_ != nullptr; };
    // componentIds Field Functions 
    bool hasComponentIds() const { return this->componentIds_ != nullptr;};
    void deleteComponentIds() { this->componentIds_ = nullptr;};
    inline const Models::DescribeCasterScenesResponseBodySceneListSceneComponentIds & componentIds() const { DARABONBA_PTR_GET_CONST(componentIds_, Models::DescribeCasterScenesResponseBodySceneListSceneComponentIds) };
    inline Models::DescribeCasterScenesResponseBodySceneListSceneComponentIds componentIds() { DARABONBA_PTR_GET(componentIds_, Models::DescribeCasterScenesResponseBodySceneListSceneComponentIds) };
    inline DescribeCasterScenesResponseBodySceneListScene& setComponentIds(const Models::DescribeCasterScenesResponseBodySceneListSceneComponentIds & componentIds) { DARABONBA_PTR_SET_VALUE(componentIds_, componentIds) };
    inline DescribeCasterScenesResponseBodySceneListScene& setComponentIds(Models::DescribeCasterScenesResponseBodySceneListSceneComponentIds && componentIds) { DARABONBA_PTR_SET_RVALUE(componentIds_, componentIds) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string layoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline DescribeCasterScenesResponseBodySceneListScene& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // outputType Field Functions 
    bool hasOutputType() const { return this->outputType_ != nullptr;};
    void deleteOutputType() { this->outputType_ = nullptr;};
    inline string outputType() const { DARABONBA_PTR_GET_DEFAULT(outputType_, "") };
    inline DescribeCasterScenesResponseBodySceneListScene& setOutputType(string outputType) { DARABONBA_PTR_SET_VALUE(outputType_, outputType) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline DescribeCasterScenesResponseBodySceneListScene& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline DescribeCasterScenesResponseBodySceneListScene& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeCasterScenesResponseBodySceneListScene& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // streamInfos Field Functions 
    bool hasStreamInfos() const { return this->streamInfos_ != nullptr;};
    void deleteStreamInfos() { this->streamInfos_ = nullptr;};
    inline const Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfos & streamInfos() const { DARABONBA_PTR_GET_CONST(streamInfos_, Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfos) };
    inline Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfos streamInfos() { DARABONBA_PTR_GET(streamInfos_, Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfos) };
    inline DescribeCasterScenesResponseBodySceneListScene& setStreamInfos(const Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfos & streamInfos) { DARABONBA_PTR_SET_VALUE(streamInfos_, streamInfos) };
    inline DescribeCasterScenesResponseBodySceneListScene& setStreamInfos(Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfos && streamInfos) { DARABONBA_PTR_SET_RVALUE(streamInfos_, streamInfos) };


    // streamUrl Field Functions 
    bool hasStreamUrl() const { return this->streamUrl_ != nullptr;};
    void deleteStreamUrl() { this->streamUrl_ = nullptr;};
    inline string streamUrl() const { DARABONBA_PTR_GET_DEFAULT(streamUrl_, "") };
    inline DescribeCasterScenesResponseBodySceneListScene& setStreamUrl(string streamUrl) { DARABONBA_PTR_SET_VALUE(streamUrl_, streamUrl) };


  protected:
    // The components.
    std::shared_ptr<Models::DescribeCasterScenesResponseBodySceneListSceneComponentIds> componentIds_ = nullptr;
    // The ID of the layout.
    std::shared_ptr<string> layoutId_ = nullptr;
    // Indicates whether the output video is in PVW mode or PGM mode. Valid values:
    // 
    // *   **0**: in PVW mode.
    // *   **1**: in PGM mode.
    std::shared_ptr<string> outputType_ = nullptr;
    // The ID of the scene. You can use the ID as a request parameter in the API operation that is used to modify the audio configurations of the scene, query the audio configurations of the scene, start the scene, or stop the scene.
    std::shared_ptr<string> sceneId_ = nullptr;
    // The name of the scene.
    std::shared_ptr<string> sceneName_ = nullptr;
    // The status of the scene. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: enabled
    std::shared_ptr<int32_t> status_ = nullptr;
    // The information about the stream.
    std::shared_ptr<Models::DescribeCasterScenesResponseBodySceneListSceneStreamInfos> streamInfos_ = nullptr;
    // The URL of the output stream.
    std::shared_ptr<string> streamUrl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
