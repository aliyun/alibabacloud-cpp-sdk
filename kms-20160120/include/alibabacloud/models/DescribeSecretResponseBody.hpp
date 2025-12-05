// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESECRETRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESECRETRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSecretResponseBodyTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeSecretResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSecretResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Arn, arn_);
      DARABONBA_PTR_TO_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_TO_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_TO_JSON(LastRotationDate, lastRotationDate_);
      DARABONBA_PTR_TO_JSON(NextRotationDate, nextRotationDate_);
      DARABONBA_PTR_TO_JSON(OwingService, owingService_);
      DARABONBA_PTR_TO_JSON(PlannedDeleteTime, plannedDeleteTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_TO_JSON(SecretName, secretName_);
      DARABONBA_PTR_TO_JSON(SecretType, secretType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSecretResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Arn, arn_);
      DARABONBA_PTR_FROM_JSON(AutomaticRotation, automaticRotation_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DKMSInstanceId, DKMSInstanceId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_FROM_JSON(ExtendedConfig, extendedConfig_);
      DARABONBA_PTR_FROM_JSON(LastRotationDate, lastRotationDate_);
      DARABONBA_PTR_FROM_JSON(NextRotationDate, nextRotationDate_);
      DARABONBA_PTR_FROM_JSON(OwingService, owingService_);
      DARABONBA_PTR_FROM_JSON(PlannedDeleteTime, plannedDeleteTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RotationInterval, rotationInterval_);
      DARABONBA_PTR_FROM_JSON(SecretName, secretName_);
      DARABONBA_PTR_FROM_JSON(SecretType, secretType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    DescribeSecretResponseBody() = default ;
    DescribeSecretResponseBody(const DescribeSecretResponseBody &) = default ;
    DescribeSecretResponseBody(DescribeSecretResponseBody &&) = default ;
    DescribeSecretResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSecretResponseBody() = default ;
    DescribeSecretResponseBody& operator=(const DescribeSecretResponseBody &) = default ;
    DescribeSecretResponseBody& operator=(DescribeSecretResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->arn_ == nullptr
        && return this->automaticRotation_ == nullptr && return this->createTime_ == nullptr && return this->DKMSInstanceId_ == nullptr && return this->description_ == nullptr && return this->encryptionKeyId_ == nullptr
        && return this->extendedConfig_ == nullptr && return this->lastRotationDate_ == nullptr && return this->nextRotationDate_ == nullptr && return this->owingService_ == nullptr && return this->plannedDeleteTime_ == nullptr
        && return this->requestId_ == nullptr && return this->rotationInterval_ == nullptr && return this->secretName_ == nullptr && return this->secretType_ == nullptr && return this->tags_ == nullptr
        && return this->updateTime_ == nullptr; };
    // arn Field Functions 
    bool hasArn() const { return this->arn_ != nullptr;};
    void deleteArn() { this->arn_ = nullptr;};
    inline string arn() const { DARABONBA_PTR_GET_DEFAULT(arn_, "") };
    inline DescribeSecretResponseBody& setArn(string arn) { DARABONBA_PTR_SET_VALUE(arn_, arn) };


    // automaticRotation Field Functions 
    bool hasAutomaticRotation() const { return this->automaticRotation_ != nullptr;};
    void deleteAutomaticRotation() { this->automaticRotation_ = nullptr;};
    inline string automaticRotation() const { DARABONBA_PTR_GET_DEFAULT(automaticRotation_, "") };
    inline DescribeSecretResponseBody& setAutomaticRotation(string automaticRotation) { DARABONBA_PTR_SET_VALUE(automaticRotation_, automaticRotation) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline DescribeSecretResponseBody& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DKMSInstanceId Field Functions 
    bool hasDKMSInstanceId() const { return this->DKMSInstanceId_ != nullptr;};
    void deleteDKMSInstanceId() { this->DKMSInstanceId_ = nullptr;};
    inline string DKMSInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DKMSInstanceId_, "") };
    inline DescribeSecretResponseBody& setDKMSInstanceId(string DKMSInstanceId) { DARABONBA_PTR_SET_VALUE(DKMSInstanceId_, DKMSInstanceId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeSecretResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string encryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline DescribeSecretResponseBody& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // extendedConfig Field Functions 
    bool hasExtendedConfig() const { return this->extendedConfig_ != nullptr;};
    void deleteExtendedConfig() { this->extendedConfig_ = nullptr;};
    inline string extendedConfig() const { DARABONBA_PTR_GET_DEFAULT(extendedConfig_, "") };
    inline DescribeSecretResponseBody& setExtendedConfig(string extendedConfig) { DARABONBA_PTR_SET_VALUE(extendedConfig_, extendedConfig) };


    // lastRotationDate Field Functions 
    bool hasLastRotationDate() const { return this->lastRotationDate_ != nullptr;};
    void deleteLastRotationDate() { this->lastRotationDate_ = nullptr;};
    inline string lastRotationDate() const { DARABONBA_PTR_GET_DEFAULT(lastRotationDate_, "") };
    inline DescribeSecretResponseBody& setLastRotationDate(string lastRotationDate) { DARABONBA_PTR_SET_VALUE(lastRotationDate_, lastRotationDate) };


    // nextRotationDate Field Functions 
    bool hasNextRotationDate() const { return this->nextRotationDate_ != nullptr;};
    void deleteNextRotationDate() { this->nextRotationDate_ = nullptr;};
    inline string nextRotationDate() const { DARABONBA_PTR_GET_DEFAULT(nextRotationDate_, "") };
    inline DescribeSecretResponseBody& setNextRotationDate(string nextRotationDate) { DARABONBA_PTR_SET_VALUE(nextRotationDate_, nextRotationDate) };


    // owingService Field Functions 
    bool hasOwingService() const { return this->owingService_ != nullptr;};
    void deleteOwingService() { this->owingService_ = nullptr;};
    inline string owingService() const { DARABONBA_PTR_GET_DEFAULT(owingService_, "") };
    inline DescribeSecretResponseBody& setOwingService(string owingService) { DARABONBA_PTR_SET_VALUE(owingService_, owingService) };


    // plannedDeleteTime Field Functions 
    bool hasPlannedDeleteTime() const { return this->plannedDeleteTime_ != nullptr;};
    void deletePlannedDeleteTime() { this->plannedDeleteTime_ = nullptr;};
    inline string plannedDeleteTime() const { DARABONBA_PTR_GET_DEFAULT(plannedDeleteTime_, "") };
    inline DescribeSecretResponseBody& setPlannedDeleteTime(string plannedDeleteTime) { DARABONBA_PTR_SET_VALUE(plannedDeleteTime_, plannedDeleteTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSecretResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rotationInterval Field Functions 
    bool hasRotationInterval() const { return this->rotationInterval_ != nullptr;};
    void deleteRotationInterval() { this->rotationInterval_ = nullptr;};
    inline string rotationInterval() const { DARABONBA_PTR_GET_DEFAULT(rotationInterval_, "") };
    inline DescribeSecretResponseBody& setRotationInterval(string rotationInterval) { DARABONBA_PTR_SET_VALUE(rotationInterval_, rotationInterval) };


    // secretName Field Functions 
    bool hasSecretName() const { return this->secretName_ != nullptr;};
    void deleteSecretName() { this->secretName_ = nullptr;};
    inline string secretName() const { DARABONBA_PTR_GET_DEFAULT(secretName_, "") };
    inline DescribeSecretResponseBody& setSecretName(string secretName) { DARABONBA_PTR_SET_VALUE(secretName_, secretName) };


    // secretType Field Functions 
    bool hasSecretType() const { return this->secretType_ != nullptr;};
    void deleteSecretType() { this->secretType_ = nullptr;};
    inline string secretType() const { DARABONBA_PTR_GET_DEFAULT(secretType_, "") };
    inline DescribeSecretResponseBody& setSecretType(string secretType) { DARABONBA_PTR_SET_VALUE(secretType_, secretType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const DescribeSecretResponseBodyTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, DescribeSecretResponseBodyTags) };
    inline DescribeSecretResponseBodyTags tags() { DARABONBA_PTR_GET(tags_, DescribeSecretResponseBodyTags) };
    inline DescribeSecretResponseBody& setTags(const DescribeSecretResponseBodyTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeSecretResponseBody& setTags(DescribeSecretResponseBodyTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline DescribeSecretResponseBody& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The Alibaba Cloud Resource Name (ARN) of the secret.
    std::shared_ptr<string> arn_ = nullptr;
    // Indicates whether automatic rotation is enabled. Valid values:
    // 
    // *   Enabled: indicates that automatic rotation is enabled.
    // *   Disabled: indicates that automatic rotation is disabled.
    // *   Invalid: indicates that the status of automatic rotation is abnormal. In this case, Secrets Manager cannot automatically rotate the secret.
    // 
    // >  This parameter is returned only for a managed ApsaraDB RDS secret, a managed RAM secret, or a managed ECS secret.
    std::shared_ptr<string> automaticRotation_ = nullptr;
    // The time when the secret was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID of the dedicated KMS instance.
    std::shared_ptr<string> DKMSInstanceId_ = nullptr;
    // The description of the secret.
    std::shared_ptr<string> description_ = nullptr;
    // The ID of the customer master key (CMK) that is used to encrypt the secret value.
    std::shared_ptr<string> encryptionKeyId_ = nullptr;
    // The extended configuration of the secret.
    // 
    // >  This parameter is returned only for a managed ApsaraDB RDS secret, a managed Resource Access Management (RAM) secret, or a managed Elastic Compute Service (ECS) secret.
    std::shared_ptr<string> extendedConfig_ = nullptr;
    // The time when the last rotation was performed.
    // 
    // >  This parameter is returned if the secret was rotated.
    std::shared_ptr<string> lastRotationDate_ = nullptr;
    // The time when the next rotation will be performed.
    // 
    // >  This parameter is returned when automatic rotation is enabled.
    std::shared_ptr<string> nextRotationDate_ = nullptr;
    std::shared_ptr<string> owingService_ = nullptr;
    // The time when the secret is scheduled to be deleted.
    std::shared_ptr<string> plannedDeleteTime_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The interval for automatic rotation.
    // 
    // The value is in the `integer[unit]` format. `integer` indicates the length of time. `unit`: indicates the time unit. The value of `unit` is fixed as s. For example, if the value is 604800s, automatic rotation is performed at a 7-day interval.
    // 
    // >  This parameter is returned when automatic rotation is enabled.
    std::shared_ptr<string> rotationInterval_ = nullptr;
    // The name of the secret.
    std::shared_ptr<string> secretName_ = nullptr;
    // The type of the secret. Valid values:
    // 
    // *   Generic: indicates a generic secret.
    // *   Rds: indicates a managed ApsaraDB RDS secret.
    // *   RAMCredentials: indicates a managed RAM secret.
    // *   ECS: indicates a managed ECS secret.
    std::shared_ptr<string> secretType_ = nullptr;
    // The resource tags of the secret.
    // 
    // This parameter is not returned if you set the FetchTags parameter to false or you do not specify the FetchTags parameter.
    std::shared_ptr<DescribeSecretResponseBodyTags> tags_ = nullptr;
    // The time when the secret was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
