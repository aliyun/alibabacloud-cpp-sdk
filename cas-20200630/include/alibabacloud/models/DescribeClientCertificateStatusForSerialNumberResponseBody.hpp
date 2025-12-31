// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATESTATUSFORSERIALNUMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATESTATUSFORSERIALNUMBERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeClientCertificateStatusForSerialNumberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientCertificateStatusForSerialNumberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientCertificateStatusForSerialNumberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateStatus, certificateStatus_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClientCertificateStatusForSerialNumberResponseBody() = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBody(const DescribeClientCertificateStatusForSerialNumberResponseBody &) = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBody(DescribeClientCertificateStatusForSerialNumberResponseBody &&) = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientCertificateStatusForSerialNumberResponseBody() = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBody& operator=(const DescribeClientCertificateStatusForSerialNumberResponseBody &) = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBody& operator=(DescribeClientCertificateStatusForSerialNumberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CertificateStatus : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CertificateStatus& obj) { 
        DARABONBA_PTR_TO_JSON(RevokeTime, revokeTime_);
        DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, CertificateStatus& obj) { 
        DARABONBA_PTR_FROM_JSON(RevokeTime, revokeTime_);
        DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      CertificateStatus() = default ;
      CertificateStatus(const CertificateStatus &) = default ;
      CertificateStatus(CertificateStatus &&) = default ;
      CertificateStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CertificateStatus() = default ;
      CertificateStatus& operator=(const CertificateStatus &) = default ;
      CertificateStatus& operator=(CertificateStatus &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->revokeTime_ == nullptr
        && this->serialNumber_ == nullptr && this->status_ == nullptr; };
      // revokeTime Field Functions 
      bool hasRevokeTime() const { return this->revokeTime_ != nullptr;};
      void deleteRevokeTime() { this->revokeTime_ = nullptr;};
      inline int64_t getRevokeTime() const { DARABONBA_PTR_GET_DEFAULT(revokeTime_, 0L) };
      inline CertificateStatus& setRevokeTime(int64_t revokeTime) { DARABONBA_PTR_SET_VALUE(revokeTime_, revokeTime) };


      // serialNumber Field Functions 
      bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
      void deleteSerialNumber() { this->serialNumber_ = nullptr;};
      inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
      inline CertificateStatus& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline CertificateStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // The date on which the certificate was revoked.
      // 
      // >  This parameter is returned only when the value of the **Status** parameter is **revoked**. The value revoked indicates that the certificate is revoked.
      shared_ptr<int64_t> revokeTime_ {};
      // The serial number of the certificate.
      shared_ptr<string> serialNumber_ {};
      // The status of the certificate. Valid values:
      // 
      // *   **good**: The certificate is not revoked.
      // *   **revoked**: The certificate is revoked.
      // *   **unknown**: The server cannot determine the status of the certificate.
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->certificateStatus_ == nullptr
        && this->requestId_ == nullptr; };
    // certificateStatus Field Functions 
    bool hasCertificateStatus() const { return this->certificateStatus_ != nullptr;};
    void deleteCertificateStatus() { this->certificateStatus_ = nullptr;};
    inline const vector<DescribeClientCertificateStatusForSerialNumberResponseBody::CertificateStatus> & getCertificateStatus() const { DARABONBA_PTR_GET_CONST(certificateStatus_, vector<DescribeClientCertificateStatusForSerialNumberResponseBody::CertificateStatus>) };
    inline vector<DescribeClientCertificateStatusForSerialNumberResponseBody::CertificateStatus> getCertificateStatus() { DARABONBA_PTR_GET(certificateStatus_, vector<DescribeClientCertificateStatusForSerialNumberResponseBody::CertificateStatus>) };
    inline DescribeClientCertificateStatusForSerialNumberResponseBody& setCertificateStatus(const vector<DescribeClientCertificateStatusForSerialNumberResponseBody::CertificateStatus> & certificateStatus) { DARABONBA_PTR_SET_VALUE(certificateStatus_, certificateStatus) };
    inline DescribeClientCertificateStatusForSerialNumberResponseBody& setCertificateStatus(vector<DescribeClientCertificateStatusForSerialNumberResponseBody::CertificateStatus> && certificateStatus) { DARABONBA_PTR_SET_RVALUE(certificateStatus_, certificateStatus) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClientCertificateStatusForSerialNumberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The object.
    shared_ptr<vector<DescribeClientCertificateStatusForSerialNumberResponseBody::CertificateStatus>> certificateStatus_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
