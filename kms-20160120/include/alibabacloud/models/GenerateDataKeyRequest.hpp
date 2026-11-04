// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDATAKEYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDATAKEYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class GenerateDataKeyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDataKeyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_TO_JSON(DryRun, dryRun_);
      DARABONBA_ANY_TO_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyMaterial, keyMaterial_);
      DARABONBA_PTR_TO_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_TO_JSON(ManagedByKms, managedByKms_);
      DARABONBA_PTR_TO_JSON(NumberOfBytes, numberOfBytes_);
      DARABONBA_PTR_TO_JSON(Recipient, recipient_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDataKeyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataKeyName, dataKeyName_);
      DARABONBA_PTR_FROM_JSON(DryRun, dryRun_);
      DARABONBA_ANY_FROM_JSON(EncryptionContext, encryptionContext_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyMaterial, keyMaterial_);
      DARABONBA_PTR_FROM_JSON(KeySpec, keySpec_);
      DARABONBA_PTR_FROM_JSON(ManagedByKms, managedByKms_);
      DARABONBA_PTR_FROM_JSON(NumberOfBytes, numberOfBytes_);
      DARABONBA_PTR_FROM_JSON(Recipient, recipient_);
    };
    GenerateDataKeyRequest() = default ;
    GenerateDataKeyRequest(const GenerateDataKeyRequest &) = default ;
    GenerateDataKeyRequest(GenerateDataKeyRequest &&) = default ;
    GenerateDataKeyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDataKeyRequest() = default ;
    GenerateDataKeyRequest& operator=(const GenerateDataKeyRequest &) = default ;
    GenerateDataKeyRequest& operator=(GenerateDataKeyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataKeyName_ == nullptr
        && this->dryRun_ == nullptr && this->encryptionContext_ == nullptr && this->keyId_ == nullptr && this->keyMaterial_ == nullptr && this->keySpec_ == nullptr
        && this->managedByKms_ == nullptr && this->numberOfBytes_ == nullptr && this->recipient_ == nullptr; };
    // dataKeyName Field Functions 
    bool hasDataKeyName() const { return this->dataKeyName_ != nullptr;};
    void deleteDataKeyName() { this->dataKeyName_ = nullptr;};
    inline string getDataKeyName() const { DARABONBA_PTR_GET_DEFAULT(dataKeyName_, "") };
    inline GenerateDataKeyRequest& setDataKeyName(string dataKeyName) { DARABONBA_PTR_SET_VALUE(dataKeyName_, dataKeyName) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline string getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, "") };
    inline GenerateDataKeyRequest& setDryRun(string dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


    // encryptionContext Field Functions 
    bool hasEncryptionContext() const { return this->encryptionContext_ != nullptr;};
    void deleteEncryptionContext() { this->encryptionContext_ = nullptr;};
    inline     const Darabonba::Json & getEncryptionContext() const { DARABONBA_GET(encryptionContext_) };
    Darabonba::Json & getEncryptionContext() { DARABONBA_GET(encryptionContext_) };
    inline GenerateDataKeyRequest& setEncryptionContext(const Darabonba::Json & encryptionContext) { DARABONBA_SET_VALUE(encryptionContext_, encryptionContext) };
    inline GenerateDataKeyRequest& setEncryptionContext(Darabonba::Json && encryptionContext) { DARABONBA_SET_RVALUE(encryptionContext_, encryptionContext) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline GenerateDataKeyRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyMaterial Field Functions 
    bool hasKeyMaterial() const { return this->keyMaterial_ != nullptr;};
    void deleteKeyMaterial() { this->keyMaterial_ = nullptr;};
    inline string getKeyMaterial() const { DARABONBA_PTR_GET_DEFAULT(keyMaterial_, "") };
    inline GenerateDataKeyRequest& setKeyMaterial(string keyMaterial) { DARABONBA_PTR_SET_VALUE(keyMaterial_, keyMaterial) };


    // keySpec Field Functions 
    bool hasKeySpec() const { return this->keySpec_ != nullptr;};
    void deleteKeySpec() { this->keySpec_ = nullptr;};
    inline string getKeySpec() const { DARABONBA_PTR_GET_DEFAULT(keySpec_, "") };
    inline GenerateDataKeyRequest& setKeySpec(string keySpec) { DARABONBA_PTR_SET_VALUE(keySpec_, keySpec) };


    // managedByKms Field Functions 
    bool hasManagedByKms() const { return this->managedByKms_ != nullptr;};
    void deleteManagedByKms() { this->managedByKms_ = nullptr;};
    inline bool getManagedByKms() const { DARABONBA_PTR_GET_DEFAULT(managedByKms_, false) };
    inline GenerateDataKeyRequest& setManagedByKms(bool managedByKms) { DARABONBA_PTR_SET_VALUE(managedByKms_, managedByKms) };


    // numberOfBytes Field Functions 
    bool hasNumberOfBytes() const { return this->numberOfBytes_ != nullptr;};
    void deleteNumberOfBytes() { this->numberOfBytes_ = nullptr;};
    inline int32_t getNumberOfBytes() const { DARABONBA_PTR_GET_DEFAULT(numberOfBytes_, 0) };
    inline GenerateDataKeyRequest& setNumberOfBytes(int32_t numberOfBytes) { DARABONBA_PTR_SET_VALUE(numberOfBytes_, numberOfBytes) };


    // recipient Field Functions 
    bool hasRecipient() const { return this->recipient_ != nullptr;};
    void deleteRecipient() { this->recipient_ = nullptr;};
    inline string getRecipient() const { DARABONBA_PTR_GET_DEFAULT(recipient_, "") };
    inline GenerateDataKeyRequest& setRecipient(string recipient) { DARABONBA_PTR_SET_VALUE(recipient_, recipient) };


  protected:
    // The name of the managed data key (DK). This parameter is required only when ManagedByKms is set to true.
    shared_ptr<string> dataKeyName_ {};
    // Specifies whether to enable the dry run mode. Valid values:
    // 
    // - true: Enabled.
    // - false: Disabled.
    // 
    // Default value: false.
    // 
    // The dry run mode is used to test API calls, verify whether you have the required permissions on the resources, and check whether the request parameters are correctly configured. After the dry run mode is enabled, KMS always returns a failure and provides the cause of the failure. The causes include:
    // 
    // - DryRunOperationError: The request would succeed if the DryRun parameter is not configured.
    // - ValidationError: The specified parameters in the request are invalid.
    // - AccessDeniedError: You do not have the permissions to perform the operation on the KMS resources.
    shared_ptr<string> dryRun_ {};
    // The JSON string of key-value pairs.
    // 
    // If you specify this parameter, you must provide the same parameter when you call the [Decrypt](https://help.aliyun.com/document_detail/28950.html) API operation. For more information, see [EncryptionContext](https://help.aliyun.com/document_detail/42975.html).
    Darabonba::Json encryptionContext_ {};
    // The ID of the key. You can also specify the alias or Alibaba Cloud Resource Name (ARN) of the key. For more information about aliases, see [Manage key aliases](https://help.aliyun.com/document_detail/480655.html).
    // >When you access a key that belongs to another Alibaba Cloud account, you must enter the ARN of the key. The ARN of a key is in the `acs:kms:${region}:${account}:key/${keyid}` format.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The key material of the managed data key (DK). Specify this parameter only when ManagedByKms is set to true and Bring Your Own Key (BYOK) is used.
    shared_ptr<string> keyMaterial_ {};
    // Specifies the length of the generated data key (DK). Valid values:
    // 
    // - AES_256: a 256-bit symmetric key.
    // 
    // - AES_128: a 128-bit symmetric key.
    // 
    // >Use KeySpec or NumberOfBytes to specify the length of the data key (DK). If neither parameter is specified, KMS generates a 256-bit data key (DK). If both parameters are specified, KMS ignores the KeySpec parameter.
    shared_ptr<string> keySpec_ {};
    // Specifies whether the data key (DK) is managed and generated by KMS.
    shared_ptr<bool> managedByKms_ {};
    // Specifies the length of the generated data key (DK) in bytes.
    // 
    // Valid values: 1 to 1024.
    // 
    // Default value:
    // - If KeySpec is set to AES_256, the default value is 32.
    // - If KeySpec is set to AES_128, the default value is 16.
    shared_ptr<int32_t> numberOfBytes_ {};
    // The trusted environment authentication information.
    // 
    // - AttestationDocument
    // // The trusted environment attestation document using Base64 encoding, which includes information such as environment measurements, signatures, and certificates.
    // 
    // - KeyEncryptionAlgorithm
    // // The secret key encryption algorithm. Only RSAES_OAEP_SHA_256 is supported.
    // 
    // Content structure of AttestationDocument:
    // - quoted                  
    //  - extendUserData // The user extension data using Base64 encoding. The decoded structure is as follows:
    //    - aud // The fixed value "kms". 
    //    - iat // The issuance time, which is a UNIX timestamp in seconds.
    //    - exp // The expire time, which is a UNIX timestamp in seconds.
    //    - pubKey // The RSA2048 public key in SPKI format using Base64 encoding.
    //    - digestAlg // The summary algorithm. Only "sha256" is supported.
    //    - ver // The protocol version. Only "v1" is supported.
    //    - signature // The report signature, which is used to authenticate the integrity of quoted and extendUserData.
    //  - pcrInfo:
    //    - pcrValues // The Platform Configuration Register (PCR) measurements.
    //    - pcrSelectionOut // The PCR selection information.
    //    - pcrUpdateCounter // The number of PCR updates.
    //  - cert // The platform attestation certificate, which is used to authenticate the validity of the signature.
    // >Notice: This parameter takes effect only when you invoke the API operation through a dedicated gateway.</notice>
    shared_ptr<string> recipient_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
