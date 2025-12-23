// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERCERTIFICATEDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERCERTIFICATEDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cas20200407
{
namespace Models
{
  class GetUserCertificateDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserCertificateDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CertFilter, certFilter_);
      DARABONBA_PTR_TO_JSON(CertId, certId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserCertificateDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CertFilter, certFilter_);
      DARABONBA_PTR_FROM_JSON(CertId, certId_);
    };
    GetUserCertificateDetailRequest() = default ;
    GetUserCertificateDetailRequest(const GetUserCertificateDetailRequest &) = default ;
    GetUserCertificateDetailRequest(GetUserCertificateDetailRequest &&) = default ;
    GetUserCertificateDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserCertificateDetailRequest() = default ;
    GetUserCertificateDetailRequest& operator=(const GetUserCertificateDetailRequest &) = default ;
    GetUserCertificateDetailRequest& operator=(GetUserCertificateDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certFilter_ == nullptr
        && return this->certId_ == nullptr; };
    // certFilter Field Functions 
    bool hasCertFilter() const { return this->certFilter_ != nullptr;};
    void deleteCertFilter() { this->certFilter_ = nullptr;};
    inline bool certFilter() const { DARABONBA_PTR_GET_DEFAULT(certFilter_, false) };
    inline GetUserCertificateDetailRequest& setCertFilter(bool certFilter) { DARABONBA_PTR_SET_VALUE(certFilter_, certFilter) };


    // certId Field Functions 
    bool hasCertId() const { return this->certId_ != nullptr;};
    void deleteCertId() { this->certId_ = nullptr;};
    inline int64_t certId() const { DARABONBA_PTR_GET_DEFAULT(certId_, 0L) };
    inline GetUserCertificateDetailRequest& setCertId(int64_t certId) { DARABONBA_PTR_SET_VALUE(certId_, certId) };


  protected:
    // Specifies whether to filter return results. Valid values: true and false. Default value: false. **true** specifies that the Cert, Key, EncryptCert, EncryptPrivateKey, SignCert, and SignPrivateKey parameters are not returned. **false** specifies that the parameters are returned.
    std::shared_ptr<bool> certFilter_ = nullptr;
    // The ID of the certificate.
    // 
    // >  You can call the [ListUserCertificateOrder](https://help.aliyun.com/document_detail/455804.html) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> certId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cas20200407
#endif
