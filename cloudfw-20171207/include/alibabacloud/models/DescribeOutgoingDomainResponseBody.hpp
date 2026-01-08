// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDOMAINRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDomainResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDomainResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DomainList, domainList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDomainResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainList, domainList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeOutgoingDomainResponseBody() = default ;
    DescribeOutgoingDomainResponseBody(const DescribeOutgoingDomainResponseBody &) = default ;
    DescribeOutgoingDomainResponseBody(DescribeOutgoingDomainResponseBody &&) = default ;
    DescribeOutgoingDomainResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDomainResponseBody() = default ;
    DescribeOutgoingDomainResponseBody& operator=(const DescribeOutgoingDomainResponseBody &) = default ;
    DescribeOutgoingDomainResponseBody& operator=(DescribeOutgoingDomainResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DomainList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DomainList& obj) { 
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
      friend void from_json(const Darabonba::Json& j, DomainList& obj) { 
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
      DomainList() = default ;
      DomainList(const DomainList &) = default ;
      DomainList(DomainList &&) = default ;
      DomainList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DomainList() = default ;
      DomainList& operator=(const DomainList &) = default ;
      DomainList& operator=(DomainList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagList& obj) { 
          DARABONBA_PTR_TO_JSON(ClassId, classId_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(TagDescribe, tagDescribe_);
          DARABONBA_PTR_TO_JSON(TagId, tagId_);
          DARABONBA_PTR_TO_JSON(TagName, tagName_);
        };
        friend void from_json(const Darabonba::Json& j, TagList& obj) { 
          DARABONBA_PTR_FROM_JSON(ClassId, classId_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(TagDescribe, tagDescribe_);
          DARABONBA_PTR_FROM_JSON(TagId, tagId_);
          DARABONBA_PTR_FROM_JSON(TagName, tagName_);
        };
        TagList() = default ;
        TagList(const TagList &) = default ;
        TagList(TagList &&) = default ;
        TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagList() = default ;
        TagList& operator=(const TagList &) = default ;
        TagList& operator=(TagList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->classId_ == nullptr
        && this->riskLevel_ == nullptr && this->tagDescribe_ == nullptr && this->tagId_ == nullptr && this->tagName_ == nullptr; };
        // classId Field Functions 
        bool hasClassId() const { return this->classId_ != nullptr;};
        void deleteClassId() { this->classId_ = nullptr;};
        inline string getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, "") };
        inline TagList& setClassId(string classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline TagList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // tagDescribe Field Functions 
        bool hasTagDescribe() const { return this->tagDescribe_ != nullptr;};
        void deleteTagDescribe() { this->tagDescribe_ = nullptr;};
        inline string getTagDescribe() const { DARABONBA_PTR_GET_DEFAULT(tagDescribe_, "") };
        inline TagList& setTagDescribe(string tagDescribe) { DARABONBA_PTR_SET_VALUE(tagDescribe_, tagDescribe) };


        // tagId Field Functions 
        bool hasTagId() const { return this->tagId_ != nullptr;};
        void deleteTagId() { this->tagId_ = nullptr;};
        inline string getTagId() const { DARABONBA_PTR_GET_DEFAULT(tagId_, "") };
        inline TagList& setTagId(string tagId) { DARABONBA_PTR_SET_VALUE(tagId_, tagId) };


        // tagName Field Functions 
        bool hasTagName() const { return this->tagName_ != nullptr;};
        void deleteTagName() { this->tagName_ = nullptr;};
        inline string getTagName() const { DARABONBA_PTR_GET_DEFAULT(tagName_, "") };
        inline TagList& setTagName(string tagName) { DARABONBA_PTR_SET_VALUE(tagName_, tagName) };


      protected:
        // The type of the tag. Valid values:
        // 
        // *   **Suspicious**
        // *   **Malicious**
        // *   **Trusted**
        shared_ptr<string> classId_ {};
        // The risk level. Valid values:
        // 
        // *   **1**: low
        // *   **2**: medium
        // *   **3**: high
        shared_ptr<int32_t> riskLevel_ {};
        // The description of the tag.
        shared_ptr<string> tagDescribe_ {};
        // The ID of the tag.
        shared_ptr<string> tagId_ {};
        // The name of the tag.
        shared_ptr<string> tagName_ {};
      };

      virtual bool empty() const override { return this->aclCoverage_ == nullptr
        && this->aclRecommendDetail_ == nullptr && this->aclStatus_ == nullptr && this->addressGroupName_ == nullptr && this->addressGroupUUID_ == nullptr && this->applicationNameList_ == nullptr
        && this->assetCount_ == nullptr && this->business_ == nullptr && this->categoryClassId_ == nullptr && this->categoryId_ == nullptr && this->categoryName_ == nullptr
        && this->domain_ == nullptr && this->groupName_ == nullptr && this->hasAcl_ == nullptr && this->hasAclRecommend_ == nullptr && this->inBytes_ == nullptr
        && this->isMarkNormal_ == nullptr && this->organization_ == nullptr && this->outBytes_ == nullptr && this->privateAssetCount_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->securityReason_ == nullptr && this->securitySuggest_ == nullptr && this->sessionCount_ == nullptr && this->tagList_ == nullptr
        && this->totalBytes_ == nullptr; };
      // aclCoverage Field Functions 
      bool hasAclCoverage() const { return this->aclCoverage_ != nullptr;};
      void deleteAclCoverage() { this->aclCoverage_ = nullptr;};
      inline string getAclCoverage() const { DARABONBA_PTR_GET_DEFAULT(aclCoverage_, "") };
      inline DomainList& setAclCoverage(string aclCoverage) { DARABONBA_PTR_SET_VALUE(aclCoverage_, aclCoverage) };


      // aclRecommendDetail Field Functions 
      bool hasAclRecommendDetail() const { return this->aclRecommendDetail_ != nullptr;};
      void deleteAclRecommendDetail() { this->aclRecommendDetail_ = nullptr;};
      inline string getAclRecommendDetail() const { DARABONBA_PTR_GET_DEFAULT(aclRecommendDetail_, "") };
      inline DomainList& setAclRecommendDetail(string aclRecommendDetail) { DARABONBA_PTR_SET_VALUE(aclRecommendDetail_, aclRecommendDetail) };


      // aclStatus Field Functions 
      bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
      void deleteAclStatus() { this->aclStatus_ = nullptr;};
      inline string getAclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
      inline DomainList& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


      // addressGroupName Field Functions 
      bool hasAddressGroupName() const { return this->addressGroupName_ != nullptr;};
      void deleteAddressGroupName() { this->addressGroupName_ = nullptr;};
      inline string getAddressGroupName() const { DARABONBA_PTR_GET_DEFAULT(addressGroupName_, "") };
      inline DomainList& setAddressGroupName(string addressGroupName) { DARABONBA_PTR_SET_VALUE(addressGroupName_, addressGroupName) };


      // addressGroupUUID Field Functions 
      bool hasAddressGroupUUID() const { return this->addressGroupUUID_ != nullptr;};
      void deleteAddressGroupUUID() { this->addressGroupUUID_ = nullptr;};
      inline string getAddressGroupUUID() const { DARABONBA_PTR_GET_DEFAULT(addressGroupUUID_, "") };
      inline DomainList& setAddressGroupUUID(string addressGroupUUID) { DARABONBA_PTR_SET_VALUE(addressGroupUUID_, addressGroupUUID) };


      // applicationNameList Field Functions 
      bool hasApplicationNameList() const { return this->applicationNameList_ != nullptr;};
      void deleteApplicationNameList() { this->applicationNameList_ = nullptr;};
      inline const vector<string> & getApplicationNameList() const { DARABONBA_PTR_GET_CONST(applicationNameList_, vector<string>) };
      inline vector<string> getApplicationNameList() { DARABONBA_PTR_GET(applicationNameList_, vector<string>) };
      inline DomainList& setApplicationNameList(const vector<string> & applicationNameList) { DARABONBA_PTR_SET_VALUE(applicationNameList_, applicationNameList) };
      inline DomainList& setApplicationNameList(vector<string> && applicationNameList) { DARABONBA_PTR_SET_RVALUE(applicationNameList_, applicationNameList) };


      // assetCount Field Functions 
      bool hasAssetCount() const { return this->assetCount_ != nullptr;};
      void deleteAssetCount() { this->assetCount_ = nullptr;};
      inline int64_t getAssetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0L) };
      inline DomainList& setAssetCount(int64_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


      // business Field Functions 
      bool hasBusiness() const { return this->business_ != nullptr;};
      void deleteBusiness() { this->business_ = nullptr;};
      inline string getBusiness() const { DARABONBA_PTR_GET_DEFAULT(business_, "") };
      inline DomainList& setBusiness(string business) { DARABONBA_PTR_SET_VALUE(business_, business) };


      // categoryClassId Field Functions 
      bool hasCategoryClassId() const { return this->categoryClassId_ != nullptr;};
      void deleteCategoryClassId() { this->categoryClassId_ = nullptr;};
      inline string getCategoryClassId() const { DARABONBA_PTR_GET_DEFAULT(categoryClassId_, "") };
      inline DomainList& setCategoryClassId(string categoryClassId) { DARABONBA_PTR_SET_VALUE(categoryClassId_, categoryClassId) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
      inline DomainList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline DomainList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline DomainList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline DomainList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // hasAcl Field Functions 
      bool hasHasAcl() const { return this->hasAcl_ != nullptr;};
      void deleteHasAcl() { this->hasAcl_ = nullptr;};
      inline string getHasAcl() const { DARABONBA_PTR_GET_DEFAULT(hasAcl_, "") };
      inline DomainList& setHasAcl(string hasAcl) { DARABONBA_PTR_SET_VALUE(hasAcl_, hasAcl) };


      // hasAclRecommend Field Functions 
      bool hasHasAclRecommend() const { return this->hasAclRecommend_ != nullptr;};
      void deleteHasAclRecommend() { this->hasAclRecommend_ = nullptr;};
      inline bool getHasAclRecommend() const { DARABONBA_PTR_GET_DEFAULT(hasAclRecommend_, false) };
      inline DomainList& setHasAclRecommend(bool hasAclRecommend) { DARABONBA_PTR_SET_VALUE(hasAclRecommend_, hasAclRecommend) };


      // inBytes Field Functions 
      bool hasInBytes() const { return this->inBytes_ != nullptr;};
      void deleteInBytes() { this->inBytes_ = nullptr;};
      inline int64_t getInBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
      inline DomainList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


      // isMarkNormal Field Functions 
      bool hasIsMarkNormal() const { return this->isMarkNormal_ != nullptr;};
      void deleteIsMarkNormal() { this->isMarkNormal_ = nullptr;};
      inline bool getIsMarkNormal() const { DARABONBA_PTR_GET_DEFAULT(isMarkNormal_, false) };
      inline DomainList& setIsMarkNormal(bool isMarkNormal) { DARABONBA_PTR_SET_VALUE(isMarkNormal_, isMarkNormal) };


      // organization Field Functions 
      bool hasOrganization() const { return this->organization_ != nullptr;};
      void deleteOrganization() { this->organization_ = nullptr;};
      inline string getOrganization() const { DARABONBA_PTR_GET_DEFAULT(organization_, "") };
      inline DomainList& setOrganization(string organization) { DARABONBA_PTR_SET_VALUE(organization_, organization) };


      // outBytes Field Functions 
      bool hasOutBytes() const { return this->outBytes_ != nullptr;};
      void deleteOutBytes() { this->outBytes_ = nullptr;};
      inline int64_t getOutBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
      inline DomainList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


      // privateAssetCount Field Functions 
      bool hasPrivateAssetCount() const { return this->privateAssetCount_ != nullptr;};
      void deletePrivateAssetCount() { this->privateAssetCount_ = nullptr;};
      inline int64_t getPrivateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(privateAssetCount_, 0L) };
      inline DomainList& setPrivateAssetCount(int64_t privateAssetCount) { DARABONBA_PTR_SET_VALUE(privateAssetCount_, privateAssetCount) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline DomainList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline DomainList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // securityReason Field Functions 
      bool hasSecurityReason() const { return this->securityReason_ != nullptr;};
      void deleteSecurityReason() { this->securityReason_ = nullptr;};
      inline string getSecurityReason() const { DARABONBA_PTR_GET_DEFAULT(securityReason_, "") };
      inline DomainList& setSecurityReason(string securityReason) { DARABONBA_PTR_SET_VALUE(securityReason_, securityReason) };


      // securitySuggest Field Functions 
      bool hasSecuritySuggest() const { return this->securitySuggest_ != nullptr;};
      void deleteSecuritySuggest() { this->securitySuggest_ = nullptr;};
      inline string getSecuritySuggest() const { DARABONBA_PTR_GET_DEFAULT(securitySuggest_, "") };
      inline DomainList& setSecuritySuggest(string securitySuggest) { DARABONBA_PTR_SET_VALUE(securitySuggest_, securitySuggest) };


      // sessionCount Field Functions 
      bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
      void deleteSessionCount() { this->sessionCount_ = nullptr;};
      inline int64_t getSessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
      inline DomainList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


      // tagList Field Functions 
      bool hasTagList() const { return this->tagList_ != nullptr;};
      void deleteTagList() { this->tagList_ = nullptr;};
      inline const vector<DomainList::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<DomainList::TagList>) };
      inline vector<DomainList::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<DomainList::TagList>) };
      inline DomainList& setTagList(const vector<DomainList::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
      inline DomainList& setTagList(vector<DomainList::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


      // totalBytes Field Functions 
      bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
      void deleteTotalBytes() { this->totalBytes_ = nullptr;};
      inline string getTotalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
      inline DomainList& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


    protected:
      // Indicates whether an access control policy is configured. Valid values:
      // 
      // *   **Uncovered**: no
      // *   **FullCoverage**: yes
      shared_ptr<string> aclCoverage_ {};
      // The suggestion in an access control policy.
      shared_ptr<string> aclRecommendDetail_ {};
      // The state of the access control policy. Valid values:
      // 
      // *   **normal**: healthy
      // *   **abnormal**: unhealthy
      shared_ptr<string> aclStatus_ {};
      // The name of the address book.
      shared_ptr<string> addressGroupName_ {};
      // The UUID of the address book.
      shared_ptr<string> addressGroupUUID_ {};
      // The application names.
      shared_ptr<vector<string>> applicationNameList_ {};
      // The outbound asset count.
      shared_ptr<int64_t> assetCount_ {};
      // The website service.
      shared_ptr<string> business_ {};
      // The type of the tag. Valid values:
      // 
      // *   **Suspicious**
      // *   **Malicious**
      // *   **Trusted**
      shared_ptr<string> categoryClassId_ {};
      // The type ID of the service to which the domain name belongs. Valid values:
      // 
      // *   **Aliyun**: Alibaba Cloud services
      // *   **NotAliyun**: third-party services
      shared_ptr<string> categoryId_ {};
      // The type of the service to which the domain name belongs. Valid values:
      // 
      // *   **Alibaba Cloud services**
      // *   **Third-party services**
      shared_ptr<string> categoryName_ {};
      // The domain name in outbound connections.
      shared_ptr<string> domain_ {};
      // The name of the group to which the access control policy belongs.
      shared_ptr<string> groupName_ {};
      // Indicates whether an `access control policy` is configured for the domain name. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<string> hasAcl_ {};
      // Indicates whether an access control policy is recommended. Valid values:
      // 
      // *   **true**: yes
      // *   **false**: no
      shared_ptr<bool> hasAclRecommend_ {};
      // The volume of inbound traffic.
      shared_ptr<int64_t> inBytes_ {};
      // Indicates whether the domain name is marked as normal. Valid values:
      // 
      // *   **true**: normal
      // *   **false**: abnormal
      shared_ptr<bool> isMarkNormal_ {};
      // The name of the organization.
      shared_ptr<string> organization_ {};
      // The volume of outbound traffic.
      shared_ptr<int64_t> outBytes_ {};
      // The outbound private asset count.
      shared_ptr<int64_t> privateAssetCount_ {};
      // The ID of the access control policy.
      shared_ptr<string> ruleId_ {};
      // The name of the access control policy.
      shared_ptr<string> ruleName_ {};
      // The reason why the domain name is secure.
      shared_ptr<string> securityReason_ {};
      // The suggestion to handle the traffic of the domain name in outbound connections. Valid values:
      // 
      // *   **pass**: allow
      // *   **alert**: monitor
      // *   **drop**: deny
      shared_ptr<string> securitySuggest_ {};
      // The number of requests.
      shared_ptr<int64_t> sessionCount_ {};
      // An array that consists of tags.
      shared_ptr<vector<DomainList::TagList>> tagList_ {};
      // The total volume of traffic. Unit: bytes.
      shared_ptr<string> totalBytes_ {};
    };

    virtual bool empty() const override { return this->domainList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // domainList Field Functions 
    bool hasDomainList() const { return this->domainList_ != nullptr;};
    void deleteDomainList() { this->domainList_ = nullptr;};
    inline const vector<DescribeOutgoingDomainResponseBody::DomainList> & getDomainList() const { DARABONBA_PTR_GET_CONST(domainList_, vector<DescribeOutgoingDomainResponseBody::DomainList>) };
    inline vector<DescribeOutgoingDomainResponseBody::DomainList> getDomainList() { DARABONBA_PTR_GET(domainList_, vector<DescribeOutgoingDomainResponseBody::DomainList>) };
    inline DescribeOutgoingDomainResponseBody& setDomainList(const vector<DescribeOutgoingDomainResponseBody::DomainList> & domainList) { DARABONBA_PTR_SET_VALUE(domainList_, domainList) };
    inline DescribeOutgoingDomainResponseBody& setDomainList(vector<DescribeOutgoingDomainResponseBody::DomainList> && domainList) { DARABONBA_PTR_SET_RVALUE(domainList_, domainList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDomainResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDomainResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The domain names in outbound connections.
    shared_ptr<vector<DescribeOutgoingDomainResponseBody::DomainList>> domainList_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the domain names in outbound connections.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
