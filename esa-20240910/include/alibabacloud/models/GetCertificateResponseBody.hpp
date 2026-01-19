// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetCertificateResponseBody() = default ;
    GetCertificateResponseBody(const GetCertificateResponseBody &) = default ;
    GetCertificateResponseBody(GetCertificateResponseBody &&) = default ;
    GetCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateResponseBody() = default ;
    GetCertificateResponseBody& operator=(const GetCertificateResponseBody &) = default ;
    GetCertificateResponseBody& operator=(GetCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ApplyCode, applyCode_);
        DARABONBA_PTR_TO_JSON(ApplyMessage, applyMessage_);
        DARABONBA_PTR_TO_JSON(CasId, casId_);
        DARABONBA_PTR_TO_JSON(CommonName, commonName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(DCV, DCV_);
        DARABONBA_PTR_TO_JSON(FingerprintSha256, fingerprintSha256_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Issuer, issuer_);
        DARABONBA_PTR_TO_JSON(IssuerCN, issuerCN_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_TO_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_TO_JSON(PubAlg, pubAlg_);
        DARABONBA_PTR_TO_JSON(Region, region_);
        DARABONBA_PTR_TO_JSON(SAN, SAN_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(SigAlg, sigAlg_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplyCode, applyCode_);
        DARABONBA_PTR_FROM_JSON(ApplyMessage, applyMessage_);
        DARABONBA_PTR_FROM_JSON(CasId, casId_);
        DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(DCV, DCV_);
        DARABONBA_PTR_FROM_JSON(FingerprintSha256, fingerprintSha256_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
        DARABONBA_PTR_FROM_JSON(IssuerCN, issuerCN_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NotAfter, notAfter_);
        DARABONBA_PTR_FROM_JSON(NotBefore, notBefore_);
        DARABONBA_PTR_FROM_JSON(PubAlg, pubAlg_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
        DARABONBA_PTR_FROM_JSON(SAN, SAN_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(SigAlg, sigAlg_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DCV : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DCV& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, DCV& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        DCV() = default ;
        DCV(const DCV &) = default ;
        DCV(DCV &&) = default ;
        DCV(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DCV() = default ;
        DCV& operator=(const DCV &) = default ;
        DCV& operator=(DCV &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->key_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline DCV& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline DCV& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DCV& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline DCV& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline DCV& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The DCV ID.
        shared_ptr<string> id_ {};
        // The DCV name. It is a TXT record name if Type is DNS or URL if Type is HTTP.
        shared_ptr<string> key_ {};
        // The verification status.
        shared_ptr<string> status_ {};
        // The DCV type. Valid values: DNS and HTTP.
        shared_ptr<string> type_ {};
        // The DCV content.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->applyCode_ == nullptr
        && this->applyMessage_ == nullptr && this->casId_ == nullptr && this->commonName_ == nullptr && this->createTime_ == nullptr && this->DCV_ == nullptr
        && this->fingerprintSha256_ == nullptr && this->id_ == nullptr && this->issuer_ == nullptr && this->issuerCN_ == nullptr && this->name_ == nullptr
        && this->notAfter_ == nullptr && this->notBefore_ == nullptr && this->pubAlg_ == nullptr && this->region_ == nullptr && this->SAN_ == nullptr
        && this->serialNumber_ == nullptr && this->sigAlg_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
      // applyCode Field Functions 
      bool hasApplyCode() const { return this->applyCode_ != nullptr;};
      void deleteApplyCode() { this->applyCode_ = nullptr;};
      inline int64_t getApplyCode() const { DARABONBA_PTR_GET_DEFAULT(applyCode_, 0L) };
      inline Result& setApplyCode(int64_t applyCode) { DARABONBA_PTR_SET_VALUE(applyCode_, applyCode) };


      // applyMessage Field Functions 
      bool hasApplyMessage() const { return this->applyMessage_ != nullptr;};
      void deleteApplyMessage() { this->applyMessage_ = nullptr;};
      inline string getApplyMessage() const { DARABONBA_PTR_GET_DEFAULT(applyMessage_, "") };
      inline Result& setApplyMessage(string applyMessage) { DARABONBA_PTR_SET_VALUE(applyMessage_, applyMessage) };


      // casId Field Functions 
      bool hasCasId() const { return this->casId_ != nullptr;};
      void deleteCasId() { this->casId_ = nullptr;};
      inline string getCasId() const { DARABONBA_PTR_GET_DEFAULT(casId_, "") };
      inline Result& setCasId(string casId) { DARABONBA_PTR_SET_VALUE(casId_, casId) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline Result& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // DCV Field Functions 
      bool hasDCV() const { return this->DCV_ != nullptr;};
      void deleteDCV() { this->DCV_ = nullptr;};
      inline const vector<Result::DCV> & getDCV() const { DARABONBA_PTR_GET_CONST(DCV_, vector<Result::DCV>) };
      inline vector<Result::DCV> getDCV() { DARABONBA_PTR_GET(DCV_, vector<Result::DCV>) };
      inline Result& setDCV(const vector<Result::DCV> & dCV) { DARABONBA_PTR_SET_VALUE(DCV_, dCV) };
      inline Result& setDCV(vector<Result::DCV> && dCV) { DARABONBA_PTR_SET_RVALUE(DCV_, dCV) };


      // fingerprintSha256 Field Functions 
      bool hasFingerprintSha256() const { return this->fingerprintSha256_ != nullptr;};
      void deleteFingerprintSha256() { this->fingerprintSha256_ = nullptr;};
      inline string getFingerprintSha256() const { DARABONBA_PTR_GET_DEFAULT(fingerprintSha256_, "") };
      inline Result& setFingerprintSha256(string fingerprintSha256) { DARABONBA_PTR_SET_VALUE(fingerprintSha256_, fingerprintSha256) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // issuer Field Functions 
      bool hasIssuer() const { return this->issuer_ != nullptr;};
      void deleteIssuer() { this->issuer_ = nullptr;};
      inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
      inline Result& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


      // issuerCN Field Functions 
      bool hasIssuerCN() const { return this->issuerCN_ != nullptr;};
      void deleteIssuerCN() { this->issuerCN_ = nullptr;};
      inline string getIssuerCN() const { DARABONBA_PTR_GET_DEFAULT(issuerCN_, "") };
      inline Result& setIssuerCN(string issuerCN) { DARABONBA_PTR_SET_VALUE(issuerCN_, issuerCN) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // notAfter Field Functions 
      bool hasNotAfter() const { return this->notAfter_ != nullptr;};
      void deleteNotAfter() { this->notAfter_ = nullptr;};
      inline string getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
      inline Result& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


      // notBefore Field Functions 
      bool hasNotBefore() const { return this->notBefore_ != nullptr;};
      void deleteNotBefore() { this->notBefore_ = nullptr;};
      inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
      inline Result& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


      // pubAlg Field Functions 
      bool hasPubAlg() const { return this->pubAlg_ != nullptr;};
      void deletePubAlg() { this->pubAlg_ = nullptr;};
      inline string getPubAlg() const { DARABONBA_PTR_GET_DEFAULT(pubAlg_, "") };
      inline Result& setPubAlg(string pubAlg) { DARABONBA_PTR_SET_VALUE(pubAlg_, pubAlg) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Result& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // SAN Field Functions 
      bool hasSAN() const { return this->SAN_ != nullptr;};
      void deleteSAN() { this->SAN_ = nullptr;};
      inline string getSAN() const { DARABONBA_PTR_GET_DEFAULT(SAN_, "") };
      inline Result& setSAN(string SAN) { DARABONBA_PTR_SET_VALUE(SAN_, SAN) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline Result& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // sigAlg Field Functions 
      bool hasSigAlg() const { return this->sigAlg_ != nullptr;};
      void deleteSigAlg() { this->sigAlg_ = nullptr;};
      inline string getSigAlg() const { DARABONBA_PTR_GET_DEFAULT(sigAlg_, "") };
      inline Result& setSigAlg(string sigAlg) { DARABONBA_PTR_SET_VALUE(sigAlg_, sigAlg) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Result& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline Result& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The error code returned for certificate application.
      shared_ptr<int64_t> applyCode_ {};
      // The error message returned for certificate application.
      shared_ptr<string> applyMessage_ {};
      // Cloud certificate ID.
      shared_ptr<string> casId_ {};
      // Common Name (CN) field of the certificate.
      shared_ptr<string> commonName_ {};
      // Creation time.
      shared_ptr<string> createTime_ {};
      // The Domain Control Validation (DCV) information.
      shared_ptr<vector<Result::DCV>> DCV_ {};
      // SHA256 fingerprint of the certificate.
      shared_ptr<string> fingerprintSha256_ {};
      // Certificate ID.
      shared_ptr<string> id_ {};
      // Certificate issuer.
      shared_ptr<string> issuer_ {};
      // Certificate issuing authority.
      shared_ptr<string> issuerCN_ {};
      // Certificate name.
      shared_ptr<string> name_ {};
      // End time of the certificate validity period.
      shared_ptr<string> notAfter_ {};
      // Start time of the certificate validity period.
      shared_ptr<string> notBefore_ {};
      // Certificate public key algorithm.
      shared_ptr<string> pubAlg_ {};
      // Region.
      shared_ptr<string> region_ {};
      // Subject Alternative Name (SAN) of the certificate.
      shared_ptr<string> SAN_ {};
      // Serial number of the certificate.
      shared_ptr<string> serialNumber_ {};
      // Certificate signature algorithm.
      shared_ptr<string> sigAlg_ {};
      // Certificate status.
      shared_ptr<string> status_ {};
      // Certificate type.
      shared_ptr<string> type_ {};
      // Update time.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->certificate_ == nullptr
        && this->requestId_ == nullptr && this->result_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr && this->status_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string getCertificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline GetCertificateResponseBody& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetCertificateResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, GetCertificateResponseBody::Result) };
    inline GetCertificateResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, GetCertificateResponseBody::Result) };
    inline GetCertificateResponseBody& setResult(const GetCertificateResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetCertificateResponseBody& setResult(GetCertificateResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetCertificateResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetCertificateResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCertificateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // Certificate content.
    shared_ptr<string> certificate_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The certificate information.
    shared_ptr<GetCertificateResponseBody::Result> result_ {};
    // Site ID.
    shared_ptr<int64_t> siteId_ {};
    // Site name.
    shared_ptr<string> siteName_ {};
    // Certificate status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
