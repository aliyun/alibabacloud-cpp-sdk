// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYCERTIFICATES_HPP_
#define ALIBABACLOUD_MODELS_GETLISTENERATTRIBUTERESPONSEBODYCERTIFICATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alb20200616
{
namespace Models
{
  class GetListenerAttributeResponseBodyCertificates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetListenerAttributeResponseBodyCertificates& obj) { 
      DARABONBA_PTR_TO_JSON(CertificateId, certificateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetListenerAttributeResponseBodyCertificates& obj) { 
      DARABONBA_PTR_FROM_JSON(CertificateId, certificateId_);
    };
    GetListenerAttributeResponseBodyCertificates() = default ;
    GetListenerAttributeResponseBodyCertificates(const GetListenerAttributeResponseBodyCertificates &) = default ;
    GetListenerAttributeResponseBodyCertificates(GetListenerAttributeResponseBodyCertificates &&) = default ;
    GetListenerAttributeResponseBodyCertificates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetListenerAttributeResponseBodyCertificates() = default ;
    GetListenerAttributeResponseBodyCertificates& operator=(const GetListenerAttributeResponseBodyCertificates &) = default ;
    GetListenerAttributeResponseBodyCertificates& operator=(GetListenerAttributeResponseBodyCertificates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificateId_ != nullptr; };
    // certificateId Field Functions 
    bool hasCertificateId() const { return this->certificateId_ != nullptr;};
    void deleteCertificateId() { this->certificateId_ = nullptr;};
    inline string certificateId() const { DARABONBA_PTR_GET_DEFAULT(certificateId_, "") };
    inline GetListenerAttributeResponseBodyCertificates& setCertificateId(string certificateId) { DARABONBA_PTR_SET_VALUE(certificateId_, certificateId) };


  protected:
    // The ID of the certificate. Only server certificates are supported.
    std::shared_ptr<string> certificateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alb20200616
#endif
