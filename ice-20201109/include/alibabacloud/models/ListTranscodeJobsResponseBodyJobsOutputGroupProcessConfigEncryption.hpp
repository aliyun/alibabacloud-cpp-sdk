// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGENCRYPTION_HPP_
#define ALIBABACLOUD_MODELS_LISTTRANSCODEJOBSRESPONSEBODYJOBSOUTPUTGROUPPROCESSCONFIGENCRYPTION_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption& obj) { 
      DARABONBA_PTR_TO_JSON(CipherText, cipherText_);
      DARABONBA_PTR_TO_JSON(DecryptKeyUri, decryptKeyUri_);
      DARABONBA_PTR_TO_JSON(EncryptType, encryptType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption& obj) { 
      DARABONBA_PTR_FROM_JSON(CipherText, cipherText_);
      DARABONBA_PTR_FROM_JSON(DecryptKeyUri, decryptKeyUri_);
      DARABONBA_PTR_FROM_JSON(EncryptType, encryptType_);
    };
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption &&) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption() = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption& operator=(const ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption &) = default ;
    ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption& operator=(ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cipherText_ != nullptr
        && this->decryptKeyUri_ != nullptr && this->encryptType_ != nullptr; };
    // cipherText Field Functions 
    bool hasCipherText() const { return this->cipherText_ != nullptr;};
    void deleteCipherText() { this->cipherText_ = nullptr;};
    inline string cipherText() const { DARABONBA_PTR_GET_DEFAULT(cipherText_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption& setCipherText(string cipherText) { DARABONBA_PTR_SET_VALUE(cipherText_, cipherText) };


    // decryptKeyUri Field Functions 
    bool hasDecryptKeyUri() const { return this->decryptKeyUri_ != nullptr;};
    void deleteDecryptKeyUri() { this->decryptKeyUri_ = nullptr;};
    inline string decryptKeyUri() const { DARABONBA_PTR_GET_DEFAULT(decryptKeyUri_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption& setDecryptKeyUri(string decryptKeyUri) { DARABONBA_PTR_SET_VALUE(decryptKeyUri_, decryptKeyUri) };


    // encryptType Field Functions 
    bool hasEncryptType() const { return this->encryptType_ != nullptr;};
    void deleteEncryptType() { this->encryptType_ = nullptr;};
    inline string encryptType() const { DARABONBA_PTR_GET_DEFAULT(encryptType_, "") };
    inline ListTranscodeJobsResponseBodyJobsOutputGroupProcessConfigEncryption& setEncryptType(string encryptType) { DARABONBA_PTR_SET_VALUE(encryptType_, encryptType) };


  protected:
    // The ciphertext of HTTP Live Streaming (HLS) encryption.
    std::shared_ptr<string> cipherText_ = nullptr;
    // The endpoint of the decryption service for HLS encryption.
    std::shared_ptr<string> decryptKeyUri_ = nullptr;
    // The encryption type.
    std::shared_ptr<string> encryptType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
