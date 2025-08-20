// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELAKESTORAGESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELAKESTORAGESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateLakeStorageShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLakeStorageShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_TO_JSON(Permissions, permissionsShrink_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLakeStorageShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissionsShrink_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateLakeStorageShrinkRequest() = default ;
    UpdateLakeStorageShrinkRequest(const UpdateLakeStorageShrinkRequest &) = default ;
    UpdateLakeStorageShrinkRequest(UpdateLakeStorageShrinkRequest &&) = default ;
    UpdateLakeStorageShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLakeStorageShrinkRequest() = default ;
    UpdateLakeStorageShrinkRequest& operator=(const UpdateLakeStorageShrinkRequest &) = default ;
    UpdateLakeStorageShrinkRequest& operator=(UpdateLakeStorageShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->description_ != nullptr && this->lakeStorageId_ != nullptr && this->permissionsShrink_ != nullptr && this->regionId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateLakeStorageShrinkRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLakeStorageShrinkRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lakeStorageId Field Functions 
    bool hasLakeStorageId() const { return this->lakeStorageId_ != nullptr;};
    void deleteLakeStorageId() { this->lakeStorageId_ = nullptr;};
    inline string lakeStorageId() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageId_, "") };
    inline UpdateLakeStorageShrinkRequest& setLakeStorageId(string lakeStorageId) { DARABONBA_PTR_SET_VALUE(lakeStorageId_, lakeStorageId) };


    // permissionsShrink Field Functions 
    bool hasPermissionsShrink() const { return this->permissionsShrink_ != nullptr;};
    void deletePermissionsShrink() { this->permissionsShrink_ = nullptr;};
    inline string permissionsShrink() const { DARABONBA_PTR_GET_DEFAULT(permissionsShrink_, "") };
    inline UpdateLakeStorageShrinkRequest& setPermissionsShrink(string permissionsShrink) { DARABONBA_PTR_SET_VALUE(permissionsShrink_, permissionsShrink) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLakeStorageShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster that is associated with the lake storage.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The description of the lake storage.
    std::shared_ptr<string> description_ = nullptr;
    // The unique identifier of the lake storage.
    std::shared_ptr<string> lakeStorageId_ = nullptr;
    // The permissions on the lake storage.
    std::shared_ptr<string> permissionsShrink_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
