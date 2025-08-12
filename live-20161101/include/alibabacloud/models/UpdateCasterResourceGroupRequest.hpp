// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECASTERRESOURCEGROUPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECASTERRESOURCEGROUPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class UpdateCasterResourceGroupRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCasterResourceGroupRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CasterId, casterId_);
      DARABONBA_PTR_TO_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCasterResourceGroupRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CasterId, casterId_);
      DARABONBA_PTR_FROM_JSON(NewResourceGroupId, newResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateCasterResourceGroupRequest() = default ;
    UpdateCasterResourceGroupRequest(const UpdateCasterResourceGroupRequest &) = default ;
    UpdateCasterResourceGroupRequest(UpdateCasterResourceGroupRequest &&) = default ;
    UpdateCasterResourceGroupRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCasterResourceGroupRequest() = default ;
    UpdateCasterResourceGroupRequest& operator=(const UpdateCasterResourceGroupRequest &) = default ;
    UpdateCasterResourceGroupRequest& operator=(UpdateCasterResourceGroupRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->casterId_ != nullptr
        && this->newResourceGroupId_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr; };
    // casterId Field Functions 
    bool hasCasterId() const { return this->casterId_ != nullptr;};
    void deleteCasterId() { this->casterId_ = nullptr;};
    inline string casterId() const { DARABONBA_PTR_GET_DEFAULT(casterId_, "") };
    inline UpdateCasterResourceGroupRequest& setCasterId(string casterId) { DARABONBA_PTR_SET_VALUE(casterId_, casterId) };


    // newResourceGroupId Field Functions 
    bool hasNewResourceGroupId() const { return this->newResourceGroupId_ != nullptr;};
    void deleteNewResourceGroupId() { this->newResourceGroupId_ = nullptr;};
    inline string newResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(newResourceGroupId_, "") };
    inline UpdateCasterResourceGroupRequest& setNewResourceGroupId(string newResourceGroupId) { DARABONBA_PTR_SET_VALUE(newResourceGroupId_, newResourceGroupId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline UpdateCasterResourceGroupRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateCasterResourceGroupRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the production studio.
    // 
    // This parameter is required.
    std::shared_ptr<string> casterId_ = nullptr;
    // The ID of the destination resource group.
    // 
    // This parameter is required.
    std::shared_ptr<string> newResourceGroupId_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
