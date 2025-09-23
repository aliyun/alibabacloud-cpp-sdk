// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENCRYPTIONKEYRESPONSEBODYENCRYPTIONKEYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBCLUSTERENCRYPTIONKEYRESPONSEBODYENCRYPTIONKEYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& obj) { 
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
    DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList() = default ;
    DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList(const DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList &) = default ;
    DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList(DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList &&) = default ;
    DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList() = default ;
    DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& operator=(const DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList &) = default ;
    DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& operator=(DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aliasName_ != nullptr
        && this->creator_ != nullptr && this->deleteDate_ != nullptr && this->description_ != nullptr && this->encryptionKey_ != nullptr && this->encryptionKeyStatus_ != nullptr
        && this->keyType_ != nullptr && this->keyUsage_ != nullptr && this->materialExpireTime_ != nullptr && this->origin_ != nullptr && this->usedBy_ != nullptr; };
    // aliasName Field Functions 
    bool hasAliasName() const { return this->aliasName_ != nullptr;};
    void deleteAliasName() { this->aliasName_ = nullptr;};
    inline string aliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deleteDate Field Functions 
    bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
    void deleteDeleteDate() { this->deleteDate_ = nullptr;};
    inline string deleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string encryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionKeyStatus Field Functions 
    bool hasEncryptionKeyStatus() const { return this->encryptionKeyStatus_ != nullptr;};
    void deleteEncryptionKeyStatus() { this->encryptionKeyStatus_ = nullptr;};
    inline string encryptionKeyStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyStatus_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setEncryptionKeyStatus(string encryptionKeyStatus) { DARABONBA_PTR_SET_VALUE(encryptionKeyStatus_, encryptionKeyStatus) };


    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string keyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // keyUsage Field Functions 
    bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
    void deleteKeyUsage() { this->keyUsage_ = nullptr;};
    inline string keyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


    // materialExpireTime Field Functions 
    bool hasMaterialExpireTime() const { return this->materialExpireTime_ != nullptr;};
    void deleteMaterialExpireTime() { this->materialExpireTime_ = nullptr;};
    inline string materialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(materialExpireTime_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setMaterialExpireTime(string materialExpireTime) { DARABONBA_PTR_SET_VALUE(materialExpireTime_, materialExpireTime) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // usedBy Field Functions 
    bool hasUsedBy() const { return this->usedBy_ != nullptr;};
    void deleteUsedBy() { this->usedBy_ = nullptr;};
    inline string usedBy() const { DARABONBA_PTR_GET_DEFAULT(usedBy_, "") };
    inline DescribeDBClusterEncryptionKeyResponseBodyEncryptionKeyList& setUsedBy(string usedBy) { DARABONBA_PTR_SET_VALUE(usedBy_, usedBy) };


  protected:
    std::shared_ptr<string> aliasName_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> deleteDate_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> encryptionKey_ = nullptr;
    std::shared_ptr<string> encryptionKeyStatus_ = nullptr;
    std::shared_ptr<string> keyType_ = nullptr;
    std::shared_ptr<string> keyUsage_ = nullptr;
    std::shared_ptr<string> materialExpireTime_ = nullptr;
    std::shared_ptr<string> origin_ = nullptr;
    std::shared_ptr<string> usedBy_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
