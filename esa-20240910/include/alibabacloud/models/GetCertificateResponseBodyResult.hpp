// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCERTIFICATERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCERTIFICATERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCertificateResponseBodyResultDCV.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetCertificateResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCertificateResponseBodyResult& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetCertificateResponseBodyResult& obj) { 
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
    GetCertificateResponseBodyResult() = default ;
    GetCertificateResponseBodyResult(const GetCertificateResponseBodyResult &) = default ;
    GetCertificateResponseBodyResult(GetCertificateResponseBodyResult &&) = default ;
    GetCertificateResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCertificateResponseBodyResult() = default ;
    GetCertificateResponseBodyResult& operator=(const GetCertificateResponseBodyResult &) = default ;
    GetCertificateResponseBodyResult& operator=(GetCertificateResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applyCode_ == nullptr
        && return this->applyMessage_ == nullptr && return this->casId_ == nullptr && return this->commonName_ == nullptr && return this->createTime_ == nullptr && return this->DCV_ == nullptr
        && return this->fingerprintSha256_ == nullptr && return this->id_ == nullptr && return this->issuer_ == nullptr && return this->issuerCN_ == nullptr && return this->name_ == nullptr
        && return this->notAfter_ == nullptr && return this->notBefore_ == nullptr && return this->pubAlg_ == nullptr && return this->region_ == nullptr && return this->SAN_ == nullptr
        && return this->serialNumber_ == nullptr && return this->sigAlg_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->updateTime_ == nullptr; };
    // applyCode Field Functions 
    bool hasApplyCode() const { return this->applyCode_ != nullptr;};
    void deleteApplyCode() { this->applyCode_ = nullptr;};
    inline int64_t applyCode() const { DARABONBA_PTR_GET_DEFAULT(applyCode_, 0L) };
    inline GetCertificateResponseBodyResult& setApplyCode(int64_t applyCode) { DARABONBA_PTR_SET_VALUE(applyCode_, applyCode) };


    // applyMessage Field Functions 
    bool hasApplyMessage() const { return this->applyMessage_ != nullptr;};
    void deleteApplyMessage() { this->applyMessage_ = nullptr;};
    inline string applyMessage() const { DARABONBA_PTR_GET_DEFAULT(applyMessage_, "") };
    inline GetCertificateResponseBodyResult& setApplyMessage(string applyMessage) { DARABONBA_PTR_SET_VALUE(applyMessage_, applyMessage) };


    // casId Field Functions 
    bool hasCasId() const { return this->casId_ != nullptr;};
    void deleteCasId() { this->casId_ = nullptr;};
    inline string casId() const { DARABONBA_PTR_GET_DEFAULT(casId_, "") };
    inline GetCertificateResponseBodyResult& setCasId(string casId) { DARABONBA_PTR_SET_VALUE(casId_, casId) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline GetCertificateResponseBodyResult& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetCertificateResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // DCV Field Functions 
    bool hasDCV() const { return this->DCV_ != nullptr;};
    void deleteDCV() { this->DCV_ = nullptr;};
    inline const vector<Models::GetCertificateResponseBodyResultDCV> & DCV() const { DARABONBA_PTR_GET_CONST(DCV_, vector<Models::GetCertificateResponseBodyResultDCV>) };
    inline vector<Models::GetCertificateResponseBodyResultDCV> DCV() { DARABONBA_PTR_GET(DCV_, vector<Models::GetCertificateResponseBodyResultDCV>) };
    inline GetCertificateResponseBodyResult& setDCV(const vector<Models::GetCertificateResponseBodyResultDCV> & DCV) { DARABONBA_PTR_SET_VALUE(DCV_, DCV) };
    inline GetCertificateResponseBodyResult& setDCV(vector<Models::GetCertificateResponseBodyResultDCV> && DCV) { DARABONBA_PTR_SET_RVALUE(DCV_, DCV) };


    // fingerprintSha256 Field Functions 
    bool hasFingerprintSha256() const { return this->fingerprintSha256_ != nullptr;};
    void deleteFingerprintSha256() { this->fingerprintSha256_ = nullptr;};
    inline string fingerprintSha256() const { DARABONBA_PTR_GET_DEFAULT(fingerprintSha256_, "") };
    inline GetCertificateResponseBodyResult& setFingerprintSha256(string fingerprintSha256) { DARABONBA_PTR_SET_VALUE(fingerprintSha256_, fingerprintSha256) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline GetCertificateResponseBodyResult& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // issuer Field Functions 
    bool hasIssuer() const { return this->issuer_ != nullptr;};
    void deleteIssuer() { this->issuer_ = nullptr;};
    inline string issuer() const { DARABONBA_PTR_GET_DEFAULT(issuer_, "") };
    inline GetCertificateResponseBodyResult& setIssuer(string issuer) { DARABONBA_PTR_SET_VALUE(issuer_, issuer) };


    // issuerCN Field Functions 
    bool hasIssuerCN() const { return this->issuerCN_ != nullptr;};
    void deleteIssuerCN() { this->issuerCN_ = nullptr;};
    inline string issuerCN() const { DARABONBA_PTR_GET_DEFAULT(issuerCN_, "") };
    inline GetCertificateResponseBodyResult& setIssuerCN(string issuerCN) { DARABONBA_PTR_SET_VALUE(issuerCN_, issuerCN) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetCertificateResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // notAfter Field Functions 
    bool hasNotAfter() const { return this->notAfter_ != nullptr;};
    void deleteNotAfter() { this->notAfter_ = nullptr;};
    inline string notAfter() const { DARABONBA_PTR_GET_DEFAULT(notAfter_, "") };
    inline GetCertificateResponseBodyResult& setNotAfter(string notAfter) { DARABONBA_PTR_SET_VALUE(notAfter_, notAfter) };


    // notBefore Field Functions 
    bool hasNotBefore() const { return this->notBefore_ != nullptr;};
    void deleteNotBefore() { this->notBefore_ = nullptr;};
    inline string notBefore() const { DARABONBA_PTR_GET_DEFAULT(notBefore_, "") };
    inline GetCertificateResponseBodyResult& setNotBefore(string notBefore) { DARABONBA_PTR_SET_VALUE(notBefore_, notBefore) };


    // pubAlg Field Functions 
    bool hasPubAlg() const { return this->pubAlg_ != nullptr;};
    void deletePubAlg() { this->pubAlg_ = nullptr;};
    inline string pubAlg() const { DARABONBA_PTR_GET_DEFAULT(pubAlg_, "") };
    inline GetCertificateResponseBodyResult& setPubAlg(string pubAlg) { DARABONBA_PTR_SET_VALUE(pubAlg_, pubAlg) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline GetCertificateResponseBodyResult& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // SAN Field Functions 
    bool hasSAN() const { return this->SAN_ != nullptr;};
    void deleteSAN() { this->SAN_ = nullptr;};
    inline string SAN() const { DARABONBA_PTR_GET_DEFAULT(SAN_, "") };
    inline GetCertificateResponseBodyResult& setSAN(string SAN) { DARABONBA_PTR_SET_VALUE(SAN_, SAN) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline GetCertificateResponseBodyResult& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // sigAlg Field Functions 
    bool hasSigAlg() const { return this->sigAlg_ != nullptr;};
    void deleteSigAlg() { this->sigAlg_ = nullptr;};
    inline string sigAlg() const { DARABONBA_PTR_GET_DEFAULT(sigAlg_, "") };
    inline GetCertificateResponseBodyResult& setSigAlg(string sigAlg) { DARABONBA_PTR_SET_VALUE(sigAlg_, sigAlg) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCertificateResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCertificateResponseBodyResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetCertificateResponseBodyResult& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The error code returned for certificate application.
    std::shared_ptr<int64_t> applyCode_ = nullptr;
    // The error message returned for certificate application.
    std::shared_ptr<string> applyMessage_ = nullptr;
    // Cloud certificate ID.
    std::shared_ptr<string> casId_ = nullptr;
    // Common Name (CN) field of the certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // Creation time.
    std::shared_ptr<string> createTime_ = nullptr;
    // The Domain Control Validation (DCV) information.
    std::shared_ptr<vector<Models::GetCertificateResponseBodyResultDCV>> DCV_ = nullptr;
    // SHA256 fingerprint of the certificate.
    std::shared_ptr<string> fingerprintSha256_ = nullptr;
    // Certificate ID.
    std::shared_ptr<string> id_ = nullptr;
    // Certificate issuer.
    std::shared_ptr<string> issuer_ = nullptr;
    // Certificate issuing authority.
    std::shared_ptr<string> issuerCN_ = nullptr;
    // Certificate name.
    std::shared_ptr<string> name_ = nullptr;
    // End time of the certificate validity period.
    std::shared_ptr<string> notAfter_ = nullptr;
    // Start time of the certificate validity period.
    std::shared_ptr<string> notBefore_ = nullptr;
    // Certificate public key algorithm.
    std::shared_ptr<string> pubAlg_ = nullptr;
    // Region.
    std::shared_ptr<string> region_ = nullptr;
    // Subject Alternative Name (SAN) of the certificate.
    std::shared_ptr<string> SAN_ = nullptr;
    // Serial number of the certificate.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // Certificate signature algorithm.
    std::shared_ptr<string> sigAlg_ = nullptr;
    // Certificate status.
    std::shared_ptr<string> status_ = nullptr;
    // Certificate type.
    std::shared_ptr<string> type_ = nullptr;
    // Update time.
    std::shared_ptr<string> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
