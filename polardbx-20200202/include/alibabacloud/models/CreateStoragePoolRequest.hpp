// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESTORAGEPOOLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESTORAGEPOOLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateStoragePoolRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateStoragePoolRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StoragePoolDNList, storagePoolDNList_);
      DARABONBA_PTR_TO_JSON(StoragePoolName, storagePoolName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateStoragePoolRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StoragePoolDNList, storagePoolDNList_);
      DARABONBA_PTR_FROM_JSON(StoragePoolName, storagePoolName_);
    };
    CreateStoragePoolRequest() = default ;
    CreateStoragePoolRequest(const CreateStoragePoolRequest &) = default ;
    CreateStoragePoolRequest(CreateStoragePoolRequest &&) = default ;
    CreateStoragePoolRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateStoragePoolRequest() = default ;
    CreateStoragePoolRequest& operator=(const CreateStoragePoolRequest &) = default ;
    CreateStoragePoolRequest& operator=(CreateStoragePoolRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr && this->storagePoolDNList_ == nullptr && this->storagePoolName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateStoragePoolRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateStoragePoolRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CreateStoragePoolRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // storagePoolDNList Field Functions 
    bool hasStoragePoolDNList() const { return this->storagePoolDNList_ != nullptr;};
    void deleteStoragePoolDNList() { this->storagePoolDNList_ = nullptr;};
    inline string getStoragePoolDNList() const { DARABONBA_PTR_GET_DEFAULT(storagePoolDNList_, "") };
    inline CreateStoragePoolRequest& setStoragePoolDNList(string storagePoolDNList) { DARABONBA_PTR_SET_VALUE(storagePoolDNList_, storagePoolDNList) };


    // storagePoolName Field Functions 
    bool hasStoragePoolName() const { return this->storagePoolName_ != nullptr;};
    void deleteStoragePoolName() { this->storagePoolName_ = nullptr;};
    inline string getStoragePoolName() const { DARABONBA_PTR_GET_DEFAULT(storagePoolName_, "") };
    inline CreateStoragePoolRequest& setStoragePoolName(string storagePoolName) { DARABONBA_PTR_SET_VALUE(storagePoolName_, storagePoolName) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> storagePoolDNList_ {};
    shared_ptr<string> storagePoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
