// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAEGISCONTAINERPLUGINRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAEGISCONTAINERPLUGINRULERESPONSEBODY_HPP_
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
  class ListAegisContainerPluginRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAegisContainerPluginRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleList, ruleList_);
    };
    friend void from_json(const Darabonba::Json& j, ListAegisContainerPluginRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleList, ruleList_);
    };
    ListAegisContainerPluginRuleResponseBody() = default ;
    ListAegisContainerPluginRuleResponseBody(const ListAegisContainerPluginRuleResponseBody &) = default ;
    ListAegisContainerPluginRuleResponseBody(ListAegisContainerPluginRuleResponseBody &&) = default ;
    ListAegisContainerPluginRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAegisContainerPluginRuleResponseBody() = default ;
    ListAegisContainerPluginRuleResponseBody& operator=(const ListAegisContainerPluginRuleResponseBody &) = default ;
    ListAegisContainerPluginRuleResponseBody& operator=(ListAegisContainerPluginRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleList& obj) { 
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_TO_JSON(Mode, mode_);
        DARABONBA_PTR_TO_JSON(Policies, policies_);
        DARABONBA_PTR_TO_JSON(RuleDescription, ruleDescription_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
        DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
        DARABONBA_PTR_TO_JSON(RuleTemplateId, ruleTemplateId_);
        DARABONBA_PTR_TO_JSON(RuleTemplateName, ruleTemplateName_);
        DARABONBA_PTR_TO_JSON(SelectedPolicy, selectedPolicy_);
        DARABONBA_PTR_TO_JSON(SwitchId, switchId_);
        DARABONBA_PTR_TO_JSON(WhiteImages, whiteImages_);
      };
      friend void from_json(const Darabonba::Json& j, RuleList& obj) { 
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
        DARABONBA_PTR_FROM_JSON(Mode, mode_);
        DARABONBA_PTR_FROM_JSON(Policies, policies_);
        DARABONBA_PTR_FROM_JSON(RuleDescription, ruleDescription_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
        DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
        DARABONBA_PTR_FROM_JSON(RuleTemplateId, ruleTemplateId_);
        DARABONBA_PTR_FROM_JSON(RuleTemplateName, ruleTemplateName_);
        DARABONBA_PTR_FROM_JSON(SelectedPolicy, selectedPolicy_);
        DARABONBA_PTR_FROM_JSON(SwitchId, switchId_);
        DARABONBA_PTR_FROM_JSON(WhiteImages, whiteImages_);
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

      virtual bool empty() const override { return this->gmtCreate_ == nullptr
        && this->gmtModified_ == nullptr && this->mode_ == nullptr && this->policies_ == nullptr && this->ruleDescription_ == nullptr && this->ruleId_ == nullptr
        && this->ruleName_ == nullptr && this->ruleTemplateId_ == nullptr && this->ruleTemplateName_ == nullptr && this->selectedPolicy_ == nullptr && this->switchId_ == nullptr
        && this->whiteImages_ == nullptr; };
      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline RuleList& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // gmtModified Field Functions 
      bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
      void deleteGmtModified() { this->gmtModified_ = nullptr;};
      inline int64_t getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, 0L) };
      inline RuleList& setGmtModified(int64_t gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


      // mode Field Functions 
      bool hasMode() const { return this->mode_ != nullptr;};
      void deleteMode() { this->mode_ = nullptr;};
      inline int32_t getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, 0) };
      inline RuleList& setMode(int32_t mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


      // policies Field Functions 
      bool hasPolicies() const { return this->policies_ != nullptr;};
      void deletePolicies() { this->policies_ = nullptr;};
      inline const vector<RuleList::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<RuleList::Policies>) };
      inline vector<RuleList::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<RuleList::Policies>) };
      inline RuleList& setPolicies(const vector<RuleList::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
      inline RuleList& setPolicies(vector<RuleList::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


      // ruleDescription Field Functions 
      bool hasRuleDescription() const { return this->ruleDescription_ != nullptr;};
      void deleteRuleDescription() { this->ruleDescription_ = nullptr;};
      inline string getRuleDescription() const { DARABONBA_PTR_GET_DEFAULT(ruleDescription_, "") };
      inline RuleList& setRuleDescription(string ruleDescription) { DARABONBA_PTR_SET_VALUE(ruleDescription_, ruleDescription) };


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


      // ruleTemplateId Field Functions 
      bool hasRuleTemplateId() const { return this->ruleTemplateId_ != nullptr;};
      void deleteRuleTemplateId() { this->ruleTemplateId_ = nullptr;};
      inline string getRuleTemplateId() const { DARABONBA_PTR_GET_DEFAULT(ruleTemplateId_, "") };
      inline RuleList& setRuleTemplateId(string ruleTemplateId) { DARABONBA_PTR_SET_VALUE(ruleTemplateId_, ruleTemplateId) };


      // ruleTemplateName Field Functions 
      bool hasRuleTemplateName() const { return this->ruleTemplateName_ != nullptr;};
      void deleteRuleTemplateName() { this->ruleTemplateName_ = nullptr;};
      inline string getRuleTemplateName() const { DARABONBA_PTR_GET_DEFAULT(ruleTemplateName_, "") };
      inline RuleList& setRuleTemplateName(string ruleTemplateName) { DARABONBA_PTR_SET_VALUE(ruleTemplateName_, ruleTemplateName) };


      // selectedPolicy Field Functions 
      bool hasSelectedPolicy() const { return this->selectedPolicy_ != nullptr;};
      void deleteSelectedPolicy() { this->selectedPolicy_ = nullptr;};
      inline const vector<string> & getSelectedPolicy() const { DARABONBA_PTR_GET_CONST(selectedPolicy_, vector<string>) };
      inline vector<string> getSelectedPolicy() { DARABONBA_PTR_GET(selectedPolicy_, vector<string>) };
      inline RuleList& setSelectedPolicy(const vector<string> & selectedPolicy) { DARABONBA_PTR_SET_VALUE(selectedPolicy_, selectedPolicy) };
      inline RuleList& setSelectedPolicy(vector<string> && selectedPolicy) { DARABONBA_PTR_SET_RVALUE(selectedPolicy_, selectedPolicy) };


      // switchId Field Functions 
      bool hasSwitchId() const { return this->switchId_ != nullptr;};
      void deleteSwitchId() { this->switchId_ = nullptr;};
      inline string getSwitchId() const { DARABONBA_PTR_GET_DEFAULT(switchId_, "") };
      inline RuleList& setSwitchId(string switchId) { DARABONBA_PTR_SET_VALUE(switchId_, switchId) };


      // whiteImages Field Functions 
      bool hasWhiteImages() const { return this->whiteImages_ != nullptr;};
      void deleteWhiteImages() { this->whiteImages_ = nullptr;};
      inline const vector<string> & getWhiteImages() const { DARABONBA_PTR_GET_CONST(whiteImages_, vector<string>) };
      inline vector<string> getWhiteImages() { DARABONBA_PTR_GET(whiteImages_, vector<string>) };
      inline RuleList& setWhiteImages(const vector<string> & whiteImages) { DARABONBA_PTR_SET_VALUE(whiteImages_, whiteImages) };
      inline RuleList& setWhiteImages(vector<string> && whiteImages) { DARABONBA_PTR_SET_RVALUE(whiteImages_, whiteImages) };


    protected:
      // The time when the rule was created. Unit: milliseconds.
      shared_ptr<int64_t> gmtCreate_ {};
      // The time when the rule was modified. Unit: milliseconds.
      shared_ptr<int64_t> gmtModified_ {};
      // The action of the rule. Valid values:
      // 
      // *   **1**: Alert
      // *   **2**: Block
      shared_ptr<int32_t> mode_ {};
      // An array that consists of policies.
      shared_ptr<vector<RuleList::Policies>> policies_ {};
      // The description of the rule.
      shared_ptr<string> ruleDescription_ {};
      // The ID of the rule.
      shared_ptr<int64_t> ruleId_ {};
      // The name of the rule.
      shared_ptr<string> ruleName_ {};
      // The ID of the rule template. The ListSystemClientRules operation returns the ID of a rule template.
      shared_ptr<string> ruleTemplateId_ {};
      // The name of the rule template.
      shared_ptr<string> ruleTemplateName_ {};
      // The fields in the value of the rule subtype.
      shared_ptr<vector<string>> selectedPolicy_ {};
      // The switch ID of the rule.
      shared_ptr<string> switchId_ {};
      // The images that are added to the whitelist of the rule.
      shared_ptr<vector<string>> whiteImages_ {};
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
      // The page number.
      shared_ptr<int32_t> currentPage_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr && this->ruleList_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListAegisContainerPluginRuleResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListAegisContainerPluginRuleResponseBody::PageInfo) };
    inline ListAegisContainerPluginRuleResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListAegisContainerPluginRuleResponseBody::PageInfo) };
    inline ListAegisContainerPluginRuleResponseBody& setPageInfo(const ListAegisContainerPluginRuleResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListAegisContainerPluginRuleResponseBody& setPageInfo(ListAegisContainerPluginRuleResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAegisContainerPluginRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleList Field Functions 
    bool hasRuleList() const { return this->ruleList_ != nullptr;};
    void deleteRuleList() { this->ruleList_ = nullptr;};
    inline const vector<ListAegisContainerPluginRuleResponseBody::RuleList> & getRuleList() const { DARABONBA_PTR_GET_CONST(ruleList_, vector<ListAegisContainerPluginRuleResponseBody::RuleList>) };
    inline vector<ListAegisContainerPluginRuleResponseBody::RuleList> getRuleList() { DARABONBA_PTR_GET(ruleList_, vector<ListAegisContainerPluginRuleResponseBody::RuleList>) };
    inline ListAegisContainerPluginRuleResponseBody& setRuleList(const vector<ListAegisContainerPluginRuleResponseBody::RuleList> & ruleList) { DARABONBA_PTR_SET_VALUE(ruleList_, ruleList) };
    inline ListAegisContainerPluginRuleResponseBody& setRuleList(vector<ListAegisContainerPluginRuleResponseBody::RuleList> && ruleList) { DARABONBA_PTR_SET_RVALUE(ruleList_, ruleList) };


  protected:
    // The pagination information.
    shared_ptr<ListAegisContainerPluginRuleResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The rules.
    shared_ptr<vector<ListAegisContainerPluginRuleResponseBody::RuleList>> ruleList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
