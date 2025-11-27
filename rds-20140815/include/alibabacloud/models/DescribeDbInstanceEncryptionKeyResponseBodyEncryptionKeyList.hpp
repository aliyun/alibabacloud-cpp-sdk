// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENCRYPTIONKEYRESPONSEBODYENCRYPTIONKEYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENCRYPTIONKEYRESPONSEBODYENCRYPTIONKEYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& obj) { 
      DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(KeyUsage, keyUsage_);
      DARABONBA_PTR_TO_JSON(MaterialExpireTime, materialExpireTime_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(UsedBy, usedBy_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& obj) { 
      DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(KeyUsage, keyUsage_);
      DARABONBA_PTR_FROM_JSON(MaterialExpireTime, materialExpireTime_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(UsedBy, usedBy_);
    };
    DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList() = default ;
    DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList(const DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList &) = default ;
    DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList(DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList &&) = default ;
    DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList() = default ;
    DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& operator=(const DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList &) = default ;
    DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& operator=(DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliasName_ == nullptr
        && return this->creator_ == nullptr && return this->deleteDate_ == nullptr && return this->description_ == nullptr && return this->encryptionKey_ == nullptr && return this->encryptionKeyStatus_ == nullptr
        && return this->keyType_ == nullptr && return this->keyUsage_ == nullptr && return this->materialExpireTime_ == nullptr && return this->origin_ == nullptr && return this->usedBy_ == nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deleteDate Field Functions 
    bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
    void deleteDeleteDate() { this->deleteDate_ = nullptr;};
    inline string deleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionKeyStatus Field Functions 
    bool hasEncryptionKeyStatus() const { return this->encryptionKeyStatus_ != nullptr;};
    void deleteEncryptionKeyStatus() { this->encryptionKeyStatus_ = nullptr;};
    inline string encryptionKeyStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyStatus_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setEncryptionKeyStatus(string encryptionKeyStatus) { DARABONBA_PTR_SET_VALUE(encryptionKeyStatus_, encryptionKeyStatus) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // keyUsage Field Functions 
    bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
    void deleteKeyUsage() { this->keyUsage_ = nullptr;};
    inline string keyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


    // materialExpireTime Field Functions 
    bool hasMaterialExpireTime() const { return this->materialExpireTime_ != nullptr;};
    void deleteMaterialExpireTime() { this->materialExpireTime_ = nullptr;};
    inline string materialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(materialExpireTime_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setMaterialExpireTime(string materialExpireTime) { DARABONBA_PTR_SET_VALUE(materialExpireTime_, materialExpireTime) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // usedBy Field Functions 
    bool hasUsedBy() const { return this->usedBy_ != nullptr;};
    void deleteUsedBy() { this->usedBy_ = nullptr;};
    inline string usedBy() const { DARABONBA_PTR_GET_DEFAULT(usedBy_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBodyEncryptionKeyList& setUsedBy(string usedBy) { DARABONBA_PTR_SET_VALUE(usedBy_, usedBy) };


  protected:
    // The alias of the key.
    std::shared_ptr<string> aliasName_ = nullptr;
    // The user who created the key.
    std::shared_ptr<string> creator_ = nullptr;
    // The scheduled time at which the key is deleted. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> deleteDate_ = nullptr;
    // The description of the key.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the key.
    std::shared_ptr<string> encryptionKey_ = nullptr;
    // The status of the key. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    std::shared_ptr<string> encryptionKeyStatus_ = nullptr;
    // The type of the key. Valid values:
    // 
    // *   **CMK**
    // *   **ServiceKey**
    std::shared_ptr<string> keyType_ = nullptr;
    // The purpose of the key.
    std::shared_ptr<string> keyUsage_ = nullptr;
    // The time at which the key expires. The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> materialExpireTime_ = nullptr;
    // The source of the key.
    std::shared_ptr<string> origin_ = nullptr;
    // The role of the instance. Valid values:
    // 
    // *   **Master**: primary instance
    // *   **slave**: read-only instance
    std::shared_ptr<string> usedBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
