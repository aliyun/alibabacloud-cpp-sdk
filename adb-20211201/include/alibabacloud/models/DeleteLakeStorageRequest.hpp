// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETELAKESTORAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETELAKESTORAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DeleteLakeStorageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteLakeStorageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_TO_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteLakeStorageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBClusterId, DBClusterId_);
      DARABONBA_PTR_FROM_JSON(LakeStorageId, lakeStorageId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteLakeStorageRequest() = default ;
    DeleteLakeStorageRequest(const DeleteLakeStorageRequest &) = default ;
    DeleteLakeStorageRequest(DeleteLakeStorageRequest &&) = default ;
    DeleteLakeStorageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteLakeStorageRequest() = default ;
    DeleteLakeStorageRequest& operator=(const DeleteLakeStorageRequest &) = default ;
    DeleteLakeStorageRequest& operator=(DeleteLakeStorageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->DBClusterId_ != nullptr
        && this->lakeStorageId_ != nullptr && this->regionId_ != nullptr; };
    // DBClusterId Field Functions 
    bool hasDBClusterId() const { return this->DBClusterId_ != nullptr;};
    void deleteDBClusterId() { this->DBClusterId_ = nullptr;};
    inline string DBClusterId() const { DARABONBA_PTR_GET_DEFAULT(DBClusterId_, "") };
    inline DeleteLakeStorageRequest& setDBClusterId(string DBClusterId) { DARABONBA_PTR_SET_VALUE(DBClusterId_, DBClusterId) };


    // lakeStorageId Field Functions 
    bool hasLakeStorageId() const { return this->lakeStorageId_ != nullptr;};
    void deleteLakeStorageId() { this->lakeStorageId_ = nullptr;};
    inline string lakeStorageId() const { DARABONBA_PTR_GET_DEFAULT(lakeStorageId_, "") };
    inline DeleteLakeStorageRequest& setLakeStorageId(string lakeStorageId) { DARABONBA_PTR_SET_VALUE(lakeStorageId_, lakeStorageId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteLakeStorageRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the AnalyticDB for MySQL cluster.
    std::shared_ptr<string> DBClusterId_ = nullptr;
    // The ID of the lake storage.
    // 
    // This parameter is required.
    std::shared_ptr<string> lakeStorageId_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
