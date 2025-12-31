// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATEFORSERIALNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATEFORSERIALNUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeClientCertificateForSerialNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientCertificateForSerialNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateList, certificateList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientCertificateForSerialNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateList, certificateList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClientCertificateForSerialNumberResponseBody() = default ;
    DescribeClientCertificateForSerialNumberResponseBody(const DescribeClientCertificateForSerialNumberResponseBody &) = default ;
    DescribeClientCertificateForSerialNumberResponseBody(DescribeClientCertificateForSerialNumberResponseBody &&) = default ;
    DescribeClientCertificateForSerialNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientCertificateForSerialNumberResponseBody() = default ;
    DescribeClientCertificateForSerialNumberResponseBody& operator=(const DescribeClientCertificateForSerialNumberResponseBody &) = default ;
    DescribeClientCertificateForSerialNumberResponseBody& operator=(DescribeClientCertificateForSerialNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertificateList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertificateList& obj) { 
        DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_TO_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(CountryCode, countryCode_);
        DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        DARABONBA_PTR_TO_JSON(KeySize, keySize_);
        DARABONBA_PTR_TO_JSON(Locality, locality_);
        DARABONBA_PTR_TO_JSON(Md5, md5_);
        DARABONBA_PTR_TO_JSON(Organization, organization_);
        DARABONBA_PTR_TO_JSON(OrganizationUnit, organizationUnit_);
        DARABONBA_PTR_TO_JSON(ParentIdentifier, parentIdentifier_);
        DARABONBA_PTR_TO_JSON(Sans, sans_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Sha2, sha2_);
        DARABONBA_PTR_TO_JSON(SignAlgorithm, signAlgorithm_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SubjectDN, subjectDN_);
        DARABONBA_PTR_TO_JSON(X509Certificate, x509Certificate_);
        DARABONBA_PTR_TO_JSON(Years, years_);
      };
      friend void from_json(const Darabonba::Json& j, CertificateList& obj) { 
        DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
        DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
        DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
        DARABONBA_PTR_FROM_JSON(CertificateType, certificateType_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(CountryCode, countryCode_);
        DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        DARABONBA_PTR_FROM_JSON(KeySize, keySize_);
        DARABONBA_PTR_FROM_JSON(Locality, locality_);
        DARABONBA_PTR_FROM_JSON(Md5, md5_);
        DARABONBA_PTR_FROM_JSON(Organization, organization_);
        DARABONBA_PTR_FROM_JSON(OrganizationUnit, organizationUnit_);
        DARABONBA_PTR_FROM_JSON(ParentIdentifier, parentIdentifier_);
        DARABONBA_PTR_FROM_JSON(Sans, sans_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Sha2, sha2_);
        DARABONBA_PTR_FROM_JSON(SignAlgorithm, signAlgorithm_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SubjectDN, subjectDN_);
        DARABONBA_PTR_FROM_JSON(X509Certificate, x509Certificate_);
        DARABONBA_PTR_FROM_JSON(Years, years_);
      };
      CertificateList() = default ;
      CertificateList(const CertificateList &) = default ;
      CertificateList(CertificateList &&) = default ;
      CertificateList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertificateList() = default ;
      CertificateList& operator=(const CertificateList &) = default ;
      CertificateList& operator=(CertificateList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->afterDate_ == nullptr
        && this->algorithm_ == nullptr && this->beforeDate_ == nullptr && this->certificateType_ == nullptr && this->commonName_ == nullptr && this->countryCode_ == nullptr
        && this->identifier_ == nullptr && this->keySize_ == nullptr && this->locality_ == nullptr && this->md5_ == nullptr && this->organization_ == nullptr
        && this->organizationUnit_ == nullptr && this->parentIdentifier_ == nullptr && this->sans_ == nullptr && this->serialNumber_ == nullptr && this->sha2_ == nullptr
        && this->signAlgorithm_ == nullptr && this->state_ == nullptr && this->status_ == nullptr && this->subjectDN_ == nullptr && this->x509Certificate_ == nullptr
        && this->years_ == nullptr; };
      // afterDate Field Functions 
      bool hasAfterDate() const { return this->afterDate_ != nullptr;};
      void deleteAfterDate() { this->afterDate_ = nullptr;};
      inline string getAfterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, "") };
      inline CertificateList& setAfterDate(string afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline CertificateList& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // beforeDate Field Functions 
      bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
      void deleteBeforeDate() { this->beforeDate_ = nullptr;};
      inline string getBeforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, "") };
      inline CertificateList& setBeforeDate(string beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


      // certificateType Field Functions 
      bool hasCertificateType() const { return this->certificateType_ != nullptr;};
      void deleteCertificateType() { this->certificateType_ = nullptr;};
      inline string getCertificateType() const { DARABONBA_PTR_GET_DEFAULT(certificateType_, "") };
      inline CertificateList& setCertificateType(string certificateType) { DARABONBA_PTR_SET_VALUE(certificateType_, certificateType) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline CertificateList& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // countryCode Field Functions 
      bool hasCountryCode() const { return this->countryCode_ != nullptr;};
      void deleteCountryCode() { this->countryCode_ = nullptr;};
      inline string getCountryCode() const { DARABONBA_PTR_GET_DEFAULT(countryCode_, "") };
      inline CertificateList& setCountryCode(string countryCode) { DARABONBA_PTR_SET_VALUE(countryCode_, countryCode) };


      // identifier Field Functions 
      bool hasIdentifier() const { return this->identifier_ != nullptr;};
      void deleteIdentifier() { this->identifier_ = nullptr;};
      inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
      inline CertificateList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      // keySize Field Functions 
      bool hasKeySize() const { return this->keySize_ != nullptr;};
      void deleteKeySize() { this->keySize_ = nullptr;};
      inline int32_t getKeySize() const { DARABONBA_PTR_GET_DEFAULT(keySize_, 0) };
      inline CertificateList& setKeySize(int32_t keySize) { DARABONBA_PTR_SET_VALUE(keySize_, keySize) };


      // locality Field Functions 
      bool hasLocality() const { return this->locality_ != nullptr;};
      void deleteLocality() { this->locality_ = nullptr;};
      inline string getLocality() const { DARABONBA_PTR_GET_DEFAULT(locality_, "") };
      inline CertificateList& setLocality(string locality) { DARABONBA_PTR_SET_VALUE(locality_, locality) };


      // md5 Field Functions 
      bool hasMd5() const { return this->md5_ != nullptr;};
      void deleteMd5() { this->md5_ = nullptr;};
      inline string getMd5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
      inline CertificateList& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


      // organization Field Functions 
      bool hasOrganization() const { return this->organization_ != nullptr;};
      void deleteOrganization() { this->organization_ = nullptr;};
      inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
      inline CertificateList& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


      // organizationUnit Field Functions 
      bool hasOrganizationUnit() const { return this->organizationUnit_ != nullptr;};
      void deleteOrganizationUnit() { this->organizationUnit_ = nullptr;};
      inline string getOrganizationUnit() const { DARABONBA_PTR_GET_DEFAULT(organizationUnit_, "") };
      inline CertificateList& setOrganizationUnit(string organizationUnit) { DARABONBA_PTR_SET_VALUE(organizationUnit_, organizationUnit) };


      // parentIdentifier Field Functions 
      bool hasParentIdentifier() const { return this->parentIdentifier_ != nullptr;};
      void deleteParentIdentifier() { this->parentIdentifier_ = nullptr;};
      inline string getParentIdentifier() const { DARABONBA_PTR_GET_DEFAULT(parentIdentifier_, "") };
      inline CertificateList& setParentIdentifier(string parentIdentifier) { DARABONBA_PTR_SET_VALUE(parentIdentifier_, parentIdentifier) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
      inline CertificateList& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline CertificateList& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // sha2 Field Functions 
      bool hasSha2() const { return this->sha2_ != nullptr;};
      void deleteSha2() { this->sha2_ = nullptr;};
      inline string getSha2() const { DARABONBA_PTR_GET_DEFAULT(sha2_, "") };
      inline CertificateList& setSha2(string sha2) { DARABONBA_PTR_SET_VALUE(sha2_, sha2) };


      // signAlgorithm Field Functions 
      bool hasSignAlgorithm() const { return this->signAlgorithm_ != nullptr;};
      void deleteSignAlgorithm() { this->signAlgorithm_ = nullptr;};
      inline string getSignAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(signAlgorithm_, "") };
      inline CertificateList& setSignAlgorithm(string signAlgorithm) { DARABONBA_PTR_SET_VALUE(signAlgorithm_, signAlgorithm) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline CertificateList& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CertificateList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // subjectDN Field Functions 
      bool hasSubjectDN() const { return this->subjectDN_ != nullptr;};
      void deleteSubjectDN() { this->subjectDN_ = nullptr;};
      inline string getSubjectDN() const { DARABONBA_PTR_GET_DEFAULT(subjectDN_, "") };
      inline CertificateList& setSubjectDN(string subjectDN) { DARABONBA_PTR_SET_VALUE(subjectDN_, subjectDN) };


      // x509Certificate Field Functions 
      bool hasX509Certificate() const { return this->x509Certificate_ != nullptr;};
      void deleteX509Certificate() { this->x509Certificate_ = nullptr;};
      inline string getX509Certificate() const { DARABONBA_PTR_GET_DEFAULT(x509Certificate_, "") };
      inline CertificateList& setX509Certificate(string x509Certificate) { DARABONBA_PTR_SET_VALUE(x509Certificate_, x509Certificate) };


      // years Field Functions 
      bool hasYears() const { return this->years_ != nullptr;};
      void deleteYears() { this->years_ = nullptr;};
      inline int32_t getYears() const { DARABONBA_PTR_GET_DEFAULT(years_, 0) };
      inline CertificateList& setYears(int32_t years) { DARABONBA_PTR_SET_VALUE(years_, years) };


    protected:
      shared_ptr<string> afterDate_ {};
      shared_ptr<string> algorithm_ {};
      shared_ptr<string> beforeDate_ {};
      shared_ptr<string> certificateType_ {};
      shared_ptr<string> commonName_ {};
      shared_ptr<string> countryCode_ {};
      shared_ptr<string> identifier_ {};
      shared_ptr<int32_t> keySize_ {};
      shared_ptr<string> locality_ {};
      shared_ptr<string> md5_ {};
      shared_ptr<string> organization_ {};
      shared_ptr<string> organizationUnit_ {};
      shared_ptr<string> parentIdentifier_ {};
      shared_ptr<string> sans_ {};
      shared_ptr<string> serialNumber_ {};
      shared_ptr<string> sha2_ {};
      shared_ptr<string> signAlgorithm_ {};
      shared_ptr<string> state_ {};
      shared_ptr<string> status_ {};
      shared_ptr<string> subjectDN_ {};
      shared_ptr<string> x509Certificate_ {};
      shared_ptr<int32_t> years_ {};
    };

    virtual bool empty() const override { return this->certificateList_ == nullptr
        && this->requestId_ == nullptr; };
    // certificateList Field Functions 
    bool hasCertificateList() const { return this->certificateList_ != nullptr;};
    void deleteCertificateList() { this->certificateList_ = nullptr;};
    inline const vector<DescribeClientCertificateForSerialNumberResponseBody::CertificateList> & getCertificateList() const { DARABONBA_PTR_GET_CONST(certificateList_, vector<DescribeClientCertificateForSerialNumberResponseBody::CertificateList>) };
    inline vector<DescribeClientCertificateForSerialNumberResponseBody::CertificateList> getCertificateList() { DARABONBA_PTR_GET(certificateList_, vector<DescribeClientCertificateForSerialNumberResponseBody::CertificateList>) };
    inline DescribeClientCertificateForSerialNumberResponseBody& setCertificateList(const vector<DescribeClientCertificateForSerialNumberResponseBody::CertificateList> & certificateList) { DARABONBA_PTR_SET_VALUE(certificateList_, certificateList) };
    inline DescribeClientCertificateForSerialNumberResponseBody& setCertificateList(vector<DescribeClientCertificateForSerialNumberResponseBody::CertificateList> && certificateList) { DARABONBA_PTR_SET_RVALUE(certificateList_, certificateList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientCertificateForSerialNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeClientCertificateForSerialNumberResponseBody::CertificateList>> certificateList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
