// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTLSINSPECTCERTIFICATEDOWNLOADURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTLSINSPECTCERTIFICATEDOWNLOADURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class GetTlsInspectCertificateDownloadUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTlsInspectCertificateDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CaCertId, caCertId_);
      DARABONBA_PTR_TO_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetTlsInspectCertificateDownloadUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CaCertId, caCertId_);
      DARABONBA_PTR_FROM_JSON(DownloadUrl, downloadUrl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetTlsInspectCertificateDownloadUrlResponseBody() = default ;
    GetTlsInspectCertificateDownloadUrlResponseBody(const GetTlsInspectCertificateDownloadUrlResponseBody &) = default ;
    GetTlsInspectCertificateDownloadUrlResponseBody(GetTlsInspectCertificateDownloadUrlResponseBody &&) = default ;
    GetTlsInspectCertificateDownloadUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTlsInspectCertificateDownloadUrlResponseBody() = default ;
    GetTlsInspectCertificateDownloadUrlResponseBody& operator=(const GetTlsInspectCertificateDownloadUrlResponseBody &) = default ;
    GetTlsInspectCertificateDownloadUrlResponseBody& operator=(GetTlsInspectCertificateDownloadUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caCertId_ == nullptr
        && return this->downloadUrl_ == nullptr && return this->requestId_ == nullptr; };
    // caCertId Field Functions 
    bool hasCaCertId() const { return this->caCertId_ != nullptr;};
    void deleteCaCertId() { this->caCertId_ = nullptr;};
    inline string caCertId() const { DARABONBA_PTR_GET_DEFAULT(caCertId_, "") };
    inline GetTlsInspectCertificateDownloadUrlResponseBody& setCaCertId(string caCertId) { DARABONBA_PTR_SET_VALUE(caCertId_, caCertId) };


    // downloadUrl Field Functions 
    bool hasDownloadUrl() const { return this->downloadUrl_ != nullptr;};
    void deleteDownloadUrl() { this->downloadUrl_ = nullptr;};
    inline string downloadUrl() const { DARABONBA_PTR_GET_DEFAULT(downloadUrl_, "") };
    inline GetTlsInspectCertificateDownloadUrlResponseBody& setDownloadUrl(string downloadUrl) { DARABONBA_PTR_SET_VALUE(downloadUrl_, downloadUrl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTlsInspectCertificateDownloadUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> caCertId_ = nullptr;
    std::shared_ptr<string> downloadUrl_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
