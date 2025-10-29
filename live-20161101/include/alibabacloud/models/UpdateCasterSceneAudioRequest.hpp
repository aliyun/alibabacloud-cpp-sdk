// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECASTERSCENEAUDIOREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECASTERSCENEAUDIOREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateCasterSceneAudioRequestAudioLayer.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateCasterSceneAudioRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCasterSceneAudioRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(FollowEnable, followEnable_);
      DARABONBA_PTR_TO_JSON(MixList, mixList_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCasterSceneAudioRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AudioLayer, audioLayer_);
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(FollowEnable, followEnable_);
      DARABONBA_PTR_FROM_JSON(MixList, mixList_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    UpdateCasterSceneAudioRequest() = default ;
    UpdateCasterSceneAudioRequest(const UpdateCasterSceneAudioRequest &) = default ;
    UpdateCasterSceneAudioRequest(UpdateCasterSceneAudioRequest &&) = default ;
    UpdateCasterSceneAudioRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCasterSceneAudioRequest() = default ;
    UpdateCasterSceneAudioRequest& operator=(const UpdateCasterSceneAudioRequest &) = default ;
    UpdateCasterSceneAudioRequest& operator=(UpdateCasterSceneAudioRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->audioLayer_ == nullptr
        && return this->casterId_ == nullptr && return this->followEnable_ == nullptr && return this->mixList_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr
        && return this->sceneId_ == nullptr; };
    // audioLayer Field Functions 
    bool hasAudioLayer() const { return this->audioLayer_ != nullptr;};
    void deleteAudioLayer() { this->audioLayer_ = nullptr;};
    inline const vector<UpdateCasterSceneAudioRequestAudioLayer> & audioLayer() const { DARABONBA_PTR_GET_CONST(audioLayer_, vector<UpdateCasterSceneAudioRequestAudioLayer>) };
    inline vector<UpdateCasterSceneAudioRequestAudioLayer> audioLayer() { DARABONBA_PTR_GET(audioLayer_, vector<UpdateCasterSceneAudioRequestAudioLayer>) };
    inline UpdateCasterSceneAudioRequest& setAudioLayer(const vector<UpdateCasterSceneAudioRequestAudioLayer> & audioLayer) { DARABONBA_PTR_SET_VALUE(audioLayer_, audioLayer) };
    inline UpdateCasterSceneAudioRequest& setAudioLayer(vector<UpdateCasterSceneAudioRequestAudioLayer> && audioLayer) { DARABONBA_PTR_SET_RVALUE(audioLayer_, audioLayer) };


    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline UpdateCasterSceneAudioRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // followEnable Field Functions 
    bool hasFollowEnable() const { return this->followEnable_ != nullptr;};
    void deleteFollowEnable() { this->followEnable_ = nullptr;};
    inline int32_t followEnable() const { DARABONBA_PTR_GET_DEFAULT(followEnable_, 0) };
    inline UpdateCasterSceneAudioRequest& setFollowEnable(int32_t followEnable) { DARABONBA_PTR_SET_VALUE(followEnable_, followEnable) };


    // mixList Field Functions 
    bool hasMixList() const { return this->mixList_ != nullptr;};
    void deleteMixList() { this->mixList_ = nullptr;};
    inline const vector<string> & mixList() const { DARABONBA_PTR_GET_CONST(mixList_, vector<string>) };
    inline vector<string> mixList() { DARABONBA_PTR_GET(mixList_, vector<string>) };
    inline UpdateCasterSceneAudioRequest& setMixList(const vector<string> & mixList) { DARABONBA_PTR_SET_VALUE(mixList_, mixList) };
    inline UpdateCasterSceneAudioRequest& setMixList(vector<string> && mixList) { DARABONBA_PTR_SET_RVALUE(mixList_, mixList) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateCasterSceneAudioRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateCasterSceneAudioRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline UpdateCasterSceneAudioRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The audio configurations.
    std::shared_ptr<vector<UpdateCasterSceneAudioRequestAudioLayer>> audioLayer_ = nullptr;
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The audio mode. By default, the AFV mode is used. If you do not specify this parameter, the scene retains the last configuration. Valid values:
    // 
    // *   **0**: the audio mixing mode.
    // *   **1**: the AFV mode.
    std::shared_ptr<int32_t> followEnable_ = nullptr;
    // The location IDs of the audio layers, which are in the same order as the audio layers.
    std::shared_ptr<vector<string>> mixList_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the scene. If you call the [DescribeCasterScenes](https://help.aliyun.com/document_detail/2848039.html) operation to query scenes of the production studio, check the value of the response parameter ComponentId to obtain the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
