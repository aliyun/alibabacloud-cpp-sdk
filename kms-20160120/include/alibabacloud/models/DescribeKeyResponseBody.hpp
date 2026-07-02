// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeKeyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(KeyMetadata, keyMetadata_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeKeyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyMetadata, keyMetadata_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeKeyResponseBody() = default ;
    DescribeKeyResponseBody(const DescribeKeyResponseBody &) = default ;
    DescribeKeyResponseBody(DescribeKeyResponseBody &&) = default ;
    DescribeKeyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyResponseBody() = default ;
    DescribeKeyResponseBody& operator=(const DescribeKeyResponseBody &) = default ;
    DescribeKeyResponseBody& operator=(DescribeKeyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class KeyMetadata : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const KeyMetadata& obj) { 
        DARABONBA_PTR_TO_JSON(Arn, arn_);
        DARABONBA_PTR_TO_JSON(AutomaticRotation, automaticRotation_);
        DARABONBA_PTR_TO_JSON(CreationDate, creationDate_);
        DARABONBA_PTR_TO_JSON(Creator, creator_);
        DARABONBA_PTR_TO_JSON(DKMSInstanceId, DKMSInstanceId_);
        DARABONBA_PTR_TO_JSON(DeleteDate, deleteDate_);
        DARABONBA_PTR_TO_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_TO_JSON(DeletionProtectionDescription, deletionProtectionDescription_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(KeyId, keyId_);
        DARABONBA_PTR_TO_JSON(KeySpec, keySpec_);
        DARABONBA_PTR_TO_JSON(KeyState, keyState_);
        DARABONBA_PTR_TO_JSON(KeyUsage, keyUsage_);
        DARABONBA_PTR_TO_JSON(LastRotationDate, lastRotationDate_);
        DARABONBA_PTR_TO_JSON(MaterialExpireTime, materialExpireTime_);
        DARABONBA_PTR_TO_JSON(NextRotationDate, nextRotationDate_);
        DARABONBA_PTR_TO_JSON(Origin, origin_);
        DARABONBA_PTR_TO_JSON(PrimaryKeyVersion, primaryKeyVersion_);
        DARABONBA_PTR_TO_JSON(ProtectionLevel, protectionLevel_);
        DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      };
      friend void from_json(const Darabonba::Json& j, KeyMetadata& obj) { 
        DARABONBA_PTR_FROM_JSON(Arn, arn_);
        DARABONBA_PTR_FROM_JSON(AutomaticRotation, automaticRotation_);
        DARABONBA_PTR_FROM_JSON(CreationDate, creationDate_);
        DARABONBA_PTR_FROM_JSON(Creator, creator_);
        DARABONBA_PTR_FROM_JSON(DKMSInstanceId, DKMSInstanceId_);
        DARABONBA_PTR_FROM_JSON(DeleteDate, deleteDate_);
        DARABONBA_PTR_FROM_JSON(DeletionProtection, deletionProtection_);
        DARABONBA_PTR_FROM_JSON(DeletionProtectionDescription, deletionProtectionDescription_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
        DARABONBA_PTR_FROM_JSON(KeySpec, keySpec_);
        DARABONBA_PTR_FROM_JSON(KeyState, keyState_);
        DARABONBA_PTR_FROM_JSON(KeyUsage, keyUsage_);
        DARABONBA_PTR_FROM_JSON(LastRotationDate, lastRotationDate_);
        DARABONBA_PTR_FROM_JSON(MaterialExpireTime, materialExpireTime_);
        DARABONBA_PTR_FROM_JSON(NextRotationDate, nextRotationDate_);
        DARABONBA_PTR_FROM_JSON(Origin, origin_);
        DARABONBA_PTR_FROM_JSON(PrimaryKeyVersion, primaryKeyVersion_);
        DARABONBA_PTR_FROM_JSON(ProtectionLevel, protectionLevel_);
        DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      };
      KeyMetadata() = default ;
      KeyMetadata(const KeyMetadata &) = default ;
      KeyMetadata(KeyMetadata &&) = default ;
      KeyMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~KeyMetadata() = default ;
      KeyMetadata& operator=(const KeyMetadata &) = default ;
      KeyMetadata& operator=(KeyMetadata &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->arn_ == nullptr
        && this->automaticRotation_ == nullptr && this->creationDate_ == nullptr && this->creator_ == nullptr && this->DKMSInstanceId_ == nullptr && this->deleteDate_ == nullptr
        && this->deletionProtection_ == nullptr && this->deletionProtectionDescription_ == nullptr && this->description_ == nullptr && this->keyId_ == nullptr && this->keySpec_ == nullptr
        && this->keyState_ == nullptr && this->keyUsage_ == nullptr && this->lastRotationDate_ == nullptr && this->materialExpireTime_ == nullptr && this->nextRotationDate_ == nullptr
        && this->origin_ == nullptr && this->primaryKeyVersion_ == nullptr && this->protectionLevel_ == nullptr && this->rotationInterval_ == nullptr; };
      // arn Field Functions 
      bool hasArn() const { return this->arn_ != nullptr;};
      void deleteArn() { this->arn_ = nullptr;};
      inline string getArn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
      inline KeyMetadata& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


      // automaticRotation Field Functions 
      bool hasAutomaticRotation() const { return this->automaticRotation_ != nullptr;};
      void deleteAutomaticRotation() { this->automaticRotation_ = nullptr;};
      inline string getAutomaticRotation() const { DARABONBA_PTR_GET_DEFAULT(automaticRotation_, "") };
      inline KeyMetadata& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


      // creationDate Field Functions 
      bool hasCreationDate() const { return this->creationDate_ != nullptr;};
      void deleteCreationDate() { this->creationDate_ = nullptr;};
      inline string getCreationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
      inline KeyMetadata& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline KeyMetadata& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // DKMSInstanceId Field Functions 
      bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
      void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
      inline string getDKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
      inline KeyMetadata& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


      // deleteDate Field Functions 
      bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
      void deleteDeleteDate() { this->deleteDate_ = nullptr;};
      inline string getDeleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
      inline KeyMetadata& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


      // deletionProtection Field Functions 
      bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
      void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
      inline string getDeletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
      inline KeyMetadata& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


      // deletionProtectionDescription Field Functions 
      bool hasDeletionProtectionDescription() const { return this->deletionProtectionDescription_ != nullptr;};
      void deleteDeletionProtectionDescription() { this->deletionProtectionDescription_ = nullptr;};
      inline string getDeletionProtectionDescription() const { DARABONBA_PTR_GET_DEFAULT(deletionProtectionDescription_, "") };
      inline KeyMetadata& setDeletionProtectionDescription(string deletionProtectionDescription) { DARABONBA_PTR_SET_VALUE(deletionProtectionDescription_, deletionProtectionDescription) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline KeyMetadata& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // keyId Field Functions 
      bool hasKeyId() const { return this->keyId_ != nullptr;};
      void deleteKeyId() { this->keyId_ = nullptr;};
      inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
      inline KeyMetadata& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


      // keySpec Field Functions 
      bool hasKeySpec() const { return this->keySpec_ != nullptr;};
      void deleteKeySpec() { this->keySpec_ = nullptr;};
      inline string getKeySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
      inline KeyMetadata& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


      // keyState Field Functions 
      bool hasKeyState() const { return this->keyState_ != nullptr;};
      void deleteKeyState() { this->keyState_ = nullptr;};
      inline string getKeyState() const { DARABONBA_PTR_GET_DEFAULT(keyState_, "") };
      inline KeyMetadata& setKeyState(string keyState) { DARABONBA_PTR_SET_VALUE(keyState_, keyState) };


      // keyUsage Field Functions 
      bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
      void deleteKeyUsage() { this->keyUsage_ = nullptr;};
      inline string getKeyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
      inline KeyMetadata& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


      // lastRotationDate Field Functions 
      bool hasLastRotationDate() const { return this->lastRotationDate_ != nullptr;};
      void deleteLastRotationDate() { this->lastRotationDate_ = nullptr;};
      inline string getLastRotationDate() const { DARABONBA_PTR_GET_DEFAULT(lastRotationDate_, "") };
      inline KeyMetadata& setLastRotationDate(string lastRotationDate) { DARABONBA_PTR_SET_VALUE(lastRotationDate_, lastRotationDate) };


      // materialExpireTime Field Functions 
      bool hasMaterialExpireTime() const { return this->materialExpireTime_ != nullptr;};
      void deleteMaterialExpireTime() { this->materialExpireTime_ = nullptr;};
      inline string getMaterialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(materialExpireTime_, "") };
      inline KeyMetadata& setMaterialExpireTime(string materialExpireTime) { DARABONBA_PTR_SET_VALUE(materialExpireTime_, materialExpireTime) };


      // nextRotationDate Field Functions 
      bool hasNextRotationDate() const { return this->nextRotationDate_ != nullptr;};
      void deleteNextRotationDate() { this->nextRotationDate_ = nullptr;};
      inline string getNextRotationDate() const { DARABONBA_PTR_GET_DEFAULT(nextRotationDate_, "") };
      inline KeyMetadata& setNextRotationDate(string nextRotationDate) { DARABONBA_PTR_SET_VALUE(nextRotationDate_, nextRotationDate) };


      // origin Field Functions 
      bool hasOrigin() const { return this->origin_ != nullptr;};
      void deleteOrigin() { this->origin_ = nullptr;};
      inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
      inline KeyMetadata& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


      // primaryKeyVersion Field Functions 
      bool hasPrimaryKeyVersion() const { return this->primaryKeyVersion_ != nullptr;};
      void deletePrimaryKeyVersion() { this->primaryKeyVersion_ = nullptr;};
      inline string getPrimaryKeyVersion() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyVersion_, "") };
      inline KeyMetadata& setPrimaryKeyVersion(string primaryKeyVersion) { DARABONBA_PTR_SET_VALUE(primaryKeyVersion_, primaryKeyVersion) };


      // protectionLevel Field Functions 
      bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
      void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
      inline string getProtectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
      inline KeyMetadata& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


      // rotationInterval Field Functions 
      bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
      void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
      inline string getRotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
      inline KeyMetadata& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    protected:
      // The Alibaba Cloud Resource Name (ARN) of the CMK.
      shared_ptr<string> arn_ {};
      // Indicates whether automatic key rotation is enabled. Valid values:
      // 
      // - Enabled
      // 
      // - Disabled
      // 
      // - Suspended
      // 
      // For more information, see [Automatic key rotation](https://help.aliyun.com/document_detail/134270.html).
      // 
      // > Only symmetric CMKs support automatic key rotation.
      shared_ptr<string> automaticRotation_ {};
      // The time when the CMK was created. The time is displayed in UTC.
      shared_ptr<string> creationDate_ {};
      // The Alibaba Cloud account that is used to create the CMK.
      shared_ptr<string> creator_ {};
      // The ID of the dedicated KMS instance.
      shared_ptr<string> DKMSInstanceId_ {};
      // The time at which the CMK is scheduled for deletion. The time is displayed in UTC.
      // 
      // For more information, see [ScheduleKeyDeletion](https://help.aliyun.com/document_detail/44196.html).
      // 
      // > This parameter is returned only when the value of the KeyState parameter is PendingDeletion.
      shared_ptr<string> deleteDate_ {};
      // Indicates whether deletion protection is enabled. Valid values:
      // 
      // - Enabled
      // 
      // - Disabled
      shared_ptr<string> deletionProtection_ {};
      // The description of deletion protection.
      shared_ptr<string> deletionProtectionDescription_ {};
      // The description of the CMK.
      shared_ptr<string> description_ {};
      // The ID of the CMK. The ID must be globally unique.
      shared_ptr<string> keyId_ {};
      // The type of the CMK.
      shared_ptr<string> keySpec_ {};
      // The status of the CMK.
      // 
      // For more information, see [Impact of CMK status on API operations](https://help.aliyun.com/document_detail/44211.html).
      shared_ptr<string> keyState_ {};
      // The usage of the CMK.
      shared_ptr<string> keyUsage_ {};
      // The time when the last rotation was performed. The time is displayed in UTC. For a new CMK, the value of this parameter is the time when the initial version of the CMK was generated.
      shared_ptr<string> lastRotationDate_ {};
      // The time when the key material expires. The time is displayed in UTC. If this parameter value is empty, the key material does not expire.
      shared_ptr<string> materialExpireTime_ {};
      // The time when the next rotation will be performed.
      // 
      // > This parameter is returned only when the value of the AutomaticRotation parameter is Enabled or Suspended.
      shared_ptr<string> nextRotationDate_ {};
      // The source of the key material for the CMK.
      shared_ptr<string> origin_ {};
      // The ID of the current primary key version for the symmetric CMK.
      shared_ptr<string> primaryKeyVersion_ {};
      // The protection level of the CMK.
      shared_ptr<string> protectionLevel_ {};
      // The interval for automatic key rotation.
      // 
      // Unit: seconds.
      // 
      // For example, if the value is 604800s, automatic key rotation is performed at a 7-day interval.
      // 
      // > This parameter is returned only when the value of the AutomaticRotation parameter is Enabled or Suspended.
      shared_ptr<string> rotationInterval_ {};
    };

    virtual bool empty() const override { return this->keyMetadata_ == nullptr
        && this->requestId_ == nullptr; };
    // keyMetadata Field Functions 
    bool hasKeyMetadata() const { return this->keyMetadata_ != nullptr;};
    void deleteKeyMetadata() { this->keyMetadata_ = nullptr;};
    inline const DescribeKeyResponseBody::KeyMetadata & getKeyMetadata() const { DARABONBA_PTR_GET_CONST(keyMetadata_, DescribeKeyResponseBody::KeyMetadata) };
    inline DescribeKeyResponseBody::KeyMetadata getKeyMetadata() { DARABONBA_PTR_GET(keyMetadata_, DescribeKeyResponseBody::KeyMetadata) };
    inline DescribeKeyResponseBody& setKeyMetadata(const DescribeKeyResponseBody::KeyMetadata & keyMetadata) { DARABONBA_PTR_SET_VALUE(keyMetadata_, keyMetadata) };
    inline DescribeKeyResponseBody& setKeyMetadata(DescribeKeyResponseBody::KeyMetadata && keyMetadata) { DARABONBA_PTR_SET_RVALUE(keyMetadata_, keyMetadata) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeKeyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The metadata of the CMK.
    shared_ptr<DescribeKeyResponseBody::KeyMetadata> keyMetadata_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
