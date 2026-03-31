// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESRESPONSEBODY_HPP_
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
  class EvaluatePreConfigRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluatePreConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceEvaluations, resourceEvaluations_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluatePreConfigRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceEvaluations, resourceEvaluations_);
    };
    EvaluatePreConfigRulesResponseBody() = default ;
    EvaluatePreConfigRulesResponseBody(const EvaluatePreConfigRulesResponseBody &) = default ;
    EvaluatePreConfigRulesResponseBody(EvaluatePreConfigRulesResponseBody &&) = default ;
    EvaluatePreConfigRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluatePreConfigRulesResponseBody() = default ;
    EvaluatePreConfigRulesResponseBody& operator=(const EvaluatePreConfigRulesResponseBody &) = default ;
    EvaluatePreConfigRulesResponseBody& operator=(EvaluatePreConfigRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceEvaluations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceEvaluations& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceLogicalId, resourceLogicalId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceEvaluations& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceLogicalId, resourceLogicalId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      ResourceEvaluations() = default ;
      ResourceEvaluations(const ResourceEvaluations &) = default ;
      ResourceEvaluations(ResourceEvaluations &&) = default ;
      ResourceEvaluations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceEvaluations() = default ;
      ResourceEvaluations& operator=(const ResourceEvaluations &) = default ;
      ResourceEvaluations& operator=(ResourceEvaluations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Annotation, annotation_);
          DARABONBA_PTR_TO_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_TO_JSON(HelpUrl, helpUrl_);
          DARABONBA_PTR_TO_JSON(Identifier, identifier_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Annotation, annotation_);
          DARABONBA_PTR_FROM_JSON(ComplianceType, complianceType_);
          DARABONBA_PTR_FROM_JSON(HelpUrl, helpUrl_);
          DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
        };
        Rules() = default ;
        Rules(const Rules &) = default ;
        Rules(Rules &&) = default ;
        Rules(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Rules() = default ;
        Rules& operator=(const Rules &) = default ;
        Rules& operator=(Rules &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->annotation_ == nullptr
        && this->complianceType_ == nullptr && this->helpUrl_ == nullptr && this->identifier_ == nullptr; };
        // annotation Field Functions 
        bool hasAnnotation() const { return this->annotation_ != nullptr;};
        void deleteAnnotation() { this->annotation_ = nullptr;};
        inline string getAnnotation() const { DARABONBA_PTR_GET_DEFAULT(annotation_, "") };
        inline Rules& setAnnotation(string annotation) { DARABONBA_PTR_SET_VALUE(annotation_, annotation) };


        // complianceType Field Functions 
        bool hasComplianceType() const { return this->complianceType_ != nullptr;};
        void deleteComplianceType() { this->complianceType_ = nullptr;};
        inline string getComplianceType() const { DARABONBA_PTR_GET_DEFAULT(complianceType_, "") };
        inline Rules& setComplianceType(string complianceType) { DARABONBA_PTR_SET_VALUE(complianceType_, complianceType) };


        // helpUrl Field Functions 
        bool hasHelpUrl() const { return this->helpUrl_ != nullptr;};
        void deleteHelpUrl() { this->helpUrl_ = nullptr;};
        inline string getHelpUrl() const { DARABONBA_PTR_GET_DEFAULT(helpUrl_, "") };
        inline Rules& setHelpUrl(string helpUrl) { DARABONBA_PTR_SET_VALUE(helpUrl_, helpUrl) };


        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline Rules& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


      protected:
        // The reason why the resource was evaluated as incompliant.
        shared_ptr<string> annotation_ {};
        // The compliance type of the resource that was evaluated by using the evaluation rule. Valid values:
        // 
        // *   COMPLIANT: The resource was evaluated as compliant.
        // *   NON_COMPLIANT: The resource was evaluated as incompliant.
        // *   NOT_APPLICABLE: The evaluation rule does not apply to the resource.
        shared_ptr<string> complianceType_ {};
        // The URL of the topic that describes how the managed rule remediates the incompliant configurations.
        shared_ptr<string> helpUrl_ {};
        // The identifier of the evaluation rule.
        shared_ptr<string> identifier_ {};
      };

      virtual bool empty() const override { return this->resourceLogicalId_ == nullptr
        && this->resourceType_ == nullptr && this->rules_ == nullptr; };
      // resourceLogicalId Field Functions 
      bool hasResourceLogicalId() const { return this->resourceLogicalId_ != nullptr;};
      void deleteResourceLogicalId() { this->resourceLogicalId_ = nullptr;};
      inline string getResourceLogicalId() const { DARABONBA_PTR_GET_DEFAULT(resourceLogicalId_, "") };
      inline ResourceEvaluations& setResourceLogicalId(string resourceLogicalId) { DARABONBA_PTR_SET_VALUE(resourceLogicalId_, resourceLogicalId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceEvaluations& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<ResourceEvaluations::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ResourceEvaluations::Rules>) };
      inline vector<ResourceEvaluations::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ResourceEvaluations::Rules>) };
      inline ResourceEvaluations& setRules(const vector<ResourceEvaluations::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline ResourceEvaluations& setRules(vector<ResourceEvaluations::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The logical ID of the resource.
      // 
      // >  If the ResourceLogicalId request parameter is left empty, the value of the ResourceLogicalId response parameter is generated based on the value of the `ResourceProperties` parameter.
      shared_ptr<string> resourceLogicalId_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
      // The evaluation rules.
      shared_ptr<vector<ResourceEvaluations::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourceEvaluations_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline EvaluatePreConfigRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceEvaluations Field Functions 
    bool hasResourceEvaluations() const { return this->resourceEvaluations_ != nullptr;};
    void deleteResourceEvaluations() { this->resourceEvaluations_ = nullptr;};
    inline const vector<EvaluatePreConfigRulesResponseBody::ResourceEvaluations> & getResourceEvaluations() const { DARABONBA_PTR_GET_CONST(resourceEvaluations_, vector<EvaluatePreConfigRulesResponseBody::ResourceEvaluations>) };
    inline vector<EvaluatePreConfigRulesResponseBody::ResourceEvaluations> getResourceEvaluations() { DARABONBA_PTR_GET(resourceEvaluations_, vector<EvaluatePreConfigRulesResponseBody::ResourceEvaluations>) };
    inline EvaluatePreConfigRulesResponseBody& setResourceEvaluations(const vector<EvaluatePreConfigRulesResponseBody::ResourceEvaluations> & resourceEvaluations) { DARABONBA_PTR_SET_VALUE(resourceEvaluations_, resourceEvaluations) };
    inline EvaluatePreConfigRulesResponseBody& setResourceEvaluations(vector<EvaluatePreConfigRulesResponseBody::ResourceEvaluations> && resourceEvaluations) { DARABONBA_PTR_SET_RVALUE(resourceEvaluations_, resourceEvaluations) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the compliance evaluation result.
    shared_ptr<vector<EvaluatePreConfigRulesResponseBody::ResourceEvaluations>> resourceEvaluations_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
