// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSTEMCLIENTRULESRESPONSEBODY_HPP_
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
  class ListSystemClientRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSystemClientRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListSystemClientRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    ListSystemClientRulesResponseBody() = default ;
    ListSystemClientRulesResponseBody(const ListSystemClientRulesResponseBody &) = default ;
    ListSystemClientRulesResponseBody(ListSystemClientRulesResponseBody &&) = default ;
    ListSystemClientRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSystemClientRulesResponseBody() = default ;
    ListSystemClientRulesResponseBody& operator=(const ListSystemClientRulesResponseBody &) = default ;
    ListSystemClientRulesResponseBody& operator=(ListSystemClientRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
        DARABONBA_PTR_TO_JSON(AggregationName, aggregationName_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Policies, policies_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleType, ruleType_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(SwitchEnable, switchEnable_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
      };
      friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(AggregationName, aggregationName_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Policies, policies_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleType, ruleType_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(SwitchEnable, switchEnable_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
      };
      RuleList() = default ;
      RuleList(const RuleList &) = default ;
      RuleList(RuleList &&) = default ;
      RuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleList() = default ;
      RuleList& operator=(const RuleList &) = default ;
      RuleList& operator=(RuleList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Policies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Policies& obj) { 
          DARABONBA_PTR_TO_JSON(PolicyKey, policyKey_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
        };
        friend void from_json(const Darabonba::Json& j, Policies& obj) { 
          DARABONBA_PTR_FROM_JSON(PolicyKey, policyKey_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
        };
        Policies() = default ;
        Policies(const Policies &) = default ;
        Policies(Policies &&) = default ;
        Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Policies() = default ;
        Policies& operator=(const Policies &) = default ;
        Policies& operator=(Policies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->policyKey_ == nullptr
        && this->policyName_ == nullptr; };
        // policyKey Field Functions 
        bool hasPolicyKey() const { return this->policyKey_ != nullptr;};
        void deletePolicyKey() { this->policyKey_ = nullptr;};
        inline string getPolicyKey() const { DARABONBA_PTR_GET_DEFAULT(policyKey_, "") };
        inline Policies& setPolicyKey(string policyKey) { DARABONBA_PTR_SET_VALUE(policyKey_, policyKey) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline Policies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


      protected:
        // The policy key.
        shared_ptr<string> policyKey_ {};
        // The name of the policy.
        shared_ptr<string> policyName_ {};
      };

      virtual bool empty() const override { return this->aggregationName_ == nullptr
        && this->description_ == nullptr && this->platform_ == nullptr && this->policies_ == nullptr && this->ruleId_ == nullptr && this->ruleName_ == nullptr
        && this->ruleType_ == nullptr && this->status_ == nullptr && this->switchEnable_ == nullptr && this->switchId_ == nullptr; };
      // aggregationName Field Functions 
      bool hasAggregationName() const { return this->aggregationName_ != nullptr;};
      void deleteAggregationName() { this->aggregationName_ = nullptr;};
      inline string getAggregationName() const { DARABONBA_PTR_GET_DEFAULT(aggregationName_, "") };
      inline RuleList& setAggregationName(string aggregationName) { DARABONBA_PTR_SET_VALUE(aggregationName_, aggregationName) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline RuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline RuleList& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // policies Field Functions 
      bool hasPolicies() const { return this->policies_ != nullptr;};
      void deletePolicies() { this->policies_ = nullptr;};
      inline const vector<RuleList::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<RuleList::Policies>) };
      inline vector<RuleList::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<RuleList::Policies>) };
      inline RuleList& setPolicies(const vector<RuleList::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
      inline RuleList& setPolicies(vector<RuleList::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline int64_t getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, 0L) };
      inline RuleList& setRuleId(int64_t ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


      // ruleName Field Functions 
      bool hasRuleName() const { return this->ruleName_ != nullptr;};
      void deleteRuleName() { this->ruleName_ = nullptr;};
      inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
      inline RuleList& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


      // ruleType Field Functions 
      bool hasRuleType() const { return this->ruleType_ != nullptr;};
      void deleteRuleType() { this->ruleType_ = nullptr;};
      inline int32_t getRuleType() const { DARABONBA_PTR_GET_DEFAULT(ruleType_, 0) };
      inline RuleList& setRuleType(int32_t ruleType) { DARABONBA_PTR_SET_VALUE(ruleType_, ruleType) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline RuleList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // switchEnable Field Functions 
      bool hasSwitchEnable() const { return this->switchEnable_ != nullptr;};
      void deleteSwitchEnable() { this->switchEnable_ = nullptr;};
      inline bool getSwitchEnable() const { DARABONBA_PTR_GET_DEFAULT(switchEnable_, false) };
      inline RuleList& setSwitchEnable(bool switchEnable) { DARABONBA_PTR_SET_VALUE(switchEnable_, switchEnable) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline RuleList& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


    protected:
      // The name of the aggregation type for the system defense rule.
      shared_ptr<string> aggregationName_ {};
      // The description of the system defense rule.
      shared_ptr<string> description_ {};
      // The type of the OS. Valid values:
      // 
      // *   **windows**: Windows
      // *   **linux**: Linux
      // *   **all**: all types
      shared_ptr<string> platform_ {};
      // An array that consists of policies.
      shared_ptr<vector<RuleList::Policies>> policies_ {};
      // The ID of the system defense rule.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the system defense rule.
      shared_ptr<string> ruleName_ {};
      // The type of the system defense rule. Valid values:
      // 
      // *   **1**: alihips, process-specific defense
      // *   **2**: alinet, network-specific defense
      shared_ptr<int32_t> ruleType_ {};
      // The status of the system defense rule. Valid values:
      // 
      // *   **online**: enabled
      // *   **offline**: disabled
      shared_ptr<int32_t> status_ {};
      // Whether the current rule switch takes effect. Valid values:
      // 
      // *   **true**: enabled
      // *   **false**: disabled
      shared_ptr<bool> switchEnable_ {};
      // The switch ID of the system defense rule.
      shared_ptr<string> switchId_ {};
    };

    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->currentPage_ == nullptr
        && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // currentPage Field Functions 
      bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
      void deleteCurrentPage() { this->currentPage_ = nullptr;};
      inline int32_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
      inline PageInfo& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The page number of the returned page.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries returned per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->ruleList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListSystemClientRulesResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListSystemClientRulesResponseBody::PageInfo) };
    inline ListSystemClientRulesResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListSystemClientRulesResponseBody::PageInfo) };
    inline ListSystemClientRulesResponseBody& setPageInfo(const ListSystemClientRulesResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListSystemClientRulesResponseBody& setPageInfo(ListSystemClientRulesResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSystemClientRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<ListSystemClientRulesResponseBody::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<ListSystemClientRulesResponseBody::RuleList>) };
    inline vector<ListSystemClientRulesResponseBody::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<ListSystemClientRulesResponseBody::RuleList>) };
    inline ListSystemClientRulesResponseBody& setRuleList(const vector<ListSystemClientRulesResponseBody::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListSystemClientRulesResponseBody& setRuleList(vector<ListSystemClientRulesResponseBody::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The pagination information.
    shared_ptr<ListSystemClientRulesResponseBody::PageInfo> pageInfo_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // An array that consists of the system defense rules.
    shared_ptr<vector<ListSystemClientRulesResponseBody::RuleList>> ruleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
