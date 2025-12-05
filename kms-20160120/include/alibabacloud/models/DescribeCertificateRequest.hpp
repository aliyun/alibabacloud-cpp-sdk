// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Kms20160120
{
namespace Models
{
  class DescribeCertificateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    DescribeCertificateRequest() = default ;
    DescribeCertificateRequest(const DescribeCertificateRequest &) = default ;
    DescribeCertificateRequest(DescribeCertificateRequest &&) = default ;
    DescribeCertificateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateRequest() = default ;
    DescribeCertificateRequest& operator=(const DescribeCertificateRequest &) = default ;
    DescribeCertificateRequest& operator=(DescribeCertificateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificateId_ == nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline DescribeCertificateRequest& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The ID of the certificate. The ID must be globally unique in Certificates Manager.
    // 
    // This parameter is required.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Kms20160120
#endif
