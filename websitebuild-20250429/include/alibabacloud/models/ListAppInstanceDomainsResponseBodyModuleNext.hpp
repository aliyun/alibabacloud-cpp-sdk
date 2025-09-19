// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULENEXT_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULENEXT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleNextCertificate.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleNextOwnership.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleNextResolution.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleNextVerification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBodyModuleNext : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBodyModuleNext& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OverallStatus, overallStatus_);
      DARABONBA_PTR_TO_JSON(Ownership, ownership_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Verification, verification_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBodyModuleNext& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OverallStatus, overallStatus_);
      DARABONBA_PTR_FROM_JSON(Ownership, ownership_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Verification, verification_);
    };
    ListAppInstanceDomainsResponseBodyModuleNext() = default ;
    ListAppInstanceDomainsResponseBodyModuleNext(const ListAppInstanceDomainsResponseBodyModuleNext &) = default ;
    ListAppInstanceDomainsResponseBodyModuleNext(ListAppInstanceDomainsResponseBodyModuleNext &&) = default ;
    ListAppInstanceDomainsResponseBodyModuleNext(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBodyModuleNext() = default ;
    ListAppInstanceDomainsResponseBodyModuleNext& operator=(const ListAppInstanceDomainsResponseBodyModuleNext &) = default ;
    ListAppInstanceDomainsResponseBodyModuleNext& operator=(ListAppInstanceDomainsResponseBodyModuleNext &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->certificate_ != nullptr
        && this->createTime_ != nullptr && this->domainName_ != nullptr && this->overallStatus_ != nullptr && this->ownership_ != nullptr && this->resolution_ != nullptr
        && this->verification_ != nullptr; };
    // certificate Field Functions 
    bool hasCertificate() const { return this->certificate_ != nullptr;};
    void deleteCertificate() { this->certificate_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleNextCertificate & certificate() const { DARABONBA_PTR_GET_CONST(certificate_, Models::ListAppInstanceDomainsResponseBodyModuleNextCertificate) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleNextCertificate certificate() { DARABONBA_PTR_GET(certificate_, Models::ListAppInstanceDomainsResponseBodyModuleNextCertificate) };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setCertificate(const Models::ListAppInstanceDomainsResponseBodyModuleNextCertificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setCertificate(Models::ListAppInstanceDomainsResponseBodyModuleNextCertificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // overallStatus Field Functions 
    bool hasOverallStatus() const { return this->overallStatus_ != nullptr;};
    void deleteOverallStatus() { this->overallStatus_ = nullptr;};
    inline string overallStatus() const { DARABONBA_PTR_GET_DEFAULT(overallStatus_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setOverallStatus(string overallStatus) { DARABONBA_PTR_SET_VALUE(overallStatus_, overallStatus) };


    // ownership Field Functions 
    bool hasOwnership() const { return this->ownership_ != nullptr;};
    void deleteOwnership() { this->ownership_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleNextOwnership & ownership() const { DARABONBA_PTR_GET_CONST(ownership_, Models::ListAppInstanceDomainsResponseBodyModuleNextOwnership) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleNextOwnership ownership() { DARABONBA_PTR_GET(ownership_, Models::ListAppInstanceDomainsResponseBodyModuleNextOwnership) };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setOwnership(const Models::ListAppInstanceDomainsResponseBodyModuleNextOwnership & ownership) { DARABONBA_PTR_SET_VALUE(ownership_, ownership) };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setOwnership(Models::ListAppInstanceDomainsResponseBodyModuleNextOwnership && ownership) { DARABONBA_PTR_SET_RVALUE(ownership_, ownership) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleNextResolution & resolution() const { DARABONBA_PTR_GET_CONST(resolution_, Models::ListAppInstanceDomainsResponseBodyModuleNextResolution) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleNextResolution resolution() { DARABONBA_PTR_GET(resolution_, Models::ListAppInstanceDomainsResponseBodyModuleNextResolution) };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setResolution(const Models::ListAppInstanceDomainsResponseBodyModuleNextResolution & resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setResolution(Models::ListAppInstanceDomainsResponseBodyModuleNextResolution && resolution) { DARABONBA_PTR_SET_RVALUE(resolution_, resolution) };


    // verification Field Functions 
    bool hasVerification() const { return this->verification_ != nullptr;};
    void deleteVerification() { this->verification_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleNextVerification & verification() const { DARABONBA_PTR_GET_CONST(verification_, Models::ListAppInstanceDomainsResponseBodyModuleNextVerification) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleNextVerification verification() { DARABONBA_PTR_GET(verification_, Models::ListAppInstanceDomainsResponseBodyModuleNextVerification) };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setVerification(const Models::ListAppInstanceDomainsResponseBodyModuleNextVerification & verification) { DARABONBA_PTR_SET_VALUE(verification_, verification) };
    inline ListAppInstanceDomainsResponseBodyModuleNext& setVerification(Models::ListAppInstanceDomainsResponseBodyModuleNextVerification && verification) { DARABONBA_PTR_SET_RVALUE(verification_, verification) };


  protected:
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleNextCertificate> certificate_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> overallStatus_ = nullptr;
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleNextOwnership> ownership_ = nullptr;
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleNextResolution> resolution_ = nullptr;
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleNextVerification> verification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
