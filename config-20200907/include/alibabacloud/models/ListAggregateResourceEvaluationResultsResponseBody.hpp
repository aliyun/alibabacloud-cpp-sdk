// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCEEVALUATIONRESULTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATERESOURCEEVALUATIONRESULTSRESPONSEBODY_HPP_
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
  class ListAggregateResourceEvaluationResultsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateResourceEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateResourceEvaluationResultsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EvaluationResults, evaluationResults_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAggregateResourceEvaluationResultsResponseBody() = default ;
    ListAggregateResourceEvaluationResultsResponseBody(const ListAggregateResourceEvaluationResultsResponseBody &) = default ;
    ListAggregateResourceEvaluationResultsResponseBody(ListAggregateResourceEvaluationResultsResponseBody &&) = default ;
    ListAggregateResourceEvaluationResultsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateResourceEvaluationResultsResponseBody() = default ;
    ListAggregateResourceEvaluationResultsResponseBody& operator=(const ListAggregateResourceEvaluationResultsResponseBody &) = default ;
    ListAggregateResourceEvaluationResultsResponseBody& operator=(ListAggregateResourceEvaluationResultsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class EvaluationResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const EvaluationResults& obj) { 
        DARABONBA_PTR_TO_JSON(EvaluationResultList, evaluationResultList_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      };
      friend void from_json(const Darabonba::Json& j, EvaluationResults& obj) { 
        DARABONBA_PTR_FROM_JSON(EvaluationResultList, evaluationResultList_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      };
      EvaluationResults() = default ;
      EvaluationResults(const EvaluationResults &) = default ;
      EvaluationResults(EvaluationResults &&) = default ;
      EvaluationResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~EvaluationResults() = default ;
      EvaluationResults& operator=(const EvaluationResults &) = default ;
      EvaluationResults& operator=(EvaluationResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class EvaluationResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const EvaluationResultList& obj) { 
          DARABONBA_PTR_TO_JSON(Annotation, annotation_);
          DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_TO_JSON(ConfigRuleInvokedTimestamp, configRuleInvokedTimestamp_);
          DARABONBA_PTR_TO_JSON(EvaluationId, evaluationId_);
          DARABONBA_PTR_TO_JSON(EvaluationResultIdentifier, evaluationResultIdentifier_);
          DARABONBA_PTR_TO_JSON(InvokingEventMessageType, invokingEventMessageType_);
          DARABONBA_PTR_TO_JSON(LastNonCompliantRecordTimestamp, lastNonCompliantRecordTimestamp_);
          DARABONBA_PTR_TO_JSON(RemediationEnabled, remediationEnabled_);
          DARABONBA_PTR_TO_JSON(ResultRecordedTimestamp, resultRecordedTimestamp_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, EvaluationResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(Annotation, annotation_);
          DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_FROM_JSON(ConfigRuleInvokedTimestamp, configRuleInvokedTimestamp_);
          DARABONBA_PTR_FROM_JSON(EvaluationId, evaluationId_);
          DARABONBA_PTR_FROM_JSON(EvaluationResultIdentifier, evaluationResultIdentifier_);
          DARABONBA_PTR_FROM_JSON(InvokingEventMessageType, invokingEventMessageType_);
          DARABONBA_PTR_FROM_JSON(LastNonCompliantRecordTimestamp, lastNonCompliantRecordTimestamp_);
          DARABONBA_PTR_FROM_JSON(RemediationEnabled, remediationEnabled_);
          DARABONBA_PTR_FROM_JSON(ResultRecordedTimestamp, resultRecordedTimestamp_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        EvaluationResultList() = default ;
        EvaluationResultList(const EvaluationResultList &) = default ;
        EvaluationResultList(EvaluationResultList &&) = default ;
        EvaluationResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~EvaluationResultList() = default ;
        EvaluationResultList& operator=(const EvaluationResultList &) = default ;
        EvaluationResultList& operator=(EvaluationResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class EvaluationResultIdentifier : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const EvaluationResultIdentifier& obj) { 
            DARABONBA_PTR_TO_JSON(EvaluationResultQualifier, evaluationResultQualifier_);
            DARABONBA_PTR_TO_JSON(OrderingTimestamp, orderingTimestamp_);
          };
          friend void from_json(const Darabonba::Json& j, EvaluationResultIdentifier& obj) { 
            DARABONBA_PTR_FROM_JSON(EvaluationResultQualifier, evaluationResultQualifier_);
            DARABONBA_PTR_FROM_JSON(OrderingTimestamp, orderingTimestamp_);
          };
          EvaluationResultIdentifier() = default ;
          EvaluationResultIdentifier(const EvaluationResultIdentifier &) = default ;
          EvaluationResultIdentifier(EvaluationResultIdentifier &&) = default ;
          EvaluationResultIdentifier(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~EvaluationResultIdentifier() = default ;
          EvaluationResultIdentifier& operator=(const EvaluationResultIdentifier &) = default ;
          EvaluationResultIdentifier& operator=(EvaluationResultIdentifier &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          class EvaluationResultQualifier : public Darabonba::Model {
          public:
            friend void to_json(Darabonba::Json& j, const EvaluationResultQualifier& obj) { 
              DARABONBA_PTR_TO_JSON(ConfigRuleArn, configRuleArn_);
              DARABONBA_PTR_TO_JSON(ConfigRuleId, configRuleId_);
              DARABONBA_PTR_TO_JSON(ConfigRuleName, configRuleName_);
              DARABONBA_PTR_TO_JSON(IgnoreDate, ignoreDate_);
              DARABONBA_PTR_TO_JSON(RegionId, regionId_);
              DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
              DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
              DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
            };
            friend void from_json(const Darabonba::Json& j, EvaluationResultQualifier& obj) { 
              DARABONBA_PTR_FROM_JSON(ConfigRuleArn, configRuleArn_);
              DARABONBA_PTR_FROM_JSON(ConfigRuleId, configRuleId_);
              DARABONBA_PTR_FROM_JSON(ConfigRuleName, configRuleName_);
              DARABONBA_PTR_FROM_JSON(IgnoreDate, ignoreDate_);
              DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
              DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
              DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
              DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
              DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
            };
            EvaluationResultQualifier() = default ;
            EvaluationResultQualifier(const EvaluationResultQualifier &) = default ;
            EvaluationResultQualifier(EvaluationResultQualifier &&) = default ;
            EvaluationResultQualifier(const Darabonba::Json & obj) { from_json(obj, *this); };
            virtual ~EvaluationResultQualifier() = default ;
            EvaluationResultQualifier& operator=(const EvaluationResultQualifier &) = default ;
            EvaluationResultQualifier& operator=(EvaluationResultQualifier &&) = default ;
            virtual void validate() const override {
            };
            virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
            virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
            virtual bool empty() const override { return this->configRuleArn_ == nullptr
        && this->configRuleId_ == nullptr && this->configRuleName_ == nullptr && this->ignoreDate_ == nullptr && this->regionId_ == nullptr && this->resourceId_ == nullptr
        && this->resourceName_ == nullptr && this->resourceOwnerId_ == nullptr && this->resourceType_ == nullptr; };
            // configRuleArn Field Functions 
            bool hasConfigRuleArn() const { return this->configRuleArn_ != nullptr;};
            void deleteConfigRuleArn() { this->configRuleArn_ = nullptr;};
            inline string getConfigRuleArn() const { DARABONBA_PTR_GET_DEFAULT(configRuleArn_, "") };
            inline EvaluationResultQualifier& setConfigRuleArn(string configRuleArn) { DARABONBA_PTR_SET_VALUE(configRuleArn_, configRuleArn) };


            // configRuleId Field Functions 
            bool hasConfigRuleId() const { return this->configRuleId_ != nullptr;};
            void deleteConfigRuleId() { this->configRuleId_ = nullptr;};
            inline string getConfigRuleId() const { DARABONBA_PTR_GET_DEFAULT(configRuleId_, "") };
            inline EvaluationResultQualifier& setConfigRuleId(string configRuleId) { DARABONBA_PTR_SET_VALUE(configRuleId_, configRuleId) };


            // configRuleName Field Functions 
            bool hasConfigRuleName() const { return this->configRuleName_ != nullptr;};
            void deleteConfigRuleName() { this->configRuleName_ = nullptr;};
            inline string getConfigRuleName() const { DARABONBA_PTR_GET_DEFAULT(configRuleName_, "") };
            inline EvaluationResultQualifier& setConfigRuleName(string configRuleName) { DARABONBA_PTR_SET_VALUE(configRuleName_, configRuleName) };


            // ignoreDate Field Functions 
            bool hasIgnoreDate() const { return this->ignoreDate_ != nullptr;};
            void deleteIgnoreDate() { this->ignoreDate_ = nullptr;};
            inline string getIgnoreDate() const { DARABONBA_PTR_GET_DEFAULT(ignoreDate_, "") };
            inline EvaluationResultQualifier& setIgnoreDate(string ignoreDate) { DARABONBA_PTR_SET_VALUE(ignoreDate_, ignoreDate) };


            // regionId Field Functions 
            bool hasRegionId() const { return this->regionId_ != nullptr;};
            void deleteRegionId() { this->regionId_ = nullptr;};
            inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
            inline EvaluationResultQualifier& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


            // resourceId Field Functions 
            bool hasResourceId() const { return this->resourceId_ != nullptr;};
            void deleteResourceId() { this->resourceId_ = nullptr;};
            inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
            inline EvaluationResultQualifier& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


            // resourceName Field Functions 
            bool hasResourceName() const { return this->resourceName_ != nullptr;};
            void deleteResourceName() { this->resourceName_ = nullptr;};
            inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
            inline EvaluationResultQualifier& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


            // resourceOwnerId Field Functions 
            bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
            void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
            inline int32_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0) };
            inline EvaluationResultQualifier& setResourceOwnerId(int32_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


            // resourceType Field Functions 
            bool hasResourceType() const { return this->resourceType_ != nullptr;};
            void deleteResourceType() { this->resourceType_ = nullptr;};
            inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
            inline EvaluationResultQualifier& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


          protected:
            // The Alibaba Cloud Resource Name (ARN) of the rule.
            shared_ptr<string> configRuleArn_ {};
            // The ID of the rule.
            shared_ptr<string> configRuleId_ {};
            // The name of the monitoring rule.
            shared_ptr<string> configRuleName_ {};
            // The date from which the system automatically re-evaluates the ignored incompliant resources.
            // 
            // >  If the value of this parameter is left empty, the system does not automatically re-evaluate the ignored incompliant resources. You must manually re-evaluate the ignored incompliant resources.
            shared_ptr<string> ignoreDate_ {};
            // The ID of the region where the resource resides.
            shared_ptr<string> regionId_ {};
            // The ID of the resource.
            shared_ptr<string> resourceId_ {};
            // The name of the resource.
            shared_ptr<string> resourceName_ {};
            shared_ptr<int32_t> resourceOwnerId_ {};
            // The type of the resource.
            shared_ptr<string> resourceType_ {};
          };

          virtual bool empty() const override { return this->evaluationResultQualifier_ == nullptr
        && this->orderingTimestamp_ == nullptr; };
          // evaluationResultQualifier Field Functions 
          bool hasEvaluationResultQualifier() const { return this->evaluationResultQualifier_ != nullptr;};
          void deleteEvaluationResultQualifier() { this->evaluationResultQualifier_ = nullptr;};
          inline const EvaluationResultIdentifier::EvaluationResultQualifier & getEvaluationResultQualifier() const { DARABONBA_PTR_GET_CONST(evaluationResultQualifier_, EvaluationResultIdentifier::EvaluationResultQualifier) };
          inline EvaluationResultIdentifier::EvaluationResultQualifier getEvaluationResultQualifier() { DARABONBA_PTR_GET(evaluationResultQualifier_, EvaluationResultIdentifier::EvaluationResultQualifier) };
          inline EvaluationResultIdentifier& setEvaluationResultQualifier(const EvaluationResultIdentifier::EvaluationResultQualifier & evaluationResultQualifier) { DARABONBA_PTR_SET_VALUE(evaluationResultQualifier_, evaluationResultQualifier) };
          inline EvaluationResultIdentifier& setEvaluationResultQualifier(EvaluationResultIdentifier::EvaluationResultQualifier && evaluationResultQualifier) { DARABONBA_PTR_SET_RVALUE(evaluationResultQualifier_, evaluationResultQualifier) };


          // orderingTimestamp Field Functions 
          bool hasOrderingTimestamp() const { return this->orderingTimestamp_ != nullptr;};
          void deleteOrderingTimestamp() { this->orderingTimestamp_ = nullptr;};
          inline int64_t getOrderingTimestamp() const { DARABONBA_PTR_GET_DEFAULT(orderingTimestamp_, 0L) };
          inline EvaluationResultIdentifier& setOrderingTimestamp(int64_t orderingTimestamp) { DARABONBA_PTR_SET_VALUE(orderingTimestamp_, orderingTimestamp) };


        protected:
          // The information about the evaluated resource in the compliance evaluation result.
          shared_ptr<EvaluationResultIdentifier::EvaluationResultQualifier> evaluationResultQualifier_ {};
          // The timestamp when the compliance evaluation was performed. Unit: milliseconds.
          shared_ptr<int64_t> orderingTimestamp_ {};
        };

        virtual bool empty() const override { return this->annotation_ == nullptr
        && this->complianceType_ == nullptr && this->configRuleInvokedTimestamp_ == nullptr && this->evaluationId_ == nullptr && this->evaluationResultIdentifier_ == nullptr && this->invokingEventMessageType_ == nullptr
        && this->lastNonCompliantRecordTimestamp_ == nullptr && this->remediationEnabled_ == nullptr && this->resultRecordedTimestamp_ == nullptr && this->riskLevel_ == nullptr; };
        // annotation Field Functions 
        bool hasAnnotation() const { return this->annotation_ != nullptr;};
        void deleteAnnotation() { this->annotation_ = nullptr;};
        inline string getAnnotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
        inline EvaluationResultList& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


        // complianceType Field Functions 
        bool hasComplianceType() const { return this->complianceType_ != nullptr;};
        void deleteComplianceType() { this->complianceType_ = nullptr;};
        inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
        inline EvaluationResultList& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


        // configRuleInvokedTimestamp Field Functions 
        bool hasConfigRuleInvokedTimestamp() const { return this->configRuleInvokedTimestamp_ != nullptr;};
        void deleteConfigRuleInvokedTimestamp() { this->configRuleInvokedTimestamp_ = nullptr;};
        inline int64_t getConfigRuleInvokedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(configRuleInvokedTimestamp_, 0L) };
        inline EvaluationResultList& setConfigRuleInvokedTimestamp(int64_t configRuleInvokedTimestamp) { DARABONBA_PTR_SET_VALUE(configRuleInvokedTimestamp_, configRuleInvokedTimestamp) };


        // evaluationId Field Functions 
        bool hasEvaluationId() const { return this->evaluationId_ != nullptr;};
        void deleteEvaluationId() { this->evaluationId_ = nullptr;};
        inline string getEvaluationId() const { DARABONBA_PTR_GET_DEFAULT(evaluationId_, "") };
        inline EvaluationResultList& setEvaluationId(string evaluationId) { DARABONBA_PTR_SET_VALUE(evaluationId_, evaluationId) };


        // evaluationResultIdentifier Field Functions 
        bool hasEvaluationResultIdentifier() const { return this->evaluationResultIdentifier_ != nullptr;};
        void deleteEvaluationResultIdentifier() { this->evaluationResultIdentifier_ = nullptr;};
        inline const EvaluationResultList::EvaluationResultIdentifier & getEvaluationResultIdentifier() const { DARABONBA_PTR_GET_CONST(evaluationResultIdentifier_, EvaluationResultList::EvaluationResultIdentifier) };
        inline EvaluationResultList::EvaluationResultIdentifier getEvaluationResultIdentifier() { DARABONBA_PTR_GET(evaluationResultIdentifier_, EvaluationResultList::EvaluationResultIdentifier) };
        inline EvaluationResultList& setEvaluationResultIdentifier(const EvaluationResultList::EvaluationResultIdentifier & evaluationResultIdentifier) { DARABONBA_PTR_SET_VALUE(evaluationResultIdentifier_, evaluationResultIdentifier) };
        inline EvaluationResultList& setEvaluationResultIdentifier(EvaluationResultList::EvaluationResultIdentifier && evaluationResultIdentifier) { DARABONBA_PTR_SET_RVALUE(evaluationResultIdentifier_, evaluationResultIdentifier) };


        // invokingEventMessageType Field Functions 
        bool hasInvokingEventMessageType() const { return this->invokingEventMessageType_ != nullptr;};
        void deleteInvokingEventMessageType() { this->invokingEventMessageType_ = nullptr;};
        inline string getInvokingEventMessageType() const { DARABONBA_PTR_GET_DEFAULT(invokingEventMessageType_, "") };
        inline EvaluationResultList& setInvokingEventMessageType(string invokingEventMessageType) { DARABONBA_PTR_SET_VALUE(invokingEventMessageType_, invokingEventMessageType) };


        // lastNonCompliantRecordTimestamp Field Functions 
        bool hasLastNonCompliantRecordTimestamp() const { return this->lastNonCompliantRecordTimestamp_ != nullptr;};
        void deleteLastNonCompliantRecordTimestamp() { this->lastNonCompliantRecordTimestamp_ = nullptr;};
        inline int64_t getLastNonCompliantRecordTimestamp() const { DARABONBA_PTR_GET_DEFAULT(lastNonCompliantRecordTimestamp_, 0L) };
        inline EvaluationResultList& setLastNonCompliantRecordTimestamp(int64_t lastNonCompliantRecordTimestamp) { DARABONBA_PTR_SET_VALUE(lastNonCompliantRecordTimestamp_, lastNonCompliantRecordTimestamp) };


        // remediationEnabled Field Functions 
        bool hasRemediationEnabled() const { return this->remediationEnabled_ != nullptr;};
        void deleteRemediationEnabled() { this->remediationEnabled_ = nullptr;};
        inline bool getRemediationEnabled() const { DARABONBA_PTR_GET_DEFAULT(remediationEnabled_, false) };
        inline EvaluationResultList& setRemediationEnabled(bool remediationEnabled) { DARABONBA_PTR_SET_VALUE(remediationEnabled_, remediationEnabled) };


        // resultRecordedTimestamp Field Functions 
        bool hasResultRecordedTimestamp() const { return this->resultRecordedTimestamp_ != nullptr;};
        void deleteResultRecordedTimestamp() { this->resultRecordedTimestamp_ = nullptr;};
        inline int64_t getResultRecordedTimestamp() const { DARABONBA_PTR_GET_DEFAULT(resultRecordedTimestamp_, 0L) };
        inline EvaluationResultList& setResultRecordedTimestamp(int64_t resultRecordedTimestamp) { DARABONBA_PTR_SET_VALUE(resultRecordedTimestamp_, resultRecordedTimestamp) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline int32_t getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, 0) };
        inline EvaluationResultList& setRiskLevel(int32_t riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The annotation to the resource that is evaluated as incompliant.
        shared_ptr<string> annotation_ {};
        // The compliance evaluation result of the resources. Valid values:
        // 
        // *   COMPLIANT: The resources are evaluated as compliant.
        // *   NON_COMPLIANT: The resources are evaluated as incompliant.
        // *   NOT_APPLICABLE: The rule does not apply to your resources.
        // *   INSUFFICIENT_DATA: No resource data is available.
        // *   IGNORED: The resource is ignored during compliance evaluation.
        shared_ptr<string> complianceType_ {};
        // The timestamp when the rule was triggered. Unit: milliseconds.
        shared_ptr<int64_t> configRuleInvokedTimestamp_ {};
        shared_ptr<string> evaluationId_ {};
        // The identifying information about the compliance evaluation result.
        shared_ptr<EvaluationResultList::EvaluationResultIdentifier> evaluationResultIdentifier_ {};
        // The trigger type of the managed rule. Valid values:
        // 
        // *   ConfigurationItemChangeNotification: The managed rule is triggered by configuration changes.
        // *   ScheduledNotification: The managed rule is periodically triggered.
        shared_ptr<string> invokingEventMessageType_ {};
        shared_ptr<int64_t> lastNonCompliantRecordTimestamp_ {};
        // Indicates whether the remediation template is enabled. Valid values:
        // 
        // - true: The remediation template is enabled.
        // - false: The remediation template is disabled.
        shared_ptr<bool> remediationEnabled_ {};
        // The timestamp when the compliance evaluation result was recorded. Unit: milliseconds.
        shared_ptr<int64_t> resultRecordedTimestamp_ {};
        // The risk level of the resources that are not compliant with the rule. Valid values:
        // 
        // *   1: high risk level
        // *   2: medium risk level
        // *   3: low risk level
        shared_ptr<int32_t> riskLevel_ {};
      };

      virtual bool empty() const override { return this->evaluationResultList_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
      // evaluationResultList Field Functions 
      bool hasEvaluationResultList() const { return this->evaluationResultList_ != nullptr;};
      void deleteEvaluationResultList() { this->evaluationResultList_ = nullptr;};
      inline const vector<EvaluationResults::EvaluationResultList> & getEvaluationResultList() const { DARABONBA_PTR_GET_CONST(evaluationResultList_, vector<EvaluationResults::EvaluationResultList>) };
      inline vector<EvaluationResults::EvaluationResultList> getEvaluationResultList() { DARABONBA_PTR_GET(evaluationResultList_, vector<EvaluationResults::EvaluationResultList>) };
      inline EvaluationResults& setEvaluationResultList(const vector<EvaluationResults::EvaluationResultList> & evaluationResultList) { DARABONBA_PTR_SET_VALUE(evaluationResultList_, evaluationResultList) };
      inline EvaluationResults& setEvaluationResultList(vector<EvaluationResults::EvaluationResultList> && evaluationResultList) { DARABONBA_PTR_SET_RVALUE(evaluationResultList_, evaluationResultList) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline EvaluationResults& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline EvaluationResults& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    protected:
      // The details of the compliance evaluation result.
      shared_ptr<vector<EvaluationResults::EvaluationResultList>> evaluationResultList_ {};
      // The maximum number of entries returned on each page.
      shared_ptr<int32_t> maxResults_ {};
      // The token that was used to initiate the next request.
      shared_ptr<string> nextToken_ {};
    };

    virtual bool empty() const override { return this->evaluationResults_ == nullptr
        && this->requestId_ == nullptr; };
    // evaluationResults Field Functions 
    bool hasEvaluationResults() const { return this->evaluationResults_ != nullptr;};
    void deleteEvaluationResults() { this->evaluationResults_ = nullptr;};
    inline const ListAggregateResourceEvaluationResultsResponseBody::EvaluationResults & getEvaluationResults() const { DARABONBA_PTR_GET_CONST(evaluationResults_, ListAggregateResourceEvaluationResultsResponseBody::EvaluationResults) };
    inline ListAggregateResourceEvaluationResultsResponseBody::EvaluationResults getEvaluationResults() { DARABONBA_PTR_GET(evaluationResults_, ListAggregateResourceEvaluationResultsResponseBody::EvaluationResults) };
    inline ListAggregateResourceEvaluationResultsResponseBody& setEvaluationResults(const ListAggregateResourceEvaluationResultsResponseBody::EvaluationResults & evaluationResults) { DARABONBA_PTR_SET_VALUE(evaluationResults_, evaluationResults) };
    inline ListAggregateResourceEvaluationResultsResponseBody& setEvaluationResults(ListAggregateResourceEvaluationResultsResponseBody::EvaluationResults && evaluationResults) { DARABONBA_PTR_SET_RVALUE(evaluationResults_, evaluationResults) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAggregateResourceEvaluationResultsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the compliance evaluation results returned.
    shared_ptr<ListAggregateResourceEvaluationResultsResponseBody::EvaluationResults> evaluationResults_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
