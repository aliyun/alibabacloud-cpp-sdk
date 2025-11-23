// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TEEEVIDENCEVO_HPP_
#define ALIBABACLOUD_MODELS_TEEEVIDENCEVO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class TeeEvidenceVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TeeEvidenceVO& obj) { 
      DARABONBA_PTR_TO_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_TO_JSON(EnclaveData, enclaveData_);
      DARABONBA_PTR_TO_JSON(EncryptPublicKeyPem, encryptPublicKeyPem_);
      DARABONBA_PTR_TO_JSON(EncryptPublicKeyType, encryptPublicKeyType_);
      DARABONBA_PTR_TO_JSON(ModifiedDate, modifiedDate_);
      DARABONBA_PTR_TO_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_TO_JSON(PublicKeyRaBase64, publicKeyRaBase64_);
      DARABONBA_PTR_TO_JSON(PublicKeyRaType, publicKeyRaType_);
      DARABONBA_PTR_TO_JSON(QuoteReport, quoteReport_);
      DARABONBA_PTR_TO_JSON(SignPublicKeyPem, signPublicKeyPem_);
      DARABONBA_PTR_TO_JSON(SignPublicKeyType, signPublicKeyType_);
      DARABONBA_PTR_TO_JSON(TrustedMrEnclave, trustedMrEnclave_);
    };
    friend void from_json(const Darabonba::Json& j, TeeEvidenceVO& obj) { 
      DARABONBA_PTR_FROM_JSON(CipherSuite, cipherSuite_);
      DARABONBA_PTR_FROM_JSON(EnclaveData, enclaveData_);
      DARABONBA_PTR_FROM_JSON(EncryptPublicKeyPem, encryptPublicKeyPem_);
      DARABONBA_PTR_FROM_JSON(EncryptPublicKeyType, encryptPublicKeyType_);
      DARABONBA_PTR_FROM_JSON(ModifiedDate, modifiedDate_);
      DARABONBA_PTR_FROM_JSON(PublicKey, publicKey_);
      DARABONBA_PTR_FROM_JSON(PublicKeyRaBase64, publicKeyRaBase64_);
      DARABONBA_PTR_FROM_JSON(PublicKeyRaType, publicKeyRaType_);
      DARABONBA_PTR_FROM_JSON(QuoteReport, quoteReport_);
      DARABONBA_PTR_FROM_JSON(SignPublicKeyPem, signPublicKeyPem_);
      DARABONBA_PTR_FROM_JSON(SignPublicKeyType, signPublicKeyType_);
      DARABONBA_PTR_FROM_JSON(TrustedMrEnclave, trustedMrEnclave_);
    };
    TeeEvidenceVO() = default ;
    TeeEvidenceVO(const TeeEvidenceVO &) = default ;
    TeeEvidenceVO(TeeEvidenceVO &&) = default ;
    TeeEvidenceVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TeeEvidenceVO() = default ;
    TeeEvidenceVO& operator=(const TeeEvidenceVO &) = default ;
    TeeEvidenceVO& operator=(TeeEvidenceVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cipherSuite_ == nullptr
        && return this->enclaveData_ == nullptr && return this->encryptPublicKeyPem_ == nullptr && return this->encryptPublicKeyType_ == nullptr && return this->modifiedDate_ == nullptr && return this->publicKey_ == nullptr
        && return this->publicKeyRaBase64_ == nullptr && return this->publicKeyRaType_ == nullptr && return this->quoteReport_ == nullptr && return this->signPublicKeyPem_ == nullptr && return this->signPublicKeyType_ == nullptr
        && return this->trustedMrEnclave_ == nullptr; };
    // cipherSuite Field Functions 
    bool hasCipherSuite() const { return this->cipherSuite_ != nullptr;};
    void deleteCipherSuite() { this->cipherSuite_ = nullptr;};
    inline string cipherSuite() const { DARABONBA_PTR_GET_DEFAULT(cipherSuite_, "") };
    inline TeeEvidenceVO& setCipherSuite(string cipherSuite) { DARABONBA_PTR_SET_VALUE(cipherSuite_, cipherSuite) };


    // enclaveData Field Functions 
    bool hasEnclaveData() const { return this->enclaveData_ != nullptr;};
    void deleteEnclaveData() { this->enclaveData_ = nullptr;};
    inline string enclaveData() const { DARABONBA_PTR_GET_DEFAULT(enclaveData_, "") };
    inline TeeEvidenceVO& setEnclaveData(string enclaveData) { DARABONBA_PTR_SET_VALUE(enclaveData_, enclaveData) };


    // encryptPublicKeyPem Field Functions 
    bool hasEncryptPublicKeyPem() const { return this->encryptPublicKeyPem_ != nullptr;};
    void deleteEncryptPublicKeyPem() { this->encryptPublicKeyPem_ = nullptr;};
    inline string encryptPublicKeyPem() const { DARABONBA_PTR_GET_DEFAULT(encryptPublicKeyPem_, "") };
    inline TeeEvidenceVO& setEncryptPublicKeyPem(string encryptPublicKeyPem) { DARABONBA_PTR_SET_VALUE(encryptPublicKeyPem_, encryptPublicKeyPem) };


    // encryptPublicKeyType Field Functions 
    bool hasEncryptPublicKeyType() const { return this->encryptPublicKeyType_ != nullptr;};
    void deleteEncryptPublicKeyType() { this->encryptPublicKeyType_ = nullptr;};
    inline string encryptPublicKeyType() const { DARABONBA_PTR_GET_DEFAULT(encryptPublicKeyType_, "") };
    inline TeeEvidenceVO& setEncryptPublicKeyType(string encryptPublicKeyType) { DARABONBA_PTR_SET_VALUE(encryptPublicKeyType_, encryptPublicKeyType) };


    // modifiedDate Field Functions 
    bool hasModifiedDate() const { return this->modifiedDate_ != nullptr;};
    void deleteModifiedDate() { this->modifiedDate_ = nullptr;};
    inline string modifiedDate() const { DARABONBA_PTR_GET_DEFAULT(modifiedDate_, "") };
    inline TeeEvidenceVO& setModifiedDate(string modifiedDate) { DARABONBA_PTR_SET_VALUE(modifiedDate_, modifiedDate) };


    // publicKey Field Functions 
    bool hasPublicKey() const { return this->publicKey_ != nullptr;};
    void deletePublicKey() { this->publicKey_ = nullptr;};
    inline string publicKey() const { DARABONBA_PTR_GET_DEFAULT(publicKey_, "") };
    inline TeeEvidenceVO& setPublicKey(string publicKey) { DARABONBA_PTR_SET_VALUE(publicKey_, publicKey) };


    // publicKeyRaBase64 Field Functions 
    bool hasPublicKeyRaBase64() const { return this->publicKeyRaBase64_ != nullptr;};
    void deletePublicKeyRaBase64() { this->publicKeyRaBase64_ = nullptr;};
    inline string publicKeyRaBase64() const { DARABONBA_PTR_GET_DEFAULT(publicKeyRaBase64_, "") };
    inline TeeEvidenceVO& setPublicKeyRaBase64(string publicKeyRaBase64) { DARABONBA_PTR_SET_VALUE(publicKeyRaBase64_, publicKeyRaBase64) };


    // publicKeyRaType Field Functions 
    bool hasPublicKeyRaType() const { return this->publicKeyRaType_ != nullptr;};
    void deletePublicKeyRaType() { this->publicKeyRaType_ = nullptr;};
    inline string publicKeyRaType() const { DARABONBA_PTR_GET_DEFAULT(publicKeyRaType_, "") };
    inline TeeEvidenceVO& setPublicKeyRaType(string publicKeyRaType) { DARABONBA_PTR_SET_VALUE(publicKeyRaType_, publicKeyRaType) };


    // quoteReport Field Functions 
    bool hasQuoteReport() const { return this->quoteReport_ != nullptr;};
    void deleteQuoteReport() { this->quoteReport_ = nullptr;};
    inline string quoteReport() const { DARABONBA_PTR_GET_DEFAULT(quoteReport_, "") };
    inline TeeEvidenceVO& setQuoteReport(string quoteReport) { DARABONBA_PTR_SET_VALUE(quoteReport_, quoteReport) };


    // signPublicKeyPem Field Functions 
    bool hasSignPublicKeyPem() const { return this->signPublicKeyPem_ != nullptr;};
    void deleteSignPublicKeyPem() { this->signPublicKeyPem_ = nullptr;};
    inline string signPublicKeyPem() const { DARABONBA_PTR_GET_DEFAULT(signPublicKeyPem_, "") };
    inline TeeEvidenceVO& setSignPublicKeyPem(string signPublicKeyPem) { DARABONBA_PTR_SET_VALUE(signPublicKeyPem_, signPublicKeyPem) };


    // signPublicKeyType Field Functions 
    bool hasSignPublicKeyType() const { return this->signPublicKeyType_ != nullptr;};
    void deleteSignPublicKeyType() { this->signPublicKeyType_ = nullptr;};
    inline string signPublicKeyType() const { DARABONBA_PTR_GET_DEFAULT(signPublicKeyType_, "") };
    inline TeeEvidenceVO& setSignPublicKeyType(string signPublicKeyType) { DARABONBA_PTR_SET_VALUE(signPublicKeyType_, signPublicKeyType) };


    // trustedMrEnclave Field Functions 
    bool hasTrustedMrEnclave() const { return this->trustedMrEnclave_ != nullptr;};
    void deleteTrustedMrEnclave() { this->trustedMrEnclave_ = nullptr;};
    inline const vector<string> & trustedMrEnclave() const { DARABONBA_PTR_GET_CONST(trustedMrEnclave_, vector<string>) };
    inline vector<string> trustedMrEnclave() { DARABONBA_PTR_GET(trustedMrEnclave_, vector<string>) };
    inline TeeEvidenceVO& setTrustedMrEnclave(const vector<string> & trustedMrEnclave) { DARABONBA_PTR_SET_VALUE(trustedMrEnclave_, trustedMrEnclave) };
    inline TeeEvidenceVO& setTrustedMrEnclave(vector<string> && trustedMrEnclave) { DARABONBA_PTR_SET_RVALUE(trustedMrEnclave_, trustedMrEnclave) };


  protected:
    std::shared_ptr<string> cipherSuite_ = nullptr;
    std::shared_ptr<string> enclaveData_ = nullptr;
    std::shared_ptr<string> encryptPublicKeyPem_ = nullptr;
    std::shared_ptr<string> encryptPublicKeyType_ = nullptr;
    std::shared_ptr<string> modifiedDate_ = nullptr;
    std::shared_ptr<string> publicKey_ = nullptr;
    std::shared_ptr<string> publicKeyRaBase64_ = nullptr;
    std::shared_ptr<string> publicKeyRaType_ = nullptr;
    std::shared_ptr<string> quoteReport_ = nullptr;
    std::shared_ptr<string> signPublicKeyPem_ = nullptr;
    std::shared_ptr<string> signPublicKeyType_ = nullptr;
    std::shared_ptr<vector<string>> trustedMrEnclave_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
