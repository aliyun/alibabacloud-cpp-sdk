// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENCRYPTIONCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ENCRYPTIONCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class EncryptionConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EncryptionConfig& obj) { 
      DARABONBA_PTR_TO_JSON(KeyType, keyType_);
      DARABONBA_PTR_TO_JSON(KmsKeyArn, kmsKeyArn_);
    };
    friend void from_json(const Darabonba::Json& j, EncryptionConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyType, keyType_);
      DARABONBA_PTR_FROM_JSON(KmsKeyArn, kmsKeyArn_);
    };
    EncryptionConfig() = default ;
    EncryptionConfig(const EncryptionConfig &) = default ;
    EncryptionConfig(EncryptionConfig &&) = default ;
    EncryptionConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EncryptionConfig() = default ;
    EncryptionConfig& operator=(const EncryptionConfig &) = default ;
    EncryptionConfig& operator=(EncryptionConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->keyType_ == nullptr
        && this->kmsKeyArn_ == nullptr; };
    // keyType Field Functions 
    bool hasKeyType() const { return this->keyType_ != nullptr;};
    void deleteKeyType() { this->keyType_ = nullptr;};
    inline string getKeyType() const { DARABONBA_PTR_GET_DEFAULT(keyType_, "") };
    inline EncryptionConfig& setKeyType(string keyType) { DARABONBA_PTR_SET_VALUE(keyType_, keyType) };


    // kmsKeyArn Field Functions 
    bool hasKmsKeyArn() const { return this->kmsKeyArn_ != nullptr;};
    void deleteKmsKeyArn() { this->kmsKeyArn_ = nullptr;};
    inline string getKmsKeyArn() const { DARABONBA_PTR_GET_DEFAULT(kmsKeyArn_, "") };
    inline EncryptionConfig& setKmsKeyArn(string kmsKeyArn) { DARABONBA_PTR_SET_VALUE(kmsKeyArn_, kmsKeyArn) };


  protected:
    shared_ptr<string> keyType_ {};
    shared_ptr<string> kmsKeyArn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
