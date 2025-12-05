// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEKEYRESPONSEBODYKEYMETADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEKEYRESPONSEBODYKEYMETADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeKeyResponseBodyKeyMetadata : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeKeyResponseBodyKeyMetadata& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeKeyResponseBodyKeyMetadata& obj) { 
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
    DescribeKeyResponseBodyKeyMetadata() = default ;
    DescribeKeyResponseBodyKeyMetadata(const DescribeKeyResponseBodyKeyMetadata &) = default ;
    DescribeKeyResponseBodyKeyMetadata(DescribeKeyResponseBodyKeyMetadata &&) = default ;
    DescribeKeyResponseBodyKeyMetadata(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeKeyResponseBodyKeyMetadata() = default ;
    DescribeKeyResponseBodyKeyMetadata& operator=(const DescribeKeyResponseBodyKeyMetadata &) = default ;
    DescribeKeyResponseBodyKeyMetadata& operator=(DescribeKeyResponseBodyKeyMetadata &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->automaticRotation_ == nullptr && return this->creationDate_ == nullptr && return this->creator_ == nullptr && return this->DKMSInstanceId_ == nullptr && return this->deleteDate_ == nullptr
        && return this->deletionProtection_ == nullptr && return this->deletionProtectionDescription_ == nullptr && return this->description_ == nullptr && return this->keyId_ == nullptr && return this->keySpec_ == nullptr
        && return this->keyState_ == nullptr && return this->keyUsage_ == nullptr && return this->lastRotationDate_ == nullptr && return this->materialExpireTime_ == nullptr && return this->nextRotationDate_ == nullptr
        && return this->origin_ == nullptr && return this->primaryKeyVersion_ == nullptr && return this->protectionLevel_ == nullptr && return this->rotationInterval_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // automaticRotation Field Functions 
    bool hasAutomaticRotation() const { return this->automaticRotation_ != nullptr;};
    void deleteAutomaticRotation() { this->automaticRotation_ = nullptr;};
    inline string automaticRotation() const { DARABONBA_PTR_GET_DEFAULT(automaticRotation_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


    // creationDate Field Functions 
    bool hasCreationDate() const { return this->creationDate_ != nullptr;};
    void deleteCreationDate() { this->creationDate_ = nullptr;};
    inline string creationDate() const { DARABONBA_PTR_GET_DEFAULT(creationDate_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setCreationDate(string creationDate) { DARABONBA_PTR_SET_VALUE(creationDate_, creationDate) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string DKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // deleteDate Field Functions 
    bool hasDeleteDate() const { return this->deleteDate_ != nullptr;};
    void deleteDeleteDate() { this->deleteDate_ = nullptr;};
    inline string deleteDate() const { DARABONBA_PTR_GET_DEFAULT(deleteDate_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setDeleteDate(string deleteDate) { DARABONBA_PTR_SET_VALUE(deleteDate_, deleteDate) };


    // deletionProtection Field Functions 
    bool hasDeletionProtection() const { return this->deletionProtection_ != nullptr;};
    void deleteDeletionProtection() { this->deletionProtection_ = nullptr;};
    inline string deletionProtection() const { DARABONBA_PTR_GET_DEFAULT(deletionProtection_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setDeletionProtection(string deletionProtection) { DARABONBA_PTR_SET_VALUE(deletionProtection_, deletionProtection) };


    // deletionProtectionDescription Field Functions 
    bool hasDeletionProtectionDescription() const { return this->deletionProtectionDescription_ != nullptr;};
    void deleteDeletionProtectionDescription() { this->deletionProtectionDescription_ = nullptr;};
    inline string deletionProtectionDescription() const { DARABONBA_PTR_GET_DEFAULT(deletionProtectionDescription_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setDeletionProtectionDescription(string deletionProtectionDescription) { DARABONBA_PTR_SET_VALUE(deletionProtectionDescription_, deletionProtectionDescription) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string keyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string keySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // keyState Field Functions 
    bool hasKeyState() const { return this->keyState_ != nullptr;};
    void deleteKeyState() { this->keyState_ = nullptr;};
    inline string keyState() const { DARABONBA_PTR_GET_DEFAULT(keyState_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setKeyState(string keyState) { DARABONBA_PTR_SET_VALUE(keyState_, keyState) };


    // keyUsage Field Functions 
    bool hasKeyUsage() const { return this->keyUsage_ != nullptr;};
    void deleteKeyUsage() { this->keyUsage_ = nullptr;};
    inline string keyUsage() const { DARABONBA_PTR_GET_DEFAULT(keyUsage_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setKeyUsage(string keyUsage) { DARABONBA_PTR_SET_VALUE(keyUsage_, keyUsage) };


    // lastRotationDate Field Functions 
    bool hasLastRotationDate() const { return this->lastRotationDate_ != nullptr;};
    void deleteLastRotationDate() { this->lastRotationDate_ = nullptr;};
    inline string lastRotationDate() const { DARABONBA_PTR_GET_DEFAULT(lastRotationDate_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setLastRotationDate(string lastRotationDate) { DARABONBA_PTR_SET_VALUE(lastRotationDate_, lastRotationDate) };


    // materialExpireTime Field Functions 
    bool hasMaterialExpireTime() const { return this->materialExpireTime_ != nullptr;};
    void deleteMaterialExpireTime() { this->materialExpireTime_ = nullptr;};
    inline string materialExpireTime() const { DARABONBA_PTR_GET_DEFAULT(materialExpireTime_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setMaterialExpireTime(string materialExpireTime) { DARABONBA_PTR_SET_VALUE(materialExpireTime_, materialExpireTime) };


    // nextRotationDate Field Functions 
    bool hasNextRotationDate() const { return this->nextRotationDate_ != nullptr;};
    void deleteNextRotationDate() { this->nextRotationDate_ = nullptr;};
    inline string nextRotationDate() const { DARABONBA_PTR_GET_DEFAULT(nextRotationDate_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setNextRotationDate(string nextRotationDate) { DARABONBA_PTR_SET_VALUE(nextRotationDate_, nextRotationDate) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string origin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // primaryKeyVersion Field Functions 
    bool hasPrimaryKeyVersion() const { return this->primaryKeyVersion_ != nullptr;};
    void deletePrimaryKeyVersion() { this->primaryKeyVersion_ = nullptr;};
    inline string primaryKeyVersion() const { DARABONBA_PTR_GET_DEFAULT(primaryKeyVersion_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setPrimaryKeyVersion(string primaryKeyVersion) { DARABONBA_PTR_SET_VALUE(primaryKeyVersion_, primaryKeyVersion) };


    // protectionLevel Field Functions 
    bool hasProtectionLevel() const { return this->protectionLevel_ != nullptr;};
    void deleteProtectionLevel() { this->protectionLevel_ = nullptr;};
    inline string protectionLevel() const { DARABONBA_PTR_GET_DEFAULT(protectionLevel_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setProtectionLevel(string protectionLevel) { DARABONBA_PTR_SET_VALUE(protectionLevel_, protectionLevel) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline DescribeKeyResponseBodyKeyMetadata& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the CMK.
    std::shared_ptr<string> arn_ = nullptr;
    // Indicates whether automatic key rotation is enabled. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    // *   Suspended
    // 
    // For more information, see [Automatic key rotation](https://help.aliyun.com/document_detail/134270.html).
    // 
    // >  Only symmetric CMKs support automatic key rotation.
    std::shared_ptr<string> automaticRotation_ = nullptr;
    // The time when the CMK was created. The time is displayed in UTC.
    std::shared_ptr<string> creationDate_ = nullptr;
    // The Alibaba Cloud account that is used to create the CMK.
    std::shared_ptr<string> creator_ = nullptr;
    // The ID of the dedicated KMS instance.
    std::shared_ptr<string> DKMSInstanceId_ = nullptr;
    // The time at which the CMK is scheduled for deletion. The time is displayed in UTC.
    // 
    // For more information, see [ScheduleKeyDeletion](https://help.aliyun.com/document_detail/44196.html).
    // 
    // >  This parameter is returned only when the value of the KeyState parameter is PendingDeletion.
    std::shared_ptr<string> deleteDate_ = nullptr;
    // Indicates whether deletion protection is enabled. Valid values:
    // 
    // *   Enabled
    // *   Disabled
    std::shared_ptr<string> deletionProtection_ = nullptr;
    // The description of deletion protection.
    std::shared_ptr<string> deletionProtectionDescription_ = nullptr;
    // The description of the CMK.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the CMK. The ID must be globally unique.
    std::shared_ptr<string> keyId_ = nullptr;
    // The type of the CMK.
    std::shared_ptr<string> keySpec_ = nullptr;
    // The status of the CMK.
    // 
    // For more information, see [Impact of CMK status on API operations](https://help.aliyun.com/document_detail/44211.html).
    std::shared_ptr<string> keyState_ = nullptr;
    // The usage of the CMK.
    std::shared_ptr<string> keyUsage_ = nullptr;
    // The time when the last rotation was performed. The time is displayed in UTC. For a new CMK, the value of this parameter is the time when the initial version of the CMK was generated.
    std::shared_ptr<string> lastRotationDate_ = nullptr;
    // The time when the key material expires. The time is displayed in UTC. If this parameter value is empty, the key material does not expire.
    std::shared_ptr<string> materialExpireTime_ = nullptr;
    // The time when the next rotation will be performed.
    // 
    // >  This parameter is returned only when the value of the AutomaticRotation parameter is Enabled or Suspended.
    std::shared_ptr<string> nextRotationDate_ = nullptr;
    // The source of the key material for the CMK.
    std::shared_ptr<string> origin_ = nullptr;
    // The ID of the current primary key version for the symmetric CMK.
    std::shared_ptr<string> primaryKeyVersion_ = nullptr;
    // The protection level of the CMK.
    std::shared_ptr<string> protectionLevel_ = nullptr;
    // The interval for automatic key rotation.
    // 
    // Unit: seconds.
    // 
    // For example, if the value is 604800s, automatic key rotation is performed at a 7-day interval.
    // 
    // >  This parameter is returned only when the value of the AutomaticRotation parameter is Enabled or Suspended.
    std::shared_ptr<string> rotationInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
