// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBCERTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDEPLOYMENTJOBCERTRESPONSEBODY_HPP_
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
  class ListDeploymentJobCertResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeploymentJobCertResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeploymentJobCertResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDeploymentJobCertResponseBody() = default ;
    ListDeploymentJobCertResponseBody(const ListDeploymentJobCertResponseBody &) = default ;
    ListDeploymentJobCertResponseBody(ListDeploymentJobCertResponseBody &&) = default ;
    ListDeploymentJobCertResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeploymentJobCertResponseBody() = default ;
    ListDeploymentJobCertResponseBody& operator=(const ListDeploymentJobCertResponseBody &) = default ;
    ListDeploymentJobCertResponseBody& operator=(ListDeploymentJobCertResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->algorithm_ == nullptr
        && this->certId_ == nullptr && this->certInstanceId_ == nullptr && this->certName_ == nullptr && this->certOrderType_ == nullptr && this->certType_ == nullptr
        && this->commonName_ == nullptr && this->isTrustee_ == nullptr && this->month_ == nullptr && this->notAfterTime_ == nullptr && this->notBeforeTime_ == nullptr
        && this->orderId_ == nullptr && this->sans_ == nullptr && this->statusCode_ == nullptr; };
      // algorithm Field Functions 
      bool hasAlgorithm() const { return this->algorithm_ != nullptr;};
      void deleteAlgorithm() { this->algorithm_ = nullptr;};
      inline string getAlgorithm() const { DARABONBA_PTR_GET_DEFAULT(algorithm_, "") };
      inline Data& setAlgorithm(string algorithm) { DARABONBA_PTR_SET_VALUE(algorithm_, algorithm) };


      // certId Field Functions 
      bool hasCertId() const { return this->certId_ != nullptr;};
      void deleteCertId() { this->certId_ = nullptr;};
      inline int64_t getCertId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
      inline Data& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


      // certInstanceId Field Functions 
      bool hasCertInstanceId() const { return this->certInstanceId_ != nullptr;};
      void deleteCertInstanceId() { this->certInstanceId_ = nullptr;};
      inline string getCertInstanceId() const { DARABONBA_PTR_GET_DEFAULT(certInstanceId_, "") };
      inline Data& setCertInstanceId(string certInstanceId) { DARABONBA_PTR_SET_VALUE(certInstanceId_, certInstanceId) };


      // certName Field Functions 
      bool hasCertName() const { return this->certName_ != nullptr;};
      void deleteCertName() { this->certName_ = nullptr;};
      inline string getCertName() const { DARABONBA_PTR_GET_DEFAULT(certName_, "") };
      inline Data& setCertName(string certName) { DARABONBA_PTR_SET_VALUE(certName_, certName) };


      // certOrderType Field Functions 
      bool hasCertOrderType() const { return this->certOrderType_ != nullptr;};
      void deleteCertOrderType() { this->certOrderType_ = nullptr;};
      inline string getCertOrderType() const { DARABONBA_PTR_GET_DEFAULT(certOrderType_, "") };
      inline Data& setCertOrderType(string certOrderType) { DARABONBA_PTR_SET_VALUE(certOrderType_, certOrderType) };


      // certType Field Functions 
      bool hasCertType() const { return this->certType_ != nullptr;};
      void deleteCertType() { this->certType_ = nullptr;};
      inline string getCertType() const { DARABONBA_PTR_GET_DEFAULT(certType_, "") };
      inline Data& setCertType(string certType) { DARABONBA_PTR_SET_VALUE(certType_, certType) };


      // commonName Field Functions 
      bool hasCommonName() const { return this->commonName_ != nullptr;};
      void deleteCommonName() { this->commonName_ = nullptr;};
      inline string getCommonName() const { DARABONBA_PTR_GET_DEFAULT(commonName_, "") };
      inline Data& setCommonName(string commonName) { DARABONBA_PTR_SET_VALUE(commonName_, commonName) };


      // isTrustee Field Functions 
      bool hasIsTrustee() const { return this->isTrustee_ != nullptr;};
      void deleteIsTrustee() { this->isTrustee_ = nullptr;};
      inline bool getIsTrustee() const { DARABONBA_PTR_GET_DEFAULT(isTrustee_, false) };
      inline Data& setIsTrustee(bool isTrustee) { DARABONBA_PTR_SET_VALUE(isTrustee_, isTrustee) };


      // month Field Functions 
      bool hasMonth() const { return this->month_ != nullptr;};
      void deleteMonth() { this->month_ = nullptr;};
      inline int32_t getMonth() const { DARABONBA_PTR_GET_DEFAULT(month_, 0) };
      inline Data& setMonth(int32_t month) { DARABONBA_PTR_SET_VALUE(month_, month) };


      // notAfterTime Field Functions 
      bool hasNotAfterTime() const { return this->notAfterTime_ != nullptr;};
      void deleteNotAfterTime() { this->notAfterTime_ = nullptr;};
      inline int64_t getNotAfterTime() const { DARABONBA_PTR_GET_DEFAULT(notAfterTime_, 0L) };
      inline Data& setNotAfterTime(int64_t notAfterTime) { DARABONBA_PTR_SET_VALUE(notAfterTime_, notAfterTime) };


      // notBeforeTime Field Functions 
      bool hasNotBeforeTime() const { return this->notBeforeTime_ != nullptr;};
      void deleteNotBeforeTime() { this->notBeforeTime_ = nullptr;};
      inline int64_t getNotBeforeTime() const { DARABONBA_PTR_GET_DEFAULT(notBeforeTime_, 0L) };
      inline Data& setNotBeforeTime(int64_t notBeforeTime) { DARABONBA_PTR_SET_VALUE(notBeforeTime_, notBeforeTime) };


      // orderId Field Functions 
      bool hasOrderId() const { return this->orderId_ != nullptr;};
      void deleteOrderId() { this->orderId_ = nullptr;};
      inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
      inline Data& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


      // sans Field Functions 
      bool hasSans() const { return this->sans_ != nullptr;};
      void deleteSans() { this->sans_ = nullptr;};
      inline const vector<string> & getSans() const { DARABONBA_PTR_GET_CONST(sans_, vector<string>) };
      inline vector<string> getSans() { DARABONBA_PTR_GET(sans_, vector<string>) };
      inline Data& setSans(const vector<string> & sans) { DARABONBA_PTR_SET_VALUE(sans_, sans) };
      inline Data& setSans(vector<string> && sans) { DARABONBA_PTR_SET_RVALUE(sans_, sans) };


      // statusCode Field Functions 
      bool hasStatusCode() const { return this->statusCode_ != nullptr;};
      void deleteStatusCode() { this->statusCode_ = nullptr;};
      inline string getStatusCode() const { DARABONBA_PTR_GET_DEFAULT(statusCode_, "") };
      inline Data& setStatusCode(string statusCode) { DARABONBA_PTR_SET_VALUE(statusCode_, statusCode) };


    protected:
      // The algorithm of the certificate public key.
      shared_ptr<string> algorithm_ {};
      // The ID of the certificate.
      shared_ptr<int64_t> certId_ {};
      // The instance ID of the certificate.
      shared_ptr<string> certInstanceId_ {};
      // The name of the certificate.
      shared_ptr<string> certName_ {};
      // The type of the certificate order. Valid values:
      // 
      // *   **upload**: uploaded certificate.
      // *   **buy**: purchased certificate.
      // *   **free**: free certificate. This value is available only on the China site (aliyun.com).
      shared_ptr<string> certOrderType_ {};
      // The type of the certificate.
      shared_ptr<string> certType_ {};
      // The common name of the certificate.
      shared_ptr<string> commonName_ {};
      // Indicates whether the certificate is hosted. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> isTrustee_ {};
      // The month in which the certificate is applied for.
      shared_ptr<int32_t> month_ {};
      // The end time of the validity period of the certificate. The value is a timestamp in seconds.
      shared_ptr<int64_t> notAfterTime_ {};
      // The start time of the validity period of the certificate. The value is a timestamp in seconds.
      shared_ptr<int64_t> notBeforeTime_ {};
      // The ID of the certificate order.
      // 
      // >  If CertId is returned, this parameter is not returned.
      shared_ptr<int64_t> orderId_ {};
      // The subject alternative name (SAN) extensions of the certificate.
      shared_ptr<vector<string>> sans_ {};
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
      shared_ptr<string> statusCode_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListDeploymentJobCertResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListDeploymentJobCertResponseBody::Data>) };
    inline vector<ListDeploymentJobCertResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListDeploymentJobCertResponseBody::Data>) };
    inline ListDeploymentJobCertResponseBody& setData(const vector<ListDeploymentJobCertResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListDeploymentJobCertResponseBody& setData(vector<ListDeploymentJobCertResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDeploymentJobCertResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response parameters.
    shared_ptr<vector<ListDeploymentJobCertResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
