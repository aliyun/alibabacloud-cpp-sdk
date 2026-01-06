// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCSRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCSRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListCsrResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCsrResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CsrList, csrList_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ShowSize, showSize_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCsrResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CsrList, csrList_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ShowSize, showSize_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCsrResponseBody() = default ;
    ListCsrResponseBody(const ListCsrResponseBody &) = default ;
    ListCsrResponseBody(ListCsrResponseBody &&) = default ;
    ListCsrResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCsrResponseBody() = default ;
    ListCsrResponseBody& operator=(const ListCsrResponseBody &) = default ;
    ListCsrResponseBody& operator=(ListCsrResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CsrList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CsrList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, CsrList& obj) { 
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
      CsrList() = default ;
      CsrList(const CsrList &) = default ;
      CsrList(CsrList &&) = default ;
      CsrList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CsrList() = default ;
      CsrList& operator=(const CsrList &) = default ;
      CsrList& operator=(CsrList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->commonName_ == nullptr && this->corpName_ == nullptr && this->countryCode_ == nullptr && this->csrId_ == nullptr && this->department_ == nullptr
        && this->hasPrivateKey_ == nullptr && this->keySha2_ == nullptr && this->keySize_ == nullptr && this->locality_ == nullptr && this->name_ == nullptr
        && this->province_ == nullptr && this->sans_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline CsrList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline CsrList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // corpName Field Functions 
      bool hasCorpName() const { return this->corpName_ != nullptr;};
      void deleteCorpName() { this->corpName_ = nullptr;};
      inline string getCorpName() const { DARABONBA_PTR_GET_DEFAULT(corpName_, "") };
      inline CsrList& setCorpName(string corpName) { DARABONBA_PTR_SET_VALUE(corpName_, corpName) };


      // countryCode Field Functions 
      bool hasCountryCode() const { return this->countryCode_ != nullptr;};
      void deleteCountryCode() { this->countryCode_ = nullptr;};
      inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
      inline CsrList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


      // csrId Field Functions 
      bool hasCsrId() const { return this->csrId_ != nullptr;};
      void deleteCsrId() { this->csrId_ = nullptr;};
      inline int64_t getCsrId() const { DARABONBA_PTR_GET_DEFAULT(csrId_, 0L) };
      inline CsrList& setCsrId(int64_t csrId) { DARABONBA_PTR_SET_VALUE(csrId_, csrId) };


      // department Field Functions 
      bool hasDepartment() const { return this->department_ != nullptr;};
      void deleteDepartment() { this->department_ = nullptr;};
      inline string getDepartment() const { DARABONBA_PTR_GET_DEFAULT(department_, "") };
      inline CsrList& setDepartment(string department) { DARABONBA_PTR_SET_VALUE(department_, department) };


      // hasPrivateKey Field Functions 
      bool hasHasPrivateKey() const { return this->hasPrivateKey_ != nullptr;};
      void deleteHasPrivateKey() { this->hasPrivateKey_ = nullptr;};
      inline bool getHasPrivateKey() const { DARABONBA_PTR_GET_DEFAULT(hasPrivateKey_, false) };
      inline CsrList& setHasPrivateKey(bool hasPrivateKey) { DARABONBA_PTR_SET_VALUE(hasPrivateKey_, hasPrivateKey) };


      // keySha2 Field Functions 
      bool hasKeySha2() const { return this->keySha2_ != nullptr;};
      void deleteKeySha2() { this->keySha2_ = nullptr;};
      inline string getKeySha2() const { DARABONBA_PTR_GET_DEFAULT(keySha2_, "") };
      inline CsrList& setKeySha2(string keySha2) { DARABONBA_PTR_SET_VALUE(keySha2_, keySha2) };


      // keySize Field Functions 
      bool hasKeySize() const { return this->keySize_ != nullptr;};
      void deleteKeySize() { this->keySize_ = nullptr;};
      inline int32_t getKeySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
      inline CsrList& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


      // locality Field Functions 
      bool hasLocality() const { return this->locality_ != nullptr;};
      void deleteLocality() { this->locality_ = nullptr;};
      inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
      inline CsrList& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CsrList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // province Field Functions 
      bool hasProvince() const { return this->province_ != nullptr;};
      void deleteProvince() { this->province_ = nullptr;};
      inline string getProvince() const { DARABONBA_PTR_GET_DEFAULT(province_, "") };
      inline CsrList& setProvince(string province) { DARABONBA_PTR_SET_VALUE(province_, province) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
      inline CsrList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


    protected:
      // The algorithm. Valid values: RSA, SM2, and ECC.
      shared_ptr<string> algorithm_ {};
      // The primary domain name, which is a common name.
      shared_ptr<string> commonName_ {};
      // The name of the company.
      shared_ptr<string> corpName_ {};
      // The code of the country or region in which the organization is located. For example, you can use CN to indicate China and use US to indicate the United States. The default value is the code of the country or region in which the organization is located. The organization is associated with the intermediate CA certificate from which the certificate is issued. For more information about country codes, see the "Country codes" section of the [Manage company profiles](https://help.aliyun.com/document_detail/198289.html) topic.
      shared_ptr<string> countryCode_ {};
      // The ID of the CSR.
      shared_ptr<int64_t> csrId_ {};
      // The department that uses the certificate.
      shared_ptr<string> department_ {};
      // Indicates whether the certificate contains a private key.
      shared_ptr<bool> hasPrivateKey_ {};
      // The public key that is calculated by using the SHA256 algorithm.
      shared_ptr<string> keySha2_ {};
      // The key length that is used by the algorithm. The key length for RSA algorithms can be 2,048, 3,072, and 4,096 bits. The key length for ECC and SM2 algorithms can be 256 bits.
      shared_ptr<int32_t> keySize_ {};
      // The city where the company is located.
      shared_ptr<string> locality_ {};
      // The name of the CSR.
      shared_ptr<string> name_ {};
      // The province or location.
      shared_ptr<string> province_ {};
      // The secondary domain names. Separate multiple domain names with commas (,).
      shared_ptr<string> sans_ {};
    };

    virtual bool empty() const override { return this->csrList_ == nullptr
        && this->currentPage_ == nullptr && this->requestId_ == nullptr && this->showSize_ == nullptr && this->totalCount_ == nullptr; };
    // csrList Field Functions 
    bool hasCsrList() const { return this->csrList_ != nullptr;};
    void deleteCsrList() { this->csrList_ = nullptr;};
    inline const vector<ListCsrResponseBody::CsrList> & getCsrList() const { DARABONBA_PTR_GET_CONST(csrList_, vector<ListCsrResponseBody::CsrList>) };
    inline vector<ListCsrResponseBody::CsrList> getCsrList() { DARABONBA_PTR_GET(csrList_, vector<ListCsrResponseBody::CsrList>) };
    inline ListCsrResponseBody& setCsrList(const vector<ListCsrResponseBody::CsrList> & csrList) { DARABONBA_PTR_SET_VALUE(csrList_, csrList) };
    inline ListCsrResponseBody& setCsrList(vector<ListCsrResponseBody::CsrList> && csrList) { DARABONBA_PTR_SET_RVALUE(csrList_, csrList) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline ListCsrResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCsrResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // showSize Field Functions 
    bool hasShowSize() const { return this->showSize_ != nullptr;};
    void deleteShowSize() { this->showSize_ = nullptr;};
    inline int64_t getShowSize() const { DARABONBA_PTR_GET_DEFAULT(showSize_, 0L) };
    inline ListCsrResponseBody& setShowSize(int64_t showSize) { DARABONBA_PTR_SET_VALUE(showSize_, showSize) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCsrResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The CSRs.
    shared_ptr<vector<ListCsrResponseBody::CsrList>> csrList_ {};
    // The page number.
    shared_ptr<int64_t> currentPage_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of entries per page. Default value: 50.
    shared_ptr<int64_t> showSize_ {};
    // The total number of entries returned.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
