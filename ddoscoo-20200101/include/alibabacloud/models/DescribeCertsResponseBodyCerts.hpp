// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTSRESPONSEBODYCERTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTSRESPONSEBODYCERTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCertsResponseBodyCerts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertsResponseBodyCerts& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(Common, common_);
      DARABONBA_PTR_TO_JSON(DomainRelated, domainRelated_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertsResponseBodyCerts& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(Common, common_);
      DARABONBA_PTR_FROM_JSON(DomainRelated, domainRelated_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
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
    virtual bool empty() const override { this->certIdentifier_ != nullptr
        && this->common_ != nullptr && this->domainRelated_ != nullptr && this->endDate_ != nullptr && this->id_ != nullptr && this->issuer_ != nullptr
        && this->name_ != nullptr && this->startDate_ != nullptr; };
    // certIdentifier Field Functions 
    bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
    void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
    inline string certIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
    inline DescribeCertsResponseBodyCerts& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline string common() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
    inline DescribeCertsResponseBodyCerts& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // domainRelated Field Functions 
    bool hasDomainRelated() const { return this->domainRelated_ != nullptr;};
    void deleteDomainRelated() { this->domainRelated_ = nullptr;};
    inline bool domainRelated() const { DARABONBA_PTR_GET_DEFAULT(domainRelated_, false) };
    inline DescribeCertsResponseBodyCerts& setDomainRelated(bool domainRelated) { DARABONBA_PTR_SET_VALUE(domainRelated_, domainRelated) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribeCertsResponseBodyCerts& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribeCertsResponseBodyCerts& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribeCertsResponseBodyCerts& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeCertsResponseBodyCerts& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribeCertsResponseBodyCerts& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // The global certificate ID, which is in the certificate ID-cn-hangzhou format. If the ID of the certificate is 123, CertIdentifier is 123-cn-hangzhou.
    std::shared_ptr<string> certIdentifier_ = nullptr;
    // The domain name that is associated with the certificate.
    std::shared_ptr<string> common_ = nullptr;
    // Indicates whether the certificate is associated with the domain name. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> domainRelated_ = nullptr;
    // The expiration date of the certificate. The value is a string.
    std::shared_ptr<string> endDate_ = nullptr;
    // The certificate ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The certificate authority (CA) that issued the certificate.
    std::shared_ptr<string> issuer_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> name_ = nullptr;
    // The issuance date of the certificate. The value is a string.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
