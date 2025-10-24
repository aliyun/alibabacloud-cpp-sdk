// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDomainDetailResponseBodyCertDetail.hpp>
#include <alibabacloud/models/DescribeDomainDetailResponseBodyListen.hpp>
#include <alibabacloud/models/DescribeDomainDetailResponseBodyRedirect.hpp>
#include <alibabacloud/models/DescribeDomainDetailResponseBodySM2CertDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDomainDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(DomainId, domainId_);
      DARABONBA_PTR_TO_JSON(Listen, listen_);
      DARABONBA_PTR_TO_JSON(Redirect, redirect_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_TO_JSON(SM2CertDetail, SM2CertDetail_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CertDetail, certDetail_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(DomainId, domainId_);
      DARABONBA_PTR_FROM_JSON(Listen, listen_);
      DARABONBA_PTR_FROM_JSON(Redirect, redirect_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceManagerResourceGroupId, resourceManagerResourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SM2CertDetail, SM2CertDetail_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    DescribeDomainDetailResponseBody() = default ;
    DescribeDomainDetailResponseBody(const DescribeDomainDetailResponseBody &) = default ;
    DescribeDomainDetailResponseBody(DescribeDomainDetailResponseBody &&) = default ;
    DescribeDomainDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainDetailResponseBody() = default ;
    DescribeDomainDetailResponseBody& operator=(const DescribeDomainDetailResponseBody &) = default ;
    DescribeDomainDetailResponseBody& operator=(DescribeDomainDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->certDetail_ == nullptr
        && return this->cname_ == nullptr && return this->domain_ == nullptr && return this->domainId_ == nullptr && return this->listen_ == nullptr && return this->redirect_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceManagerResourceGroupId_ == nullptr && return this->SM2CertDetail_ == nullptr && return this->status_ == nullptr; };
    // certDetail Field Functions 
    bool hasCertDetail() const { return this->certDetail_ != nullptr;};
    void deleteCertDetail() { this->certDetail_ = nullptr;};
    inline const DescribeDomainDetailResponseBodyCertDetail & certDetail() const { DARABONBA_PTR_GET_CONST(certDetail_, DescribeDomainDetailResponseBodyCertDetail) };
    inline DescribeDomainDetailResponseBodyCertDetail certDetail() { DARABONBA_PTR_GET(certDetail_, DescribeDomainDetailResponseBodyCertDetail) };
    inline DescribeDomainDetailResponseBody& setCertDetail(const DescribeDomainDetailResponseBodyCertDetail & certDetail) { DARABONBA_PTR_SET_VALUE(certDetail_, certDetail) };
    inline DescribeDomainDetailResponseBody& setCertDetail(DescribeDomainDetailResponseBodyCertDetail && certDetail) { DARABONBA_PTR_SET_RVALUE(certDetail_, certDetail) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeDomainDetailResponseBody& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeDomainDetailResponseBody& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // domainId Field Functions 
    bool hasDomainId() const { return this->domainId_ != nullptr;};
    void deleteDomainId() { this->domainId_ = nullptr;};
    inline string domainId() const { DARABONBA_PTR_GET_DEFAULT(domainId_, "") };
    inline DescribeDomainDetailResponseBody& setDomainId(string domainId) { DARABONBA_PTR_SET_VALUE(domainId_, domainId) };


    // listen Field Functions 
    bool hasListen() const { return this->listen_ != nullptr;};
    void deleteListen() { this->listen_ = nullptr;};
    inline const DescribeDomainDetailResponseBodyListen & listen() const { DARABONBA_PTR_GET_CONST(listen_, DescribeDomainDetailResponseBodyListen) };
    inline DescribeDomainDetailResponseBodyListen listen() { DARABONBA_PTR_GET(listen_, DescribeDomainDetailResponseBodyListen) };
    inline DescribeDomainDetailResponseBody& setListen(const DescribeDomainDetailResponseBodyListen & listen) { DARABONBA_PTR_SET_VALUE(listen_, listen) };
    inline DescribeDomainDetailResponseBody& setListen(DescribeDomainDetailResponseBodyListen && listen) { DARABONBA_PTR_SET_RVALUE(listen_, listen) };


    // redirect Field Functions 
    bool hasRedirect() const { return this->redirect_ != nullptr;};
    void deleteRedirect() { this->redirect_ = nullptr;};
    inline const DescribeDomainDetailResponseBodyRedirect & redirect() const { DARABONBA_PTR_GET_CONST(redirect_, DescribeDomainDetailResponseBodyRedirect) };
    inline DescribeDomainDetailResponseBodyRedirect redirect() { DARABONBA_PTR_GET(redirect_, DescribeDomainDetailResponseBodyRedirect) };
    inline DescribeDomainDetailResponseBody& setRedirect(const DescribeDomainDetailResponseBodyRedirect & redirect) { DARABONBA_PTR_SET_VALUE(redirect_, redirect) };
    inline DescribeDomainDetailResponseBody& setRedirect(DescribeDomainDetailResponseBodyRedirect && redirect) { DARABONBA_PTR_SET_RVALUE(redirect_, redirect) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceManagerResourceGroupId Field Functions 
    bool hasResourceManagerResourceGroupId() const { return this->resourceManagerResourceGroupId_ != nullptr;};
    void deleteResourceManagerResourceGroupId() { this->resourceManagerResourceGroupId_ = nullptr;};
    inline string resourceManagerResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceManagerResourceGroupId_, "") };
    inline DescribeDomainDetailResponseBody& setResourceManagerResourceGroupId(string resourceManagerResourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceManagerResourceGroupId_, resourceManagerResourceGroupId) };


    // SM2CertDetail Field Functions 
    bool hasSM2CertDetail() const { return this->SM2CertDetail_ != nullptr;};
    void deleteSM2CertDetail() { this->SM2CertDetail_ = nullptr;};
    inline const DescribeDomainDetailResponseBodySM2CertDetail & SM2CertDetail() const { DARABONBA_PTR_GET_CONST(SM2CertDetail_, DescribeDomainDetailResponseBodySM2CertDetail) };
    inline DescribeDomainDetailResponseBodySM2CertDetail SM2CertDetail() { DARABONBA_PTR_GET(SM2CertDetail_, DescribeDomainDetailResponseBodySM2CertDetail) };
    inline DescribeDomainDetailResponseBody& setSM2CertDetail(const DescribeDomainDetailResponseBodySM2CertDetail & SM2CertDetail) { DARABONBA_PTR_SET_VALUE(SM2CertDetail_, SM2CertDetail) };
    inline DescribeDomainDetailResponseBody& setSM2CertDetail(DescribeDomainDetailResponseBodySM2CertDetail && SM2CertDetail) { DARABONBA_PTR_SET_RVALUE(SM2CertDetail_, SM2CertDetail) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeDomainDetailResponseBody& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The details of the SSL certificate.
    std::shared_ptr<DescribeDomainDetailResponseBodyCertDetail> certDetail_ = nullptr;
    // The CNAME that is assigned by WAF to the domain name.
    std::shared_ptr<string> cname_ = nullptr;
    // The domain name.
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> domainId_ = nullptr;
    // The configurations of the listeners.
    std::shared_ptr<DescribeDomainDetailResponseBodyListen> listen_ = nullptr;
    // The configurations of the forwarding rule.
    std::shared_ptr<DescribeDomainDetailResponseBodyRedirect> redirect_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceManagerResourceGroupId_ = nullptr;
    // The information about the SM certificate.
    std::shared_ptr<DescribeDomainDetailResponseBodySM2CertDetail> SM2CertDetail_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **1:** The domain name is in a normal state.
    // *   **2:** The domain name is being created.
    // *   **3:** The domain name is being modified.
    // *   **4:** The domain name is being released.
    // *   **5:** WAF no longer forwards traffic of the domain name.
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
