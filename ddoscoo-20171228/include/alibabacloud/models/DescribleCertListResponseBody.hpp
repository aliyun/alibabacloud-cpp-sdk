// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBLECERTLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBLECERTLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribleCertListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribleCertListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertList, certList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribleCertListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertList, certList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribleCertListResponseBody() = default ;
    DescribleCertListResponseBody(const DescribleCertListResponseBody &) = default ;
    DescribleCertListResponseBody(DescribleCertListResponseBody &&) = default ;
    DescribleCertListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribleCertListResponseBody() = default ;
    DescribleCertListResponseBody& operator=(const DescribleCertListResponseBody &) = default ;
    DescribleCertListResponseBody& operator=(DescribleCertListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertList& obj) { 
        DARABONBA_PTR_TO_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_TO_JSON(Common, common_);
        DARABONBA_PTR_TO_JSON(DomainRelated, domainRelated_);
        DARABONBA_PTR_TO_JSON(EndDate, endDate_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      };
      friend void from_json(const Darabonba::Json& j, CertList& obj) { 
        DARABONBA_PTR_FROM_JSON(CertIdentifier, certIdentifier_);
        DARABONBA_PTR_FROM_JSON(Common, common_);
        DARABONBA_PTR_FROM_JSON(DomainRelated, domainRelated_);
        DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      };
      CertList() = default ;
      CertList(const CertList &) = default ;
      CertList(CertList &&) = default ;
      CertList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertList() = default ;
      CertList& operator=(const CertList &) = default ;
      CertList& operator=(CertList &&) = default ;
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
      inline CertList& setCertIdentifier(string certIdentifier) { DARABONBA_PTR_SET_VALUE(certIdentifier_, certIdentifier) };


      // common Field Functions 
      bool hasCommon() const { return this->common_ != nullptr;};
      void deleteCommon() { this->common_ = nullptr;};
      inline string getCommon() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
      inline CertList& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


      // domainRelated Field Functions 
      bool hasDomainRelated() const { return this->domainRelated_ != nullptr;};
      void deleteDomainRelated() { this->domainRelated_ = nullptr;};
      inline bool getDomainRelated() const { DARABONBA_PTR_GET_DEFAULT(domainRelated_, false) };
      inline CertList& setDomainRelated(bool domainRelated) { DARABONBA_PTR_SET_VALUE(domainRelated_, domainRelated) };


      // endDate Field Functions 
      bool hasEndDate() const { return this->endDate_ != nullptr;};
      void deleteEndDate() { this->endDate_ = nullptr;};
      inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
      inline CertList& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
      inline CertList& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline CertList& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline CertList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // startDate Field Functions 
      bool hasStartDate() const { return this->startDate_ != nullptr;};
      void deleteStartDate() { this->startDate_ = nullptr;};
      inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
      inline CertList& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    protected:
      shared_ptr<string> certIdentifier_ {};
      shared_ptr<string> common_ {};
      shared_ptr<bool> domainRelated_ {};
      shared_ptr<string> endDate_ {};
      shared_ptr<int32_t> id_ {};
      shared_ptr<string> issuer_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> startDate_ {};
    };

    virtual bool empty() const override { return this->certList_ == nullptr
        && this->requestId_ == nullptr; };
    // certList Field Functions 
    bool hasCertList() const { return this->certList_ != nullptr;};
    void deleteCertList() { this->certList_ = nullptr;};
    inline const vector<DescribleCertListResponseBody::CertList> & getCertList() const { DARABONBA_PTR_GET_CONST(certList_, vector<DescribleCertListResponseBody::CertList>) };
    inline vector<DescribleCertListResponseBody::CertList> getCertList() { DARABONBA_PTR_GET(certList_, vector<DescribleCertListResponseBody::CertList>) };
    inline DescribleCertListResponseBody& setCertList(const vector<DescribleCertListResponseBody::CertList> & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
    inline DescribleCertListResponseBody& setCertList(vector<DescribleCertListResponseBody::CertList> && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribleCertListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribleCertListResponseBody::CertList>> certList_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
