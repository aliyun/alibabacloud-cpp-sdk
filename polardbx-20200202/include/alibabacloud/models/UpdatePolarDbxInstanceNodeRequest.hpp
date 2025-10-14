// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOLARDBXINSTANCENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOLARDBXINSTANCENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class UpdatePolarDBXInstanceNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePolarDBXInstanceNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddDNSpec, addDNSpec_);
      DARABONBA_PTR_TO_JSON(CNNodeCount, CNNodeCount_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DNNodeCount, DNNodeCount_);
      DARABONBA_PTR_TO_JSON(DbInstanceNodeCount, dbInstanceNodeCount_);
      DARABONBA_PTR_TO_JSON(DeleteDNIds, deleteDNIds_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StoragePoolName, storagePoolName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePolarDBXInstanceNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddDNSpec, addDNSpec_);
      DARABONBA_PTR_FROM_JSON(CNNodeCount, CNNodeCount_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DNNodeCount, DNNodeCount_);
      DARABONBA_PTR_FROM_JSON(DbInstanceNodeCount, dbInstanceNodeCount_);
      DARABONBA_PTR_FROM_JSON(DeleteDNIds, deleteDNIds_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StoragePoolName, storagePoolName_);
    };
    UpdatePolarDBXInstanceNodeRequest() = default ;
    UpdatePolarDBXInstanceNodeRequest(const UpdatePolarDBXInstanceNodeRequest &) = default ;
    UpdatePolarDBXInstanceNodeRequest(UpdatePolarDBXInstanceNodeRequest &&) = default ;
    UpdatePolarDBXInstanceNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePolarDBXInstanceNodeRequest() = default ;
    UpdatePolarDBXInstanceNodeRequest& operator=(const UpdatePolarDBXInstanceNodeRequest &) = default ;
    UpdatePolarDBXInstanceNodeRequest& operator=(UpdatePolarDBXInstanceNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addDNSpec_ == nullptr
        && return this->CNNodeCount_ == nullptr && return this->clientToken_ == nullptr && return this->DBInstanceName_ == nullptr && return this->DNNodeCount_ == nullptr && return this->dbInstanceNodeCount_ == nullptr
        && return this->deleteDNIds_ == nullptr && return this->regionId_ == nullptr && return this->storagePoolName_ == nullptr; };
    // addDNSpec Field Functions 
    bool hasAddDNSpec() const { return this->addDNSpec_ != nullptr;};
    void deleteAddDNSpec() { this->addDNSpec_ = nullptr;};
    inline string addDNSpec() const { DARABONBA_PTR_GET_DEFAULT(addDNSpec_, "") };
    inline UpdatePolarDBXInstanceNodeRequest& setAddDNSpec(string addDNSpec) { DARABONBA_PTR_SET_VALUE(addDNSpec_, addDNSpec) };


    // CNNodeCount Field Functions 
    bool hasCNNodeCount() const { return this->CNNodeCount_ != nullptr;};
    void deleteCNNodeCount() { this->CNNodeCount_ = nullptr;};
    inline int32_t CNNodeCount() const { DARABONBA_PTR_GET_DEFAULT(CNNodeCount_, 0) };
    inline UpdatePolarDBXInstanceNodeRequest& setCNNodeCount(int32_t CNNodeCount) { DARABONBA_PTR_SET_VALUE(CNNodeCount_, CNNodeCount) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdatePolarDBXInstanceNodeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline UpdatePolarDBXInstanceNodeRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // DNNodeCount Field Functions 
    bool hasDNNodeCount() const { return this->DNNodeCount_ != nullptr;};
    void deleteDNNodeCount() { this->DNNodeCount_ = nullptr;};
    inline int32_t DNNodeCount() const { DARABONBA_PTR_GET_DEFAULT(DNNodeCount_, 0) };
    inline UpdatePolarDBXInstanceNodeRequest& setDNNodeCount(int32_t DNNodeCount) { DARABONBA_PTR_SET_VALUE(DNNodeCount_, DNNodeCount) };


    // dbInstanceNodeCount Field Functions 
    bool hasDbInstanceNodeCount() const { return this->dbInstanceNodeCount_ != nullptr;};
    void deleteDbInstanceNodeCount() { this->dbInstanceNodeCount_ = nullptr;};
    inline int32_t dbInstanceNodeCount() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceNodeCount_, 0) };
    inline UpdatePolarDBXInstanceNodeRequest& setDbInstanceNodeCount(int32_t dbInstanceNodeCount) { DARABONBA_PTR_SET_VALUE(dbInstanceNodeCount_, dbInstanceNodeCount) };


    // deleteDNIds Field Functions 
    bool hasDeleteDNIds() const { return this->deleteDNIds_ != nullptr;};
    void deleteDeleteDNIds() { this->deleteDNIds_ = nullptr;};
    inline string deleteDNIds() const { DARABONBA_PTR_GET_DEFAULT(deleteDNIds_, "") };
    inline UpdatePolarDBXInstanceNodeRequest& setDeleteDNIds(string deleteDNIds) { DARABONBA_PTR_SET_VALUE(deleteDNIds_, deleteDNIds) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdatePolarDBXInstanceNodeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // storagePoolName Field Functions 
    bool hasStoragePoolName() const { return this->storagePoolName_ != nullptr;};
    void deleteStoragePoolName() { this->storagePoolName_ = nullptr;};
    inline string storagePoolName() const { DARABONBA_PTR_GET_DEFAULT(storagePoolName_, "") };
    inline UpdatePolarDBXInstanceNodeRequest& setStoragePoolName(string storagePoolName) { DARABONBA_PTR_SET_VALUE(storagePoolName_, storagePoolName) };


  protected:
    std::shared_ptr<string> addDNSpec_ = nullptr;
    std::shared_ptr<int32_t> CNNodeCount_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    std::shared_ptr<int32_t> DNNodeCount_ = nullptr;
    std::shared_ptr<int32_t> dbInstanceNodeCount_ = nullptr;
    std::shared_ptr<string> deleteDNIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> storagePoolName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
