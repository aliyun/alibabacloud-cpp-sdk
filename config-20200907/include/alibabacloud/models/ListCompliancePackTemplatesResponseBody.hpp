// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKTEMPLATESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPLIANCEPACKTEMPLATESRESPONSEBODY_HPP_
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
  class ListCompliancePackTemplatesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCompliancePackTemplatesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CompliancePackTemplatesResult, compliancePackTemplatesResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCompliancePackTemplatesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CompliancePackTemplatesResult, compliancePackTemplatesResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListCompliancePackTemplatesResponseBody() = default ;
    ListCompliancePackTemplatesResponseBody(const ListCompliancePackTemplatesResponseBody &) = default ;
    ListCompliancePackTemplatesResponseBody(ListCompliancePackTemplatesResponseBody &&) = default ;
    ListCompliancePackTemplatesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCompliancePackTemplatesResponseBody() = default ;
    ListCompliancePackTemplatesResponseBody& operator=(const ListCompliancePackTemplatesResponseBody &) = default ;
    ListCompliancePackTemplatesResponseBody& operator=(ListCompliancePackTemplatesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CompliancePackTemplatesResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CompliancePackTemplatesResult& obj) { 
        DARABONBA_PTR_TO_JSON(CompliancePackTemplates, compliancePackTemplates_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, CompliancePackTemplatesResult& obj) { 
        DARABONBA_PTR_FROM_JSON(CompliancePackTemplates, compliancePackTemplates_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      CompliancePackTemplatesResult() = default ;
      CompliancePackTemplatesResult(const CompliancePackTemplatesResult &) = default ;
      CompliancePackTemplatesResult(CompliancePackTemplatesResult &&) = default ;
      CompliancePackTemplatesResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CompliancePackTemplatesResult() = default ;
      CompliancePackTemplatesResult& operator=(const CompliancePackTemplatesResult &) = default ;
      CompliancePackTemplatesResult& operator=(CompliancePackTemplatesResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CompliancePackTemplates : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CompliancePackTemplates& obj) { 
          DARABONBA_PTR_TO_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
          DARABONBA_PTR_TO_JSON(CompliancePackTemplateName, compliancePackTemplateName_);
          DARABONBA_PTR_TO_JSON(ConfigRules, configRules_);
          DARABONBA_PTR_TO_JSON(Description, description_);
          DARABONBA_PTR_TO_JSON(Labels, labels_);
          DARABONBA_PTR_TO_JSON(LastUpdate, lastUpdate_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, CompliancePackTemplates& obj) { 
          DARABONBA_PTR_FROM_JSON(CompliancePackTemplateId, compliancePackTemplateId_);
          DARABONBA_PTR_FROM_JSON(CompliancePackTemplateName, compliancePackTemplateName_);
          DARABONBA_PTR_FROM_JSON(ConfigRules, configRules_);
          DARABONBA_PTR_FROM_JSON(Description, description_);
          DARABONBA_PTR_FROM_JSON(Labels, labels_);
          DARABONBA_PTR_FROM_JSON(LastUpdate, lastUpdate_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        CompliancePackTemplates() = default ;
        CompliancePackTemplates(const CompliancePackTemplates &) = default ;
        CompliancePackTemplates(CompliancePackTemplates &&) = default ;
        CompliancePackTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CompliancePackTemplates() = default ;
        CompliancePackTemplates& operator=(const CompliancePackTemplates &) = default ;
        CompliancePackTemplates& operator=(CompliancePackTemplates &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ConfigRules : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ConfigRules& obj) { 
            DARABONBA_PTR_TO_JSON(ConfigRuleParameters, configRuleParameters_);
            DARABONBA_PTR_TO_JSON(ControlDescription, controlDescription_);
            DARABONBA_PTR_TO_JSON(ControlId, controlId_);
            DARABONBA_PTR_TO_JSON(DefaultEnable, defaultEnable_);
            DARABONBA_PTR_TO_JSON(Description, description_);
            DARABONBA_PTR_TO_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
            DARABONBA_PTR_TO_JSON(ManagedRuleName, managedRuleName_);
            DARABONBA_PTR_TO_JSON(ResourceTypesScope, resourceTypesScope_);
            DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          };
          friend void from_json(const Darabonba::Json& j, ConfigRules& obj) { 
            DARABONBA_PTR_FROM_JSON(ConfigRuleParameters, configRuleParameters_);
            DARABONBA_PTR_FROM_JSON(ControlDescription, controlDescription_);
            DARABONBA_PTR_FROM_JSON(ControlId, controlId_);
            DARABONBA_PTR_FROM_JSON(DefaultEnable, defaultEnable_);
            DARABONBA_PTR_FROM_JSON(Description, description_);
            DARABONBA_PTR_FROM_JSON(ManagedRuleIdentifier, managedRuleIdentifier_);
            DARABONBA_PTR_FROM_JSON(ManagedRuleName, managedRuleName_);
            DARABONBA_PTR_FROM_JSON(ResourceTypesScope, resourceTypesScope_);
            DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          };
          ConfigRules() = default ;
          ConfigRules(const ConfigRules &) = default ;
          ConfigRules(ConfigRules &&) = default ;
          ConfigRules(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ConfigRules() = default ;
          ConfigRules& operator=(const ConfigRules &) = default ;
          ConfigRules& operator=(ConfigRules &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class ConfigRuleParameters : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const ConfigRuleParameters& obj) { 
              DARABONBA_PTR_TO_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_TO_JSON(ParameterValue, parameterValue_);
              DARABONBA_PTR_TO_JSON(Required, required_);
            };
            friend void from_json(const Darabonba::Json& j, ConfigRuleParameters& obj) { 
              DARABONBA_PTR_FROM_JSON(ParameterName, parameterName_);
              DARABONBA_PTR_FROM_JSON(ParameterValue, parameterValue_);
              DARABONBA_PTR_FROM_JSON(Required, required_);
            };
            ConfigRuleParameters() = default ;
            ConfigRuleParameters(const ConfigRuleParameters &) = default ;
            ConfigRuleParameters(ConfigRuleParameters &&) = default ;
            ConfigRuleParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~ConfigRuleParameters() = default ;
            ConfigRuleParameters& operator=(const ConfigRuleParameters &) = default ;
            ConfigRuleParameters& operator=(ConfigRuleParameters &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->parameterName_ == nullptr
        && this->parameterValue_ == nullptr && this->required_ == nullptr; };
            // parameterName Field Functions 
            bool hasParameterName() const { return this->parameterName_ != nullptr;};
            void deleteParameterName() { this->parameterName_ = nullptr;};
            inline string getParameterName() const { DARABONBA_PTR_GET_DEFAULT(parameterName_, "") };
            inline ConfigRuleParameters& setParameterName(string parameterName) { DARABONBA_PTR_SET_VALUE(parameterName_, parameterName) };


            // parameterValue Field Functions 
            bool hasParameterValue() const { return this->parameterValue_ != nullptr;};
            void deleteParameterValue() { this->parameterValue_ = nullptr;};
            inline string getParameterValue() const { DARABONBA_PTR_GET_DEFAULT(parameterValue_, "") };
            inline ConfigRuleParameters& setParameterValue(string parameterValue) { DARABONBA_PTR_SET_VALUE(parameterValue_, parameterValue) };


            // required Field Functions 
            bool hasRequired() const { return this->required_ != nullptr;};
            void deleteRequired() { this->required_ = nullptr;};
            inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
            inline ConfigRuleParameters& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


          protected:
            // The name of the input parameter of the managed rule.
            shared_ptr<string> parameterName_ {};
            // The value of the input parameter of the managed rule.
            shared_ptr<string> parameterValue_ {};
            // Indicates whether the parameter is required in the managed rule. Valid values:
            // 
            // *   true: required
            // *   false: optional
            shared_ptr<bool> required_ {};
          };

          virtual bool empty() const override { return this->configRuleParameters_ == nullptr
        && this->controlDescription_ == nullptr && this->controlId_ == nullptr && this->defaultEnable_ == nullptr && this->description_ == nullptr && this->managedRuleIdentifier_ == nullptr
        && this->managedRuleName_ == nullptr && this->resourceTypesScope_ == nullptr && this->riskLevel_ == nullptr; };
          // configRuleParameters Field Functions 
          bool hasConfigRuleParameters() const { return this->configRuleParameters_ != nullptr;};
          void deleteConfigRuleParameters() { this->configRuleParameters_ = nullptr;};
          inline const vector<ConfigRules::ConfigRuleParameters> & getConfigRuleParameters() const { DARABONBA_PTR_GET_CONST(configRuleParameters_, vector<ConfigRules::ConfigRuleParameters>) };
          inline vector<ConfigRules::ConfigRuleParameters> getConfigRuleParameters() { DARABONBA_PTR_GET(configRuleParameters_, vector<ConfigRules::ConfigRuleParameters>) };
          inline ConfigRules& setConfigRuleParameters(const vector<ConfigRules::ConfigRuleParameters> & configRuleParameters) { DARABONBA_PTR_SET_VALUE(configRuleParameters_, configRuleParameters) };
          inline ConfigRules& setConfigRuleParameters(vector<ConfigRules::ConfigRuleParameters> && configRuleParameters) { DARABONBA_PTR_SET_RVALUE(configRuleParameters_, configRuleParameters) };


          // controlDescription Field Functions 
          bool hasControlDescription() const { return this->controlDescription_ != nullptr;};
          void deleteControlDescription() { this->controlDescription_ = nullptr;};
          inline string getControlDescription() const { DARABONBA_PTR_GET_DEFAULT(controlDescription_, "") };
          inline ConfigRules& setControlDescription(string controlDescription) { DARABONBA_PTR_SET_VALUE(controlDescription_, controlDescription) };


          // controlId Field Functions 
          bool hasControlId() const { return this->controlId_ != nullptr;};
          void deleteControlId() { this->controlId_ = nullptr;};
          inline string getControlId() const { DARABONBA_PTR_GET_DEFAULT(controlId_, "") };
          inline ConfigRules& setControlId(string controlId) { DARABONBA_PTR_SET_VALUE(controlId_, controlId) };


          // defaultEnable Field Functions 
          bool hasDefaultEnable() const { return this->defaultEnable_ != nullptr;};
          void deleteDefaultEnable() { this->defaultEnable_ = nullptr;};
          inline bool getDefaultEnable() const { DARABONBA_PTR_GET_DEFAULT(defaultEnable_, false) };
          inline ConfigRules& setDefaultEnable(bool defaultEnable) { DARABONBA_PTR_SET_VALUE(defaultEnable_, defaultEnable) };


          // description Field Functions 
          bool hasDescription() const { return this->description_ != nullptr;};
          void deleteDescription() { this->description_ = nullptr;};
          inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
          inline ConfigRules& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


          // managedRuleIdentifier Field Functions 
          bool hasManagedRuleIdentifier() const { return this->managedRuleIdentifier_ != nullptr;};
          void deleteManagedRuleIdentifier() { this->managedRuleIdentifier_ = nullptr;};
          inline string getManagedRuleIdentifier() const { DARABONBA_PTR_GET_DEFAULT(managedRuleIdentifier_, "") };
          inline ConfigRules& setManagedRuleIdentifier(string managedRuleIdentifier) { DARABONBA_PTR_SET_VALUE(managedRuleIdentifier_, managedRuleIdentifier) };


          // managedRuleName Field Functions 
          bool hasManagedRuleName() const { return this->managedRuleName_ != nullptr;};
          void deleteManagedRuleName() { this->managedRuleName_ = nullptr;};
          inline string getManagedRuleName() const { DARABONBA_PTR_GET_DEFAULT(managedRuleName_, "") };
          inline ConfigRules& setManagedRuleName(string managedRuleName) { DARABONBA_PTR_SET_VALUE(managedRuleName_, managedRuleName) };


          // resourceTypesScope Field Functions 
          bool hasResourceTypesScope() const { return this->resourceTypesScope_ != nullptr;};
          void deleteResourceTypesScope() { this->resourceTypesScope_ = nullptr;};
          inline string getResourceTypesScope() const { DARABONBA_PTR_GET_DEFAULT(resourceTypesScope_, "") };
          inline ConfigRules& setResourceTypesScope(string resourceTypesScope) { DARABONBA_PTR_SET_VALUE(resourceTypesScope_, resourceTypesScope) };


          // riskLevel Field Functions 
          bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
          void deleteRiskLevel() { this->riskLevel_ = nullptr;};
          inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
          inline ConfigRules& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        protected:
          // The input parameter of the managed rule.
          shared_ptr<vector<ConfigRules::ConfigRuleParameters>> configRuleParameters_ {};
          // The description of the regulation. This parameter is available only for regulation compliance packages.
          shared_ptr<string> controlDescription_ {};
          // The regulation ID.
          // 
          // >  This parameter is available only for regulation compliance packages.
          shared_ptr<string> controlId_ {};
          // Indicates whether the rules are enabled together with the compliance package. Valid values:
          // 
          // *   true
          // *   false
          shared_ptr<bool> defaultEnable_ {};
          // The description of the rule.
          shared_ptr<string> description_ {};
          // The identifier of the managed rule.
          shared_ptr<string> managedRuleIdentifier_ {};
          // The name of the managed rule.
          shared_ptr<string> managedRuleName_ {};
          // The types of the resources evaluated based on the rule.
          shared_ptr<string> resourceTypesScope_ {};
          // The risk level of the managed rule. Valid values:
          // 
          // *   1: high
          // *   2: medium
          // *   3: low
          shared_ptr<int32_t> riskLevel_ {};
        };

        virtual bool empty() const override { return this->compliancePackTemplateId_ == nullptr
        && this->compliancePackTemplateName_ == nullptr && this->configRules_ == nullptr && this->description_ == nullptr && this->labels_ == nullptr && this->lastUpdate_ == nullptr
        && this->riskLevel_ == nullptr; };
        // compliancePackTemplateId Field Functions 
        bool hasCompliancePackTemplateId() const { return this->compliancePackTemplateId_ != nullptr;};
        void deleteCompliancePackTemplateId() { this->compliancePackTemplateId_ = nullptr;};
        inline string getCompliancePackTemplateId() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateId_, "") };
        inline CompliancePackTemplates& setCompliancePackTemplateId(string compliancePackTemplateId) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateId_, compliancePackTemplateId) };


        // compliancePackTemplateName Field Functions 
        bool hasCompliancePackTemplateName() const { return this->compliancePackTemplateName_ != nullptr;};
        void deleteCompliancePackTemplateName() { this->compliancePackTemplateName_ = nullptr;};
        inline string getCompliancePackTemplateName() const { DARABONBA_PTR_GET_DEFAULT(compliancePackTemplateName_, "") };
        inline CompliancePackTemplates& setCompliancePackTemplateName(string compliancePackTemplateName) { DARABONBA_PTR_SET_VALUE(compliancePackTemplateName_, compliancePackTemplateName) };


        // configRules Field Functions 
        bool hasConfigRules() const { return this->configRules_ != nullptr;};
        void deleteConfigRules() { this->configRules_ = nullptr;};
        inline const vector<CompliancePackTemplates::ConfigRules> & getConfigRules() const { DARABONBA_PTR_GET_CONST(configRules_, vector<CompliancePackTemplates::ConfigRules>) };
        inline vector<CompliancePackTemplates::ConfigRules> getConfigRules() { DARABONBA_PTR_GET(configRules_, vector<CompliancePackTemplates::ConfigRules>) };
        inline CompliancePackTemplates& setConfigRules(const vector<CompliancePackTemplates::ConfigRules> & configRules) { DARABONBA_PTR_SET_VALUE(configRules_, configRules) };
        inline CompliancePackTemplates& setConfigRules(vector<CompliancePackTemplates::ConfigRules> && configRules) { DARABONBA_PTR_SET_RVALUE(configRules_, configRules) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline CompliancePackTemplates& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // labels Field Functions 
        bool hasLabels() const { return this->labels_ != nullptr;};
        void deleteLabels() { this->labels_ = nullptr;};
        inline string getLabels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
        inline CompliancePackTemplates& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


        // lastUpdate Field Functions 
        bool hasLastUpdate() const { return this->lastUpdate_ != nullptr;};
        void deleteLastUpdate() { this->lastUpdate_ = nullptr;};
        inline int32_t getLastUpdate() const { DARABONBA_PTR_GET_DEFAULT(lastUpdate_, 0) };
        inline CompliancePackTemplates& setLastUpdate(int32_t lastUpdate) { DARABONBA_PTR_SET_VALUE(lastUpdate_, lastUpdate) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline CompliancePackTemplates& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The ID of the compliance package template.
        shared_ptr<string> compliancePackTemplateId_ {};
        // The name of the compliance package template.
        shared_ptr<string> compliancePackTemplateName_ {};
        // The default rules in the compliance package.
        shared_ptr<vector<CompliancePackTemplates::ConfigRules>> configRules_ {};
        // The description of the compliance package.
        shared_ptr<string> description_ {};
        // The tag of the compliance package.
        shared_ptr<string> labels_ {};
        // The time when the compliance package was last updated.
        shared_ptr<int32_t> lastUpdate_ {};
        // The risk level of the managed rule in the compliance package. Valid values:
        // 
        // *   1: high
        // *   2: medium
        // *   3: low
        shared_ptr<int32_t> riskLevel_ {};
      };

      virtual bool empty() const override { return this->compliancePackTemplates_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // compliancePackTemplates Field Functions 
      bool hasCompliancePackTemplates() const { return this->compliancePackTemplates_ != nullptr;};
      void deleteCompliancePackTemplates() { this->compliancePackTemplates_ = nullptr;};
      inline const vector<CompliancePackTemplatesResult::CompliancePackTemplates> & getCompliancePackTemplates() const { DARABONBA_PTR_GET_CONST(compliancePackTemplates_, vector<CompliancePackTemplatesResult::CompliancePackTemplates>) };
      inline vector<CompliancePackTemplatesResult::CompliancePackTemplates> getCompliancePackTemplates() { DARABONBA_PTR_GET(compliancePackTemplates_, vector<CompliancePackTemplatesResult::CompliancePackTemplates>) };
      inline CompliancePackTemplatesResult& setCompliancePackTemplates(const vector<CompliancePackTemplatesResult::CompliancePackTemplates> & compliancePackTemplates) { DARABONBA_PTR_SET_VALUE(compliancePackTemplates_, compliancePackTemplates) };
      inline CompliancePackTemplatesResult& setCompliancePackTemplates(vector<CompliancePackTemplatesResult::CompliancePackTemplates> && compliancePackTemplates) { DARABONBA_PTR_SET_RVALUE(compliancePackTemplates_, compliancePackTemplates) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline CompliancePackTemplatesResult& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline CompliancePackTemplatesResult& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline CompliancePackTemplatesResult& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The compliance package templates.
      shared_ptr<vector<CompliancePackTemplatesResult::CompliancePackTemplates>> compliancePackTemplates_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of the compliance package templates returned.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->compliancePackTemplatesResult_ == nullptr
        && this->requestId_ == nullptr; };
    // compliancePackTemplatesResult Field Functions 
    bool hasCompliancePackTemplatesResult() const { return this->compliancePackTemplatesResult_ != nullptr;};
    void deleteCompliancePackTemplatesResult() { this->compliancePackTemplatesResult_ = nullptr;};
    inline const ListCompliancePackTemplatesResponseBody::CompliancePackTemplatesResult & getCompliancePackTemplatesResult() const { DARABONBA_PTR_GET_CONST(compliancePackTemplatesResult_, ListCompliancePackTemplatesResponseBody::CompliancePackTemplatesResult) };
    inline ListCompliancePackTemplatesResponseBody::CompliancePackTemplatesResult getCompliancePackTemplatesResult() { DARABONBA_PTR_GET(compliancePackTemplatesResult_, ListCompliancePackTemplatesResponseBody::CompliancePackTemplatesResult) };
    inline ListCompliancePackTemplatesResponseBody& setCompliancePackTemplatesResult(const ListCompliancePackTemplatesResponseBody::CompliancePackTemplatesResult & compliancePackTemplatesResult) { DARABONBA_PTR_SET_VALUE(compliancePackTemplatesResult_, compliancePackTemplatesResult) };
    inline ListCompliancePackTemplatesResponseBody& setCompliancePackTemplatesResult(ListCompliancePackTemplatesResponseBody::CompliancePackTemplatesResult && compliancePackTemplatesResult) { DARABONBA_PTR_SET_RVALUE(compliancePackTemplatesResult_, compliancePackTemplatesResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListCompliancePackTemplatesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance package templates returned.
    shared_ptr<ListCompliancePackTemplatesResponseBody::CompliancePackTemplatesResult> compliancePackTemplatesResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
