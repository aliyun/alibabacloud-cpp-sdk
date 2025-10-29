// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STOPCASTERSCENEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STOPCASTERSCENEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class StopCasterSceneRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StopCasterSceneRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, StopCasterSceneRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    StopCasterSceneRequest() = default ;
    StopCasterSceneRequest(const StopCasterSceneRequest &) = default ;
    StopCasterSceneRequest(StopCasterSceneRequest &&) = default ;
    StopCasterSceneRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StopCasterSceneRequest() = default ;
    StopCasterSceneRequest& operator=(const StopCasterSceneRequest &) = default ;
    StopCasterSceneRequest& operator=(StopCasterSceneRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->sceneId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline StopCasterSceneRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline StopCasterSceneRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StopCasterSceneRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline StopCasterSceneRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The ID of the production studio.
    // 
    // If you create a production studio through the [CreateCaster](~~69338#doc-api-live-CreateCaster~~ "Creates a production studio.") interface, check the value of the CasterId parameter in the response.
    // 
    // If you create a production studio through the ApsaraVideo Live Console, log in to the console, then check the ID of the production studio through the following path:
    // 
    // Production Studios > Production Studio Management
    // 
    // >  The CasterId is reflected in the Name column on the Production Studio Management page.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the scene.
    // 
    // This operation is available only when the scene is a preview scene. For more information about the scene types, see [Query the scenes of production studios](https://help.aliyun.com/document_detail/60262.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> sceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
