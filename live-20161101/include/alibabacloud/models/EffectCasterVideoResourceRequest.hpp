// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EFFECTCASTERVIDEORESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EFFECTCASTERVIDEORESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class EffectCasterVideoResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EffectCasterVideoResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
    };
    friend void from_json(const Darabonba::Json& j, EffectCasterVideoResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
    };
    EffectCasterVideoResourceRequest() = default ;
    EffectCasterVideoResourceRequest(const EffectCasterVideoResourceRequest &) = default ;
    EffectCasterVideoResourceRequest(EffectCasterVideoResourceRequest &&) = default ;
    EffectCasterVideoResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EffectCasterVideoResourceRequest() = default ;
    EffectCasterVideoResourceRequest& operator=(const EffectCasterVideoResourceRequest &) = default ;
    EffectCasterVideoResourceRequest& operator=(EffectCasterVideoResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr && this->sceneId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline EffectCasterVideoResourceRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline EffectCasterVideoResourceRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EffectCasterVideoResourceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline EffectCasterVideoResourceRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string getSceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline EffectCasterVideoResourceRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


  protected:
    // The ID of the production studio.
    // 
    // - If you create a production studio using the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, use the CasterId value from the response.
    // 
    // - If you create a production studio in the ApsaraVideo Live console, find the ID on the **Production Studio** > **Cloud Production Studio** page.
    // 
    // > The name of the production studio in the list is the ID.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The ID of the region.
    shared_ptr<string> regionId_ {};
    // The ID of the resource. To get this ID, call the [DescribeCasterChannels](https://help.aliyun.com/document_detail/2848046.html) operation and check the ResourceId value in the response.
    // 
    // This parameter is required.
    shared_ptr<string> resourceId_ {};
    // The ID of the scenario.
    // 
    // This parameter is required.
    shared_ptr<string> sceneId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
