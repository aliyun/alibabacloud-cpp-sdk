// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeCertsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certs, certs_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certs, certs_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCertsResponseBody() = default ;
    DescribeCertsResponseBody(const DescribeCertsResponseBody &) = default ;
    DescribeCertsResponseBody(DescribeCertsResponseBody &&) = default ;
    DescribeCertsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertsResponseBody() = default ;
    DescribeCertsResponseBody& operator=(const DescribeCertsResponseBody &) = default ;
    DescribeCertsResponseBody& operator=(DescribeCertsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Certs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Certs& obj) { 
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(Common, common_);
        DARABONBA_PTR_TO_JSON(DomainRelated, domainRelated_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      };
      friend void from_json(const Darabonba::Json& j, Certs& obj) { 
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(Common, common_);
        DARABONBA_PTR_FROM_JSON(DomainRelated, domainRelated_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      };
      Certs() = default ;
      Certs(const Certs &) = default ;
      Certs(Certs &&) = default ;
      Certs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Certs() = default ;
      Certs& operator=(const Certs &) = default ;
      Certs& operator=(Certs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->certIdentifier_ == nullptr
        && this->common_ == nullptr && this->domainRelated_ == nullptr && this->endDate_ == nullptr && this->id_ == nullptr && this->issuer_ == nullptr
        && this->name_ == nullptr && this->startDate_ == nullptr; };
      // certIdentifier Field Functions 
      bool hasCertIdentifier() const { return this->certIdentifier_ != nullptr;};
      void deleteCertIdentifier() { this->certIdentifier_ = nullptr;};
      inline string getCertIdentifier() const { DARABONBA_PTR_GET_DEFAULT(certIdentifier_, "") };
      inline Certs& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // common Field Functions 
      bool hasCommon() const { return this->common_ != nullptr;};
      void deleteCommon() { this->common_ = nullptr;};
      inline string getCommon() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
      inline Certs& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


      // domainRelated Field Functions 
      bool hasDomainRelated() const { return this->domainRelated_ != nullptr;};
      void deleteDomainRelated() { this->domainRelated_ = nullptr;};
      inline bool getDomainRelated() const { DARABONBA_PTR_GET_DEFAULT(domainRelated_, false) };
      inline Certs& setDomainRelated(bool domainRelated) { DARABONBA_PTR_SET_VALUE(domainRelated_, domainRelated) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline Certs& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline Certs& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline Certs& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Certs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline Certs& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    protected:
      // The global certificate ID, which is in the certificate ID-cn-hangzhou format. If the ID of the certificate is 123, CertIdentifier is 123-cn-hangzhou.
      shared_ptr<string> certIdentifier_ {};
      // The domain name that is associated with the certificate.
      shared_ptr<string> common_ {};
      // Indicates whether the certificate is associated with the domain name. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> domainRelated_ {};
      // The expiration date of the certificate. The value is a string.
      shared_ptr<string> endDate_ {};
      // The certificate ID.
      shared_ptr<int32_t> id_ {};
      // The certificate authority (CA) that issued the certificate.
      shared_ptr<string> issuer_ {};
      // The name of the certificate.
      shared_ptr<string> name_ {};
      // The issuance date of the certificate. The value is a string.
      shared_ptr<string> startDate_ {};
    };

    virtual bool empty() const override { return this->certs_ == nullptr
        && this->requestId_ == nullptr; };
    // certs Field Functions 
    bool hasCerts() const { return this->certs_ != nullptr;};
    void deleteCerts() { this->certs_ = nullptr;};
    inline const vector<DescribeCertsResponseBody::Certs> & getCerts() const { DARABONBA_PTR_GET_CONST(certs_, vector<DescribeCertsResponseBody::Certs>) };
    inline vector<DescribeCertsResponseBody::Certs> getCerts() { DARABONBA_PTR_GET(certs_, vector<DescribeCertsResponseBody::Certs>) };
    inline DescribeCertsResponseBody& setCerts(const vector<DescribeCertsResponseBody::Certs> & certs) { DARABONBA_PTR_SET_VALUE(certs_, certs) };
    inline DescribeCertsResponseBody& setCerts(vector<DescribeCertsResponseBody::Certs> && certs) { DARABONBA_PTR_SET_RVALUE(certs_, certs) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCertsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The certificate information about the website.
    shared_ptr<vector<DescribeCertsResponseBody::Certs>> certs_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
