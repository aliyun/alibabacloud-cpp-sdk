// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTSRESPONSEBODYCERTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTSRESPONSEBODYCERTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCertsResponseBodyCerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertsResponseBodyCerts& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(IsChainCompleted, isChainCompleted_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertsResponseBodyCerts& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(IsChainCompleted, isChainCompleted_);
    };
    DescribeCertsResponseBodyCerts() = default ;
    DescribeCertsResponseBodyCerts(const DescribeCertsResponseBodyCerts &) = default ;
    DescribeCertsResponseBodyCerts(DescribeCertsResponseBodyCerts &&) = default ;
    DescribeCertsResponseBodyCerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertsResponseBodyCerts() = default ;
    DescribeCertsResponseBodyCerts& operator=(const DescribeCertsResponseBodyCerts &) = default ;
    DescribeCertsResponseBodyCerts& operator=(DescribeCertsResponseBodyCerts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterDate_ == nullptr
        && return this->beforeDate_ == nullptr && return this->certIdentifier_ == nullptr && return this->certName_ == nullptr && return this->commonName_ == nullptr && return this->domain_ == nullptr
        && return this->isChainCompleted_ == nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline int64_t afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
    inline DescribeCertsResponseBodyCerts& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline int64_t beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
    inline DescribeCertsResponseBodyCerts& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeCertsResponseBodyCerts& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeCertsResponseBodyCerts& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeCertsResponseBodyCerts& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeCertsResponseBodyCerts& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // isChainCompleted Field Functions 
    bool hasIsChainCompleted() const { return this->isChainCompleted_ != nullptr;};
    void deleteIsChainCompleted() { this->isChainCompleted_ = nullptr;};
    inline bool isChainCompleted() const { DARABONBA_PTR_GET_DEFAULT(isChainCompleted_, false) };
    inline DescribeCertsResponseBodyCerts& setIsChainCompleted(bool isChainCompleted) { DARABONBA_PTR_SET_VALUE(isChainCompleted_, isChainCompleted) };


  protected:
    // The expiration time.
    std::shared_ptr<int64_t> afterDate_ = nullptr;
    // The effective time.
    std::shared_ptr<int64_t> beforeDate_ = nullptr;
    // The globally unique ID of the certificate. The value follows a "\\<Certificate ID>-ap-southeast-1" format. For example, if the ID of the certificate is 123, the value of the CertIdentifier parameter is 123-ap-southeast-1.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The common name.
    std::shared_ptr<string> commonName_ = nullptr;
    // The domain that is supported by the certificate.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether the certificate chain is complete. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isChainCompleted_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
