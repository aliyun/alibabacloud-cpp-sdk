// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODUSERDOMAINSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodUserDomainsRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodUserDomainsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodUserDomainsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_TO_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodUserDomainsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(DomainSearchType, domainSearchType_);
      DARABONBA_PTR_FROM_JSON(DomainStatus, domainStatus_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SecurityToken, securityToken_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeVodUserDomainsRequest() = default ;
    DescribeVodUserDomainsRequest(const DescribeVodUserDomainsRequest &) = default ;
    DescribeVodUserDomainsRequest(DescribeVodUserDomainsRequest &&) = default ;
    DescribeVodUserDomainsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodUserDomainsRequest() = default ;
    DescribeVodUserDomainsRequest& operator=(const DescribeVodUserDomainsRequest &) = default ;
    DescribeVodUserDomainsRequest& operator=(DescribeVodUserDomainsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->domainName_ != nullptr
        && this->domainSearchType_ != nullptr && this->domainStatus_ != nullptr && this->ownerId_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr
        && this->securityToken_ != nullptr && this->tag_ != nullptr; };
    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline DescribeVodUserDomainsRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // domainSearchType Field Functions 
    bool hasDomainSearchType() const { return this->domainSearchType_ != nullptr;};
    void deleteDomainSearchType() { this->domainSearchType_ = nullptr;};
    inline string domainSearchType() const { DARABONBA_PTR_GET_DEFAULT(domainSearchType_, "") };
    inline DescribeVodUserDomainsRequest& setDomainSearchType(string domainSearchType) { DARABONBA_PTR_SET_VALUE(domainSearchType_, domainSearchType) };


    // domainStatus Field Functions 
    bool hasDomainStatus() const { return this->domainStatus_ != nullptr;};
    void deleteDomainStatus() { this->domainStatus_ = nullptr;};
    inline string domainStatus() const { DARABONBA_PTR_GET_DEFAULT(domainStatus_, "") };
    inline DescribeVodUserDomainsRequest& setDomainStatus(string domainStatus) { DARABONBA_PTR_SET_VALUE(domainStatus_, domainStatus) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline DescribeVodUserDomainsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeVodUserDomainsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeVodUserDomainsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // securityToken Field Functions 
    bool hasSecurityToken() const { return this->securityToken_ != nullptr;};
    void deleteSecurityToken() { this->securityToken_ = nullptr;};
    inline string securityToken() const { DARABONBA_PTR_GET_DEFAULT(securityToken_, "") };
    inline DescribeVodUserDomainsRequest& setSecurityToken(string securityToken) { DARABONBA_PTR_SET_VALUE(securityToken_, securityToken) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeVodUserDomainsRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeVodUserDomainsRequestTag>) };
    inline vector<DescribeVodUserDomainsRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeVodUserDomainsRequestTag>) };
    inline DescribeVodUserDomainsRequest& setTag(const vector<DescribeVodUserDomainsRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVodUserDomainsRequest& setTag(vector<DescribeVodUserDomainsRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The domain name. The value of this parameter is used as a filter condition for a fuzzy match.
    std::shared_ptr<string> domainName_ = nullptr;
    // The search method. Valid values:
    // 
    // *   **fuzzy_match** (default): fuzzy match.
    // *   **pre_match**: prefix match
    // *   **suf_match**: suffix match
    // *   **full_match**: exact match
    std::shared_ptr<string> domainSearchType_ = nullptr;
    // The status of the domain name. Value values:
    // 
    // *   **online**: indicates that the domain name is enabled.
    // *   **offline**: indicates that the domain name is disabled.
    // *   **configuring**: indicates that the domain name is being configured.
    // *   **configure_failed**: indicates that the domain name failed to be configured.
    // *   **checking**: indicates that the domain name is under review.
    // *   **check_failed**: indicates that the domain name failed the review.
    std::shared_ptr<string> domainStatus_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default value: **20**. Maximum value: **50**. Valid values: **1** to **50**.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> securityToken_ = nullptr;
    // The tags.
    std::shared_ptr<vector<DescribeVodUserDomainsRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
