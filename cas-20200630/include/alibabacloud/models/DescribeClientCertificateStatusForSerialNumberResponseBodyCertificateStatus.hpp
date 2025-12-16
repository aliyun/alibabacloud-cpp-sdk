// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATESTATUSFORSERIALNUMBERRESPONSEBODYCERTIFICATESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATESTATUSFORSERIALNUMBERRESPONSEBODYCERTIFICATESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus& obj) { 
      DARABONBA_PTR_TO_JSON(RevokeTime, revokeTime_);
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(RevokeTime, revokeTime_);
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus() = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus(const DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus &) = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus(DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus &&) = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus() = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus& operator=(const DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus &) = default ;
    DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus& operator=(DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->revokeTime_ == nullptr
        && return this->serialNumber_ == nullptr && return this->status_ == nullptr; };
    // revokeTime Field Functions 
    bool hasRevokeTime() const { return this->revokeTime_ != nullptr;};
    void deleteRevokeTime() { this->revokeTime_ = nullptr;};
    inline int64_t revokeTime() const { DARABONBA_PTR_GET_DEFAULT(revokeTime_, 0L) };
    inline DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus& setRevokeTime(int64_t revokeTime) { DARABONBA_PTR_SET_VALUE(revokeTime_, revokeTime) };


    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string serialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeClientCertificateStatusForSerialNumberResponseBodyCertificateStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The date on which the certificate was revoked.
    // 
    // >  This parameter is returned only when the value of the **Status** parameter is **revoked**. The value revoked indicates that the certificate is revoked.
    std::shared_ptr<int64_t> revokeTime_ = nullptr;
    // The serial number of the certificate.
    std::shared_ptr<string> serialNumber_ = nullptr;
    // The status of the certificate. Valid values:
    // 
    // *   **good**: The certificate is not revoked.
    // *   **revoked**: The certificate is revoked.
    // *   **unknown**: The server cannot determine the status of the certificate.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
