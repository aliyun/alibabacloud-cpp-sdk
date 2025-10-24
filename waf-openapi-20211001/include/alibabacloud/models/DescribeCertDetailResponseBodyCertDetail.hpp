// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTDETAILRESPONSEBODYCERTDETAIL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTDETAILRESPONSEBODYCERTDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeCertDetailResponseBodyCertDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertDetailResponseBodyCertDetail& obj) { 
      DARABONBA_PTR_TO_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_TO_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertDetailResponseBodyCertDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(AfterDate, afterDate_);
      DARABONBA_PTR_FROM_JSON(BeforeDate, beforeDate_);
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
    };
    DescribeCertDetailResponseBodyCertDetail() = default ;
    DescribeCertDetailResponseBodyCertDetail(const DescribeCertDetailResponseBodyCertDetail &) = default ;
    DescribeCertDetailResponseBodyCertDetail(DescribeCertDetailResponseBodyCertDetail &&) = default ;
    DescribeCertDetailResponseBodyCertDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertDetailResponseBodyCertDetail() = default ;
    DescribeCertDetailResponseBodyCertDetail& operator=(const DescribeCertDetailResponseBodyCertDetail &) = default ;
    DescribeCertDetailResponseBodyCertDetail& operator=(DescribeCertDetailResponseBodyCertDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->afterDate_ == nullptr
        && return this->beforeDate_ == nullptr && return this->certIdentifier_ == nullptr && return this->certName_ == nullptr && return this->commonName_ == nullptr && return this->domain_ == nullptr
        && return this->sans_ == nullptr; };
    // afterDate Field Functions 
    bool hasAfterDate() const { return this->afterDate_ != nullptr;};
    void deleteAfterDate() { this->afterDate_ = nullptr;};
    inline int64_t afterDate() const { DARABONBA_PTR_GET_DEFAULT(afterDate_, 0L) };
    inline DescribeCertDetailResponseBodyCertDetail& setAfterDate(int64_t afterDate) { DARABONBA_PTR_SET_VALUE(afterDate_, afterDate) };


    // beforeDate Field Functions 
    bool hasBeforeDate() const { return this->beforeDate_ != nullptr;};
    void deleteBeforeDate() { this->beforeDate_ = nullptr;};
    inline int64_t beforeDate() const { DARABONBA_PTR_GET_DEFAULT(beforeDate_, 0L) };
    inline DescribeCertDetailResponseBodyCertDetail& setBeforeDate(int64_t beforeDate) { DARABONBA_PTR_SET_VALUE(beforeDate_, beforeDate) };


    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeCertDetailResponseBodyCertDetail& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline DescribeCertDetailResponseBodyCertDetail& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline DescribeCertDetailResponseBodyCertDetail& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeCertDetailResponseBodyCertDetail& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline const vector<string> & sans() const { DARABONBA_PTR_GET_CONST(sans_, vector<string>) };
    inline vector<string> sans() { DARABONBA_PTR_GET(sans_, vector<string>) };
    inline DescribeCertDetailResponseBodyCertDetail& setSans(const vector<string> & sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };
    inline DescribeCertDetailResponseBodyCertDetail& setSans(vector<string> && sans) { DARABONBA_PTR_SET_RVALUE(sans_, sans) };


  protected:
    // The time when the certificate expires. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> afterDate_ = nullptr;
    // The time when the certificate was issued. This value is a UNIX timestamp representing the number of milliseconds that have elapsed since January 1, 1970, 00:00:00 UTC.
    std::shared_ptr<int64_t> beforeDate_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The primary domain name, which is a common name.
    std::shared_ptr<string> commonName_ = nullptr;
    // The domain name that is associated with the certificate.
    std::shared_ptr<string> domain_ = nullptr;
    // The other domain names that are associated with the certificate.
    std::shared_ptr<vector<string>> sans_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
