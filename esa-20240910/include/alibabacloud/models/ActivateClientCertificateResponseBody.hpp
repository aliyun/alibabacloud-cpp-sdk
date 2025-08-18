// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATECLIENTCERTIFICATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATECLIENTCERTIFICATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class ActivateClientCertificateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteName, siteName_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateClientCertificateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteName, siteName_);
    };
    ActivateClientCertificateResponseBody() = default ;
    ActivateClientCertificateResponseBody(const ActivateClientCertificateResponseBody &) = default ;
    ActivateClientCertificateResponseBody(ActivateClientCertificateResponseBody &&) = default ;
    ActivateClientCertificateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateClientCertificateResponseBody() = default ;
    ActivateClientCertificateResponseBody& operator=(const ActivateClientCertificateResponseBody &) = default ;
    ActivateClientCertificateResponseBody& operator=(ActivateClientCertificateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->requestId_ != nullptr && this->siteId_ != nullptr && this->siteName_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ActivateClientCertificateResponseBody& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ActivateClientCertificateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t siteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline ActivateClientCertificateResponseBody& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteName Field Functions 
    bool hasSiteName() const { return this->siteName_ != nullptr;};
    void deleteSiteName() { this->siteName_ = nullptr;};
    inline string siteName() const { DARABONBA_PTR_GET_DEFAULT(siteName_, "") };
    inline ActivateClientCertificateResponseBody& setSiteName(string siteName) { DARABONBA_PTR_SET_VALUE(siteName_, siteName) };


  protected:
    // The certificate ID.
    std::shared_ptr<string> id_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The website ID.
    std::shared_ptr<int64_t> siteId_ = nullptr;
    // The website name.
    std::shared_ptr<string> siteName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
