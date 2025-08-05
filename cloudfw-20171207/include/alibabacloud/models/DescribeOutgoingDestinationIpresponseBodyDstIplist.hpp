// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODYDSTIPLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONIPRESPONSEBODYDSTIPLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList.hpp>
#include <alibabacloud/models/DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList.hpp>
#include <alibabacloud/models/DescribeOutgoingDestinationIPResponseBodyDstIPListTagList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationIPResponseBodyDstIPList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationIPResponseBodyDstIPList& obj) { 
      DARABONBA_PTR_TO_JSON(AclCoverage, aclCoverage_);
      DARABONBA_PTR_TO_JSON(AclRecommendDetail, aclRecommendDetail_);
      DARABONBA_PTR_TO_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_TO_JSON(AddressGroupList, addressGroupList_);
      DARABONBA_PTR_TO_JSON(ApplicationPortList, applicationPortList_);
      DARABONBA_PTR_TO_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_TO_JSON(CategoryClassId, categoryClassId_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(DstIP, dstIP_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HasAcl, hasAcl_);
      DARABONBA_PTR_TO_JSON(HasAclRecommend, hasAclRecommend_);
      DARABONBA_PTR_TO_JSON(InBytes, inBytes_);
      DARABONBA_PTR_TO_JSON(IsMarkNormal, isMarkNormal_);
      DARABONBA_PTR_TO_JSON(LocationName, locationName_);
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
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationIPResponseBodyDstIPList& obj) { 
      DARABONBA_PTR_FROM_JSON(AclCoverage, aclCoverage_);
      DARABONBA_PTR_FROM_JSON(AclRecommendDetail, aclRecommendDetail_);
      DARABONBA_PTR_FROM_JSON(AclStatus, aclStatus_);
      DARABONBA_PTR_FROM_JSON(AddressGroupList, addressGroupList_);
      DARABONBA_PTR_FROM_JSON(ApplicationPortList, applicationPortList_);
      DARABONBA_PTR_FROM_JSON(AssetCount, assetCount_);
      DARABONBA_PTR_FROM_JSON(CategoryClassId, categoryClassId_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(DstIP, dstIP_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HasAcl, hasAcl_);
      DARABONBA_PTR_FROM_JSON(HasAclRecommend, hasAclRecommend_);
      DARABONBA_PTR_FROM_JSON(InBytes, inBytes_);
      DARABONBA_PTR_FROM_JSON(IsMarkNormal, isMarkNormal_);
      DARABONBA_PTR_FROM_JSON(LocationName, locationName_);
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
    DescribeOutgoingDestinationIPResponseBodyDstIPList() = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPList(const DescribeOutgoingDestinationIPResponseBodyDstIPList &) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPList(DescribeOutgoingDestinationIPResponseBodyDstIPList &&) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationIPResponseBodyDstIPList() = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPList& operator=(const DescribeOutgoingDestinationIPResponseBodyDstIPList &) = default ;
    DescribeOutgoingDestinationIPResponseBodyDstIPList& operator=(DescribeOutgoingDestinationIPResponseBodyDstIPList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->aclCoverage_ != nullptr
        && this->aclRecommendDetail_ != nullptr && this->aclStatus_ != nullptr && this->addressGroupList_ != nullptr && this->applicationPortList_ != nullptr && this->assetCount_ != nullptr
        && this->categoryClassId_ != nullptr && this->categoryId_ != nullptr && this->categoryName_ != nullptr && this->dstIP_ != nullptr && this->groupName_ != nullptr
        && this->hasAcl_ != nullptr && this->hasAclRecommend_ != nullptr && this->inBytes_ != nullptr && this->isMarkNormal_ != nullptr && this->locationName_ != nullptr
        && this->outBytes_ != nullptr && this->privateAssetCount_ != nullptr && this->ruleId_ != nullptr && this->ruleName_ != nullptr && this->securityReason_ != nullptr
        && this->securitySuggest_ != nullptr && this->sessionCount_ != nullptr && this->tagList_ != nullptr && this->totalBytes_ != nullptr; };
    // aclCoverage Field Functions 
    bool hasAclCoverage() const { return this->aclCoverage_ != nullptr;};
    void deleteAclCoverage() { this->aclCoverage_ = nullptr;};
    inline string aclCoverage() const { DARABONBA_PTR_GET_DEFAULT(aclCoverage_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setAclCoverage(string aclCoverage) { DARABONBA_PTR_SET_VALUE(aclCoverage_, aclCoverage) };


    // aclRecommendDetail Field Functions 
    bool hasAclRecommendDetail() const { return this->aclRecommendDetail_ != nullptr;};
    void deleteAclRecommendDetail() { this->aclRecommendDetail_ = nullptr;};
    inline string aclRecommendDetail() const { DARABONBA_PTR_GET_DEFAULT(aclRecommendDetail_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setAclRecommendDetail(string aclRecommendDetail) { DARABONBA_PTR_SET_VALUE(aclRecommendDetail_, aclRecommendDetail) };


    // aclStatus Field Functions 
    bool hasAclStatus() const { return this->aclStatus_ != nullptr;};
    void deleteAclStatus() { this->aclStatus_ = nullptr;};
    inline string aclStatus() const { DARABONBA_PTR_GET_DEFAULT(aclStatus_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setAclStatus(string aclStatus) { DARABONBA_PTR_SET_VALUE(aclStatus_, aclStatus) };


    // addressGroupList Field Functions 
    bool hasAddressGroupList() const { return this->addressGroupList_ != nullptr;};
    void deleteAddressGroupList() { this->addressGroupList_ = nullptr;};
    inline const vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList> & addressGroupList() const { DARABONBA_PTR_GET_CONST(addressGroupList_, vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList>) };
    inline vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList> addressGroupList() { DARABONBA_PTR_GET(addressGroupList_, vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList>) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setAddressGroupList(const vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList> & addressGroupList) { DARABONBA_PTR_SET_VALUE(addressGroupList_, addressGroupList) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setAddressGroupList(vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList> && addressGroupList) { DARABONBA_PTR_SET_RVALUE(addressGroupList_, addressGroupList) };


    // applicationPortList Field Functions 
    bool hasApplicationPortList() const { return this->applicationPortList_ != nullptr;};
    void deleteApplicationPortList() { this->applicationPortList_ = nullptr;};
    inline const vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList> & applicationPortList() const { DARABONBA_PTR_GET_CONST(applicationPortList_, vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList>) };
    inline vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList> applicationPortList() { DARABONBA_PTR_GET(applicationPortList_, vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList>) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setApplicationPortList(const vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList> & applicationPortList) { DARABONBA_PTR_SET_VALUE(applicationPortList_, applicationPortList) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setApplicationPortList(vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList> && applicationPortList) { DARABONBA_PTR_SET_RVALUE(applicationPortList_, applicationPortList) };


    // assetCount Field Functions 
    bool hasAssetCount() const { return this->assetCount_ != nullptr;};
    void deleteAssetCount() { this->assetCount_ = nullptr;};
    inline int64_t assetCount() const { DARABONBA_PTR_GET_DEFAULT(assetCount_, 0L) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setAssetCount(int64_t assetCount) { DARABONBA_PTR_SET_VALUE(assetCount_, assetCount) };


    // categoryClassId Field Functions 
    bool hasCategoryClassId() const { return this->categoryClassId_ != nullptr;};
    void deleteCategoryClassId() { this->categoryClassId_ = nullptr;};
    inline string categoryClassId() const { DARABONBA_PTR_GET_DEFAULT(categoryClassId_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setCategoryClassId(string categoryClassId) { DARABONBA_PTR_SET_VALUE(categoryClassId_, categoryClassId) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // dstIP Field Functions 
    bool hasDstIP() const { return this->dstIP_ != nullptr;};
    void deleteDstIP() { this->dstIP_ = nullptr;};
    inline string dstIP() const { DARABONBA_PTR_GET_DEFAULT(dstIP_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setDstIP(string dstIP) { DARABONBA_PTR_SET_VALUE(dstIP_, dstIP) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // hasAcl Field Functions 
    bool hasHasAcl() const { return this->hasAcl_ != nullptr;};
    void deleteHasAcl() { this->hasAcl_ = nullptr;};
    inline string hasAcl() const { DARABONBA_PTR_GET_DEFAULT(hasAcl_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setHasAcl(string hasAcl) { DARABONBA_PTR_SET_VALUE(hasAcl_, hasAcl) };


    // hasAclRecommend Field Functions 
    bool hasHasAclRecommend() const { return this->hasAclRecommend_ != nullptr;};
    void deleteHasAclRecommend() { this->hasAclRecommend_ = nullptr;};
    inline bool hasAclRecommend() const { DARABONBA_PTR_GET_DEFAULT(hasAclRecommend_, false) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setHasAclRecommend(bool hasAclRecommend) { DARABONBA_PTR_SET_VALUE(hasAclRecommend_, hasAclRecommend) };


    // inBytes Field Functions 
    bool hasInBytes() const { return this->inBytes_ != nullptr;};
    void deleteInBytes() { this->inBytes_ = nullptr;};
    inline int64_t inBytes() const { DARABONBA_PTR_GET_DEFAULT(inBytes_, 0L) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setInBytes(int64_t inBytes) { DARABONBA_PTR_SET_VALUE(inBytes_, inBytes) };


    // isMarkNormal Field Functions 
    bool hasIsMarkNormal() const { return this->isMarkNormal_ != nullptr;};
    void deleteIsMarkNormal() { this->isMarkNormal_ = nullptr;};
    inline bool isMarkNormal() const { DARABONBA_PTR_GET_DEFAULT(isMarkNormal_, false) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setIsMarkNormal(bool isMarkNormal) { DARABONBA_PTR_SET_VALUE(isMarkNormal_, isMarkNormal) };


    // locationName Field Functions 
    bool hasLocationName() const { return this->locationName_ != nullptr;};
    void deleteLocationName() { this->locationName_ = nullptr;};
    inline string locationName() const { DARABONBA_PTR_GET_DEFAULT(locationName_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setLocationName(string locationName) { DARABONBA_PTR_SET_VALUE(locationName_, locationName) };


    // outBytes Field Functions 
    bool hasOutBytes() const { return this->outBytes_ != nullptr;};
    void deleteOutBytes() { this->outBytes_ = nullptr;};
    inline int64_t outBytes() const { DARABONBA_PTR_GET_DEFAULT(outBytes_, 0L) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setOutBytes(int64_t outBytes) { DARABONBA_PTR_SET_VALUE(outBytes_, outBytes) };


    // privateAssetCount Field Functions 
    bool hasPrivateAssetCount() const { return this->privateAssetCount_ != nullptr;};
    void deletePrivateAssetCount() { this->privateAssetCount_ = nullptr;};
    inline int64_t privateAssetCount() const { DARABONBA_PTR_GET_DEFAULT(privateAssetCount_, 0L) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setPrivateAssetCount(int64_t privateAssetCount) { DARABONBA_PTR_SET_VALUE(privateAssetCount_, privateAssetCount) };


    // ruleId Field Functions 
    bool hasRuleId() const { return this->ruleId_ != nullptr;};
    void deleteRuleId() { this->ruleId_ = nullptr;};
    inline string ruleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string ruleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // securityReason Field Functions 
    bool hasSecurityReason() const { return this->securityReason_ != nullptr;};
    void deleteSecurityReason() { this->securityReason_ = nullptr;};
    inline string securityReason() const { DARABONBA_PTR_GET_DEFAULT(securityReason_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setSecurityReason(string securityReason) { DARABONBA_PTR_SET_VALUE(securityReason_, securityReason) };


    // securitySuggest Field Functions 
    bool hasSecuritySuggest() const { return this->securitySuggest_ != nullptr;};
    void deleteSecuritySuggest() { this->securitySuggest_ = nullptr;};
    inline string securitySuggest() const { DARABONBA_PTR_GET_DEFAULT(securitySuggest_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setSecuritySuggest(string securitySuggest) { DARABONBA_PTR_SET_VALUE(securitySuggest_, securitySuggest) };


    // sessionCount Field Functions 
    bool hasSessionCount() const { return this->sessionCount_ != nullptr;};
    void deleteSessionCount() { this->sessionCount_ = nullptr;};
    inline int64_t sessionCount() const { DARABONBA_PTR_GET_DEFAULT(sessionCount_, 0L) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setSessionCount(int64_t sessionCount) { DARABONBA_PTR_SET_VALUE(sessionCount_, sessionCount) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListTagList> & tagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListTagList>) };
    inline vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListTagList> tagList() { DARABONBA_PTR_GET(tagList_, vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListTagList>) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setTagList(const vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListTagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setTagList(vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListTagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // totalBytes Field Functions 
    bool hasTotalBytes() const { return this->totalBytes_ != nullptr;};
    void deleteTotalBytes() { this->totalBytes_ = nullptr;};
    inline string totalBytes() const { DARABONBA_PTR_GET_DEFAULT(totalBytes_, "") };
    inline DescribeOutgoingDestinationIPResponseBodyDstIPList& setTotalBytes(string totalBytes) { DARABONBA_PTR_SET_VALUE(totalBytes_, totalBytes) };


  protected:
    // Indicates whether an access control policy is configured. Valid values:
    // 
    // *   **Uncovered**: no
    // *   **FullCoverage**: yes
    std::shared_ptr<string> aclCoverage_ = nullptr;
    // The suggestion to configure an access control policy.
    std::shared_ptr<string> aclRecommendDetail_ = nullptr;
    // The status of the access control policy. Valid values:
    // 
    // *   **normal**: healthy
    // *   **Abnormal**: unhealthy
    std::shared_ptr<string> aclStatus_ = nullptr;
    // The information about the address book.
    std::shared_ptr<vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListAddressGroupList>> addressGroupList_ = nullptr;
    // The application ports.
    // 
    // >  Only the first 100 application ports are displayed.
    std::shared_ptr<vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListApplicationPortList>> applicationPortList_ = nullptr;
    // The outbound asset count.
    std::shared_ptr<int64_t> assetCount_ = nullptr;
    // The type of the tag. Valid values:
    // 
    // *   **Suspicious**
    // *   **Malicious**
    // *   **Trusted**
    std::shared_ptr<string> categoryClassId_ = nullptr;
    // The ID of the service type. Valid values:
    // 
    // *   **Aliyun**: Alibaba Cloud services
    // *   **NotAliyun**: third-party services
    std::shared_ptr<string> categoryId_ = nullptr;
    // The type of the service to which the destination IP address belongs. Valid values:
    // 
    // *   **Alibaba Cloud services**
    // *   **Third-party services**
    std::shared_ptr<string> categoryName_ = nullptr;
    // The destination IP addresses in outbound connections.
    std::shared_ptr<string> dstIP_ = nullptr;
    // The name of the group to which the access control policy belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // Indicates whether an access control policy is configured. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<string> hasAcl_ = nullptr;
    // Indicates whether an access control policy is recommended. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> hasAclRecommend_ = nullptr;
    // The inbound traffic. Unit: bytes.
    std::shared_ptr<int64_t> inBytes_ = nullptr;
    // Indicates whether the destination IP address is added to a whitelist. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> isMarkNormal_ = nullptr;
    // Location name.
    std::shared_ptr<string> locationName_ = nullptr;
    // The outbound traffic. Unit: bytes.
    std::shared_ptr<int64_t> outBytes_ = nullptr;
    // The outbound private asset count.
    std::shared_ptr<int64_t> privateAssetCount_ = nullptr;
    // The UUID of the access control policy.
    std::shared_ptr<string> ruleId_ = nullptr;
    // The name of the access control policy.
    std::shared_ptr<string> ruleName_ = nullptr;
    // The reason why the domain name is secure.
    std::shared_ptr<string> securityReason_ = nullptr;
    // The suggestion to handle the traffic of the domain name in outbound connections. Valid values:
    // 
    // *   **pass**: allow
    // *   **alert**: deny
    // *   **drop**: monitor
    std::shared_ptr<string> securitySuggest_ = nullptr;
    // The number of requests.
    std::shared_ptr<int64_t> sessionCount_ = nullptr;
    // The tags.
    std::shared_ptr<vector<Models::DescribeOutgoingDestinationIPResponseBodyDstIPListTagList>> tagList_ = nullptr;
    // The total traffic. Unit: bytes
    std::shared_ptr<string> totalBytes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
