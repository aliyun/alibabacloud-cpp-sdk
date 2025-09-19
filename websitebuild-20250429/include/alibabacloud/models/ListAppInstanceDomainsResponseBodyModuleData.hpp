// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULEDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTAPPINSTANCEDOMAINSRESPONSEBODYMODULEDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleDataCertificate.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleDataOwnership.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleDataResolution.hpp>
#include <alibabacloud/models/ListAppInstanceDomainsResponseBodyModuleDataVerification.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class ListAppInstanceDomainsResponseBodyModuleData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAppInstanceDomainsResponseBodyModuleData& obj) { 
      DARABONBA_PTR_TO_JSON(Certificate, certificate_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OverallStatus, overallStatus_);
      DARABONBA_PTR_TO_JSON(Ownership, ownership_);
      DARABONBA_PTR_TO_JSON(Resolution, resolution_);
      DARABONBA_PTR_TO_JSON(Verification, verification_);
    };
    friend void from_json(const Darabonba::Json& j, ListAppInstanceDomainsResponseBodyModuleData& obj) { 
      DARABONBA_PTR_FROM_JSON(Certificate, certificate_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OverallStatus, overallStatus_);
      DARABONBA_PTR_FROM_JSON(Ownership, ownership_);
      DARABONBA_PTR_FROM_JSON(Resolution, resolution_);
      DARABONBA_PTR_FROM_JSON(Verification, verification_);
    };
    ListAppInstanceDomainsResponseBodyModuleData() = default ;
    ListAppInstanceDomainsResponseBodyModuleData(const ListAppInstanceDomainsResponseBodyModuleData &) = default ;
    ListAppInstanceDomainsResponseBodyModuleData(ListAppInstanceDomainsResponseBodyModuleData &&) = default ;
    ListAppInstanceDomainsResponseBodyModuleData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAppInstanceDomainsResponseBodyModuleData() = default ;
    ListAppInstanceDomainsResponseBodyModuleData& operator=(const ListAppInstanceDomainsResponseBodyModuleData &) = default ;
    ListAppInstanceDomainsResponseBodyModuleData& operator=(ListAppInstanceDomainsResponseBodyModuleData &&) = default ;
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
    inline const Models::ListAppInstanceDomainsResponseBodyModuleDataCertificate & certificate() const { DARABONBA_PTR_GET_CONST(certificate_, Models::ListAppInstanceDomainsResponseBodyModuleDataCertificate) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleDataCertificate certificate() { DARABONBA_PTR_GET(certificate_, Models::ListAppInstanceDomainsResponseBodyModuleDataCertificate) };
    inline ListAppInstanceDomainsResponseBodyModuleData& setCertificate(const Models::ListAppInstanceDomainsResponseBodyModuleDataCertificate & certificate) { DARABONBA_PTR_SET_VALUE(certificate_, certificate) };
    inline ListAppInstanceDomainsResponseBodyModuleData& setCertificate(Models::ListAppInstanceDomainsResponseBodyModuleDataCertificate && certificate) { DARABONBA_PTR_SET_RVALUE(certificate_, certificate) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleData& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleData& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // overallStatus Field Functions 
    bool hasOverallStatus() const { return this->overallStatus_ != nullptr;};
    void deleteOverallStatus() { this->overallStatus_ = nullptr;};
    inline string overallStatus() const { DARABONBA_PTR_GET_DEFAULT(overallStatus_, "") };
    inline ListAppInstanceDomainsResponseBodyModuleData& setOverallStatus(string overallStatus) { DARABONBA_PTR_SET_VALUE(overallStatus_, overallStatus) };


    // ownership Field Functions 
    bool hasOwnership() const { return this->ownership_ != nullptr;};
    void deleteOwnership() { this->ownership_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleDataOwnership & ownership() const { DARABONBA_PTR_GET_CONST(ownership_, Models::ListAppInstanceDomainsResponseBodyModuleDataOwnership) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleDataOwnership ownership() { DARABONBA_PTR_GET(ownership_, Models::ListAppInstanceDomainsResponseBodyModuleDataOwnership) };
    inline ListAppInstanceDomainsResponseBodyModuleData& setOwnership(const Models::ListAppInstanceDomainsResponseBodyModuleDataOwnership & ownership) { DARABONBA_PTR_SET_VALUE(ownership_, ownership) };
    inline ListAppInstanceDomainsResponseBodyModuleData& setOwnership(Models::ListAppInstanceDomainsResponseBodyModuleDataOwnership && ownership) { DARABONBA_PTR_SET_RVALUE(ownership_, ownership) };


    // resolution Field Functions 
    bool hasResolution() const { return this->resolution_ != nullptr;};
    void deleteResolution() { this->resolution_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleDataResolution & resolution() const { DARABONBA_PTR_GET_CONST(resolution_, Models::ListAppInstanceDomainsResponseBodyModuleDataResolution) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleDataResolution resolution() { DARABONBA_PTR_GET(resolution_, Models::ListAppInstanceDomainsResponseBodyModuleDataResolution) };
    inline ListAppInstanceDomainsResponseBodyModuleData& setResolution(const Models::ListAppInstanceDomainsResponseBodyModuleDataResolution & resolution) { DARABONBA_PTR_SET_VALUE(resolution_, resolution) };
    inline ListAppInstanceDomainsResponseBodyModuleData& setResolution(Models::ListAppInstanceDomainsResponseBodyModuleDataResolution && resolution) { DARABONBA_PTR_SET_RVALUE(resolution_, resolution) };


    // verification Field Functions 
    bool hasVerification() const { return this->verification_ != nullptr;};
    void deleteVerification() { this->verification_ = nullptr;};
    inline const Models::ListAppInstanceDomainsResponseBodyModuleDataVerification & verification() const { DARABONBA_PTR_GET_CONST(verification_, Models::ListAppInstanceDomainsResponseBodyModuleDataVerification) };
    inline Models::ListAppInstanceDomainsResponseBodyModuleDataVerification verification() { DARABONBA_PTR_GET(verification_, Models::ListAppInstanceDomainsResponseBodyModuleDataVerification) };
    inline ListAppInstanceDomainsResponseBodyModuleData& setVerification(const Models::ListAppInstanceDomainsResponseBodyModuleDataVerification & verification) { DARABONBA_PTR_SET_VALUE(verification_, verification) };
    inline ListAppInstanceDomainsResponseBodyModuleData& setVerification(Models::ListAppInstanceDomainsResponseBodyModuleDataVerification && verification) { DARABONBA_PTR_SET_RVALUE(verification_, verification) };


  protected:
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleDataCertificate> certificate_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<string> overallStatus_ = nullptr;
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleDataOwnership> ownership_ = nullptr;
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleDataResolution> resolution_ = nullptr;
    std::shared_ptr<Models::ListAppInstanceDomainsResponseBodyModuleDataVerification> verification_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
