// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDCDNUSERDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDcdnUserDomainsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class DescribeDcdnUserDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDcdnUserDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChangeEndTime, changeEndTime_);
      DARABONBA_PTR_TO_JSON(ChangeStartTime, changeStartTime_);
      DARABONBA_PTR_TO_JSON(CheckDomainShow, checkDomainShow_);
      DARABONBA_PTR_TO_JSON(Coverage, coverage_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(WebSiteType, webSiteType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDcdnUserDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChangeEndTime, changeEndTime_);
      DARABONBA_PTR_FROM_JSON(ChangeStartTime, changeStartTime_);
      DARABONBA_PTR_FROM_JSON(CheckDomainShow, checkDomainShow_);
      DARABONBA_PTR_FROM_JSON(Coverage, coverage_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(WebSiteType, webSiteType_);
    };
    DescribeDcdnUserDomainsRequest() = default ;
    DescribeDcdnUserDomainsRequest(const DescribeDcdnUserDomainsRequest &) = default ;
    DescribeDcdnUserDomainsRequest(DescribeDcdnUserDomainsRequest &&) = default ;
    DescribeDcdnUserDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDcdnUserDomainsRequest() = default ;
    DescribeDcdnUserDomainsRequest& operator=(const DescribeDcdnUserDomainsRequest &) = default ;
    DescribeDcdnUserDomainsRequest& operator=(DescribeDcdnUserDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->changeEndTime_ != nullptr
        && this->changeStartTime_ != nullptr && this->checkDomainShow_ != nullptr && this->coverage_ != nullptr && this->domainName_ != nullptr && this->domainSearchType_ != nullptr
        && this->domainStatus_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->resourceGroupId_ != nullptr
        && this->securityToken_ != nullptr && this->tag_ != nullptr && this->webSiteType_ != nullptr; };
    // changeEndTime Field Functions 
    bool hasChangeEndTime() const { return this->changeEndTime_ != nullptr;};
    void deleteChangeEndTime() { this->changeEndTime_ = nullptr;};
    inline string changeEndTime() const { DARABONBA_PTR_GET_DEFAULT(changeEndTime_, "") };
    inline DescribeDcdnUserDomainsRequest& setChangeEndTime(string changeEndTime) { DARABONBA_PTR_SET_VALUE(changeEndTime_, changeEndTime) };


    // changeStartTime Field Functions 
    bool hasChangeStartTime() const { return this->changeStartTime_ != nullptr;};
    void deleteChangeStartTime() { this->changeStartTime_ = nullptr;};
    inline string changeStartTime() const { DARABONBA_PTR_GET_DEFAULT(changeStartTime_, "") };
    inline DescribeDcdnUserDomainsRequest& setChangeStartTime(string changeStartTime) { DARABONBA_PTR_SET_VALUE(changeStartTime_, changeStartTime) };


    // checkDomainShow Field Functions 
    bool hasCheckDomainShow() const { return this->checkDomainShow_ != nullptr;};
    void deleteCheckDomainShow() { this->checkDomainShow_ = nullptr;};
    inline bool checkDomainShow() const { DARABONBA_PTR_GET_DEFAULT(checkDomainShow_, false) };
    inline DescribeDcdnUserDomainsRequest& setCheckDomainShow(bool checkDomainShow) { DARABONBA_PTR_SET_VALUE(checkDomainShow_, checkDomainShow) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string coverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline DescribeDcdnUserDomainsRequest& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeDcdnUserDomainsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSearchType Field Functions 
    bool hasDomainSearchType() const { return this->domainSearchType_ != nullptr;};
    void deleteDomainSearchType() { this->domainSearchType_ = nullptr;};
    inline string domainSearchType() const { DARABONBA_PTR_GET_DEFAULT(domainSearchType_, "") };
    inline DescribeDcdnUserDomainsRequest& setDomainSearchType(string domainSearchType) { DARABONBA_PTR_SET_VALUE(domainSearchType_, domainSearchType) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeDcdnUserDomainsRequest& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeDcdnUserDomainsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDcdnUserDomainsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDcdnUserDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeDcdnUserDomainsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeDcdnUserDomainsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeDcdnUserDomainsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeDcdnUserDomainsRequestTag>) };
    inline vector<DescribeDcdnUserDomainsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeDcdnUserDomainsRequestTag>) };
    inline DescribeDcdnUserDomainsRequest& setTag(const vector<DescribeDcdnUserDomainsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeDcdnUserDomainsRequest& setTag(vector<DescribeDcdnUserDomainsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // webSiteType Field Functions 
    bool hasWebSiteType() const { return this->webSiteType_ != nullptr;};
    void deleteWebSiteType() { this->webSiteType_ = nullptr;};
    inline string webSiteType() const { DARABONBA_PTR_GET_DEFAULT(webSiteType_, "") };
    inline DescribeDcdnUserDomainsRequest& setWebSiteType(string webSiteType) { DARABONBA_PTR_SET_VALUE(webSiteType_, webSiteType) };


  protected:
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    // 
    // > The end time must be later than the start time.
    std::shared_ptr<string> changeEndTime_ = nullptr;
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC+0.
    std::shared_ptr<string> changeStartTime_ = nullptr;
    // Specifies whether to display domain names that are under review, failed the review, or failed to be configured. Valid values:
    // 
    // *   true: displays domain names.
    // *   false: does not display detailed information.
    std::shared_ptr<bool> checkDomainShow_ = nullptr;
    // The acceleration region. By default, all acceleration regions are queried.
    // 
    // *   **domestic**: Chinese mainland
    // *   **overseas**: outside the Chinese mainland
    // *   **global**: global
    std::shared_ptr<string> coverage_ = nullptr;
    // The accelerated domain names. If you do not set this parameter, configurations of all domain names that match the conditions are returned.
    std::shared_ptr<string> domainName_ = nullptr;
    // The search method. Default value: full_match. Valid values:
    // 
    // *   **fuzzy_match**: fuzzy match
    // *   **pre_match**: prefix match
    // *   **suf_match**: suffix match
    // *   **full_match** (default): exact match
    // 
    // > If you specify the domain names to query but do not set the DomainSearchType parameter, the exact match mode is used.
    std::shared_ptr<string> domainSearchType_ = nullptr;
    // The status of the domain name. Valid values:
    // 
    // *   **online**: enabled
    // *   **offline**: disabled
    // *   **configuring**: configuring
    // *   **configure_failed**: configuration failed
    // *   **checking**: reviewing
    // *   **check_failed:** review failed
    std::shared_ptr<string> domainStatus_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The number of returned pages. Valid values: **1** to **100000**.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: **20**. Valid values: **1** to **500**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<DescribeDcdnUserDomainsRequestTag>> tag_ = nullptr;
    // The business type of the domain. Separate multiple values with commas (,). Default value: **dynamic**. To query common domains, keep the default value. To query domains of the computing business type, enter **computing_routine** or **computing_image**.
    std::shared_ptr<string> webSiteType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
