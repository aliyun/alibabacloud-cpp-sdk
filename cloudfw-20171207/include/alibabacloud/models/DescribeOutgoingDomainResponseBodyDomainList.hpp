// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINRESPONSEBODYDOMAINLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINRESPONSEBODYDOMAINLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDomainResponseBodyDomainListTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDomainResponseBodyDomainList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDomainResponseBodyDomainList& obj) { 
      DARABONBA_PTR_TO_JSON(AclCoverage, aclCoverage_);
      DARABONBA_PTR_TO_JSON(AclRecommendDetail, aclRecommendDetail_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AddressGroupName, addressGroupName_);
      DARABONBA_PTR_TO_JSON(AddressGroupUUID, addressGroupUUID_);
      DARABONBA_PTR_TO_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_TO_JSON(Business, business_);
      DARABONBA_PTR_TO_JSON(CategoryClassId, categoryClassId_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HasAcl, hasAcl_);
      DARABONBA_PTR_TO_JSON(HasAclRecommend, hasAclRecommend_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(IsMarkNormal, isMarkNormal_);
      DARABONBA_PTR_TO_JSON(Organization, organization_);
      DARABONBA_PTR_TO_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_TO_JSON(PrivateAssetCount, privateAssetCount_);
      DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(SecurityReason, securityReason_);
      DARABONBA_PTR_TO_JSON(SecuritySuggest, securitySuggest_);
      DARABONBA_PTR_TO_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TotalBytes, totalBytes_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDomainResponseBodyDomainList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclCoverage, aclCoverage_);
      DARABONBA_PTR_FROM_JSON(AclRecommendDetail, aclRecommendDetail_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AddressGroupName, addressGroupName_);
      DARABONBA_PTR_FROM_JSON(AddressGroupUUID, addressGroupUUID_);
      DARABONBA_PTR_FROM_JSON(ApplicationNameList, applicationNameList_);
      DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_FROM_JSON(Business, business_);
      DARABONBA_PTR_FROM_JSON(CategoryClassId, categoryClassId_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HasAcl, hasAcl_);
      DARABONBA_PTR_FROM_JSON(HasAclRecommend, hasAclRecommend_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(IsMarkNormal, isMarkNormal_);
      DARABONBA_PTR_FROM_JSON(Organization, organization_);
      DARABONBA_PTR_FROM_JSON(OutBytes, outBytes_);
      DARABONBA_PTR_FROM_JSON(PrivateAssetCount, privateAssetCount_);
      DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(SecurityReason, securityReason_);
      DARABONBA_PTR_FROM_JSON(SecuritySuggest, securitySuggest_);
      DARABONBA_PTR_FROM_JSON(SessionCount, sessionCount_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TotalBytes, totalBytes_);
    };
    DescribeOutgoingDomainResponseBodyDomainList() = default ;
    DescribeOutgoingDomainResponseBodyDomainList(const DescribeOutgoingDomainResponseBodyDomainList &) = default ;
    DescribeOutgoingDomainResponseBodyDomainList(DescribeOutgoingDomainResponseBodyDomainList &&) = default ;
    DescribeOutgoingDomainResponseBodyDomainList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDomainResponseBodyDomainList() = default ;
    DescribeOutgoingDomainResponseBodyDomainList& operator=(const DescribeOutgoingDomainResponseBodyDomainList &) = default ;
    DescribeOutgoingDomainResponseBodyDomainList& operator=(DescribeOutgoingDomainResponseBodyDomainList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclCoverage_ != nullptr
        && this->aclRecommendDetail_ != nullptr && this->aclStatus_ != nullptr && this->addressGroupName_ != nullptr && this->addressGroupUUID_ != nullptr && this->applicationNameList_ != nullptr
        && this->assetCount_ != nullptr && this->business_ != nullptr && this->categoryClassId_ != nullptr && this->categoryId_ != nullptr && this->categoryName_ != nullptr
        && this->domain_ != nullptr && this->groupName_ != nullptr && this->hasAcl_ != nullptr && this->hasAclRecommend_ != nullptr && this->inBytes_ != nullptr
        && this->isMarkNormal_ != nullptr && this->organization_ != nullptr && this->outBytes_ != nullptr && this->privateAssetCount_ != nullptr && this->ruleId_ != nullptr
        && this->ruleName_ != nullptr && this->securityReason_ != nullptr && this->securitySuggest_ != nullptr && this->sessionCount_ != nullptr && this->tagList_ != nullptr
        && this->totalBytes_ != nullptr; };
    // aclCoverage Field Functions 
    bool hasAclCoverage() const { return this->aclCoverage_ != nullptr;};
    void deleteAclCoverage() { this->aclCoverage_ = nullptr;};
    inline string aclCoverage() const { DARABONBA_PTR_GET_DEFAULT(aclCoverage_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setAclCoverage(string aclCoverage) { DARABONBA_PTR_SET_VALUE(aclCoverage_, aclCoverage) };


    // aclRecommendDetail Field Functions 
    bool hasAclRecommendDetail() const { return this->aclRecommendDetail_ != nullptr;};
    void deleteAclRecommendDetail() { this->aclRecommendDetail_ = nullptr;};
    inline string aclRecommendDetail() const { DARABONBA_PTR_GET_DEFAULT(aclRecommendDetail_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setAclRecommendDetail(string aclRecommendDetail) { DARABONBA_PTR_SET_VALUE(aclRecommendDetail_, aclRecommendDetail) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // addressGroupName Field Functions 
    bool hasAddressGroupName() const { return this->addressGroupName_ != nullptr;};
    void deleteAddressGroupName() { this->addressGroupName_ = nullptr;};
    inline string addressGroupName() const { DARABONBA_PTR_GET_DEFAULT(addressGroupName_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setAddressGroupName(string addressGroupName) { DARABONBA_PTR_SET_VALUE(addressGroupName_, addressGroupName) };


    // addressGroupUUID Field Functions 
    bool hasAddressGroupUUID() const { return this->addressGroupUUID_ != nullptr;};
    void deleteAddressGroupUUID() { this->addressGroupUUID_ = nullptr;};
    inline string addressGroupUUID() const { DARABONBA_PTR_GET_DEFAULT(addressGroupUUID_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setAddressGroupUUID(string addressGroupUUID) { DARABONBA_PTR_SET_VALUE(addressGroupUUID_, addressGroupUUID) };


    // applicationNameList Field Functions 
    bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
    void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
    inline const vector<string> & applicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
    inline vector<string> applicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


    // assetCount Field Functions 
    bool hasAssetCount() const { return this->assetCount_ != nullptr;};
    void deleteAssetCount() { this->assetCount_ = nullptr;};
    inline int64_t assetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0L) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setAssetCount(int64_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


    // business Field Functions 
    bool hasBusiness() const { return this->business_ != nullptr;};
    void deleteBusiness() { this->business_ = nullptr;};
    inline string business() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


    // categoryClassId Field Functions 
    bool hasCategoryClassId() const { return this->categoryClassId_ != nullptr;};
    void deleteCategoryClassId() { this->categoryClassId_ = nullptr;};
    inline string categoryClassId() const { DARABONBA_PTR_GET_DEFAULT(categoryClassId_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setCategoryClassId(string categoryClassId) { DARABONBA_PTR_SET_VALUE(categoryClassId_, categoryClassId) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // hasAcl Field Functions 
    bool hasHasAcl() const { return this->hasAcl_ != nullptr;};
    void deleteHasAcl() { this->hasAcl_ = nullptr;};
    inline string hasAcl() const { DARABONBA_PTR_GET_DEFAULT(hasAcl_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setHasAcl(string hasAcl) { DARABONBA_PTR_SET_VALUE(hasAcl_, hasAcl) };


    // hasAclRecommend Field Functions 
    bool hasHasAclRecommend() const { return this->hasAclRecommend_ != nullptr;};
    void deleteHasAclRecommend() { this->hasAclRecommend_ = nullptr;};
    inline bool hasAclRecommend() const { DARABONBA_PTR_GET_DEFAULT(hasAclRecommend_, false) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setHasAclRecommend(bool hasAclRecommend) { DARABONBA_PTR_SET_VALUE(hasAclRecommend_, hasAclRecommend) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // isMarkNormal Field Functions 
    bool hasIsMarkNormal() const { return this->isMarkNormal_ != nullptr;};
    void deleteIsMarkNormal() { this->isMarkNormal_ = nullptr;};
    inline bool isMarkNormal() const { DARABONBA_PTR_GET_DEFAULT(isMarkNormal_, false) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setIsMarkNormal(bool isMarkNormal) { DARABONBA_PTR_SET_VALUE(isMarkNormal_, isMarkNormal) };


    // organization Field Functions 
    bool hasOrganization() const { return this->organization_ != nullptr;};
    void deleteOrganization() { this->organization_ = nullptr;};
    inline string organization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // privateAssetCount Field Functions 
    bool hasPrivateAssetCount() const { return this->privateAssetCount_ != nullptr;};
    void deletePrivateAssetCount() { this->privateAssetCount_ = nullptr;};
    inline int64_t privateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(privateAssetCount_, 0L) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setPrivateAssetCount(int64_t privateAssetCount) { DARABONBA_PTR_SET_VALUE(privateAssetCount_, privateAssetCount) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // securityReason Field Functions 
    bool hasSecurityReason() const { return this->securityReason_ != nullptr;};
    void deleteSecurityReason() { this->securityReason_ = nullptr;};
    inline string securityReason() const { DARABONBA_PTR_GET_DEFAULT(securityReason_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setSecurityReason(string securityReason) { DARABONBA_PTR_SET_VALUE(securityReason_, securityReason) };


    // securitySuggest Field Functions 
    bool hasSecuritySuggest() const { return this->securitySuggest_ != nullptr;};
    void deleteSecuritySuggest() { this->securitySuggest_ = nullptr;};
    inline string securitySuggest() const { DARABONBA_PTR_GET_DEFAULT(securitySuggest_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setSecuritySuggest(string securitySuggest) { DARABONBA_PTR_SET_VALUE(securitySuggest_, securitySuggest) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeOutgoingDomainResponseBodyDomainListTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeOutgoingDomainResponseBodyDomainListTagList>) };
    inline vector<Models::DescribeOutgoingDomainResponseBodyDomainListTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeOutgoingDomainResponseBodyDomainListTagList>) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setTagList(const vector<Models::DescribeOutgoingDomainResponseBodyDomainListTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeOutgoingDomainResponseBodyDomainList& setTagList(vector<Models::DescribeOutgoingDomainResponseBodyDomainListTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline string totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
    inline DescribeOutgoingDomainResponseBodyDomainList& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


  protected:
    // Indicates whether an access control policy is configured. Valid values:
    // 
    // *   **Uncovered**: no
    // *   **FullCoverage**: yes
    std::shared_ptr<string> aclCoverage_ = nullptr;
    // The suggestion in an access control policy.
    std::shared_ptr<string> aclRecommendDetail_ = nullptr;
    // The state of the access control policy. Valid values:
    // 
    // *   **normal**: healthy
    // *   **abnormal**: unhealthy
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The name of the address book.
    std::shared_ptr<string> addressGroupName_ = nullptr;
    // The UUID of the address book.
    std::shared_ptr<string> addressGroupUUID_ = nullptr;
    // The application names.
    std::shared_ptr<vector<string>> applicationNameList_ = nullptr;
    // The outbound asset count.
    std::shared_ptr<int64_t> assetCount_ = nullptr;
    // The website service.
    std::shared_ptr<string> business_ = nullptr;
    // The type of the tag. Valid values:
    // 
    // *   **Suspicious**
    // *   **Malicious**
    // *   **Trusted**
    std::shared_ptr<string> categoryClassId_ = nullptr;
    // The type ID of the service to which the domain name belongs. Valid values:
    // 
    // *   **Aliyun**: Alibaba Cloud services
    // *   **NotAliyun**: third-party services
    std::shared_ptr<string> categoryId_ = nullptr;
    // The type of the service to which the domain name belongs. Valid values:
    // 
    // *   **Alibaba Cloud services**
    // *   **Third-party services**
    std::shared_ptr<string> categoryName_ = nullptr;
    // The domain name in outbound connections.
    std::shared_ptr<string> domain_ = nullptr;
    // The name of the group to which the access control policy belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // Indicates whether an `access control policy` is configured for the domain name. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<string> hasAcl_ = nullptr;
    // Indicates whether an access control policy is recommended. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> hasAclRecommend_ = nullptr;
    // The volume of inbound traffic.
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    // Indicates whether the domain name is marked as normal. Valid values:
    // 
    // *   **true**: normal
    // *   **false**: abnormal
    std::shared_ptr<bool> isMarkNormal_ = nullptr;
    // The name of the organization.
    std::shared_ptr<string> organization_ = nullptr;
    // The volume of outbound traffic.
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    // The outbound private asset count.
    std::shared_ptr<int64_t> privateAssetCount_ = nullptr;
    // The ID of the access control policy.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the access control policy.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The reason why the domain name is secure.
    std::shared_ptr<string> securityReason_ = nullptr;
    // The suggestion to handle the traffic of the domain name in outbound connections. Valid values:
    // 
    // *   **pass**: allow
    // *   **alert**: monitor
    // *   **drop**: deny
    std::shared_ptr<string> securitySuggest_ = nullptr;
    // The number of requests.
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    // An array that consists of tags.
    std::shared_ptr<vector<Models::DescribeOutgoingDomainResponseBodyDomainListTagList>> tagList_ = nullptr;
    // The total volume of traffic. Unit: bytes.
    std::shared_ptr<string> totalBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
