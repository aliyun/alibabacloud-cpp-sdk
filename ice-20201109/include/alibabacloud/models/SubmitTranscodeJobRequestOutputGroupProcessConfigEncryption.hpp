// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGENCRYPTION_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGENCRYPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption& obj) { 
      DARABONBA_PTR_TO_JSON(CipherText, cipherText_);
      DARABONBA_PTR_TO_JSON(DecryptKeyUri, decryptKeyUri_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_TO_JSON(KeyServiceType, keyServiceType_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption& obj) { 
      DARABONBA_PTR_FROM_JSON(CipherText, cipherText_);
      DARABONBA_PTR_FROM_JSON(DecryptKeyUri, decryptKeyUri_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
      DARABONBA_PTR_FROM_JSON(KeyServiceType, keyServiceType_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption(const SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption(SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cipherText_ == nullptr
        && return this->decryptKeyUri_ == nullptr && return this->encryptType_ == nullptr && return this->keyServiceType_ == nullptr; };
    // cipherText Field Functions 
    bool hasCipherText() const { return this->cipherText_ != nullptr;};
    void deleteCipherText() { this->cipherText_ = nullptr;};
    inline string cipherText() const { DARABONBA_PTR_GET_DEFAULT(cipherText_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption& setCipherText(string cipherText) { DARABONBA_PTR_SET_VALUE(cipherText_, cipherText) };


    // decryptKeyUri Field Functions 
    bool hasDecryptKeyUri() const { return this->decryptKeyUri_ != nullptr;};
    void deleteDecryptKeyUri() { this->decryptKeyUri_ = nullptr;};
    inline string decryptKeyUri() const { DARABONBA_PTR_GET_DEFAULT(decryptKeyUri_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption& setDecryptKeyUri(string decryptKeyUri) { DARABONBA_PTR_SET_VALUE(decryptKeyUri_, decryptKeyUri) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


    // keyServiceType Field Functions 
    bool hasKeyServiceType() const { return this->keyServiceType_ != nullptr;};
    void deleteKeyServiceType() { this->keyServiceType_ = nullptr;};
    inline string keyServiceType() const { DARABONBA_PTR_GET_DEFAULT(keyServiceType_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigEncryption& setKeyServiceType(string keyServiceType) { DARABONBA_PTR_SET_VALUE(keyServiceType_, keyServiceType) };


  protected:
    // The ciphertext of HTTP Live Streaming (HLS) encryption.
    std::shared_ptr<string> cipherText_ = nullptr;
    // The address of the decryption service for HLS encryption.
    std::shared_ptr<string> decryptKeyUri_ = nullptr;
    // Specifies the encryption type. Valid values:
    // 
    // *   PrivateEncryption: Alibaba Cloud proprietary cryptography
    // *   HLSEncryption: HTTP Live Streaming (HLS) encryption
    std::shared_ptr<string> encryptType_ = nullptr;
    // The key service type for HLS encryption. Valid values:
    // 
    // *   KMS
    // *   Base64
    std::shared_ptr<string> keyServiceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
