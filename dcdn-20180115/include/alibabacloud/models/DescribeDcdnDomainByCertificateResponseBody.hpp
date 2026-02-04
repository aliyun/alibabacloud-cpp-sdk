// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBYCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNDOMAINBYCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnDomainByCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnDomainByCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnDomainByCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertInfos, certInfos_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnDomainByCertificateResponseBody() = default ;
    DescribeDcdnDomainByCertificateResponseBody(const DescribeDcdnDomainByCertificateResponseBody &) = default ;
    DescribeDcdnDomainByCertificateResponseBody(DescribeDcdnDomainByCertificateResponseBody &&) = default ;
    DescribeDcdnDomainByCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnDomainByCertificateResponseBody() = default ;
    DescribeDcdnDomainByCertificateResponseBody& operator=(const DescribeDcdnDomainByCertificateResponseBody &) = default ;
    DescribeDcdnDomainByCertificateResponseBody& operator=(DescribeDcdnDomainByCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertInfos& obj) { 
        DARABONBA_PTR_TO_JSON(CertInfo, certInfo_);
      };
      friend void from_json(const Darabonba::Json& j, CertInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(CertInfo, certInfo_);
      };
      CertInfos() = default ;
      CertInfos(const CertInfos &) = default ;
      CertInfos(CertInfos &&) = default ;
      CertInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertInfos() = default ;
      CertInfos& operator=(const CertInfos &) = default ;
      CertInfos& operator=(CertInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CertInfo : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CertInfo& obj) { 
          DARABONBA_PTR_TO_JSON(CertCaIsLegacy, certCaIsLegacy_);
          DARABONBA_PTR_TO_JSON(CertExpireTime, certExpireTime_);
          DARABONBA_PTR_TO_JSON(CertExpired, certExpired_);
          DARABONBA_PTR_TO_JSON(CertStartTime, certStartTime_);
          DARABONBA_PTR_TO_JSON(CertSubjectCommonName, certSubjectCommonName_);
          DARABONBA_PTR_TO_JSON(CertType, certType_);
          DARABONBA_PTR_TO_JSON(DomainList, domainList_);
          DARABONBA_PTR_TO_JSON(DomainNames, domainNames_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        };
        friend void from_json(const Darabonba::Json& j, CertInfo& obj) { 
          DARABONBA_PTR_FROM_JSON(CertCaIsLegacy, certCaIsLegacy_);
          DARABONBA_PTR_FROM_JSON(CertExpireTime, certExpireTime_);
          DARABONBA_PTR_FROM_JSON(CertExpired, certExpired_);
          DARABONBA_PTR_FROM_JSON(CertStartTime, certStartTime_);
          DARABONBA_PTR_FROM_JSON(CertSubjectCommonName, certSubjectCommonName_);
          DARABONBA_PTR_FROM_JSON(CertType, certType_);
          DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
          DARABONBA_PTR_FROM_JSON(DomainNames, domainNames_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        };
        CertInfo() = default ;
        CertInfo(const CertInfo &) = default ;
        CertInfo(CertInfo &&) = default ;
        CertInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CertInfo() = default ;
        CertInfo& operator=(const CertInfo &) = default ;
        CertInfo& operator=(CertInfo &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->certCaIsLegacy_ == nullptr
        && this->certExpireTime_ == nullptr && this->certExpired_ == nullptr && this->certStartTime_ == nullptr && this->certSubjectCommonName_ == nullptr && this->certType_ == nullptr
        && this->domainList_ == nullptr && this->domainNames_ == nullptr && this->issuer_ == nullptr; };
        // certCaIsLegacy Field Functions 
        bool hasCertCaIsLegacy() const { return this->certCaIsLegacy_ != nullptr;};
        void deleteCertCaIsLegacy() { this->certCaIsLegacy_ = nullptr;};
        inline string getCertCaIsLegacy() const { DARABONBA_PTR_GET_DEFAULT(certCaIsLegacy_, "") };
        inline CertInfo& setCertCaIsLegacy(string certCaIsLegacy) { DARABONBA_PTR_SET_VALUE(certCaIsLegacy_, certCaIsLegacy) };


        // certExpireTime Field Functions 
        bool hasCertExpireTime() const { return this->certExpireTime_ != nullptr;};
        void deleteCertExpireTime() { this->certExpireTime_ = nullptr;};
        inline string getCertExpireTime() const { DARABONBA_PTR_GET_DEFAULT(certExpireTime_, "") };
        inline CertInfo& setCertExpireTime(string certExpireTime) { DARABONBA_PTR_SET_VALUE(certExpireTime_, certExpireTime) };


        // certExpired Field Functions 
        bool hasCertExpired() const { return this->certExpired_ != nullptr;};
        void deleteCertExpired() { this->certExpired_ = nullptr;};
        inline string getCertExpired() const { DARABONBA_PTR_GET_DEFAULT(certExpired_, "") };
        inline CertInfo& setCertExpired(string certExpired) { DARABONBA_PTR_SET_VALUE(certExpired_, certExpired) };


        // certStartTime Field Functions 
        bool hasCertStartTime() const { return this->certStartTime_ != nullptr;};
        void deleteCertStartTime() { this->certStartTime_ = nullptr;};
        inline string getCertStartTime() const { DARABONBA_PTR_GET_DEFAULT(certStartTime_, "") };
        inline CertInfo& setCertStartTime(string certStartTime) { DARABONBA_PTR_SET_VALUE(certStartTime_, certStartTime) };


        // certSubjectCommonName Field Functions 
        bool hasCertSubjectCommonName() const { return this->certSubjectCommonName_ != nullptr;};
        void deleteCertSubjectCommonName() { this->certSubjectCommonName_ = nullptr;};
        inline string getCertSubjectCommonName() const { DARABONBA_PTR_GET_DEFAULT(certSubjectCommonName_, "") };
        inline CertInfo& setCertSubjectCommonName(string certSubjectCommonName) { DARABONBA_PTR_SET_VALUE(certSubjectCommonName_, certSubjectCommonName) };


        // certType Field Functions 
        bool hasCertType() const { return this->certType_ != nullptr;};
        void deleteCertType() { this->certType_ = nullptr;};
        inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
        inline CertInfo& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


        // domainList Field Functions 
        bool hasDomainList() const { return this->domainList_ != nullptr;};
        void deleteDomainList() { this->domainList_ = nullptr;};
        inline string getDomainList() const { DARABONBA_PTR_GET_DEFAULT(domainList_, "") };
        inline CertInfo& setDomainList(string domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };


        // domainNames Field Functions 
        bool hasDomainNames() const { return this->domainNames_ != nullptr;};
        void deleteDomainNames() { this->domainNames_ = nullptr;};
        inline string getDomainNames() const { DARABONBA_PTR_GET_DEFAULT(domainNames_, "") };
        inline CertInfo& setDomainNames(string domainNames) { DARABONBA_PTR_SET_VALUE(domainNames_, domainNames) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline CertInfo& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      protected:
        // Indicates whether the SSL certificate is obsolete. Valid values:
        // 
        // *   **yes**: The SSL certificate is obsolete.
        // *   **no**: The SSL certificate is working as expected.
        shared_ptr<string> certCaIsLegacy_ {};
        // The time at which the certificate expires.
        shared_ptr<string> certExpireTime_ {};
        // Indicates whether the SSL certificate is expired. Valid values:
        // 
        // *   **yes**: The SSL certificate is expired.
        // *   **no**: The SSL certificate is not expired.
        shared_ptr<string> certExpired_ {};
        // The time at which the certificate became effective.
        shared_ptr<string> certStartTime_ {};
        // The name of the SSL certificate owner.
        shared_ptr<string> certSubjectCommonName_ {};
        // The type of the certificate. Valid values: **RSA**, **DSA**, and **ECDSA**.
        shared_ptr<string> certType_ {};
        // The list of domain names that use the certificate.
        // 
        // If one or more domain names are returned, the domain names are matched with the specified certificate. Multiple domain names are separated with commas (,).
        shared_ptr<string> domainList_ {};
        // The domain names (DNS fields) that match the certificate. Multiple domain names are separated with commas (,).
        shared_ptr<string> domainNames_ {};
        // The certificate authority (CA) that issued the certificate.
        shared_ptr<string> issuer_ {};
      };

      virtual bool empty() const override { return this->certInfo_ == nullptr; };
      // certInfo Field Functions 
      bool hasCertInfo() const { return this->certInfo_ != nullptr;};
      void deleteCertInfo() { this->certInfo_ = nullptr;};
      inline const vector<CertInfos::CertInfo> & getCertInfo() const { DARABONBA_PTR_GET_CONST(certInfo_, vector<CertInfos::CertInfo>) };
      inline vector<CertInfos::CertInfo> getCertInfo() { DARABONBA_PTR_GET(certInfo_, vector<CertInfos::CertInfo>) };
      inline CertInfos& setCertInfo(const vector<CertInfos::CertInfo> & certInfo) { DARABONBA_PTR_SET_VALUE(certInfo_, certInfo) };
      inline CertInfos& setCertInfo(vector<CertInfos::CertInfo> && certInfo) { DARABONBA_PTR_SET_RVALUE(certInfo_, certInfo) };


    protected:
      shared_ptr<vector<CertInfos::CertInfo>> certInfo_ {};
    };

    virtual bool empty() const override { return this->certInfos_ == nullptr
        && this->requestId_ == nullptr; };
    // certInfos Field Functions 
    bool hasCertInfos() const { return this->certInfos_ != nullptr;};
    void deleteCertInfos() { this->certInfos_ = nullptr;};
    inline const DescribeDcdnDomainByCertificateResponseBody::CertInfos & getCertInfos() const { DARABONBA_PTR_GET_CONST(certInfos_, DescribeDcdnDomainByCertificateResponseBody::CertInfos) };
    inline DescribeDcdnDomainByCertificateResponseBody::CertInfos getCertInfos() { DARABONBA_PTR_GET(certInfos_, DescribeDcdnDomainByCertificateResponseBody::CertInfos) };
    inline DescribeDcdnDomainByCertificateResponseBody& setCertInfos(const DescribeDcdnDomainByCertificateResponseBody::CertInfos & certInfos) { DARABONBA_PTR_SET_VALUE(certInfos_, certInfos) };
    inline DescribeDcdnDomainByCertificateResponseBody& setCertInfos(DescribeDcdnDomainByCertificateResponseBody::CertInfos && certInfos) { DARABONBA_PTR_SET_RVALUE(certInfos_, certInfos) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnDomainByCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the certificate.
    shared_ptr<DescribeDcdnDomainByCertificateResponseBody::CertInfos> certInfos_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
