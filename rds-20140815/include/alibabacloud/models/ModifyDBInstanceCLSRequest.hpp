// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDBINSTANCECLSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ModifyDBInstanceCLSRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDBInstanceCLSRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyMode, encryptionKeyMode_);
      DARABONBA_PTR_TO_JSON(EncryptionStatus, encryptionStatus_);
      DARABONBA_PTR_TO_JSON(IsRotate, isRotate_);
      DARABONBA_PTR_TO_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_TO_JSON(WhiteListMode, whiteListMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDBInstanceCLSRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyMode, encryptionKeyMode_);
      DARABONBA_PTR_FROM_JSON(EncryptionStatus, encryptionStatus_);
      DARABONBA_PTR_FROM_JSON(IsRotate, isRotate_);
      DARABONBA_PTR_FROM_JSON(OwnerAccount, ownerAccount_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
      DARABONBA_PTR_FROM_JSON(WhiteListMode, whiteListMode_);
    };
    ModifyDBInstanceCLSRequest() = default ;
    ModifyDBInstanceCLSRequest(const ModifyDBInstanceCLSRequest &) = default ;
    ModifyDBInstanceCLSRequest(ModifyDBInstanceCLSRequest &&) = default ;
    ModifyDBInstanceCLSRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDBInstanceCLSRequest() = default ;
    ModifyDBInstanceCLSRequest& operator=(const ModifyDBInstanceCLSRequest &) = default ;
    ModifyDBInstanceCLSRequest& operator=(ModifyDBInstanceCLSRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceId_ == nullptr
        && this->encryptionAlgorithm_ == nullptr && this->encryptionKey_ == nullptr && this->encryptionKeyMode_ == nullptr && this->encryptionStatus_ == nullptr && this->isRotate_ == nullptr
        && this->ownerAccount_ == nullptr && this->ownerId_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->roleArn_ == nullptr
        && this->whiteListMode_ == nullptr; };
    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline ModifyDBInstanceCLSRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // encryptionAlgorithm Field Functions 
    bool hasEncryptionAlgorithm() const { return this->encryptionAlgorithm_ != nullptr;};
    void deleteEncryptionAlgorithm() { this->encryptionAlgorithm_ = nullptr;};
    inline string getEncryptionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptionAlgorithm_, "") };
    inline ModifyDBInstanceCLSRequest& setEncryptionAlgorithm(string encryptionAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptionAlgorithm_, encryptionAlgorithm) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline ModifyDBInstanceCLSRequest& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionKeyMode Field Functions 
    bool hasEncryptionKeyMode() const { return this->encryptionKeyMode_ != nullptr;};
    void deleteEncryptionKeyMode() { this->encryptionKeyMode_ = nullptr;};
    inline string getEncryptionKeyMode() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyMode_, "") };
    inline ModifyDBInstanceCLSRequest& setEncryptionKeyMode(string encryptionKeyMode) { DARABONBA_PTR_SET_VALUE(encryptionKeyMode_, encryptionKeyMode) };


    // encryptionStatus Field Functions 
    bool hasEncryptionStatus() const { return this->encryptionStatus_ != nullptr;};
    void deleteEncryptionStatus() { this->encryptionStatus_ = nullptr;};
    inline string getEncryptionStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionStatus_, "") };
    inline ModifyDBInstanceCLSRequest& setEncryptionStatus(string encryptionStatus) { DARABONBA_PTR_SET_VALUE(encryptionStatus_, encryptionStatus) };


    // isRotate Field Functions 
    bool hasIsRotate() const { return this->isRotate_ != nullptr;};
    void deleteIsRotate() { this->isRotate_ = nullptr;};
    inline bool getIsRotate() const { DARABONBA_PTR_GET_DEFAULT(isRotate_, false) };
    inline ModifyDBInstanceCLSRequest& setIsRotate(bool isRotate) { DARABONBA_PTR_SET_VALUE(isRotate_, isRotate) };


    // ownerAccount Field Functions 
    bool hasOwnerAccount() const { return this->ownerAccount_ != nullptr;};
    void deleteOwnerAccount() { this->ownerAccount_ = nullptr;};
    inline string getOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(ownerAccount_, "") };
    inline ModifyDBInstanceCLSRequest& setOwnerAccount(string ownerAccount) { DARABONBA_PTR_SET_VALUE(ownerAccount_, ownerAccount) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDBInstanceCLSRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ModifyDBInstanceCLSRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ModifyDBInstanceCLSRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // roleArn Field Functions 
    bool hasRoleArn() const { return this->roleArn_ != nullptr;};
    void deleteRoleArn() { this->roleArn_ = nullptr;};
    inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
    inline ModifyDBInstanceCLSRequest& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


    // whiteListMode Field Functions 
    bool hasWhiteListMode() const { return this->whiteListMode_ != nullptr;};
    void deleteWhiteListMode() { this->whiteListMode_ = nullptr;};
    inline bool getWhiteListMode() const { DARABONBA_PTR_GET_DEFAULT(whiteListMode_, false) };
    inline ModifyDBInstanceCLSRequest& setWhiteListMode(bool whiteListMode) { DARABONBA_PTR_SET_VALUE(whiteListMode_, whiteListMode) };


  protected:
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    shared_ptr<string> encryptionAlgorithm_ {};
    shared_ptr<string> encryptionKey_ {};
    shared_ptr<string> encryptionKeyMode_ {};
    // This parameter is required.
    shared_ptr<string> encryptionStatus_ {};
    shared_ptr<bool> isRotate_ {};
    shared_ptr<string> ownerAccount_ {};
    shared_ptr<int64_t> ownerId_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    shared_ptr<string> roleArn_ {};
    shared_ptr<bool> whiteListMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
