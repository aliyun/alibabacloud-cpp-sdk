// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNCERTIFICATELISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNCERTIFICATELISTRESPONSEBODY_HPP_
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
  class DescribeDcdnCertificateListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnCertificateListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnCertificateListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateListModel, certificateListModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDcdnCertificateListResponseBody() = default ;
    DescribeDcdnCertificateListResponseBody(const DescribeDcdnCertificateListResponseBody &) = default ;
    DescribeDcdnCertificateListResponseBody(DescribeDcdnCertificateListResponseBody &&) = default ;
    DescribeDcdnCertificateListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnCertificateListResponseBody() = default ;
    DescribeDcdnCertificateListResponseBody& operator=(const DescribeDcdnCertificateListResponseBody &) = default ;
    DescribeDcdnCertificateListResponseBody& operator=(DescribeDcdnCertificateListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertificateListModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertificateListModel& obj) { 
        DARABONBA_PTR_TO_JSON(CertList, certList_);
        DARABONBA_PTR_TO_JSON(Count, count_);
      };
      friend void from_json(const Darabonba::Json& j, CertificateListModel& obj) { 
        DARABONBA_PTR_FROM_JSON(CertList, certList_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
      };
      CertificateListModel() = default ;
      CertificateListModel(const CertificateListModel &) = default ;
      CertificateListModel(CertificateListModel &&) = default ;
      CertificateListModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertificateListModel() = default ;
      CertificateListModel& operator=(const CertificateListModel &) = default ;
      CertificateListModel& operator=(CertificateListModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CertList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CertList& obj) { 
          DARABONBA_PTR_TO_JSON(Cert, cert_);
        };
        friend void from_json(const Darabonba::Json& j, CertList& obj) { 
          DARABONBA_PTR_FROM_JSON(Cert, cert_);
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
        class Cert : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Cert& obj) { 
            DARABONBA_PTR_TO_JSON(CertId, certId_);
            DARABONBA_PTR_TO_JSON(CertName, certName_);
            DARABONBA_PTR_TO_JSON(Common, common_);
            DARABONBA_PTR_TO_JSON(Fingerprint, fingerprint_);
            DARABONBA_PTR_TO_JSON(Issuer, issuer_);
            DARABONBA_PTR_TO_JSON(LastTime, lastTime_);
          };
          friend void from_json(const Darabonba::Json& j, Cert& obj) { 
            DARABONBA_PTR_FROM_JSON(CertId, certId_);
            DARABONBA_PTR_FROM_JSON(CertName, certName_);
            DARABONBA_PTR_FROM_JSON(Common, common_);
            DARABONBA_PTR_FROM_JSON(Fingerprint, fingerprint_);
            DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
            DARABONBA_PTR_FROM_JSON(LastTime, lastTime_);
          };
          Cert() = default ;
          Cert(const Cert &) = default ;
          Cert(Cert &&) = default ;
          Cert(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Cert() = default ;
          Cert& operator=(const Cert &) = default ;
          Cert& operator=(Cert &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->certId_ == nullptr
        && this->certName_ == nullptr && this->common_ == nullptr && this->fingerprint_ == nullptr && this->issuer_ == nullptr && this->lastTime_ == nullptr; };
          // certId Field Functions 
          bool hasCertId() const { return this->certId_ != nullptr;};
          void deleteCertId() { this->certId_ = nullptr;};
          inline int64_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
          inline Cert& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


          // certName Field Functions 
          bool hasCertName() const { return this->certName_ != nullptr;};
          void deleteCertName() { this->certName_ = nullptr;};
          inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
          inline Cert& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


          // common Field Functions 
          bool hasCommon() const { return this->common_ != nullptr;};
          void deleteCommon() { this->common_ = nullptr;};
          inline string getCommon() const { DARABONBA_PTR_GET_DEFAULT(common_, "") };
          inline Cert& setCommon(string common) { DARABONBA_PTR_SET_VALUE(common_, common) };


          // fingerprint Field Functions 
          bool hasFingerprint() const { return this->fingerprint_ != nullptr;};
          void deleteFingerprint() { this->fingerprint_ = nullptr;};
          inline string getFingerprint() const { DARABONBA_PTR_GET_DEFAULT(fingerprint_, "") };
          inline Cert& setFingerprint(string fingerprint) { DARABONBA_PTR_SET_VALUE(fingerprint_, fingerprint) };


          // issuer Field Functions 
          bool hasIssuer() const { return this->issuer_ != nullptr;};
          void deleteIssuer() { this->issuer_ = nullptr;};
          inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
          inline Cert& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


          // lastTime Field Functions 
          bool hasLastTime() const { return this->lastTime_ != nullptr;};
          void deleteLastTime() { this->lastTime_ = nullptr;};
          inline int64_t getLastTime() const { DARABONBA_PTR_GET_DEFAULT(lastTime_, 0L) };
          inline Cert& setLastTime(int64_t lastTime) { DARABONBA_PTR_SET_VALUE(lastTime_, lastTime) };


        protected:
          // The ID of the certificate.
          shared_ptr<int64_t> certId_ {};
          // The name of the certificate.
          shared_ptr<string> certName_ {};
          // The Common Name (CN) attribute of the certificate. In most cases, the CN is a domain name.
          shared_ptr<string> common_ {};
          // The fingerprint of the certificate.
          shared_ptr<string> fingerprint_ {};
          // The certificate authority (CA) that issued the certificate.
          shared_ptr<string> issuer_ {};
          // The timestamp.
          shared_ptr<int64_t> lastTime_ {};
        };

        virtual bool empty() const override { return this->cert_ == nullptr; };
        // cert Field Functions 
        bool hasCert() const { return this->cert_ != nullptr;};
        void deleteCert() { this->cert_ = nullptr;};
        inline const vector<CertList::Cert> & getCert() const { DARABONBA_PTR_GET_CONST(cert_, vector<CertList::Cert>) };
        inline vector<CertList::Cert> getCert() { DARABONBA_PTR_GET(cert_, vector<CertList::Cert>) };
        inline CertList& setCert(const vector<CertList::Cert> & cert) { DARABONBA_PTR_SET_VALUE(cert_, cert) };
        inline CertList& setCert(vector<CertList::Cert> && cert) { DARABONBA_PTR_SET_RVALUE(cert_, cert) };


      protected:
        shared_ptr<vector<CertList::Cert>> cert_ {};
      };

      virtual bool empty() const override { return this->certList_ == nullptr
        && this->count_ == nullptr; };
      // certList Field Functions 
      bool hasCertList() const { return this->certList_ != nullptr;};
      void deleteCertList() { this->certList_ = nullptr;};
      inline const CertificateListModel::CertList & getCertList() const { DARABONBA_PTR_GET_CONST(certList_, CertificateListModel::CertList) };
      inline CertificateListModel::CertList getCertList() { DARABONBA_PTR_GET(certList_, CertificateListModel::CertList) };
      inline CertificateListModel& setCertList(const CertificateListModel::CertList & certList) { DARABONBA_PTR_SET_VALUE(certList_, certList) };
      inline CertificateListModel& setCertList(CertificateListModel::CertList && certList) { DARABONBA_PTR_SET_RVALUE(certList_, certList) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
      inline CertificateListModel& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    protected:
      // Details about each certificate.
      shared_ptr<CertificateListModel::CertList> certList_ {};
      // The number of certificates.
      shared_ptr<int32_t> count_ {};
    };

    virtual bool empty() const override { return this->certificateListModel_ == nullptr
        && this->requestId_ == nullptr; };
    // certificateListModel Field Functions 
    bool hasCertificateListModel() const { return this->certificateListModel_ != nullptr;};
    void deleteCertificateListModel() { this->certificateListModel_ = nullptr;};
    inline const DescribeDcdnCertificateListResponseBody::CertificateListModel & getCertificateListModel() const { DARABONBA_PTR_GET_CONST(certificateListModel_, DescribeDcdnCertificateListResponseBody::CertificateListModel) };
    inline DescribeDcdnCertificateListResponseBody::CertificateListModel getCertificateListModel() { DARABONBA_PTR_GET(certificateListModel_, DescribeDcdnCertificateListResponseBody::CertificateListModel) };
    inline DescribeDcdnCertificateListResponseBody& setCertificateListModel(const DescribeDcdnCertificateListResponseBody::CertificateListModel & certificateListModel) { DARABONBA_PTR_SET_VALUE(certificateListModel_, certificateListModel) };
    inline DescribeDcdnCertificateListResponseBody& setCertificateListModel(DescribeDcdnCertificateListResponseBody::CertificateListModel && certificateListModel) { DARABONBA_PTR_SET_RVALUE(certificateListModel_, certificateListModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDcdnCertificateListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Details about certificates.
    shared_ptr<DescribeDcdnCertificateListResponseBody::CertificateListModel> certificateListModel_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
