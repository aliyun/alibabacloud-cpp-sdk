// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTKEYMATERIALREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTKEYMATERIALREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class ImportKeyMaterialRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportKeyMaterialRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedKeyMaterial, encryptedKeyMaterial_);
      DARABONBA_PTR_TO_JSON(ImportToken, importToken_);
      DARABONBA_PTR_TO_JSON(KeyId, keyId_);
      DARABONBA_PTR_TO_JSON(KeyMaterialExpireUnix, keyMaterialExpireUnix_);
    };
    friend void from_json(const Darabonba::Json& j, ImportKeyMaterialRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedKeyMaterial, encryptedKeyMaterial_);
      DARABONBA_PTR_FROM_JSON(ImportToken, importToken_);
      DARABONBA_PTR_FROM_JSON(KeyId, keyId_);
      DARABONBA_PTR_FROM_JSON(KeyMaterialExpireUnix, keyMaterialExpireUnix_);
    };
    ImportKeyMaterialRequest() = default ;
    ImportKeyMaterialRequest(const ImportKeyMaterialRequest &) = default ;
    ImportKeyMaterialRequest(ImportKeyMaterialRequest &&) = default ;
    ImportKeyMaterialRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportKeyMaterialRequest() = default ;
    ImportKeyMaterialRequest& operator=(const ImportKeyMaterialRequest &) = default ;
    ImportKeyMaterialRequest& operator=(ImportKeyMaterialRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptedKeyMaterial_ == nullptr
        && this->importToken_ == nullptr && this->keyId_ == nullptr && this->keyMaterialExpireUnix_ == nullptr; };
    // encryptedKeyMaterial Field Functions 
    bool hasEncryptedKeyMaterial() const { return this->encryptedKeyMaterial_ != nullptr;};
    void deleteEncryptedKeyMaterial() { this->encryptedKeyMaterial_ = nullptr;};
    inline string getEncryptedKeyMaterial() const { DARABONBA_PTR_GET_DEFAULT(encryptedKeyMaterial_, "") };
    inline ImportKeyMaterialRequest& setEncryptedKeyMaterial(string encryptedKeyMaterial) { DARABONBA_PTR_SET_VALUE(encryptedKeyMaterial_, encryptedKeyMaterial) };


    // importToken Field Functions 
    bool hasImportToken() const { return this->importToken_ != nullptr;};
    void deleteImportToken() { this->importToken_ = nullptr;};
    inline string getImportToken() const { DARABONBA_PTR_GET_DEFAULT(importToken_, "") };
    inline ImportKeyMaterialRequest& setImportToken(string importToken) { DARABONBA_PTR_SET_VALUE(importToken_, importToken) };


    // keyId Field Functions 
    bool hasKeyId() const { return this->keyId_ != nullptr;};
    void deleteKeyId() { this->keyId_ = nullptr;};
    inline string getKeyId() const { DARABONBA_PTR_GET_DEFAULT(keyId_, "") };
    inline ImportKeyMaterialRequest& setKeyId(string keyId) { DARABONBA_PTR_SET_VALUE(keyId_, keyId) };


    // keyMaterialExpireUnix Field Functions 
    bool hasKeyMaterialExpireUnix() const { return this->keyMaterialExpireUnix_ != nullptr;};
    void deleteKeyMaterialExpireUnix() { this->keyMaterialExpireUnix_ = nullptr;};
    inline int64_t getKeyMaterialExpireUnix() const { DARABONBA_PTR_GET_DEFAULT(keyMaterialExpireUnix_, 0L) };
    inline ImportKeyMaterialRequest& setKeyMaterialExpireUnix(int64_t keyMaterialExpireUnix) { DARABONBA_PTR_SET_VALUE(keyMaterialExpireUnix_, keyMaterialExpireUnix) };


  protected:
    // The key material encrypted with the public key returned by **GetParametersForImport**, and then Base64-encoded.
    // 
    // This parameter is required.
    shared_ptr<string> encryptedKeyMaterial_ {};
    // The import token obtained by calling **GetParametersForImport**.
    // 
    // This parameter is required.
    shared_ptr<string> importToken_ {};
    // The ID of the CMK to be imported.
    // 
    // This parameter is required.
    shared_ptr<string> keyId_ {};
    // The time when the key material expires.
    // 
    // If this parameter is not specified or set this parameter to 0, the key material does not expire.
    // 
    // > The value cannot be earlier than the time when the operation is called (based on the server time).
    // 
    // This parameter is required.
    shared_ptr<int64_t> keyMaterialExpireUnix_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
