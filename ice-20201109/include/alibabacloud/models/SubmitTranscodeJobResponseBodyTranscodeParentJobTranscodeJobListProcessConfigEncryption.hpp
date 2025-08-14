// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIGENCRYPTION_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIGENCRYPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption& obj) { 
      DARABONBA_PTR_TO_JSON(CipherText, cipherText_);
      DARABONBA_PTR_TO_JSON(DecryptKeyUri, decryptKeyUri_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(KeyServiceType, keyServiceType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption& obj) { 
      DARABONBA_PTR_FROM_JSON(CipherText, cipherText_);
      DARABONBA_PTR_FROM_JSON(DecryptKeyUri, decryptKeyUri_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(KeyServiceType, keyServiceType_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cipherText_ != nullptr
        && this->decryptKeyUri_ != nullptr && this->encryptType_ != nullptr && this->keyServiceType_ != nullptr; };
    // cipherText Field Functions 
    bool hasCipherText() const { return this->cipherText_ != nullptr;};
    void deleteCipherText() { this->cipherText_ = nullptr;};
    inline string cipherText() const { DARABONBA_PTR_GET_DEFAULT(cipherText_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption& setCipherText(string cipherText) { DARABONBA_PTR_SET_VALUE(cipherText_, cipherText) };


    // decryptKeyUri Field Functions 
    bool hasDecryptKeyUri() const { return this->decryptKeyUri_ != nullptr;};
    void deleteDecryptKeyUri() { this->decryptKeyUri_ = nullptr;};
    inline string decryptKeyUri() const { DARABONBA_PTR_GET_DEFAULT(decryptKeyUri_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption& setDecryptKeyUri(string decryptKeyUri) { DARABONBA_PTR_SET_VALUE(decryptKeyUri_, decryptKeyUri) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // keyServiceType Field Functions 
    bool hasKeyServiceType() const { return this->keyServiceType_ != nullptr;};
    void deleteKeyServiceType() { this->keyServiceType_ = nullptr;};
    inline string keyServiceType() const { DARABONBA_PTR_GET_DEFAULT(keyServiceType_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigEncryption& setKeyServiceType(string keyServiceType) { DARABONBA_PTR_SET_VALUE(keyServiceType_, keyServiceType) };


  protected:
    // The ciphertext of HLS encryption.
    std::shared_ptr<string> cipherText_ = nullptr;
    // The address of the decryption service for HLS encryption.
    std::shared_ptr<string> decryptKeyUri_ = nullptr;
    // Specifies the encryption type.
    std::shared_ptr<string> encryptType_ = nullptr;
    // The type of the key service. Valid values: KMS and Base64.
    std::shared_ptr<string> keyServiceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
