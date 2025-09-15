// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBCERTRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBCERTRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class ListDeploymentJobCertResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobCertResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
      DARABONBA_PTR_TO_JSON(CertInstanceId, certInstanceId_);
      DARABONBA_PTR_TO_JSON(CertName, certName_);
      DARABONBA_PTR_TO_JSON(CertOrderType, certOrderType_);
      DARABONBA_PTR_TO_JSON(CertType, certType_);
      DARABONBA_PTR_TO_JSON(CommonName, commonName_);
      DARABONBA_PTR_TO_JSON(IsTrustee, isTrustee_);
      DARABONBA_PTR_TO_JSON(Month, month_);
      DARABONBA_PTR_TO_JSON(NotAfterTime, notAfterTime_);
      DARABONBA_PTR_TO_JSON(NotBeforeTime, notBeforeTime_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Sans, sans_);
      DARABONBA_PTR_TO_JSON(StatusCode, statusCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobCertResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Algorithm, algorithm_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
      DARABONBA_PTR_FROM_JSON(CertInstanceId, certInstanceId_);
      DARABONBA_PTR_FROM_JSON(CertName, certName_);
      DARABONBA_PTR_FROM_JSON(CertOrderType, certOrderType_);
      DARABONBA_PTR_FROM_JSON(CertType, certType_);
      DARABONBA_PTR_FROM_JSON(CommonName, commonName_);
      DARABONBA_PTR_FROM_JSON(IsTrustee, isTrustee_);
      DARABONBA_PTR_FROM_JSON(Month, month_);
      DARABONBA_PTR_FROM_JSON(NotAfterTime, notAfterTime_);
      DARABONBA_PTR_FROM_JSON(NotBeforeTime, notBeforeTime_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Sans, sans_);
      DARABONBA_PTR_FROM_JSON(StatusCode, statusCode_);
    };
    ListDeploymentJobCertResponseBodyData() = default ;
    ListDeploymentJobCertResponseBodyData(const ListDeploymentJobCertResponseBodyData &) = default ;
    ListDeploymentJobCertResponseBodyData(ListDeploymentJobCertResponseBodyData &&) = default ;
    ListDeploymentJobCertResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobCertResponseBodyData() = default ;
    ListDeploymentJobCertResponseBodyData& operator=(const ListDeploymentJobCertResponseBodyData &) = default ;
    ListDeploymentJobCertResponseBodyData& operator=(ListDeploymentJobCertResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->algorithm_ != nullptr
        && this->certId_ != nullptr && this->certInstanceId_ != nullptr && this->certName_ != nullptr && this->certOrderType_ != nullptr && this->certType_ != nullptr
        && this->commonName_ != nullptr && this->isTrustee_ != nullptr && this->month_ != nullptr && this->notAfterTime_ != nullptr && this->notBeforeTime_ != nullptr
        && this->orderId_ != nullptr && this->sans_ != nullptr && this->statusCode_ != nullptr; };
    // algorithm Field Functions 
    bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
    void deleteAlgorithm() { this->algorithm_ = nullptr;};
    inline string algorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
    inline ListDeploymentJobCertResponseBodyData& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline ListDeploymentJobCertResponseBodyData& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


    // certInstanceId Field Functions 
    bool hasCertInstanceId() const { return this->certInstanceId_ != nullptr;};
    void deleteCertInstanceId() { this->certInstanceId_ = nullptr;};
    inline string certInstanceId() const { DARABONBA_PTR_GET_DEFAULT(certInstanceId_, "") };
    inline ListDeploymentJobCertResponseBodyData& setCertInstanceId(string certInstanceId) { DARABONBA_PTR_SET_VALUE(certInstanceId_, certInstanceId) };


    // certName Field Functions 
    bool hasCertName() const { return this->certName_ != nullptr;};
    void deleteCertName() { this->certName_ = nullptr;};
    inline string certName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
    inline ListDeploymentJobCertResponseBodyData& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


    // certOrderType Field Functions 
    bool hasCertOrderType() const { return this->certOrderType_ != nullptr;};
    void deleteCertOrderType() { this->certOrderType_ = nullptr;};
    inline string certOrderType() const { DARABONBA_PTR_GET_DEFAULT(certOrderType_, "") };
    inline ListDeploymentJobCertResponseBodyData& setCertOrderType(string certOrderType) { DARABONBA_PTR_SET_VALUE(certOrderType_, certOrderType) };


    // certType Field Functions 
    bool hasCertType() const { return this->certType_ != nullptr;};
    void deleteCertType() { this->certType_ = nullptr;};
    inline string certType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
    inline ListDeploymentJobCertResponseBodyData& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


    // commonName Field Functions 
    bool hasCommonName() const { return this->commonName_ != nullptr;};
    void deleteCommonName() { this->commonName_ = nullptr;};
    inline string commonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
    inline ListDeploymentJobCertResponseBodyData& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


    // isTrustee Field Functions 
    bool hasIsTrustee() const { return this->isTrustee_ != nullptr;};
    void deleteIsTrustee() { this->isTrustee_ = nullptr;};
    inline bool isTrustee() const { DARABONBA_PTR_GET_DEFAULT(isTrustee_, false) };
    inline ListDeploymentJobCertResponseBodyData& setIsTrustee(bool isTrustee) { DARABONBA_PTR_SET_VALUE(isTrustee_, isTrustee) };


    // month Field Functions 
    bool hasMonth() const { return this->month_ != nullptr;};
    void deleteMonth() { this->month_ = nullptr;};
    inline int32_t month() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
    inline ListDeploymentJobCertResponseBodyData& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


    // notAfterTime Field Functions 
    bool hasNotAfterTime() const { return this->notAfterTime_ != nullptr;};
    void deleteNotAfterTime() { this->notAfterTime_ = nullptr;};
    inline int64_t notAfterTime() const { DARABONBA_PTR_GET_DEFAULT(notAfterTime_, 0L) };
    inline ListDeploymentJobCertResponseBodyData& setNotAfterTime(int64_t notAfterTime) { DARABONBA_PTR_SET_VALUE(notAfterTime_, notAfterTime) };


    // notBeforeTime Field Functions 
    bool hasNotBeforeTime() const { return this->notBeforeTime_ != nullptr;};
    void deleteNotBeforeTime() { this->notBeforeTime_ = nullptr;};
    inline int64_t notBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(notBeforeTime_, 0L) };
    inline ListDeploymentJobCertResponseBodyData& setNotBeforeTime(int64_t notBeforeTime) { DARABONBA_PTR_SET_VALUE(notBeforeTime_, notBeforeTime) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ListDeploymentJobCertResponseBodyData& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // sans Field Functions 
    bool hasSans() const { return this->sans_ != nullptr;};
    void deleteSans() { this->sans_ = nullptr;};
    inline const vector<string> & sans() const { DARABONBA_PTR_GET_CONST(sans_, vector<string>) };
    inline vector<string> sans() { DARABONBA_PTR_GET(sans_, vector<string>) };
    inline ListDeploymentJobCertResponseBodyData& setSans(const vector<string> & sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };
    inline ListDeploymentJobCertResponseBodyData& setSans(vector<string> && sans) { DARABONBA_PTR_SET_RVALUE(sans_, sans) };


    // statusCode Field Functions 
    bool hasStatusCode() const { return this->statusCode_ != nullptr;};
    void deleteStatusCode() { this->statusCode_ = nullptr;};
    inline string statusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
    inline ListDeploymentJobCertResponseBodyData& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


  protected:
    // The algorithm of the certificate public key.
    std::shared_ptr<string> algorithm_ = nullptr;
    // The ID of the certificate.
    std::shared_ptr<int64_t> certId_ = nullptr;
    // The instance ID of the certificate.
    std::shared_ptr<string> certInstanceId_ = nullptr;
    // The name of the certificate.
    std::shared_ptr<string> certName_ = nullptr;
    // The type of the certificate order. Valid values:
    // 
    // *   **upload**: uploaded certificate.
    // *   **buy**: purchased certificate.
    // *   **free**: free certificate. This value is available only on the China site (aliyun.com).
    std::shared_ptr<string> certOrderType_ = nullptr;
    // The type of the certificate.
    std::shared_ptr<string> certType_ = nullptr;
    // The common name of the certificate.
    std::shared_ptr<string> commonName_ = nullptr;
    // Indicates whether the certificate is hosted. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isTrustee_ = nullptr;
    // The month in which the certificate is applied for.
    std::shared_ptr<int32_t> month_ = nullptr;
    // The end time of the validity period of the certificate. The value is a timestamp in seconds.
    std::shared_ptr<int64_t> notAfterTime_ = nullptr;
    // The start time of the validity period of the certificate. The value is a timestamp in seconds.
    std::shared_ptr<int64_t> notBeforeTime_ = nullptr;
    // The ID of the certificate order.
    // 
    // >  If CertId is returned, this parameter is not returned.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The subject alternative name (SAN) extensions of the certificate.
    std::shared_ptr<vector<string>> sans_ = nullptr;
    // The status code of the certificate. Valid values:
    // 
    // *   **payed**: paid and pending application
    // *   **checking**: being validated
    // *   **checkedFail**: validation failed
    // *   **revoked**: revoked
    // *   **revokeChecking**: revocation request being validated
    // *   **issued**: issued (excluding hosted certificates that are issued, certificates that are about to expire, expired certificates, and uploaded certificates)
    // *   **trustee**: hosted and issued
    // *   **upload**: uploaded (excluding certificates that are about to expire and expired certificates)
    // *   **willExpired**: about to expire (including certificates issued by using the Certificate Management Service console and uploaded certificates)
    // *   **expired**: expired (including certificates issued by using the Certificate Management Service console and uploaded certificates)
    // *   **validity**: valid (including certificates that are not expired or revoked)
    // *   **refund**: refunded
    // *   **closed**: closed
    std::shared_ptr<string> statusCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
