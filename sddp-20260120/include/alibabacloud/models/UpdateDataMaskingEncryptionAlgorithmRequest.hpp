// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEDATAMASKINGENCRYPTIONALGORITHMREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEDATAMASKINGENCRYPTIONALGORITHMREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20260120
{
namespace Models
{
  class UpdateDataMaskingEncryptionAlgorithmRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateDataMaskingEncryptionAlgorithmRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
      DARABONBA_PTR_TO_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(ProductId, productId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateDataMaskingEncryptionAlgorithmRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptionAlgorithm, encryptionAlgorithm_);
      DARABONBA_PTR_FROM_JSON(EncryptionKeyId, encryptionKeyId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(ProductId, productId_);
    };
    UpdateDataMaskingEncryptionAlgorithmRequest() = default ;
    UpdateDataMaskingEncryptionAlgorithmRequest(const UpdateDataMaskingEncryptionAlgorithmRequest &) = default ;
    UpdateDataMaskingEncryptionAlgorithmRequest(UpdateDataMaskingEncryptionAlgorithmRequest &&) = default ;
    UpdateDataMaskingEncryptionAlgorithmRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateDataMaskingEncryptionAlgorithmRequest() = default ;
    UpdateDataMaskingEncryptionAlgorithmRequest& operator=(const UpdateDataMaskingEncryptionAlgorithmRequest &) = default ;
    UpdateDataMaskingEncryptionAlgorithmRequest& operator=(UpdateDataMaskingEncryptionAlgorithmRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptionAlgorithm_ == nullptr
        && this->encryptionKeyId_ == nullptr && this->instanceId_ == nullptr && this->lang_ == nullptr && this->productCode_ == nullptr && this->productId_ == nullptr; };
    // encryptionAlgorithm Field Functions 
    bool hasEncryptionAlgorithm() const { return this->encryptionAlgorithm_ != nullptr;};
    void deleteEncryptionAlgorithm() { this->encryptionAlgorithm_ = nullptr;};
    inline string getEncryptionAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(encryptionAlgorithm_, "") };
    inline UpdateDataMaskingEncryptionAlgorithmRequest& setEncryptionAlgorithm(string encryptionAlgorithm) { DARABONBA_PTR_SET_VALUE(encryptionAlgorithm_, encryptionAlgorithm) };


    // encryptionKeyId Field Functions 
    bool hasEncryptionKeyId() const { return this->encryptionKeyId_ != nullptr;};
    void deleteEncryptionKeyId() { this->encryptionKeyId_ = nullptr;};
    inline string getEncryptionKeyId() const { DARABONBA_PTR_GET_DEFAULT(encryptionKeyId_, "") };
    inline UpdateDataMaskingEncryptionAlgorithmRequest& setEncryptionKeyId(string encryptionKeyId) { DARABONBA_PTR_SET_VALUE(encryptionKeyId_, encryptionKeyId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateDataMaskingEncryptionAlgorithmRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline UpdateDataMaskingEncryptionAlgorithmRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string getProductCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline UpdateDataMaskingEncryptionAlgorithmRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline int64_t getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, 0L) };
    inline UpdateDataMaskingEncryptionAlgorithmRequest& setProductId(int64_t productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


  protected:
    // The name of the instance-level column encryption algorithm. Select an available algorithm from the ListDataMaskingEncryptionAlgorithms operation.
    shared_ptr<string> encryptionAlgorithm_ {};
    // The KMS key identifier. You can obtain this value from Items[].KeyId in the response of the ListKmsKeys operation. Specify this parameter when you use a KMS key. Do not specify this parameter for local key scenarios.
    shared_ptr<string> encryptionKeyId_ {};
    // The database instance identity. You can obtain this value from Items[].InstanceId in the response of the ListDataMaskingInstances operation.
    shared_ptr<string> instanceId_ {};
    // The language of the response description. Valid values:
    // - zh: Chinese.
    // - en: English.
    shared_ptr<string> lang_ {};
    // The cloud product code. Column encryption supports RDS, POLARDB, and PolarDBX2. If you also specify ProductId, the two values must correspond to each other.
    shared_ptr<string> productCode_ {};
    // The cloud product type identifier. Valid values:
    // - 5: RDS.
    // - 8: POLARDB.
    // - 27: PolarDBX2.
    // 
    // If you specify both ProductId and ProductCode, the values must correspond to each other.
    shared_ptr<int64_t> productId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20260120
#endif
