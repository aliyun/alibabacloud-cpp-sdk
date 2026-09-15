// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEGROUPEDVULLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEGROUPEDVULLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageGroupedVulListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageGroupedVulListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(GroupedVulItems, groupedVulItems_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageGroupedVulListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(GroupedVulItems, groupedVulItems_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeImageGroupedVulListResponseBody() = default ;
    DescribeImageGroupedVulListResponseBody(const DescribeImageGroupedVulListResponseBody &) = default ;
    DescribeImageGroupedVulListResponseBody(DescribeImageGroupedVulListResponseBody &&) = default ;
    DescribeImageGroupedVulListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageGroupedVulListResponseBody() = default ;
    DescribeImageGroupedVulListResponseBody& operator=(const DescribeImageGroupedVulListResponseBody &) = default ;
    DescribeImageGroupedVulListResponseBody& operator=(DescribeImageGroupedVulListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class GroupedVulItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const GroupedVulItems& obj) { 
        DARABONBA_PTR_TO_JSON(AgentlessCanFix, agentlessCanFix_);
        DARABONBA_PTR_TO_JSON(AliasName, aliasName_);
        DARABONBA_PTR_TO_JSON(AsapCount, asapCount_);
        DARABONBA_PTR_TO_JSON(CanFix, canFix_);
        DARABONBA_PTR_TO_JSON(CveScore, cveScore_);
        DARABONBA_PTR_TO_JSON(GmtLast, gmtLast_);
        DARABONBA_PTR_TO_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_TO_JSON(LaterCount, laterCount_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(NntfCount, nntfCount_);
        DARABONBA_PTR_TO_JSON(Related, related_);
        DARABONBA_PTR_TO_JSON(RuleTag, ruleTag_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, GroupedVulItems& obj) { 
        DARABONBA_PTR_FROM_JSON(AgentlessCanFix, agentlessCanFix_);
        DARABONBA_PTR_FROM_JSON(AliasName, aliasName_);
        DARABONBA_PTR_FROM_JSON(AsapCount, asapCount_);
        DARABONBA_PTR_FROM_JSON(CanFix, canFix_);
        DARABONBA_PTR_FROM_JSON(CveScore, cveScore_);
        DARABONBA_PTR_FROM_JSON(GmtLast, gmtLast_);
        DARABONBA_PTR_FROM_JSON(LastScanTime, lastScanTime_);
        DARABONBA_PTR_FROM_JSON(LaterCount, laterCount_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(NntfCount, nntfCount_);
        DARABONBA_PTR_FROM_JSON(Related, related_);
        DARABONBA_PTR_FROM_JSON(RuleTag, ruleTag_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      GroupedVulItems() = default ;
      GroupedVulItems(const GroupedVulItems &) = default ;
      GroupedVulItems(GroupedVulItems &&) = default ;
      GroupedVulItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~GroupedVulItems() = default ;
      GroupedVulItems& operator=(const GroupedVulItems &) = default ;
      GroupedVulItems& operator=(GroupedVulItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->agentlessCanFix_ == nullptr
        && this->aliasName_ == nullptr && this->asapCount_ == nullptr && this->canFix_ == nullptr && this->cveScore_ == nullptr && this->gmtLast_ == nullptr
        && this->lastScanTime_ == nullptr && this->laterCount_ == nullptr && this->name_ == nullptr && this->nntfCount_ == nullptr && this->related_ == nullptr
        && this->ruleTag_ == nullptr && this->status_ == nullptr && this->tags_ == nullptr && this->type_ == nullptr; };
      // agentlessCanFix Field Functions 
      bool hasAgentlessCanFix() const { return this->agentlessCanFix_ != nullptr;};
      void deleteAgentlessCanFix() { this->agentlessCanFix_ = nullptr;};
      inline string getAgentlessCanFix() const { DARABONBA_PTR_GET_DEFAULT(agentlessCanFix_, "") };
      inline GroupedVulItems& setAgentlessCanFix(string agentlessCanFix) { DARABONBA_PTR_SET_VALUE(agentlessCanFix_, agentlessCanFix) };


      // aliasName Field Functions 
      bool hasAliasName() const { return this->aliasName_ != nullptr;};
      void deleteAliasName() { this->aliasName_ = nullptr;};
      inline string getAliasName() const { DARABONBA_PTR_GET_DEFAULT(aliasName_, "") };
      inline GroupedVulItems& setAliasName(string aliasName) { DARABONBA_PTR_SET_VALUE(aliasName_, aliasName) };


      // asapCount Field Functions 
      bool hasAsapCount() const { return this->asapCount_ != nullptr;};
      void deleteAsapCount() { this->asapCount_ = nullptr;};
      inline int32_t getAsapCount() const { DARABONBA_PTR_GET_DEFAULT(asapCount_, 0) };
      inline GroupedVulItems& setAsapCount(int32_t asapCount) { DARABONBA_PTR_SET_VALUE(asapCount_, asapCount) };


      // canFix Field Functions 
      bool hasCanFix() const { return this->canFix_ != nullptr;};
      void deleteCanFix() { this->canFix_ = nullptr;};
      inline string getCanFix() const { DARABONBA_PTR_GET_DEFAULT(canFix_, "") };
      inline GroupedVulItems& setCanFix(string canFix) { DARABONBA_PTR_SET_VALUE(canFix_, canFix) };


      // cveScore Field Functions 
      bool hasCveScore() const { return this->cveScore_ != nullptr;};
      void deleteCveScore() { this->cveScore_ = nullptr;};
      inline string getCveScore() const { DARABONBA_PTR_GET_DEFAULT(cveScore_, "") };
      inline GroupedVulItems& setCveScore(string cveScore) { DARABONBA_PTR_SET_VALUE(cveScore_, cveScore) };


      // gmtLast Field Functions 
      bool hasGmtLast() const { return this->gmtLast_ != nullptr;};
      void deleteGmtLast() { this->gmtLast_ = nullptr;};
      inline int64_t getGmtLast() const { DARABONBA_PTR_GET_DEFAULT(gmtLast_, 0L) };
      inline GroupedVulItems& setGmtLast(int64_t gmtLast) { DARABONBA_PTR_SET_VALUE(gmtLast_, gmtLast) };


      // lastScanTime Field Functions 
      bool hasLastScanTime() const { return this->lastScanTime_ != nullptr;};
      void deleteLastScanTime() { this->lastScanTime_ = nullptr;};
      inline int64_t getLastScanTime() const { DARABONBA_PTR_GET_DEFAULT(lastScanTime_, 0L) };
      inline GroupedVulItems& setLastScanTime(int64_t lastScanTime) { DARABONBA_PTR_SET_VALUE(lastScanTime_, lastScanTime) };


      // laterCount Field Functions 
      bool hasLaterCount() const { return this->laterCount_ != nullptr;};
      void deleteLaterCount() { this->laterCount_ = nullptr;};
      inline int32_t getLaterCount() const { DARABONBA_PTR_GET_DEFAULT(laterCount_, 0) };
      inline GroupedVulItems& setLaterCount(int32_t laterCount) { DARABONBA_PTR_SET_VALUE(laterCount_, laterCount) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline GroupedVulItems& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // nntfCount Field Functions 
      bool hasNntfCount() const { return this->nntfCount_ != nullptr;};
      void deleteNntfCount() { this->nntfCount_ = nullptr;};
      inline int32_t getNntfCount() const { DARABONBA_PTR_GET_DEFAULT(nntfCount_, 0) };
      inline GroupedVulItems& setNntfCount(int32_t nntfCount) { DARABONBA_PTR_SET_VALUE(nntfCount_, nntfCount) };


      // related Field Functions 
      bool hasRelated() const { return this->related_ != nullptr;};
      void deleteRelated() { this->related_ = nullptr;};
      inline string getRelated() const { DARABONBA_PTR_GET_DEFAULT(related_, "") };
      inline GroupedVulItems& setRelated(string related) { DARABONBA_PTR_SET_VALUE(related_, related) };


      // ruleTag Field Functions 
      bool hasRuleTag() const { return this->ruleTag_ != nullptr;};
      void deleteRuleTag() { this->ruleTag_ = nullptr;};
      inline string getRuleTag() const { DARABONBA_PTR_GET_DEFAULT(ruleTag_, "") };
      inline GroupedVulItems& setRuleTag(string ruleTag) { DARABONBA_PTR_SET_VALUE(ruleTag_, ruleTag) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline GroupedVulItems& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
      inline GroupedVulItems& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline GroupedVulItems& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Indicates whether the vulnerability supports agentless fix. true: supported. false: not supported. If this field is not returned, no corresponding fix capability information is available.
      shared_ptr<string> agentlessCanFix_ {};
      // The alias of the vulnerability.
      shared_ptr<string> aliasName_ {};
      // The number of high-priority vulnerabilities.
      shared_ptr<int32_t> asapCount_ {};
      // Indicates whether the vulnerability can be fixed. Valid values:
      // - **yes**: The vulnerability can be fixed.
      // - **no**: The vulnerability cannot be fixed.
      shared_ptr<string> canFix_ {};
      // The CVSS score of the vulnerability, which measures the vulnerability severity. The value ranges from 0 to 10. A higher score indicates a higher severity.
      shared_ptr<string> cveScore_ {};
      // The timestamp of the first scan, in milliseconds.
      shared_ptr<int64_t> gmtLast_ {};
      // The timestamp of the latest scan, in milliseconds.
      shared_ptr<int64_t> lastScanTime_ {};
      // The number of medium-priority vulnerabilities.
      shared_ptr<int32_t> laterCount_ {};
      // The name of the vulnerability.
      shared_ptr<string> name_ {};
      // The number of low-priority vulnerabilities.
      shared_ptr<int32_t> nntfCount_ {};
      // The associated vulnerability IDs, such as CVE IDs. Multiple IDs are separated by commas (,). Some vulnerabilities return the corresponding vulnerability advisory IDs.
      shared_ptr<string> related_ {};
      // The vulnerability tag. Valid values:
      // 
      //  - **AI**: vulnerabilities related to AI components
      shared_ptr<string> ruleTag_ {};
      // The processing status of the vulnerability. Valid values:
      // 
      // - **0**: Unhandled.
      // - **1**: Handled.
      // - **2**: Verifying.
      // - **3**: Added to the whitelist.
      shared_ptr<int32_t> status_ {};
      // The labels of the vulnerability. Valid values:
      // 
      // <props="china">
      // - Restart required
      // - Remote utilization
      // - EXP exists
      // - Exploitable
      // - Privilege escalation
      // - Code execution
      // 
      // 
      // <props="intl">
      // - Restart required
      // - Remote utilization
      // - EXP exists
      // - Exploitable
      // - Privilege escalation
      // - Code Execution
      shared_ptr<string> tags_ {};
      // The type of vulnerability to query. Valid values:
      // - **cve**: image system vulnerability
      // - **sca**: image application vulnerability
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->groupedVulItems_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeImageGroupedVulListResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // groupedVulItems Field Functions 
    bool hasGroupedVulItems() const { return this->groupedVulItems_ != nullptr;};
    void deleteGroupedVulItems() { this->groupedVulItems_ = nullptr;};
    inline const vector<DescribeImageGroupedVulListResponseBody::GroupedVulItems> & getGroupedVulItems() const { DARABONBA_PTR_GET_CONST(groupedVulItems_, vector<DescribeImageGroupedVulListResponseBody::GroupedVulItems>) };
    inline vector<DescribeImageGroupedVulListResponseBody::GroupedVulItems> getGroupedVulItems() { DARABONBA_PTR_GET(groupedVulItems_, vector<DescribeImageGroupedVulListResponseBody::GroupedVulItems>) };
    inline DescribeImageGroupedVulListResponseBody& setGroupedVulItems(const vector<DescribeImageGroupedVulListResponseBody::GroupedVulItems> & groupedVulItems) { DARABONBA_PTR_SET_VALUE(groupedVulItems_, groupedVulItems) };
    inline DescribeImageGroupedVulListResponseBody& setGroupedVulItems(vector<DescribeImageGroupedVulListResponseBody::GroupedVulItems> && groupedVulItems) { DARABONBA_PTR_SET_RVALUE(groupedVulItems_, groupedVulItems) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeImageGroupedVulListResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeImageGroupedVulListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeImageGroupedVulListResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The page number of the current page in a paging query.
    shared_ptr<int32_t> currentPage_ {};
    // The list of image vulnerabilities.
    shared_ptr<vector<DescribeImageGroupedVulListResponseBody::GroupedVulItems>> groupedVulItems_ {};
    // The number of image vulnerabilities displayed on each page in a paging query. Default value: **20**, which indicates 20 image vulnerability records per page.
    shared_ptr<int32_t> pageSize_ {};
    // The request ID, which is a unique identifier generated by Alibaba Cloud for the request. You can use it to troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // The total number of image system vulnerabilities.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
