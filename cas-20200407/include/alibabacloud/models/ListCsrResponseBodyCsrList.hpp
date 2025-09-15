// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCSRRESPONSEBODYCSRLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTCSRRESPONSEBODYCSRLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCsrResponseBodyCsrList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCsrResponseBodyCsrList& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CorpName, corpName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(CsrId, csrId_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(HasPrivateKey, hasPrivateKey_);
      DARABONBA_PTR_TO_JSON(KeySha2, keySha2_);
      DARABONBA_PTR_TO_JSON(KeySize, keySize_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
    };
    friend void from_json(const Darabonba::Json& j, ListCsrResponseBodyCsrList& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(CsrId, csrId_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(HasPrivateKey, hasPrivateKey_);
      DARABONBA_PTR_FROM_JSON(KeySha2, keySha2_);
      DARABONBA_PTR_FROM_JSON(KeySize, keySize_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
    };
    ListCsrResponseBodyCsrList() = default ;
    ListCsrResponseBodyCsrList(const ListCsrResponseBodyCsrList &) = default ;
    ListCsrResponseBodyCsrList(ListCsrResponseBodyCsrList &&) = default ;
    ListCsrResponseBodyCsrList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCsrResponseBodyCsrList() = default ;
    ListCsrResponseBodyCsrList& operator=(const ListCsrResponseBodyCsrList &) = default ;
    ListCsrResponseBodyCsrList& operator=(ListCsrResponseBodyCsrList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->commonName_ != nullptr && this->corpName_ != nullptr && this->countryCode_ != nullptr && this->csrId_ != nullptr && this->department_ != nullptr
        && this->hasPrivateKey_ != nullptr && this->keySha2_ != nullptr && this->keySize_ != nullptr && this->locality_ != nullptr && this->name_ != nullptr
        && this->province_ != nullptr && this->sans_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline ListCsrResponseBodyCsrList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline ListCsrResponseBodyCsrList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string corpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline ListCsrResponseBodyCsrList& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string countryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline ListCsrResponseBodyCsrList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // csrId Field Functions 
    bool hasCsrId() const { return this->csrId_ != nullptr;};
    void deleteCsrId() { this->csrId_ = nullptr;};
    inline int64_t csrId() const { DARABONBA_PTR_GET_DEFAULT(csrId_, 0L) };
    inline ListCsrResponseBodyCsrList& setCsrId(int64_t csrId) { DARABONBA_PTR_SET_VALUE(csrId_, csrId) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string department() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline ListCsrResponseBodyCsrList& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // hasPrivateKey Field Functions 
    bool hasHasPrivateKey() const { return this->hasPrivateKey_ != nullptr;};
    void deleteHasPrivateKey() { this->hasPrivateKey_ = nullptr;};
    inline bool hasPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(hasPrivateKey_, false) };
    inline ListCsrResponseBodyCsrList& setHasPrivateKey(bool hasPrivateKey) { DARABONBA_PTR_SET_VALUE(hasPrivateKey_, hasPrivateKey) };


    // keySha2 Field Functions 
    bool hasKeySha2() const { return this->keySha2_ != nullptr;};
    void deleteKeySha2() { this->keySha2_ = nullptr;};
    inline string keySha2() const { DARABONBA_PTR_GET_DEFAULT(keySha2_, "") };
    inline ListCsrResponseBodyCsrList& setKeySha2(string keySha2) { DARABONBA_PTR_SET_VALUE(keySha2_, keySha2) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline int32_t keySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
    inline ListCsrResponseBodyCsrList& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string locality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline ListCsrResponseBodyCsrList& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCsrResponseBodyCsrList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string province() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline ListCsrResponseBodyCsrList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string sans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline ListCsrResponseBodyCsrList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


  protected:
    // The algorithm. Valid values: RSA, SM2, and ECC.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The primary domain name, which is a common name.
    std::shared_ptr<string> commonName_ = nullptr;
    // The name of the company.
    std::shared_ptr<string> corpName_ = nullptr;
    // The code of the country or region in which the organization is located. For example, you can use CN to indicate China and use US to indicate the United States. The default value is the code of the country or region in which the organization is located. The organization is associated with the intermediate CA certificate from which the certificate is issued. For more information about country codes, see the "Country codes" section of the [Manage company profiles](https://help.aliyun.com/document_detail/198289.html) topic.
    std::shared_ptr<string> countryCode_ = nullptr;
    // The ID of the CSR.
    std::shared_ptr<int64_t> csrId_ = nullptr;
    // The department that uses the certificate.
    std::shared_ptr<string> department_ = nullptr;
    // Indicates whether the certificate contains a private key.
    std::shared_ptr<bool> hasPrivateKey_ = nullptr;
    // The public key that is calculated by using the SHA256 algorithm.
    std::shared_ptr<string> keySha2_ = nullptr;
    // The key length that is used by the algorithm. The key length for RSA algorithms can be 2,048, 3,072, and 4,096 bits. The key length for ECC and SM2 algorithms can be 256 bits.
    std::shared_ptr<int32_t> keySize_ = nullptr;
    // The city where the company is located.
    std::shared_ptr<string> locality_ = nullptr;
    // The name of the CSR.
    std::shared_ptr<string> name_ = nullptr;
    // The province or location.
    std::shared_ptr<string> province_ = nullptr;
    // The secondary domain names. Separate multiple domain names with commas (,).
    std::shared_ptr<string> sans_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
