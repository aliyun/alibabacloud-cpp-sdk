// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCERTIFICATESBYRECORDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCERTIFICATESBYRECORDRESPONSEBODY_HPP_
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
  class ListCertificatesByRecordResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCertificatesByRecordResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCertificatesByRecordResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCertificatesByRecordResponseBody() = default ;
    ListCertificatesByRecordResponseBody(const ListCertificatesByRecordResponseBody &) = default ;
    ListCertificatesByRecordResponseBody(ListCertificatesByRecordResponseBody &&) = default ;
    ListCertificatesByRecordResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCertificatesByRecordResponseBody() = default ;
    ListCertificatesByRecordResponseBody& operator=(const ListCertificatesByRecordResponseBody &) = default ;
    ListCertificatesByRecordResponseBody& operator=(ListCertificatesByRecordResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(ApplylingCount, applylingCount_);
        DARABONBA_PTR_TO_JSON(Certificates, certificates_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(RecordName, recordName_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplylingCount, applylingCount_);
        DARABONBA_PTR_FROM_JSON(Certificates, certificates_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(RecordName, recordName_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
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
      class Certificates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Certificates& obj) { 
          DARABONBA_PTR_TO_JSON(CasId, casId_);
          DARABONBA_PTR_TO_JSON(CommonName, commonName_);
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FingerprintSha256, fingerprintSha256_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Issuer, issuer_);
          DARABONBA_PTR_TO_JSON(IssuerCN, issuerCN_);
          DARABONBA_PTR_TO_JSON(KeyServerId, keyServerId_);
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
        friend void from_json(const Darabonba::Json& j, Certificates& obj) { 
          DARABONBA_PTR_FROM_JSON(CasId, casId_);
          DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FingerprintSha256, fingerprintSha256_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Issuer, issuer_);
          DARABONBA_PTR_FROM_JSON(IssuerCN, issuerCN_);
          DARABONBA_PTR_FROM_JSON(KeyServerId, keyServerId_);
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
        Certificates() = default ;
        Certificates(const Certificates &) = default ;
        Certificates(Certificates &&) = default ;
        Certificates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Certificates() = default ;
        Certificates& operator=(const Certificates &) = default ;
        Certificates& operator=(Certificates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->casId_ == nullptr
        && this->commonName_ == nullptr && this->createTime_ == nullptr && this->fingerprintSha256_ == nullptr && this->id_ == nullptr && this->issuer_ == nullptr
        && this->issuerCN_ == nullptr && this->keyServerId_ == nullptr && this->name_ == nullptr && this->notAfter_ == nullptr && this->notBefore_ == nullptr
        && this->pubAlg_ == nullptr && this->region_ == nullptr && this->SAN_ == nullptr && this->serialNumber_ == nullptr && this->sigAlg_ == nullptr
        && this->status_ == nullptr && this->type_ == nullptr && this->updateTime_ == nullptr; };
        // casId Field Functions 
        bool hasCasId() const { return this->casId_ != nullptr;};
        void deleteCasId() { this->casId_ = nullptr;};
        inline string getCasId() const { DARABONBA_PTR_GET_DEFAULT(casId_, "") };
        inline Certificates& setCasId(string casId) { DARABONBA_PTR_SET_VALUE(casId_, casId) };


        // commonName Field Functions 
        bool hasCommonName() const { return this->commonName_ != nullptr;};
        void deleteCommonName() { this->commonName_ = nullptr;};
        inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
        inline Certificates& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline Certificates& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // fingerprintSha256 Field Functions 
        bool hasFingerprintSha256() const { return this->fingerprintSha256_ != nullptr;};
        void deleteFingerprintSha256() { this->fingerprintSha256_ = nullptr;};
        inline string getFingerprintSha256() const { DARABONBA_PTR_GET_DEFAULT(fingerprintSha256_, "") };
        inline Certificates& setFingerprintSha256(string fingerprintSha256) { DARABONBA_PTR_SET_VALUE(fingerprintSha256_, fingerprintSha256) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
        inline Certificates& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // issuer Field Functions 
        bool hasIssuer() const { return this->issuer_ != nullptr;};
        void deleteIssuer() { this->issuer_ = nullptr;};
        inline string getIssuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
        inline Certificates& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


        // issuerCN Field Functions 
        bool hasIssuerCN() const { return this->issuerCN_ != nullptr;};
        void deleteIssuerCN() { this->issuerCN_ = nullptr;};
        inline string getIssuerCN() const { DARABONBA_PTR_GET_DEFAULT(issuerCN_, "") };
        inline Certificates& setIssuerCN(string issuerCN) { DARABONBA_PTR_SET_VALUE(issuerCN_, issuerCN) };


        // keyServerId Field Functions 
        bool hasKeyServerId() const { return this->keyServerId_ != nullptr;};
        void deleteKeyServerId() { this->keyServerId_ = nullptr;};
        inline string getKeyServerId() const { DARABONBA_PTR_GET_DEFAULT(keyServerId_, "") };
        inline Certificates& setKeyServerId(string keyServerId) { DARABONBA_PTR_SET_VALUE(keyServerId_, keyServerId) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline Certificates& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


        // notAfter Field Functions 
        bool hasNotAfter() const { return this->notAfter_ != nullptr;};
        void deleteNotAfter() { this->notAfter_ = nullptr;};
        inline string getNotAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
        inline Certificates& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


        // notBefore Field Functions 
        bool hasNotBefore() const { return this->notBefore_ != nullptr;};
        void deleteNotBefore() { this->notBefore_ = nullptr;};
        inline string getNotBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
        inline Certificates& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


        // pubAlg Field Functions 
        bool hasPubAlg() const { return this->pubAlg_ != nullptr;};
        void deletePubAlg() { this->pubAlg_ = nullptr;};
        inline string getPubAlg() const { DARABONBA_PTR_GET_DEFAULT(pubAlg_, "") };
        inline Certificates& setPubAlg(string pubAlg) { DARABONBA_PTR_SET_VALUE(pubAlg_, pubAlg) };


        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline Certificates& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


        // SAN Field Functions 
        bool hasSAN() const { return this->SAN_ != nullptr;};
        void deleteSAN() { this->SAN_ = nullptr;};
        inline string getSAN() const { DARABONBA_PTR_GET_DEFAULT(SAN_, "") };
        inline Certificates& setSAN(string SAN) { DARABONBA_PTR_SET_VALUE(SAN_, SAN) };


        // serialNumber Field Functions 
        bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
        void deleteSerialNumber() { this->serialNumber_ = nullptr;};
        inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
        inline Certificates& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


        // sigAlg Field Functions 
        bool hasSigAlg() const { return this->sigAlg_ != nullptr;};
        void deleteSigAlg() { this->sigAlg_ = nullptr;};
        inline string getSigAlg() const { DARABONBA_PTR_GET_DEFAULT(sigAlg_, "") };
        inline Certificates& setSigAlg(string sigAlg) { DARABONBA_PTR_SET_VALUE(sigAlg_, sigAlg) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Certificates& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Certificates& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // updateTime Field Functions 
        bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
        void deleteUpdateTime() { this->updateTime_ = nullptr;};
        inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
        inline Certificates& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      protected:
        // The certificate ID on Certificate Management Service.
        shared_ptr<string> casId_ {};
        // The Common Name of the certificate.
        shared_ptr<string> commonName_ {};
        // The creation time.
        shared_ptr<string> createTime_ {};
        // The SHA-256 fingerprint of the certificate.
        shared_ptr<string> fingerprintSha256_ {};
        // The ID of the certificate.
        shared_ptr<string> id_ {};
        // The certificate authority (CA) that issued the certificate.
        shared_ptr<string> issuer_ {};
        // The Common Name of the certificate issuer.
        shared_ptr<string> issuerCN_ {};
        shared_ptr<string> keyServerId_ {};
        // The certificate name.
        shared_ptr<string> name_ {};
        // The time when the certificate expires.
        shared_ptr<string> notAfter_ {};
        // The time when the certificate takes effect.
        shared_ptr<string> notBefore_ {};
        // The public key algorithm of the certificate.
        shared_ptr<string> pubAlg_ {};
        // The region where the certificate is stored.
        shared_ptr<string> region_ {};
        // The Subject Alternative Name (SAN) of the certificate.
        shared_ptr<string> SAN_ {};
        // The serial number of the certificate.
        shared_ptr<string> serialNumber_ {};
        // The signature algorithm of the certificate.
        shared_ptr<string> sigAlg_ {};
        // The status of the certificate.
        shared_ptr<string> status_ {};
        // The type of the SSL certificate. Valid values:
        shared_ptr<string> type_ {};
        // The update time.
        shared_ptr<string> updateTime_ {};
      };

      virtual bool empty() const override { return this->applylingCount_ == nullptr
        && this->certificates_ == nullptr && this->count_ == nullptr && this->recordName_ == nullptr && this->status_ == nullptr; };
      // applylingCount Field Functions 
      bool hasApplylingCount() const { return this->applylingCount_ != nullptr;};
      void deleteApplylingCount() { this->applylingCount_ = nullptr;};
      inline int64_t getApplylingCount() const { DARABONBA_PTR_GET_DEFAULT(applylingCount_, 0L) };
      inline Result& setApplylingCount(int64_t applylingCount) { DARABONBA_PTR_SET_VALUE(applylingCount_, applylingCount) };


      // certificates Field Functions 
      bool hasCertificates() const { return this->certificates_ != nullptr;};
      void deleteCertificates() { this->certificates_ = nullptr;};
      inline const vector<Result::Certificates> & getCertificates() const { DARABONBA_PTR_GET_CONST(certificates_, vector<Result::Certificates>) };
      inline vector<Result::Certificates> getCertificates() { DARABONBA_PTR_GET(certificates_, vector<Result::Certificates>) };
      inline Result& setCertificates(const vector<Result::Certificates> & certificates) { DARABONBA_PTR_SET_VALUE(certificates_, certificates) };
      inline Result& setCertificates(vector<Result::Certificates> && certificates) { DARABONBA_PTR_SET_RVALUE(certificates_, certificates) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline Result& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // recordName Field Functions 
      bool hasRecordName() const { return this->recordName_ != nullptr;};
      void deleteRecordName() { this->recordName_ = nullptr;};
      inline string getRecordName() const { DARABONBA_PTR_GET_DEFAULT(recordName_, "") };
      inline Result& setRecordName(string recordName) { DARABONBA_PTR_SET_VALUE(recordName_, recordName) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Result& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The number of certificates that are being requested.
      shared_ptr<int64_t> applylingCount_ {};
      // The certificates that match the specified records.
      shared_ptr<vector<Result::Certificates>> certificates_ {};
      // The number of certificates that match the specified records.
      shared_ptr<int64_t> count_ {};
      // The name of the record.
      shared_ptr<string> recordName_ {};
      // Certificate configuration status. Possible values: none; configured; applying; failed.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->siteId_ == nullptr && this->siteName_ == nullptr && this->totalCount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCertificatesByRecordResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<ListCertificatesByRecordResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<ListCertificatesByRecordResponseBody::Result>) };
    inline vector<ListCertificatesByRecordResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<ListCertificatesByRecordResponseBody::Result>) };
    inline ListCertificatesByRecordResponseBody& setResult(const vector<ListCertificatesByRecordResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListCertificatesByRecordResponseBody& setResult(vector<ListCertificatesByRecordResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ListCertificatesByRecordResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string getSiteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ListCertificatesByRecordResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListCertificatesByRecordResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The queried certificates.
    shared_ptr<vector<ListCertificatesByRecordResponseBody::Result>> result_ {};
    // The website ID,
    shared_ptr<int64_t> siteId_ {};
    // The website name.
    shared_ptr<string> siteName_ {};
    // The total number of records that you specified.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
