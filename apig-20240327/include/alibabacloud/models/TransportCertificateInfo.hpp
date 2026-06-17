// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TRANSPORTCERTIFICATEINFO_HPP_
#define ALIBABACLOUD_MODELS_TRANSPORTCERTIFICATEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class TransportCertificateInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TransportCertificateInfo& obj) { 
      DARABONBA_PTR_TO_JSON(algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(certName, certName_);
      DARABONBA_PTR_TO_JSON(certificateMatchStatus, certificateMatchStatus_);
      DARABONBA_PTR_TO_JSON(commonName, commonName_);
      DARABONBA_PTR_TO_JSON(coveredDomains, coveredDomains_);
      DARABONBA_PTR_TO_JSON(issuer, issuer_);
      DARABONBA_PTR_TO_JSON(matchedDomains, matchedDomains_);
      DARABONBA_PTR_TO_JSON(notAfterTimestamp, notAfterTimestamp_);
      DARABONBA_PTR_TO_JSON(notBeforeTimestamp, notBeforeTimestamp_);
      DARABONBA_PTR_TO_JSON(sans, sans_);
    };
    friend void from_json(const Darabonba::Json& j, TransportCertificateInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(certIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(certName, certName_);
      DARABONBA_PTR_FROM_JSON(certificateMatchStatus, certificateMatchStatus_);
      DARABONBA_PTR_FROM_JSON(commonName, commonName_);
      DARABONBA_PTR_FROM_JSON(coveredDomains, coveredDomains_);
      DARABONBA_PTR_FROM_JSON(issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(matchedDomains, matchedDomains_);
      DARABONBA_PTR_FROM_JSON(notAfterTimestamp, notAfterTimestamp_);
      DARABONBA_PTR_FROM_JSON(notBeforeTimestamp, notBeforeTimestamp_);
      DARABONBA_PTR_FROM_JSON(sans, sans_);
    };
    TransportCertificateInfo() = default ;
    TransportCertificateInfo(const TransportCertificateInfo &) = default ;
    TransportCertificateInfo(TransportCertificateInfo &&) = default ;
    TransportCertificateInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TransportCertificateInfo() = default ;
    TransportCertificateInfo& operator=(const TransportCertificateInfo &) = default ;
    TransportCertificateInfo& operator=(TransportCertificateInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certIdentifier_ == nullptr && this->certName_ == nullptr && this->certificateMatchStatus_ == nullptr && this->commonName_ == nullptr && this->coveredDomains_ == nullptr
        && this->issuer_ == nullptr && this->matchedDomains_ == nullptr && this->notAfterTimestamp_ == nullptr && this->notBeforeTimestamp_ == nullptr && this->sans_ == nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline TransportCertificateInfo& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline TransportCertificateInfo& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline TransportCertificateInfo& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certificateMatchStatus Field Functions 
    bool hasCertificateMatchStatus() const { return this->certificateMatchStatus_ != nullptr;};
    void deleteCertificateMatchStatus() { this->certificateMatchStatus_ = nullptr;};
    inline string getCertificateMatchStatus() const { DARABONBA_PTR_GET_DEFAULT(certificateMatchStatus_, "") };
    inline TransportCertificateInfo& setCertificateMatchStatus(string certificateMatchStatus) { DARABONBA_PTR_SET_VALUE(certificateMatchStatus_, certificateMatchStatus) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline TransportCertificateInfo& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // coveredDomains Field Functions 
    bool hasCoveredDomains() const { return this->coveredDomains_ != nullptr;};
    void deleteCoveredDomains() { this->coveredDomains_ = nullptr;};
    inline const vector<string> & getCoveredDomains() const { DARABONBA_PTR_GET_CONST(coveredDomains_, vector<string>) };
    inline vector<string> getCoveredDomains() { DARABONBA_PTR_GET(coveredDomains_, vector<string>) };
    inline TransportCertificateInfo& setCoveredDomains(const vector<string> & coveredDomains) { DARABONBA_PTR_SET_VALUE(coveredDomains_, coveredDomains) };
    inline TransportCertificateInfo& setCoveredDomains(vector<string> && coveredDomains) { DARABONBA_PTR_SET_RVALUE(coveredDomains_, coveredDomains) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline TransportCertificateInfo& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // matchedDomains Field Functions 
    bool hasMatchedDomains() const { return this->matchedDomains_ != nullptr;};
    void deleteMatchedDomains() { this->matchedDomains_ = nullptr;};
    inline const vector<string> & getMatchedDomains() const { DARABONBA_PTR_GET_CONST(matchedDomains_, vector<string>) };
    inline vector<string> getMatchedDomains() { DARABONBA_PTR_GET(matchedDomains_, vector<string>) };
    inline TransportCertificateInfo& setMatchedDomains(const vector<string> & matchedDomains) { DARABONBA_PTR_SET_VALUE(matchedDomains_, matchedDomains) };
    inline TransportCertificateInfo& setMatchedDomains(vector<string> && matchedDomains) { DARABONBA_PTR_SET_RVALUE(matchedDomains_, matchedDomains) };


    // notAfterTimestamp Field Functions 
    bool hasNotAfterTimestamp() const { return this->notAfterTimestamp_ != nullptr;};
    void deleteNotAfterTimestamp() { this->notAfterTimestamp_ = nullptr;};
    inline int64_t getNotAfterTimestamp() const { DARABONBA_PTR_GET_DEFAULT(notAfterTimestamp_, 0L) };
    inline TransportCertificateInfo& setNotAfterTimestamp(int64_t notAfterTimestamp) { DARABONBA_PTR_SET_VALUE(notAfterTimestamp_, notAfterTimestamp) };


    // notBeforeTimestamp Field Functions 
    bool hasNotBeforeTimestamp() const { return this->notBeforeTimestamp_ != nullptr;};
    void deleteNotBeforeTimestamp() { this->notBeforeTimestamp_ = nullptr;};
    inline int64_t getNotBeforeTimestamp() const { DARABONBA_PTR_GET_DEFAULT(notBeforeTimestamp_, 0L) };
    inline TransportCertificateInfo& setNotBeforeTimestamp(int64_t notBeforeTimestamp) { DARABONBA_PTR_SET_VALUE(notBeforeTimestamp_, notBeforeTimestamp) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline string getSans() const { DARABONBA_PTR_GET_DEFAULT(sans_, "") };
    inline TransportCertificateInfo& setSans(string sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };


  protected:
    shared_ptr<string> algorithm_ {};
    shared_ptr<string> certIdentifier_ {};
    shared_ptr<string> certName_ {};
    shared_ptr<string> certificateMatchStatus_ {};
    shared_ptr<string> commonName_ {};
    shared_ptr<vector<string>> coveredDomains_ {};
    shared_ptr<string> issuer_ {};
    shared_ptr<vector<string>> matchedDomains_ {};
    shared_ptr<int64_t> notAfterTimestamp_ {};
    shared_ptr<int64_t> notBeforeTimestamp_ {};
    shared_ptr<string> sans_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
