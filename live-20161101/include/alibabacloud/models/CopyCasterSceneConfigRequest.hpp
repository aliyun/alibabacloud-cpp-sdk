// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYCASTERSCENECONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYCASTERSCENECONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class CopyCasterSceneConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyCasterSceneConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(FromSceneId, fromSceneId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ToSceneId, toSceneId_);
    };
    friend void from_json(const Darabonba::Json& j, CopyCasterSceneConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(FromSceneId, fromSceneId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ToSceneId, toSceneId_);
    };
    CopyCasterSceneConfigRequest() = default ;
    CopyCasterSceneConfigRequest(const CopyCasterSceneConfigRequest &) = default ;
    CopyCasterSceneConfigRequest(CopyCasterSceneConfigRequest &&) = default ;
    CopyCasterSceneConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyCasterSceneConfigRequest() = default ;
    CopyCasterSceneConfigRequest& operator=(const CopyCasterSceneConfigRequest &) = default ;
    CopyCasterSceneConfigRequest& operator=(CopyCasterSceneConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->casterId_ == nullptr
        && return this->fromSceneId_ == nullptr && return this->ownerId_ == nullptr && return this->regionId_ == nullptr && return this->toSceneId_ == nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline CopyCasterSceneConfigRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // fromSceneId Field Functions 
    bool hasFromSceneId() const { return this->fromSceneId_ != nullptr;};
    void deleteFromSceneId() { this->fromSceneId_ = nullptr;};
    inline string fromSceneId() const { DARABONBA_PTR_GET_DEFAULT(fromSceneId_, "") };
    inline CopyCasterSceneConfigRequest& setFromSceneId(string fromSceneId) { DARABONBA_PTR_SET_VALUE(fromSceneId_, fromSceneId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CopyCasterSceneConfigRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CopyCasterSceneConfigRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // toSceneId Field Functions 
    bool hasToSceneId() const { return this->toSceneId_ != nullptr;};
    void deleteToSceneId() { this->toSceneId_ = nullptr;};
    inline string toSceneId() const { DARABONBA_PTR_GET_DEFAULT(toSceneId_, "") };
    inline CopyCasterSceneConfigRequest& setToSceneId(string toSceneId) { DARABONBA_PTR_SET_VALUE(toSceneId_, toSceneId) };


  protected:
    // The ID of the production studio.
    // 
    // *   If the production studio was created by calling the [CreateCaster](https://help.aliyun.com/document_detail/2848009.html) operation, check the value of the response parameter CasterId to obtain the ID.
    // *   If the production studio was created by using the ApsaraVideo Live console, obtain the ID on the **Production Studio Management** page. To go to the page, log on to the **ApsaraVideo Live console** and click **Production Studios** in the left-side navigation pane.
    // 
    // >  You can find the ID of the production studio in the Instance ID/Name column.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The ID of the source scene, which must be a PVW scene.
    // 
    // This parameter is required.
    std::shared_ptr<string> fromSceneId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The ID of the destination scene, which must be a PGM scene.
    // 
    // This parameter is required.
    std::shared_ptr<string> toSceneId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
