// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETCASTERSCENECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETCASTERSCENECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetCasterSceneConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetCasterSceneConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(ComponentId, componentId_);
      DARABONBA_PTR_TO_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, SetCasterSceneConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(ComponentId, componentId_);
      DARABONBA_PTR_FROM_JSON(LayoutId, layoutId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    SetCasterSceneConfigRequest() = default ;
    SetCasterSceneConfigRequest(const SetCasterSceneConfigRequest &) = default ;
    SetCasterSceneConfigRequest(SetCasterSceneConfigRequest &&) = default ;
    SetCasterSceneConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetCasterSceneConfigRequest() = default ;
    SetCasterSceneConfigRequest& operator=(const SetCasterSceneConfigRequest &) = default ;
    SetCasterSceneConfigRequest& operator=(SetCasterSceneConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->componentId_ == nullptr && this->layoutId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->sceneId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline SetCasterSceneConfigRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // componentId Field Functions 
    bool hasComponentId() const { return this->componentId_ != nullptr;};
    void deleteComponentId() { this->componentId_ = nullptr;};
    inline const vector<string> & getComponentId() const { DARABONBA_PTR_GET_CONST(componentId_, vector<string>) };
    inline vector<string> getComponentId() { DARABONBA_PTR_GET(componentId_, vector<string>) };
    inline SetCasterSceneConfigRequest& setComponentId(const vector<string> & componentId) { DARABONBA_PTR_SET_VALUE(componentId_, componentId) };
    inline SetCasterSceneConfigRequest& setComponentId(vector<string> && componentId) { DARABONBA_PTR_SET_RVALUE(componentId_, componentId) };


    // layoutId Field Functions 
    bool hasLayoutId() const { return this->layoutId_ != nullptr;};
    void deleteLayoutId() { this->layoutId_ = nullptr;};
    inline string getLayoutId() const { DARABONBA_PTR_GET_DEFAULT(layoutId_, "") };
    inline SetCasterSceneConfigRequest& setLayoutId(string layoutId) { DARABONBA_PTR_SET_VALUE(layoutId_, layoutId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetCasterSceneConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetCasterSceneConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline SetCasterSceneConfigRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The production studio ID.
    // - If you created the production studio by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the CasterId parameter returned by the CreateCaster operation.
    // 
    // - If you created the production studio in the ApsaraVideo Live console, go to **ApsaraVideo Live console** > **Production Studios** > **China Cloud Production Studio** to view the ID.
    // 
    // > The name of the production studio in the production studio list on the China Cloud Production Studio page is the production studio ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The list of component IDs. The components are arranged in bottom-to-top order within the array.
    // 
    // >N indicates the sequence number. For example:<br>ComponentId.1 indicates the first component ID.<br>ComponentId.2 indicates the second component ID.
    shared_ptr<vector<string>> componentId_ {};
    // The layout ID. If you call the [DescribeCasterLayouts](https://help.aliyun.com/document_detail/2848028.html) operation to query the layout list of a production studio, check the LayoutId parameter returned by the DescribeCasterLayouts operation.
    shared_ptr<string> layoutId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The scene ID. The scene must have been started by calling StartCasterScene. Otherwise, the IncorrectSceneStatus error is returned.
    // 
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
