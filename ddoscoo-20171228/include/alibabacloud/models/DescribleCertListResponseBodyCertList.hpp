// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBLECERTLISTRESPONSEBODYCERTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBLECERTLISTRESPONSEBODYCERTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribleCertListResponseBodyCertList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribleCertListResponseBodyCertList& obj) { 
      DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_TO_JSON(Common, common_);
      DARABONBA_PTR_TO_JSON(DomainRelated, domainRelated_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Issuer, issuer_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, DescribleCertListResponseBodyCertList& obj) { 
      DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
      DARABONBA_PTR_FROM_JSON(Common, common_);
      DARABONBA_PTR_FROM_JSON(DomainRelated, domainRelated_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    DescribleCertListResponseBodyCertList() = default ;
    DescribleCertListResponseBodyCertList(const DescribleCertListResponseBodyCertList &) = default ;
    DescribleCertListResponseBodyCertList(DescribleCertListResponseBodyCertList &&) = default ;
    DescribleCertListResponseBodyCertList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribleCertListResponseBodyCertList() = default ;
    DescribleCertListResponseBodyCertList& operator=(const DescribleCertListResponseBodyCertList &) = default ;
    DescribleCertListResponseBodyCertList& operator=(DescribleCertListResponseBodyCertList &&) = default ;
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
    inline DescribleCertListResponseBodyCertList& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


    // common Field Functions 
    bool hasCommon() const { return this->common_ != nullptr;};
    void deleteCommon() { this->common_ = nullptr;};
    inline string common() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
    inline DescribleCertListResponseBodyCertList& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


    // domainRelated Field Functions 
    bool hasDomainRelated() const { return this->domainRelated_ != nullptr;};
    void deleteDomainRelated() { this->domainRelated_ = nullptr;};
    inline bool domainRelated() const { DARABONBA_PTR_GET_DEFAULT(domainRelated_, false) };
    inline DescribleCertListResponseBodyCertList& setDomainRelated(bool domainRelated) { DARABONBA_PTR_SET_VALUE(domainRelated_, domainRelated) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline DescribleCertListResponseBodyCertList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline DescribleCertListResponseBodyCertList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline DescribleCertListResponseBodyCertList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribleCertListResponseBodyCertList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline DescribleCertListResponseBodyCertList& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    std::shared_ptr<string> certIdentifier_ = nullptr;
    std::shared_ptr<string> common_ = nullptr;
    std::shared_ptr<bool> domainRelated_ = nullptr;
    std::shared_ptr<string> endDate_ = nullptr;
    std::shared_ptr<int32_t> id_ = nullptr;
    std::shared_ptr<string> issuer_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
