// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTLSINSPECTCERTIFICATEDOWNLOADURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETTLSINSPECTCERTIFICATEDOWNLOADURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class GetTlsInspectCertificateDownloadUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTlsInspectCertificateDownloadUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertId, caCertId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTlsInspectCertificateDownloadUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertId, caCertId_);
    };
    GetTlsInspectCertificateDownloadUrlRequest() = default ;
    GetTlsInspectCertificateDownloadUrlRequest(const GetTlsInspectCertificateDownloadUrlRequest &) = default ;
    GetTlsInspectCertificateDownloadUrlRequest(GetTlsInspectCertificateDownloadUrlRequest &&) = default ;
    GetTlsInspectCertificateDownloadUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTlsInspectCertificateDownloadUrlRequest() = default ;
    GetTlsInspectCertificateDownloadUrlRequest& operator=(const GetTlsInspectCertificateDownloadUrlRequest &) = default ;
    GetTlsInspectCertificateDownloadUrlRequest& operator=(GetTlsInspectCertificateDownloadUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCertId_ == nullptr; };
    // caCertId Field Functions 
    bool hasCaCertId() const { return this->caCertId_ != nullptr;};
    void deleteCaCertId() { this->caCertId_ = nullptr;};
    inline string caCertId() const { DARABONBA_PTR_GET_DEFAULT(caCertId_, "") };
    inline GetTlsInspectCertificateDownloadUrlRequest& setCaCertId(string caCertId) { DARABONBA_PTR_SET_VALUE(caCertId_, caCertId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> caCertId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
