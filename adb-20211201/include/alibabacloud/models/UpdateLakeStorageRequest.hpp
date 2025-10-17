// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATELAKESTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATELAKESTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateLakeStorageRequestPermissions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class UpdateLakeStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateLakeStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_TO_JSON(Permissions, permissions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateLakeStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_FROM_JSON(Permissions, permissions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    UpdateLakeStorageRequest() = default ;
    UpdateLakeStorageRequest(const UpdateLakeStorageRequest &) = default ;
    UpdateLakeStorageRequest(UpdateLakeStorageRequest &&) = default ;
    UpdateLakeStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateLakeStorageRequest() = default ;
    UpdateLakeStorageRequest& operator=(const UpdateLakeStorageRequest &) = default ;
    UpdateLakeStorageRequest& operator=(UpdateLakeStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBClusterId_ == nullptr
        && return this->description_ == nullptr && return this->lakeStorageId_ == nullptr && return this->permissions_ == nullptr && return this->regionId_ == nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline UpdateLakeStorageRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateLakeStorageRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // lakeStorageId Field Functions 
    bool hasLakeStorageId() const { return this->lakeStorageId_ != nullptr;};
    void deleteLakeStorageId() { this->lakeStorageId_ = nullptr;};
    inline string lakeStorageId() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageId_, "") };
    inline UpdateLakeStorageRequest& setLakeStorageId(string lakeStorageId) { DARABONBA_PTR_SET_VALUE(lakeStorageId_, lakeStorageId) };


    // permissions Field Functions 
    bool hasPermissions() const { return this->permissions_ != nullptr;};
    void deletePermissions() { this->permissions_ = nullptr;};
    inline const vector<UpdateLakeStorageRequestPermissions> & permissions() const { DARABONBA_PTR_GET_CONST(permissions_, vector<UpdateLakeStorageRequestPermissions>) };
    inline vector<UpdateLakeStorageRequestPermissions> permissions() { DARABONBA_PTR_GET(permissions_, vector<UpdateLakeStorageRequestPermissions>) };
    inline UpdateLakeStorageRequest& setPermissions(const vector<UpdateLakeStorageRequestPermissions> & permissions) { DARABONBA_PTR_SET_VALUE(permissions_, permissions) };
    inline UpdateLakeStorageRequest& setPermissions(vector<UpdateLakeStorageRequestPermissions> && permissions) { DARABONBA_PTR_SET_RVALUE(permissions_, permissions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateLakeStorageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster that is associated with the lake storage.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The description of the lake storage.
    std::shared_ptr<string> description_ = nullptr;
    // The unique identifier of the lake storage.
    std::shared_ptr<string> lakeStorageId_ = nullptr;
    // The permissions on the lake storage.
    std::shared_ptr<vector<UpdateLakeStorageRequestPermissions>> permissions_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
