// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKREGIONSUPPORTBACKUPENCRYPTIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CHECKREGIONSUPPORTBACKUPENCRYPTIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CheckRegionSupportBackupEncryptionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckRegionSupportBackupEncryptionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    friend void from_json(const Darabonba::Json& j, CheckRegionSupportBackupEncryptionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceID, DBInstanceID_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
    };
    CheckRegionSupportBackupEncryptionRequest() = default ;
    CheckRegionSupportBackupEncryptionRequest(const CheckRegionSupportBackupEncryptionRequest &) = default ;
    CheckRegionSupportBackupEncryptionRequest(CheckRegionSupportBackupEncryptionRequest &&) = default ;
    CheckRegionSupportBackupEncryptionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckRegionSupportBackupEncryptionRequest() = default ;
    CheckRegionSupportBackupEncryptionRequest& operator=(const CheckRegionSupportBackupEncryptionRequest &) = default ;
    CheckRegionSupportBackupEncryptionRequest& operator=(CheckRegionSupportBackupEncryptionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceID_ == nullptr
        && this->regionId_ == nullptr && this->resourceOwnerId_ == nullptr; };
    // DBInstanceID Field Functions 
    bool hasDBInstanceID() const { return this->DBInstanceID_ != nullptr;};
    void deleteDBInstanceID() { this->DBInstanceID_ = nullptr;};
    inline string getDBInstanceID() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceID_, "") };
    inline CheckRegionSupportBackupEncryptionRequest& setDBInstanceID(string DBInstanceID) { DARABONBA_PTR_SET_VALUE(DBInstanceID_, DBInstanceID) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CheckRegionSupportBackupEncryptionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CheckRegionSupportBackupEncryptionRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


  protected:
    shared_ptr<string> DBInstanceID_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
