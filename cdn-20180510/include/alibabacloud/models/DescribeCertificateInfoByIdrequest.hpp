// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECERTIFICATEINFOBYIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCertificateInfoByIDRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCertificateInfoByIDRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertId, certId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCertificateInfoByIDRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
    };
    DescribeCertificateInfoByIDRequest() = default ;
    DescribeCertificateInfoByIDRequest(const DescribeCertificateInfoByIDRequest &) = default ;
    DescribeCertificateInfoByIDRequest(DescribeCertificateInfoByIDRequest &&) = default ;
    DescribeCertificateInfoByIDRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCertificateInfoByIDRequest() = default ;
    DescribeCertificateInfoByIDRequest& operator=(const DescribeCertificateInfoByIDRequest &) = default ;
    DescribeCertificateInfoByIDRequest& operator=(DescribeCertificateInfoByIDRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certId_ != nullptr; };
    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline string certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, "") };
    inline DescribeCertificateInfoByIDRequest& setCertId(string certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


  protected:
    // The ID of the certificate. You can query only one certificate in each call.
    // 
    // This parameter is required.
    std::shared_ptr<string> certId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
