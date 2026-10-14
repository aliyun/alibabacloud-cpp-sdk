// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAMASKINGRULESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAMASKINGRULESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class CreateDataMaskingRuleShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataMaskingRuleShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncAlgorithm, encAlgorithm_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyMode, encryptionKeyMode_);
      DARABONBA_PTR_TO_JSON(EngineType, engineType_);
      DARABONBA_PTR_TO_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_TO_JSON(ExpireTimeOperation, expireTimeOperation_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
      DARABONBA_PTR_TO_JSON(RiskHandleId, riskHandleId_);
      DARABONBA_PTR_TO_JSON(SubRuleList, subRuleListShrink_);
      DARABONBA_PTR_TO_JSON(UserList, userListShrink_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataMaskingRuleShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncAlgorithm, encAlgorithm_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyMode, encryptionKeyMode_);
      DARABONBA_PTR_FROM_JSON(EngineType, engineType_);
      DARABONBA_PTR_FROM_JSON(ExpireTime, expireTime_);
      DARABONBA_PTR_FROM_JSON(ExpireTimeOperation, expireTimeOperation_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
      DARABONBA_PTR_FROM_JSON(RiskHandleId, riskHandleId_);
      DARABONBA_PTR_FROM_JSON(SubRuleList, subRuleListShrink_);
      DARABONBA_PTR_FROM_JSON(UserList, userListShrink_);
    };
    CreateDataMaskingRuleShrinkRequest() = default ;
    CreateDataMaskingRuleShrinkRequest(const CreateDataMaskingRuleShrinkRequest &) = default ;
    CreateDataMaskingRuleShrinkRequest(CreateDataMaskingRuleShrinkRequest &&) = default ;
    CreateDataMaskingRuleShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataMaskingRuleShrinkRequest() = default ;
    CreateDataMaskingRuleShrinkRequest& operator=(const CreateDataMaskingRuleShrinkRequest &) = default ;
    CreateDataMaskingRuleShrinkRequest& operator=(CreateDataMaskingRuleShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encAlgorithm_ == nullptr
        && this->encryptionKeyId_ == nullptr && this->encryptionKeyMode_ == nullptr && this->engineType_ == nullptr && this->expireTime_ == nullptr && this->expireTimeOperation_ == nullptr
        && this->instanceId_ == nullptr && this->lang_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr && this->riskHandleId_ == nullptr
        && this->subRuleListShrink_ == nullptr && this->userListShrink_ == nullptr; };
    // encAlgorithm Field Functions 
    bool hasEncAlgorithm() const { return this->encAlgorithm_ != nullptr;};
    void deleteEncAlgorithm() { this->encAlgorithm_ = nullptr;};
    inline string getEncAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encAlgorithm_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setEncAlgorithm(string encAlgorithm) { DARABONBA_PTR_SET_VALUE(encAlgorithm_, encAlgorithm) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string getEncryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // encryptionKeyMode Field Functions 
    bool hasEncryptionKeyMode() const { return this->encryptionKeyMode_ != nullptr;};
    void deleteEncryptionKeyMode() { this->encryptionKeyMode_ = nullptr;};
    inline string getEncryptionKeyMode() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyMode_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setEncryptionKeyMode(string encryptionKeyMode) { DARABONBA_PTR_SET_VALUE(encryptionKeyMode_, encryptionKeyMode) };


    // engineType Field Functions 
    bool hasEngineType() const { return this->engineType_ != nullptr;};
    void deleteEngineType() { this->engineType_ = nullptr;};
    inline string getEngineType() const { DARABONBA_PTR_GET_DEFAULT(engineType_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setEngineType(string engineType) { DARABONBA_PTR_SET_VALUE(engineType_, engineType) };


    // expireTime Field Functions 
    bool hasExpireTime() const { return this->expireTime_ != nullptr;};
    void deleteExpireTime() { this->expireTime_ = nullptr;};
    inline int64_t getExpireTime() const { DARABONBA_PTR_GET_DEFAULT(expireTime_, 0L) };
    inline CreateDataMaskingRuleShrinkRequest& setExpireTime(int64_t expireTime) { DARABONBA_PTR_SET_VALUE(expireTime_, expireTime) };


    // expireTimeOperation Field Functions 
    bool hasExpireTimeOperation() const { return this->expireTimeOperation_ != nullptr;};
    void deleteExpireTimeOperation() { this->expireTimeOperation_ = nullptr;};
    inline string getExpireTimeOperation() const { DARABONBA_PTR_GET_DEFAULT(expireTimeOperation_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setExpireTimeOperation(string expireTimeOperation) { DARABONBA_PTR_SET_VALUE(expireTimeOperation_, expireTimeOperation) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline CreateDataMaskingRuleShrinkRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // riskHandleId Field Functions 
    bool hasRiskHandleId() const { return this->riskHandleId_ != nullptr;};
    void deleteRiskHandleId() { this->riskHandleId_ = nullptr;};
    inline int64_t getRiskHandleId() const { DARABONBA_PTR_GET_DEFAULT(riskHandleId_, 0L) };
    inline CreateDataMaskingRuleShrinkRequest& setRiskHandleId(int64_t riskHandleId) { DARABONBA_PTR_SET_VALUE(riskHandleId_, riskHandleId) };


    // subRuleListShrink Field Functions 
    bool hasSubRuleListShrink() const { return this->subRuleListShrink_ != nullptr;};
    void deleteSubRuleListShrink() { this->subRuleListShrink_ = nullptr;};
    inline string getSubRuleListShrink() const { DARABONBA_PTR_GET_DEFAULT(subRuleListShrink_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setSubRuleListShrink(string subRuleListShrink) { DARABONBA_PTR_SET_VALUE(subRuleListShrink_, subRuleListShrink) };


    // userListShrink Field Functions 
    bool hasUserListShrink() const { return this->userListShrink_ != nullptr;};
    void deleteUserListShrink() { this->userListShrink_ = nullptr;};
    inline string getUserListShrink() const { DARABONBA_PTR_GET_DEFAULT(userListShrink_, "") };
    inline CreateDataMaskingRuleShrinkRequest& setUserListShrink(string userListShrink) { DARABONBA_PTR_SET_VALUE(userListShrink_, userListShrink) };


  protected:
    // The name of the column encryption algorithm. The availability of AES_128_GCM, AES_256_GCM, and SM4_128_GCM depends on the instance. Select an available algorithm from [ListDataMaskingEncryptionAlgorithms](https://help.aliyun.com/document_detail/2859327.html).
    shared_ptr<string> encAlgorithm_ {};
    // The KMS key ID. You can obtain this value from Items[].KeyId in the response of [ListKmsKeys](https://help.aliyun.com/document_detail/2859328.html). Specify this parameter when you use a KMS key. Do not specify this parameter for local key scenarios.
    shared_ptr<string> encryptionKeyId_ {};
    // The key mode. Valid values:
    // 
    // - client_key: local key.
    // - kms_key: KMS key. If you set this parameter to kms_key, you must specify EncryptionKeyId.
    shared_ptr<string> encryptionKeyMode_ {};
    // The database engine type. This value must match the EngineType of the target instance, such as MySQL or PostgreSQL.
    shared_ptr<string> engineType_ {};
    // The expiration time of the plaintext access permissions. This value is a UNIX timestamp in milliseconds since 1970-01-01 00:00:00 UTC. Specify this parameter only when ExpireTimeOperation is set to SET. The value must be later than the current time and no greater than 2145953410000. The server stores the value with second-level precision. Do not specify this parameter when ExpireTimeOperation is set to PRESERVE or CLEAR.
    shared_ptr<int64_t> expireTime_ {};
    // The handling method for the permission expiration time. Valid values:
    // 
    // - PRESERVE: Retains the original expiration time.
    // - CLEAR: Clears the expiration time.
    // - SET: Sets the expiration time to the value specified by ExpireTime.
    // 
    // Default value: PRESERVE. Only fullAccess supports expiration time settings.
    shared_ptr<string> expireTimeOperation_ {};
    // The database instance identity. You can obtain this value from Items[].InstanceId in the response of [ListDataMaskingInstances](https://help.aliyun.com/document_detail/2859326.html).
    shared_ptr<string> instanceId_ {};
    // The language of the response description. Valid values:
    // 
    // - zh: Chinese.
    // - en: English.
    shared_ptr<string> lang_ {};
    // The cloud product code. Column encryption supports RDS, POLARDB, and PolarDBX2. If you specify both ProductCode and ProductId, the values must correspond to each other.
    shared_ptr<string> productCode_ {};
    // The cloud product type ID. Valid values:
    // 
    // - 5: RDS.
    // - 8: POLARDB.
    // - 27: PolarDBX2.
    // 
    // If you specify both ProductId and ProductCode, the values must correspond to each other.
    shared_ptr<int64_t> productId_ {};
    // The ID of the associated risk handling record. You do not need to specify this parameter for standard column encryption creation.
    shared_ptr<int64_t> riskHandleId_ {};
    // The list of column encryption targets grouped by database and table.
    shared_ptr<string> subRuleListShrink_ {};
    // The list of database accounts to be granted fullAccess plaintext access permissions. The accounts must belong to the target instance.
    shared_ptr<string> userListShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
