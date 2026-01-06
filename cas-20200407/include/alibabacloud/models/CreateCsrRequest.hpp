// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECSRREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECSRREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class CreateCsrRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCsrRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(CorpName, corpName_);
      DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_TO_JSON(Department, department_);
      DARABONBA_PTR_TO_JSON(KeySize, keySize_);
      DARABONBA_PTR_TO_JSON(Locality, locality_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Province, province_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCsrRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(CorpName, corpName_);
      DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
      DARABONBA_PTR_FROM_JSON(Department, department_);
      DARABONBA_PTR_FROM_JSON(KeySize, keySize_);
      DARABONBA_PTR_FROM_JSON(Locality, locality_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Province, province_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
    };
    CreateCsrRequest() = default ;
    CreateCsrRequest(const CreateCsrRequest &) = default ;
    CreateCsrRequest(CreateCsrRequest &&) = default ;
    CreateCsrRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCsrRequest() = default ;
    CreateCsrRequest& operator=(const CreateCsrRequest &) = default ;
    CreateCsrRequest& operator=(CreateCsrRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->commonName_ == nullptr && this->corpName_ == nullptr && this->countryCode_ == nullptr && this->department_ == nullptr && this->keySize_ == nullptr
        && this->locality_ == nullptr && this->name_ == nullptr && this->province_ == nullptr && this->sans_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline CreateCsrRequest& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline CreateCsrRequest& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // corpName Field Functions 
    bool hasCorpName() const { return this->corpName_ != nullptr;};
    void deleteCorpName() { this->corpName_ = nullptr;};
    inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
    inline CreateCsrRequest& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


    // countryCode Field Functions 
    bool hasCountryCode() const { return this->countryCode_ != nullptr;};
    void deleteCountryCode() { this->countryCode_ = nullptr;};
    inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
    inline CreateCsrRequest& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


    // department Field Functions 
    bool hasDepartment() const { return this->department_ != nullptr;};
    void deleteDepartment() { this->department_ = nullptr;};
    inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
    inline CreateCsrRequest& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


    // keySize Field Functions 
    bool hasKeySize() const { return this->keySize_ != nullptr;};
    void deleteKeySize() { this->keySize_ = nullptr;};
    inline int32_t getKeySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
    inline CreateCsrRequest& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


    // locality Field Functions 
    bool hasLocality() const { return this->locality_ != nullptr;};
    void deleteLocality() { this->locality_ = nullptr;};
    inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
    inline CreateCsrRequest& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateCsrRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // province Field Functions 
    bool hasProvince() const { return this->province_ != nullptr;};
    void deleteProvince() { this->province_ = nullptr;};
    inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
    inline CreateCsrRequest& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline CreateCsrRequest& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


  protected:
    // The algorithm. Valid values: RSA, SM2, and ECC. For more information about algorithms, see [Select an SSL certificate](https://help.aliyun.com/document_detail/197871.html).
    // 
    // This parameter is required.
    shared_ptr<string> algorithm_ {};
    // The primary domain name, which is a common name.
    // 
    // This parameter is required.
    shared_ptr<string> commonName_ {};
    // The name of the company.
    shared_ptr<string> corpName_ {};
    // The code of the country or region in which the organization is located. For example, you can use CN to indicate China and use US to indicate the United States.
    // 
    // This parameter is required.
    shared_ptr<string> countryCode_ {};
    // The department that uses the certificate.
    shared_ptr<string> department_ {};
    // The key length that is used by the algorithm.
    // 
    // *   The key length for RSA algorithms can be 2,048, 3,072, and 4,096 bits.
    // *   The key length for ECC and SM2 algorithms can be 256 bits.
    // 
    // This parameter is required.
    shared_ptr<int32_t> keySize_ {};
    // The city where the company is located.
    // 
    // This parameter is required.
    shared_ptr<string> locality_ {};
    // The name of the CSR. The name can be up to 50 characters in length and can contain letters, digits, underscores (_), hyphens (-), and periods (.).
    shared_ptr<string> name_ {};
    // The province or location where the company is located.
    // 
    // This parameter is required.
    shared_ptr<string> province_ {};
    // The secondary domain names. Separate multiple domain names with commas (,). You can use the CSR to apply for a certificate for both the primary and secondary domain names.
    shared_ptr<string> sans_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
