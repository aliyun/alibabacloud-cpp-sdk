// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLIENTCACERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLIENTCACERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetClientCaCertificateResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetClientCaCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClientCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetClientCaCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetClientCaCertificateResponseBody() = default ;
    GetClientCaCertificateResponseBody(const GetClientCaCertificateResponseBody &) = default ;
    GetClientCaCertificateResponseBody(GetClientCaCertificateResponseBody &&) = default ;
    GetClientCaCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClientCaCertificateResponseBody() = default ;
    GetClientCaCertificateResponseBody& operator=(const GetClientCaCertificateResponseBody &) = default ;
    GetClientCaCertificateResponseBody& operator=(GetClientCaCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificate_ != nullptr
        && this->requestId_ != nullptr && this->result_ != nullptr && this->siteId_ != nullptr && this->siteName_ != nullptr && this->status_ != nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline string certificate() const { DARABONBA_PTR_GET_DEFAULT(certificate_, "") };
    inline GetClientCaCertificateResponseBody& setCertificate(string certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClientCaCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const GetClientCaCertificateResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, GetClientCaCertificateResponseBodyResult) };
    inline GetClientCaCertificateResponseBodyResult result() { DARABONBA_PTR_GET(result_, GetClientCaCertificateResponseBodyResult) };
    inline GetClientCaCertificateResponseBody& setResult(const GetClientCaCertificateResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetClientCaCertificateResponseBody& setResult(GetClientCaCertificateResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline GetClientCaCertificateResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline GetClientCaCertificateResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetClientCaCertificateResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The certificate content.
    std::shared_ptr<string> certificate_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The certificate information.
    std::shared_ptr<GetClientCaCertificateResponseBodyResult> result_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
    // The certificate status.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
