// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATESTATUSFORSERIALNUMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLIENTCERTIFICATESTATUSFORSERIALNUMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200630
{
namespace Models
{
  class DescribeClientCertificateStatusForSerialNumberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClientCertificateStatusForSerialNumberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SerialNumber, serialNumber_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClientCertificateStatusForSerialNumberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SerialNumber, serialNumber_);
    };
    DescribeClientCertificateStatusForSerialNumberRequest() = default ;
    DescribeClientCertificateStatusForSerialNumberRequest(const DescribeClientCertificateStatusForSerialNumberRequest &) = default ;
    DescribeClientCertificateStatusForSerialNumberRequest(DescribeClientCertificateStatusForSerialNumberRequest &&) = default ;
    DescribeClientCertificateStatusForSerialNumberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClientCertificateStatusForSerialNumberRequest() = default ;
    DescribeClientCertificateStatusForSerialNumberRequest& operator=(const DescribeClientCertificateStatusForSerialNumberRequest &) = default ;
    DescribeClientCertificateStatusForSerialNumberRequest& operator=(DescribeClientCertificateStatusForSerialNumberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->serialNumber_ == nullptr; };
    // serialNumber Field Functions 
    bool hasSerialNumber() const { return this->serialNumber_ != nullptr;};
    void deleteSerialNumber() { this->serialNumber_ = nullptr;};
    inline string getSerialNumber() const { DARABONBA_PTR_GET_DEFAULT(serialNumber_, "") };
    inline DescribeClientCertificateStatusForSerialNumberRequest& setSerialNumber(string serialNumber) { DARABONBA_PTR_SET_VALUE(serialNumber_, serialNumber) };


  protected:
    // The serial number of the certificate.
    // 
    // This parameter is required.
    shared_ptr<string> serialNumber_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200630
#endif
