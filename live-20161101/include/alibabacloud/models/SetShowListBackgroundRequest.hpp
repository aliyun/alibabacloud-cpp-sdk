// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETSHOWLISTBACKGROUNDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETSHOWLISTBACKGROUNDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class SetShowListBackgroundRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetShowListBackgroundRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(MaterialId, materialId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(ResourceUrl, resourceUrl_);
    };
    friend void from_json(const Darabonba::Json& j, SetShowListBackgroundRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(MaterialId, materialId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(ResourceUrl, resourceUrl_);
    };
    SetShowListBackgroundRequest() = default ;
    SetShowListBackgroundRequest(const SetShowListBackgroundRequest &) = default ;
    SetShowListBackgroundRequest(SetShowListBackgroundRequest &&) = default ;
    SetShowListBackgroundRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetShowListBackgroundRequest() = default ;
    SetShowListBackgroundRequest& operator=(const SetShowListBackgroundRequest &) = default ;
    SetShowListBackgroundRequest& operator=(SetShowListBackgroundRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && this->materialId_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->resourceType_ == nullptr && this->resourceUrl_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string getCasterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline SetShowListBackgroundRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // materialId Field Functions 
    bool hasMaterialId() const { return this->materialId_ != nullptr;};
    void deleteMaterialId() { this->materialId_ = nullptr;};
    inline string getMaterialId() const { DARABONBA_PTR_GET_DEFAULT(materialId_, "") };
    inline SetShowListBackgroundRequest& setMaterialId(string materialId) { DARABONBA_PTR_SET_VALUE(materialId_, materialId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline SetShowListBackgroundRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetShowListBackgroundRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline SetShowListBackgroundRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // resourceUrl Field Functions 
    bool hasResourceUrl() const { return this->resourceUrl_ != nullptr;};
    void deleteResourceUrl() { this->resourceUrl_ = nullptr;};
    inline string getResourceUrl() const { DARABONBA_PTR_GET_DEFAULT(resourceUrl_, "") };
    inline SetShowListBackgroundRequest& setResourceUrl(string resourceUrl) { DARABONBA_PTR_SET_VALUE(resourceUrl_, resourceUrl) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    shared_ptr<string> casterId_ {};
    // The ID of the material in ApsaraVideo VOD.
    // 
    // >  Specify either this parameter or the ResourceUrl parameter.
    shared_ptr<string> materialId_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> regionId_ {};
    // The resource type. Valid values:
    // 
    // *   LIVE: live stream. You can add a live stream from ApsaraVideo Live or by using a third-party URL.
    // *   VOD: on-demand video. You can add an on-demand video from ApsaraVideo VOD or by using a third-party URL.
    // *   PIC: image. You can add an image from ApsaraVideo VOD or by using a third-party URL.
    // 
    // >  Set this parameter to one of the preceding values, or leave this parameter empty.
    shared_ptr<string> resourceType_ {};
    // The URL of the third-party material.
    shared_ptr<string> resourceUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
