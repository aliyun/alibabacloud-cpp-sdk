// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMANAGEDRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListManagedRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListManagedRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ManagedRules, managedRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListManagedRulesResponseBody() = default ;
    ListManagedRulesResponseBody(const ListManagedRulesResponseBody &) = default ;
    ListManagedRulesResponseBody(ListManagedRulesResponseBody &&) = default ;
    ListManagedRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListManagedRulesResponseBody() = default ;
    ListManagedRulesResponseBody& operator=(const ListManagedRulesResponseBody &) = default ;
    ListManagedRulesResponseBody& operator=(ListManagedRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ManagedRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ManagedRules& obj) { 
        DARABONBA_PTR_TO_JSON(ManagedRuleList, managedRuleList_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, ManagedRules& obj) { 
        DARABONBA_PTR_FROM_JSON(ManagedRuleList, managedRuleList_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      ManagedRules() = default ;
      ManagedRules(const ManagedRules &) = default ;
      ManagedRules(ManagedRules &&) = default ;
      ManagedRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ManagedRules() = default ;
      ManagedRules& operator=(const ManagedRules &) = default ;
      ManagedRules& operator=(ManagedRules &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ManagedRuleList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ManagedRuleList& obj) { 
          DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(HelpUrls, helpUrls_);
          DARABONBA_PTR_TO_JSON(Identifier, identifier_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(RemediationTemplateIdentifier, remediationTemplateIdentifier_);
          DARABONBA_PTR_TO_JSON(RemediationTemplateName, remediationTemplateName_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(SupportPreviewManagedRule, supportPreviewManagedRule_);
        };
        friend void from_json(const Darabonba::Json& j, ManagedRuleList& obj) { 
          DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(HelpUrls, helpUrls_);
          DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(RemediationTemplateIdentifier, remediationTemplateIdentifier_);
          DARABONBA_PTR_FROM_JSON(RemediationTemplateName, remediationTemplateName_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(SupportPreviewManagedRule, supportPreviewManagedRule_);
        };
        ManagedRuleList() = default ;
        ManagedRuleList(const ManagedRuleList &) = default ;
        ManagedRuleList(ManagedRuleList &&) = default ;
        ManagedRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ManagedRuleList() = default ;
        ManagedRuleList& operator=(const ManagedRuleList &) = default ;
        ManagedRuleList& operator=(ManagedRuleList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Scope : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Scope& obj) { 
            DARABONBA_PTR_TO_JSON(ComplianceResourceTypes, complianceResourceTypes_);
          };
          friend void from_json(const Darabonba::Json& j, Scope& obj) { 
            DARABONBA_PTR_FROM_JSON(ComplianceResourceTypes, complianceResourceTypes_);
          };
          Scope() = default ;
          Scope(const Scope &) = default ;
          Scope(Scope &&) = default ;
          Scope(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Scope() = default ;
          Scope& operator=(const Scope &) = default ;
          Scope& operator=(Scope &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->complianceResourceTypes_ == nullptr; };
          // complianceResourceTypes Field Functions 
          bool hasComplianceResourceTypes() const { return this->complianceResourceTypes_ != nullptr;};
          void deleteComplianceResourceTypes() { this->complianceResourceTypes_ = nullptr;};
          inline const vector<string> & getComplianceResourceTypes() const { DARABONBA_PTR_GET_CONST(complianceResourceTypes_, vector<string>) };
          inline vector<string> getComplianceResourceTypes() { DARABONBA_PTR_GET(complianceResourceTypes_, vector<string>) };
          inline Scope& setComplianceResourceTypes(const vector<string> & complianceResourceTypes) { DARABONBA_PTR_SET_VALUE(complianceResourceTypes_, complianceResourceTypes) };
          inline Scope& setComplianceResourceTypes(vector<string> && complianceResourceTypes) { DARABONBA_PTR_SET_RVALUE(complianceResourceTypes_, complianceResourceTypes) };


        protected:
          // The types of resources to which the managed rule applies.
          shared_ptr<vector<string>> complianceResourceTypes_ {};
        };

        virtual bool empty() const override { return this->configRuleName_ == nullptr
        && this->description_ == nullptr && this->helpUrls_ == nullptr && this->identifier_ == nullptr && this->labels_ == nullptr && this->remediationTemplateIdentifier_ == nullptr
        && this->remediationTemplateName_ == nullptr && this->riskLevel_ == nullptr && this->scope_ == nullptr && this->supportPreviewManagedRule_ == nullptr; };
        // configRuleName Field Functions 
        bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
        void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
        inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
        inline ManagedRuleList& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline ManagedRuleList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // helpUrls Field Functions 
        bool hasHelpUrls() const { return this->helpUrls_ != nullptr;};
        void deleteHelpUrls() { this->helpUrls_ = nullptr;};
        inline string getHelpUrls() const { DARABONBA_PTR_GET_DEFAULT(helpUrls_, "") };
        inline ManagedRuleList& setHelpUrls(string helpUrls) { DARABONBA_PTR_SET_VALUE(helpUrls_, helpUrls) };


        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline ManagedRuleList& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline const vector<string> & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, vector<string>) };
        inline vector<string> getLabels() { DARABONBA_PTR_GET(labels_, vector<string>) };
        inline ManagedRuleList& setLabels(const vector<string> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
        inline ManagedRuleList& setLabels(vector<string> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


        // remediationTemplateIdentifier Field Functions 
        bool hasRemediationTemplateIdentifier() const { return this->remediationTemplateIdentifier_ != nullptr;};
        void deleteRemediationTemplateIdentifier() { this->remediationTemplateIdentifier_ = nullptr;};
        inline string getRemediationTemplateIdentifier() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateIdentifier_, "") };
        inline ManagedRuleList& setRemediationTemplateIdentifier(string remediationTemplateIdentifier) { DARABONBA_PTR_SET_VALUE(remediationTemplateIdentifier_, remediationTemplateIdentifier) };


        // remediationTemplateName Field Functions 
        bool hasRemediationTemplateName() const { return this->remediationTemplateName_ != nullptr;};
        void deleteRemediationTemplateName() { this->remediationTemplateName_ = nullptr;};
        inline string getRemediationTemplateName() const { DARABONBA_PTR_GET_DEFAULT(remediationTemplateName_, "") };
        inline ManagedRuleList& setRemediationTemplateName(string remediationTemplateName) { DARABONBA_PTR_SET_VALUE(remediationTemplateName_, remediationTemplateName) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline ManagedRuleList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline const ManagedRuleList::Scope & getScope() const { DARABONBA_PTR_GET_CONST(scope_, ManagedRuleList::Scope) };
        inline ManagedRuleList::Scope getScope() { DARABONBA_PTR_GET(scope_, ManagedRuleList::Scope) };
        inline ManagedRuleList& setScope(const ManagedRuleList::Scope & scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };
        inline ManagedRuleList& setScope(ManagedRuleList::Scope && scope) { DARABONBA_PTR_SET_RVALUE(scope_, scope) };


        // supportPreviewManagedRule Field Functions 
        bool hasSupportPreviewManagedRule() const { return this->supportPreviewManagedRule_ != nullptr;};
        void deleteSupportPreviewManagedRule() { this->supportPreviewManagedRule_ = nullptr;};
        inline bool getSupportPreviewManagedRule() const { DARABONBA_PTR_GET_DEFAULT(supportPreviewManagedRule_, false) };
        inline ManagedRuleList& setSupportPreviewManagedRule(bool supportPreviewManagedRule) { DARABONBA_PTR_SET_VALUE(supportPreviewManagedRule_, supportPreviewManagedRule) };


      protected:
        // The name of the managed rule.
        shared_ptr<string> configRuleName_ {};
        // The description of the managed rule.
        shared_ptr<string> description_ {};
        // The URL of the topic that describes how the managed rule remediates the incompliant configurations.
        shared_ptr<string> helpUrls_ {};
        // The unique identifier of the managed rule.
        shared_ptr<string> identifier_ {};
        // The classification description of the managed rule.
        shared_ptr<vector<string>> labels_ {};
        // The ID of the remediation template.
        shared_ptr<string> remediationTemplateIdentifier_ {};
        // The name of the remediation template.
        shared_ptr<string> remediationTemplateName_ {};
        // The risk level of the resources that do not comply with the rule. Valid values:
        // 
        // *   1: high
        // *   2: medium
        // *   3: low
        shared_ptr<int32_t> riskLevel_ {};
        // The effective scope of the managed rule.
        shared_ptr<ManagedRuleList::Scope> scope_ {};
        // Indicates whether precheck is supported. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> supportPreviewManagedRule_ {};
      };

      virtual bool empty() const override { return this->managedRuleList_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // managedRuleList Field Functions 
      bool hasManagedRuleList() const { return this->managedRuleList_ != nullptr;};
      void deleteManagedRuleList() { this->managedRuleList_ = nullptr;};
      inline const vector<ManagedRules::ManagedRuleList> & getManagedRuleList() const { DARABONBA_PTR_GET_CONST(managedRuleList_, vector<ManagedRules::ManagedRuleList>) };
      inline vector<ManagedRules::ManagedRuleList> getManagedRuleList() { DARABONBA_PTR_GET(managedRuleList_, vector<ManagedRules::ManagedRuleList>) };
      inline ManagedRules& setManagedRuleList(const vector<ManagedRules::ManagedRuleList> & managedRuleList) { DARABONBA_PTR_SET_VALUE(managedRuleList_, managedRuleList) };
      inline ManagedRules& setManagedRuleList(vector<ManagedRules::ManagedRuleList> && managedRuleList) { DARABONBA_PTR_SET_RVALUE(managedRuleList_, managedRuleList) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline ManagedRules& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline ManagedRules& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline ManagedRules& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The details of the managed rule.
      shared_ptr<vector<ManagedRules::ManagedRuleList>> managedRuleList_ {};
      // The page number.
      // 
      // Page start from page 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries returned per page. Valid values: 1 to 500.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of entries returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->managedRules_ == nullptr
        && this->requestId_ == nullptr; };
    // managedRules Field Functions 
    bool hasManagedRules() const { return this->managedRules_ != nullptr;};
    void deleteManagedRules() { this->managedRules_ = nullptr;};
    inline const ListManagedRulesResponseBody::ManagedRules & getManagedRules() const { DARABONBA_PTR_GET_CONST(managedRules_, ListManagedRulesResponseBody::ManagedRules) };
    inline ListManagedRulesResponseBody::ManagedRules getManagedRules() { DARABONBA_PTR_GET(managedRules_, ListManagedRulesResponseBody::ManagedRules) };
    inline ListManagedRulesResponseBody& setManagedRules(const ListManagedRulesResponseBody::ManagedRules & managedRules) { DARABONBA_PTR_SET_VALUE(managedRules_, managedRules) };
    inline ListManagedRulesResponseBody& setManagedRules(ListManagedRulesResponseBody::ManagedRules && managedRules) { DARABONBA_PTR_SET_RVALUE(managedRules_, managedRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListManagedRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The managed rules.
    shared_ptr<ListManagedRulesResponseBody::ManagedRules> managedRules_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
