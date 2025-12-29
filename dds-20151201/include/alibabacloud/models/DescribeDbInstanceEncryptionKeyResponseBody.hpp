// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENCRYPTIONKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDBINSTANCEENCRYPTIONKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dds20151201
{
namespace Models
{
  class DescribeDBInstanceEncryptionKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDBInstanceEncryptionKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
      DARABONBA_PTR_TO_JSON(KeyUsage, keyUsage_);
      DARABONBA_PTR_TO_JSON(MaterialExpireTime, materialExpireTime_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDBInstanceEncryptionKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptionKey, encryptionKey_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyStatus, encryptionKeyStatus_);
      DARABONBA_PTR_FROM_JSON(KeyUsage, keyUsage_);
      DARABONBA_PTR_FROM_JSON(MaterialExpireTime, materialExpireTime_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDBInstanceEncryptionKeyResponseBody() = default ;
    DescribeDBInstanceEncryptionKeyResponseBody(const DescribeDBInstanceEncryptionKeyResponseBody &) = default ;
    DescribeDBInstanceEncryptionKeyResponseBody(DescribeDBInstanceEncryptionKeyResponseBody &&) = default ;
    DescribeDBInstanceEncryptionKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDBInstanceEncryptionKeyResponseBody() = default ;
    DescribeDBInstanceEncryptionKeyResponseBody& operator=(const DescribeDBInstanceEncryptionKeyResponseBody &) = default ;
    DescribeDBInstanceEncryptionKeyResponseBody& operator=(DescribeDBInstanceEncryptionKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->creator_ == nullptr
        && this->deleteDate_ == nullptr && this->description_ == nullptr && this->encryptionKey_ == nullptr && this->encryptionKeyStatus_ == nullptr && this->keyUsage_ == nullptr
        && this->materialExpireTime_ == nullptr && this->origin_ == nullptr && this->requestId_ == nullptr; };
    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // deleteDate Field Functions 
    bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
    void deleteDeleteDate() { this->deleteDate_ = nullptr;};
    inline string getDeleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptionKey Field Functions 
    bool hasEncryptionKey() const { return this->encryptionKey_ != nullptr;};
    void deleteEncryptionKey() { this->encryptionKey_ = nullptr;};
    inline string getEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(encryptionKey_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setEncryptionKey(string encryptionKey) { DARABONBA_PTR_SET_VALUE(encryptionKey_, encryptionKey) };


    // encryptionKeyStatus Field Functions 
    bool hasEncryptionKeyStatus() const { return this->encryptionKeyStatus_ != nullptr;};
    void deleteEncryptionKeyStatus() { this->encryptionKeyStatus_ = nullptr;};
    inline string getEncryptionKeyStatus() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyStatus_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setEncryptionKeyStatus(string encryptionKeyStatus) { DARABONBA_PTR_SET_VALUE(encryptionKeyStatus_, encryptionKeyStatus) };


    // keyUsage Field Functions 
    bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
    void deleteKeyUsage() { this->keyUsage_ = nullptr;};
    inline string getKeyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


    // materialExpireTime Field Functions 
    bool hasMaterialExpireTime() const { return this->materialExpireTime_ != nullptr;};
    void deleteMaterialExpireTime() { this->materialExpireTime_ = nullptr;};
    inline string getMaterialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(materialExpireTime_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setMaterialExpireTime(string materialExpireTime) { DARABONBA_PTR_SET_VALUE(materialExpireTime_, materialExpireTime) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDBInstanceEncryptionKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The UID of the key creator.
    shared_ptr<string> creator_ {};
    // The scheduled time when the key for the instance will be deleted. If the parameter is left empty, the key will not be deleted.
    shared_ptr<string> deleteDate_ {};
    // The description of the key for the instance.
    shared_ptr<string> description_ {};
    // The key for the instance.
    shared_ptr<string> encryptionKey_ {};
    // Indicates whether the key for the instance is enabled. Valid values:
    // 
    // *   **Enabled**
    // *   **Disabled**
    shared_ptr<string> encryptionKeyStatus_ {};
    // The purpose of the key for the instance.
    shared_ptr<string> keyUsage_ {};
    // The expiration time of the key for the instance. The time is displayed in UTC. If the parameter is left empty, the key for the instance will not expire.
    shared_ptr<string> materialExpireTime_ {};
    // The source of the key for the instance.
    shared_ptr<string> origin_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dds20151201
#endif
