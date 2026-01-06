// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_COPYDATABASEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_COPYDATABASEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class CopyDatabaseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CopyDatabaseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DstDBName, dstDBName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ReserveAccount, reserveAccount_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(SrcDBName, srcDBName_);
    };
    friend void from_json(const Darabonba::Json& j, CopyDatabaseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DstDBName, dstDBName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ReserveAccount, reserveAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(SrcDBName, srcDBName_);
    };
    CopyDatabaseRequest() = default ;
    CopyDatabaseRequest(const CopyDatabaseRequest &) = default ;
    CopyDatabaseRequest(CopyDatabaseRequest &&) = default ;
    CopyDatabaseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CopyDatabaseRequest() = default ;
    CopyDatabaseRequest& operator=(const CopyDatabaseRequest &) = default ;
    CopyDatabaseRequest& operator=(CopyDatabaseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->dstDBName_ == nullptr && this->ownerId_ == nullptr && this->reserveAccount_ == nullptr && this->resourceGroupId_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->srcDBName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CopyDatabaseRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dstDBName Field Functions 
    bool hasDstDBName() const { return this->dstDBName_ != nullptr;};
    void deleteDstDBName() { this->dstDBName_ = nullptr;};
    inline string getDstDBName() const { DARABONBA_PTR_GET_DEFAULT(dstDBName_, "") };
    inline CopyDatabaseRequest& setDstDBName(string dstDBName) { DARABONBA_PTR_SET_VALUE(dstDBName_, dstDBName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CopyDatabaseRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // reserveAccount Field Functions 
    bool hasReserveAccount() const { return this->reserveAccount_ != nullptr;};
    void deleteReserveAccount() { this->reserveAccount_ = nullptr;};
    inline int32_t getReserveAccount() const { DARABONBA_PTR_GET_DEFAULT(reserveAccount_, 0) };
    inline CopyDatabaseRequest& setReserveAccount(int32_t reserveAccount) { DARABONBA_PTR_SET_VALUE(reserveAccount_, reserveAccount) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline CopyDatabaseRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CopyDatabaseRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CopyDatabaseRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // srcDBName Field Functions 
    bool hasSrcDBName() const { return this->srcDBName_ != nullptr;};
    void deleteSrcDBName() { this->srcDBName_ = nullptr;};
    inline string getSrcDBName() const { DARABONBA_PTR_GET_DEFAULT(srcDBName_, "") };
    inline CopyDatabaseRequest& setSrcDBName(string srcDBName) { DARABONBA_PTR_SET_VALUE(srcDBName_, srcDBName) };


  protected:
    // The instance name.
    shared_ptr<string> DBInstanceName_ {};
    // The destination database name.
    shared_ptr<string> dstDBName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The reserved account.
    shared_ptr<int32_t> reserveAccount_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // The source database name.
    shared_ptr<string> srcDBName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
