// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORIGINCACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETORIGINCACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetOriginCaCertificateResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetOriginCaCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOriginCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetOriginCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetOriginCaCertificateResponseBody() = default ;
    GetOriginCaCertificateResponseBody(const GetOriginCaCertificateResponseBody &) = default ;
    GetOriginCaCertificateResponseBody(GetOriginCaCertificateResponseBody &&) = default ;
    GetOriginCaCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOriginCaCertificateResponseBody() = default ;
    GetOriginCaCertificateResponseBody& operator=(const GetOriginCaCertificateResponseBody &) = default ;
    GetOriginCaCertificateResponseBody& operator=(GetOriginCaCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certificate_ == nullptr
        && return this->requestId_ == nullptr && return this->result_ == nullptr && return this->siteId_ == nullptr && return this->siteName_ == nullptr && return this->status_ == nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline GetOriginCaCertificateResponseBody& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetOriginCaCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetOriginCaCertificateResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetOriginCaCertificateResponseBodyResult) };
    inline GetOriginCaCertificateResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetOriginCaCertificateResponseBodyResult) };
    inline GetOriginCaCertificateResponseBody& setResult(const GetOriginCaCertificateResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetOriginCaCertificateResponseBody& setResult(GetOriginCaCertificateResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetOriginCaCertificateResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetOriginCaCertificateResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetOriginCaCertificateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The certificate content.
    std::shared_ptr<string> certificate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The certificate information.
    std::shared_ptr<GetOriginCaCertificateResponseBodyResult> result_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
    // The status of the certificate.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
