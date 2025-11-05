// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINDETAILRESPONSEBODYGETDOMAINDETAILMODEL_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECDNDOMAINDETAILRESPONSEBODYGETDOMAINDETAILMODEL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeCdnDomainDetailResponseBodyGetDomainDetailModel : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& obj) { 
      DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
      DARABONBA_PTR_TO_JSON(Cname, cname_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(HttpsCname, httpsCname_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Scope, scope_);
      DARABONBA_PTR_TO_JSON(ServerCertificateStatus, serverCertificateStatus_);
      DARABONBA_PTR_TO_JSON(SourceModels, sourceModels_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
      DARABONBA_PTR_FROM_JSON(Cname, cname_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(GmtCreated, gmtCreated_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(HttpsCname, httpsCname_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Scope, scope_);
      DARABONBA_PTR_FROM_JSON(ServerCertificateStatus, serverCertificateStatus_);
      DARABONBA_PTR_FROM_JSON(SourceModels, sourceModels_);
    };
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModel() = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModel(const DescribeCdnDomainDetailResponseBodyGetDomainDetailModel &) = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModel(DescribeCdnDomainDetailResponseBodyGetDomainDetailModel &&) = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModel(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCdnDomainDetailResponseBodyGetDomainDetailModel() = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& operator=(const DescribeCdnDomainDetailResponseBodyGetDomainDetailModel &) = default ;
    DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& operator=(DescribeCdnDomainDetailResponseBodyGetDomainDetailModel &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cdnType_ == nullptr
        && return this->cname_ == nullptr && return this->description_ == nullptr && return this->domainName_ == nullptr && return this->domainStatus_ == nullptr && return this->gmtCreated_ == nullptr
        && return this->gmtModified_ == nullptr && return this->httpsCname_ == nullptr && return this->resourceGroupId_ == nullptr && return this->scope_ == nullptr && return this->serverCertificateStatus_ == nullptr
        && return this->sourceModels_ == nullptr; };
    // cdnType Field Functions 
    bool hasCdnType() const { return this->cdnType_ != nullptr;};
    void deleteCdnType() { this->cdnType_ = nullptr;};
    inline string cdnType() const { DARABONBA_PTR_GET_DEFAULT(cdnType_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setCdnType(string cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };


    // cname Field Functions 
    bool hasCname() const { return this->cname_ != nullptr;};
    void deleteCname() { this->cname_ = nullptr;};
    inline string cname() const { DARABONBA_PTR_GET_DEFAULT(cname_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setCname(string cname) { DARABONBA_PTR_SET_VALUE(cname_, cname) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // gmtCreated Field Functions 
    bool hasGmtCreated() const { return this->gmtCreated_ != nullptr;};
    void deleteGmtCreated() { this->gmtCreated_ = nullptr;};
    inline string gmtCreated() const { DARABONBA_PTR_GET_DEFAULT(gmtCreated_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setGmtCreated(string gmtCreated) { DARABONBA_PTR_SET_VALUE(gmtCreated_, gmtCreated) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string gmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // httpsCname Field Functions 
    bool hasHttpsCname() const { return this->httpsCname_ != nullptr;};
    void deleteHttpsCname() { this->httpsCname_ = nullptr;};
    inline string httpsCname() const { DARABONBA_PTR_GET_DEFAULT(httpsCname_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setHttpsCname(string httpsCname) { DARABONBA_PTR_SET_VALUE(httpsCname_, httpsCname) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // scope Field Functions 
    bool hasScope() const { return this->scope_ != nullptr;};
    void deleteScope() { this->scope_ = nullptr;};
    inline string scope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


    // serverCertificateStatus Field Functions 
    bool hasServerCertificateStatus() const { return this->serverCertificateStatus_ != nullptr;};
    void deleteServerCertificateStatus() { this->serverCertificateStatus_ = nullptr;};
    inline string serverCertificateStatus() const { DARABONBA_PTR_GET_DEFAULT(serverCertificateStatus_, "") };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setServerCertificateStatus(string serverCertificateStatus) { DARABONBA_PTR_SET_VALUE(serverCertificateStatus_, serverCertificateStatus) };


    // sourceModels Field Functions 
    bool hasSourceModels() const { return this->sourceModels_ != nullptr;};
    void deleteSourceModels() { this->sourceModels_ = nullptr;};
    inline const Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels & sourceModels() const { DARABONBA_PTR_GET_CONST(sourceModels_, Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels) };
    inline Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels sourceModels() { DARABONBA_PTR_GET(sourceModels_, Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels) };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setSourceModels(const Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels & sourceModels) { DARABONBA_PTR_SET_VALUE(sourceModels_, sourceModels) };
    inline DescribeCdnDomainDetailResponseBodyGetDomainDetailModel& setSourceModels(Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels && sourceModels) { DARABONBA_PTR_SET_RVALUE(sourceModels_, sourceModels) };


  protected:
    // The workload type of the accelerated domain name. Valid values:
    // 
    // *   **web**: images and small files
    // *   **download**: large files
    // *   **video**: on-demand video and audio streaming
    std::shared_ptr<string> cdnType_ = nullptr;
    // The CNAME that is assigned to the accelerated domain name. You must add the CNAME record in the system of your DNS service provider to map the accelerated domain name to the CNAME.
    std::shared_ptr<string> cname_ = nullptr;
    // The description of the domain name.
    std::shared_ptr<string> description_ = nullptr;
    // The accelerated domain name.
    std::shared_ptr<string> domainName_ = nullptr;
    // The status of the accelerated domain name. Valid values:
    // 
    // *   **online**
    // *   **offline**
    // *   **configuring**
    // *   **configure_failed**
    // *   **checking**
    // *   **check_failed**
    // *   **stopping**
    // *   **deleting**
    std::shared_ptr<string> domainStatus_ = nullptr;
    // The time when the domain name was created.
    std::shared_ptr<string> gmtCreated_ = nullptr;
    // The time when the domain name was last modified.
    std::shared_ptr<string> gmtModified_ = nullptr;
    // The CNAME for which HTTPS is enabled.
    std::shared_ptr<string> httpsCname_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The acceleration region.
    std::shared_ptr<string> scope_ = nullptr;
    // Indicates whether the SSL certificate is enabled. Valid values:
    // 
    // *   **on**
    // *   **off**
    std::shared_ptr<string> serverCertificateStatus_ = nullptr;
    // The information about the origin server.
    std::shared_ptr<Models::DescribeCdnDomainDetailResponseBodyGetDomainDetailModelSourceModels> sourceModels_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
