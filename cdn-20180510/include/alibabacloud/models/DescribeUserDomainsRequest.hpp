// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeUserDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CdnType, cdnType_);
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
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CdnType, cdnType_);
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
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeUserDomainsRequest() = default ;
    DescribeUserDomainsRequest(const DescribeUserDomainsRequest &) = default ;
    DescribeUserDomainsRequest(DescribeUserDomainsRequest &&) = default ;
    DescribeUserDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserDomainsRequest() = default ;
    DescribeUserDomainsRequest& operator=(const DescribeUserDomainsRequest &) = default ;
    DescribeUserDomainsRequest& operator=(DescribeUserDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The key of a tag.
      // 
      // By default, all tag keys are queried.
      shared_ptr<string> key_ {};
      // The value of the tag.
      // 
      // By default, all tag values are queried.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->cdnType_ == nullptr
        && this->changeEndTime_ == nullptr && this->changeStartTime_ == nullptr && this->checkDomainShow_ == nullptr && this->coverage_ == nullptr && this->domainName_ == nullptr
        && this->domainSearchType_ == nullptr && this->domainStatus_ == nullptr && this->ownerId_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->resourceGroupId_ == nullptr && this->securityToken_ == nullptr && this->source_ == nullptr && this->tag_ == nullptr; };
    // cdnType Field Functions 
    bool hasCdnType() const { return this->cdnType_ != nullptr;};
    void deleteCdnType() { this->cdnType_ = nullptr;};
    inline string getCdnType() const { DARABONBA_PTR_GET_DEFAULT(cdnType_, "") };
    inline DescribeUserDomainsRequest& setCdnType(string cdnType) { DARABONBA_PTR_SET_VALUE(cdnType_, cdnType) };


    // changeEndTime Field Functions 
    bool hasChangeEndTime() const { return this->changeEndTime_ != nullptr;};
    void deleteChangeEndTime() { this->changeEndTime_ = nullptr;};
    inline string getChangeEndTime() const { DARABONBA_PTR_GET_DEFAULT(changeEndTime_, "") };
    inline DescribeUserDomainsRequest& setChangeEndTime(string changeEndTime) { DARABONBA_PTR_SET_VALUE(changeEndTime_, changeEndTime) };


    // changeStartTime Field Functions 
    bool hasChangeStartTime() const { return this->changeStartTime_ != nullptr;};
    void deleteChangeStartTime() { this->changeStartTime_ = nullptr;};
    inline string getChangeStartTime() const { DARABONBA_PTR_GET_DEFAULT(changeStartTime_, "") };
    inline DescribeUserDomainsRequest& setChangeStartTime(string changeStartTime) { DARABONBA_PTR_SET_VALUE(changeStartTime_, changeStartTime) };


    // checkDomainShow Field Functions 
    bool hasCheckDomainShow() const { return this->checkDomainShow_ != nullptr;};
    void deleteCheckDomainShow() { this->checkDomainShow_ = nullptr;};
    inline bool getCheckDomainShow() const { DARABONBA_PTR_GET_DEFAULT(checkDomainShow_, false) };
    inline DescribeUserDomainsRequest& setCheckDomainShow(bool checkDomainShow) { DARABONBA_PTR_SET_VALUE(checkDomainShow_, checkDomainShow) };


    // coverage Field Functions 
    bool hasCoverage() const { return this->coverage_ != nullptr;};
    void deleteCoverage() { this->coverage_ = nullptr;};
    inline string getCoverage() const { DARABONBA_PTR_GET_DEFAULT(coverage_, "") };
    inline DescribeUserDomainsRequest& setCoverage(string coverage) { DARABONBA_PTR_SET_VALUE(coverage_, coverage) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeUserDomainsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSearchType Field Functions 
    bool hasDomainSearchType() const { return this->domainSearchType_ != nullptr;};
    void deleteDomainSearchType() { this->domainSearchType_ = nullptr;};
    inline string getDomainSearchType() const { DARABONBA_PTR_GET_DEFAULT(domainSearchType_, "") };
    inline DescribeUserDomainsRequest& setDomainSearchType(string domainSearchType) { DARABONBA_PTR_SET_VALUE(domainSearchType_, domainSearchType) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string getDomainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeUserDomainsRequest& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeUserDomainsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeUserDomainsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeUserDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeUserDomainsRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string getSecurityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeUserDomainsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeUserDomainsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeUserDomainsRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeUserDomainsRequest::Tag>) };
    inline vector<DescribeUserDomainsRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<DescribeUserDomainsRequest::Tag>) };
    inline DescribeUserDomainsRequest& setTag(const vector<DescribeUserDomainsRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeUserDomainsRequest& setTag(vector<DescribeUserDomainsRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The type of workload accelerated by Alibaba Cloud CDN. Separate types with commas (,). Valid values:
    // 
    // *   **web**: images and small files
    // *   **download**: large files
    // *   **video**: on-demand video and audio streaming
    // 
    // If you do not set this parameter, all service types are queried.
    shared_ptr<string> cdnType_ {};
    // The end of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // > The end time must be later than the start time.
    shared_ptr<string> changeEndTime_ {};
    // The beginning of the time range to query. Specify the time in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    shared_ptr<string> changeStartTime_ {};
    // Specifies whether to display domain names that are under review, failed the review, or failed to be configured. Valid values:
    // 
    // *   **true**
    // *   **false**
    shared_ptr<bool> checkDomainShow_ {};
    // The acceleration region. By default, all acceleration regions are queried. Valid values:
    // 
    // *   **domestic**: Chinese mainland
    // *   **global**: global
    // *   **overseas**: outside the Chinese mainland
    shared_ptr<string> coverage_ {};
    // The accelerated domain. If you do not set this parameter, all domain names that match the conditions are returned.
    shared_ptr<string> domainName_ {};
    // The search mode. Valid values:
    // 
    // *   **fuzzy_match**: fuzzy match
    // *   **pre_match**: prefix match
    // *   **suf_match**: suffix match
    // *   **full_match** (default): exact match
    // 
    // > If you specify the domain names to query but do not set the DomainSearchType parameter, the exact match mode is used.
    shared_ptr<string> domainSearchType_ {};
    // The status of the domain name. Valid values:
    // 
    // *   **online**
    // *   **offline**
    // *   **configuring**
    // *   **configure_failed**
    // *   **checking**
    // *   **check_failed**
    // *   **stopping**
    // *   **deleting**
    // 
    // If you do not set this parameter, domain names in all states are queried.
    shared_ptr<string> domainStatus_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The page number. Valid values: **1** to **100000**.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values: **1 to 500**. Default value: **20**. Maximum value: **500**.
    shared_ptr<int32_t> pageSize_ {};
    // The ID of the resource group. By default, all IDs are queried.
    shared_ptr<string> resourceGroupId_ {};
    shared_ptr<string> securityToken_ {};
    // The information about the origin server.
    shared_ptr<string> source_ {};
    // The list of tags. Maximum number of elements in the list: 20
    shared_ptr<vector<DescribeUserDomainsRequest::Tag>> tag_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
