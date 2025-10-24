// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEINSTANCECERTSRESPONSEBODYCERTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEINSTANCECERTSRESPONSEBODYCERTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceInstanceCertsResponseBodyCerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceInstanceCertsResponseBodyCerts& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(IsChainCompleted, isChainCompleted_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceInstanceCertsResponseBodyCerts& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(IsChainCompleted, isChainCompleted_);
    };
    DescribeResourceInstanceCertsResponseBodyCerts() = default ;
    DescribeResourceInstanceCertsResponseBodyCerts(const DescribeResourceInstanceCertsResponseBodyCerts &) = default ;
    DescribeResourceInstanceCertsResponseBodyCerts(DescribeResourceInstanceCertsResponseBodyCerts &&) = default ;
    DescribeResourceInstanceCertsResponseBodyCerts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceInstanceCertsResponseBodyCerts() = default ;
    DescribeResourceInstanceCertsResponseBodyCerts& operator=(const DescribeResourceInstanceCertsResponseBodyCerts &) = default ;
    DescribeResourceInstanceCertsResponseBodyCerts& operator=(DescribeResourceInstanceCertsResponseBodyCerts &&) = default ;
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
    inline DescribeResourceInstanceCertsResponseBodyCerts& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline int64_t beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
    inline DescribeResourceInstanceCertsResponseBodyCerts& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeResourceInstanceCertsResponseBodyCerts& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeResourceInstanceCertsResponseBodyCerts& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeResourceInstanceCertsResponseBodyCerts& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeResourceInstanceCertsResponseBodyCerts& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // isChainCompleted Field Functions 
    bool hasIsChainCompleted() const { return this->isChainCompleted_ != nullptr;};
    void deleteIsChainCompleted() { this->isChainCompleted_ = nullptr;};
    inline bool isChainCompleted() const { DARABONBA_PTR_GET_DEFAULT(isChainCompleted_, false) };
    inline DescribeResourceInstanceCertsResponseBodyCerts& setIsChainCompleted(bool isChainCompleted) { DARABONBA_PTR_SET_VALUE(isChainCompleted_, isChainCompleted) };


  protected:
    // The time when the certificate expires.
    std::shared_ptr<int64_t> afterDate_ = nullptr;
    // The time when the certificate was issued.
    std::shared_ptr<int64_t> beforeDate_ = nullptr;
    // The globally unique ID of the certificate. The value is in the "Certificate ID-cn-hangzhou" format. For example, if the ID of the certificate is 123, the value of CertIdentifier is 123-cn-hangzhou.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The common name.
    std::shared_ptr<string> commonName_ = nullptr;
    // The domain name for which the certificate is issued.
    std::shared_ptr<string> domain_ = nullptr;
    // Indicates whether the certificate chain is complete.
    std::shared_ptr<bool> isChainCompleted_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
