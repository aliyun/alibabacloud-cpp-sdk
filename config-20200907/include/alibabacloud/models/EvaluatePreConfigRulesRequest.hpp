// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EVALUATEPRECONFIGRULESREQUEST_HPP_
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
  class EvaluatePreConfigRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EvaluatePreConfigRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableManagedRules, enableManagedRules_);
      DARABONBA_PTR_TO_JSON(ResourceEvaluateItems, resourceEvaluateItems_);
      DARABONBA_PTR_TO_JSON(ResourceTypeFormat, resourceTypeFormat_);
    };
    friend void from_json(const Darabonba::Json& j, EvaluatePreConfigRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableManagedRules, enableManagedRules_);
      DARABONBA_PTR_FROM_JSON(ResourceEvaluateItems, resourceEvaluateItems_);
      DARABONBA_PTR_FROM_JSON(ResourceTypeFormat, resourceTypeFormat_);
    };
    EvaluatePreConfigRulesRequest() = default ;
    EvaluatePreConfigRulesRequest(const EvaluatePreConfigRulesRequest &) = default ;
    EvaluatePreConfigRulesRequest(EvaluatePreConfigRulesRequest &&) = default ;
    EvaluatePreConfigRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EvaluatePreConfigRulesRequest() = default ;
    EvaluatePreConfigRulesRequest& operator=(const EvaluatePreConfigRulesRequest &) = default ;
    EvaluatePreConfigRulesRequest& operator=(EvaluatePreConfigRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceEvaluateItems : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceEvaluateItems& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceLogicalId, resourceLogicalId_);
        DARABONBA_PTR_TO_JSON(ResourceProperties, resourceProperties_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Rules, rules_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceEvaluateItems& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceLogicalId, resourceLogicalId_);
        DARABONBA_PTR_FROM_JSON(ResourceProperties, resourceProperties_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Rules, rules_);
      };
      ResourceEvaluateItems() = default ;
      ResourceEvaluateItems(const ResourceEvaluateItems &) = default ;
      ResourceEvaluateItems(ResourceEvaluateItems &&) = default ;
      ResourceEvaluateItems(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceEvaluateItems() = default ;
      ResourceEvaluateItems& operator=(const ResourceEvaluateItems &) = default ;
      ResourceEvaluateItems& operator=(ResourceEvaluateItems &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Rules : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Rules& obj) { 
          DARABONBA_PTR_TO_JSON(Identifier, identifier_);
          DARABONBA_PTR_TO_JSON(InputParameters, inputParameters_);
        };
        friend void from_json(const Darabonba::Json& j, Rules& obj) { 
          DARABONBA_PTR_FROM_JSON(Identifier, identifier_);
          DARABONBA_PTR_FROM_JSON(InputParameters, inputParameters_);
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
        virtual bool empty() const override { return this->identifier_ == nullptr
        && this->inputParameters_ == nullptr; };
        // identifier Field Functions 
        bool hasIdentifier() const { return this->identifier_ != nullptr;};
        void deleteIdentifier() { this->identifier_ = nullptr;};
        inline string getIdentifier() const { DARABONBA_PTR_GET_DEFAULT(identifier_, "") };
        inline Rules& setIdentifier(string identifier) { DARABONBA_PTR_SET_VALUE(identifier_, identifier) };


        // inputParameters Field Functions 
        bool hasInputParameters() const { return this->inputParameters_ != nullptr;};
        void deleteInputParameters() { this->inputParameters_ = nullptr;};
        inline string getInputParameters() const { DARABONBA_PTR_GET_DEFAULT(inputParameters_, "") };
        inline Rules& setInputParameters(string inputParameters) { DARABONBA_PTR_SET_VALUE(inputParameters_, inputParameters) };


      protected:
        // The identifier of the evaluation rule.
        // 
        // For more information about how to obtain the identifier of an evaluation rule, see [ListManagedRules](https://help.aliyun.com/document_detail/467810.html).
        shared_ptr<string> identifier_ {};
        // The input parameters of the evaluation rule.
        shared_ptr<string> inputParameters_ {};
      };

      virtual bool empty() const override { return this->resourceLogicalId_ == nullptr
        && this->resourceProperties_ == nullptr && this->resourceType_ == nullptr && this->rules_ == nullptr; };
      // resourceLogicalId Field Functions 
      bool hasResourceLogicalId() const { return this->resourceLogicalId_ != nullptr;};
      void deleteResourceLogicalId() { this->resourceLogicalId_ = nullptr;};
      inline string getResourceLogicalId() const { DARABONBA_PTR_GET_DEFAULT(resourceLogicalId_, "") };
      inline ResourceEvaluateItems& setResourceLogicalId(string resourceLogicalId) { DARABONBA_PTR_SET_VALUE(resourceLogicalId_, resourceLogicalId) };


      // resourceProperties Field Functions 
      bool hasResourceProperties() const { return this->resourceProperties_ != nullptr;};
      void deleteResourceProperties() { this->resourceProperties_ = nullptr;};
      inline string getResourceProperties() const { DARABONBA_PTR_GET_DEFAULT(resourceProperties_, "") };
      inline ResourceEvaluateItems& setResourceProperties(string resourceProperties) { DARABONBA_PTR_SET_VALUE(resourceProperties_, resourceProperties) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceEvaluateItems& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // rules Field Functions 
      bool hasRules() const { return this->rules_ != nullptr;};
      void deleteRules() { this->rules_ = nullptr;};
      inline const vector<ResourceEvaluateItems::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<ResourceEvaluateItems::Rules>) };
      inline vector<ResourceEvaluateItems::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<ResourceEvaluateItems::Rules>) };
      inline ResourceEvaluateItems& setRules(const vector<ResourceEvaluateItems::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
      inline ResourceEvaluateItems& setRules(vector<ResourceEvaluateItems::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


    protected:
      // The logical ID of the resource.
      shared_ptr<string> resourceLogicalId_ {};
      // The properties of the resource.
      shared_ptr<string> resourceProperties_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
      // The evaluation rules.
      shared_ptr<vector<ResourceEvaluateItems::Rules>> rules_ {};
    };

    virtual bool empty() const override { return this->enableManagedRules_ == nullptr
        && this->resourceEvaluateItems_ == nullptr && this->resourceTypeFormat_ == nullptr; };
    // enableManagedRules Field Functions 
    bool hasEnableManagedRules() const { return this->enableManagedRules_ != nullptr;};
    void deleteEnableManagedRules() { this->enableManagedRules_ = nullptr;};
    inline bool getEnableManagedRules() const { DARABONBA_PTR_GET_DEFAULT(enableManagedRules_, false) };
    inline EvaluatePreConfigRulesRequest& setEnableManagedRules(bool enableManagedRules) { DARABONBA_PTR_SET_VALUE(enableManagedRules_, enableManagedRules) };


    // resourceEvaluateItems Field Functions 
    bool hasResourceEvaluateItems() const { return this->resourceEvaluateItems_ != nullptr;};
    void deleteResourceEvaluateItems() { this->resourceEvaluateItems_ = nullptr;};
    inline const vector<EvaluatePreConfigRulesRequest::ResourceEvaluateItems> & getResourceEvaluateItems() const { DARABONBA_PTR_GET_CONST(resourceEvaluateItems_, vector<EvaluatePreConfigRulesRequest::ResourceEvaluateItems>) };
    inline vector<EvaluatePreConfigRulesRequest::ResourceEvaluateItems> getResourceEvaluateItems() { DARABONBA_PTR_GET(resourceEvaluateItems_, vector<EvaluatePreConfigRulesRequest::ResourceEvaluateItems>) };
    inline EvaluatePreConfigRulesRequest& setResourceEvaluateItems(const vector<EvaluatePreConfigRulesRequest::ResourceEvaluateItems> & resourceEvaluateItems) { DARABONBA_PTR_SET_VALUE(resourceEvaluateItems_, resourceEvaluateItems) };
    inline EvaluatePreConfigRulesRequest& setResourceEvaluateItems(vector<EvaluatePreConfigRulesRequest::ResourceEvaluateItems> && resourceEvaluateItems) { DARABONBA_PTR_SET_RVALUE(resourceEvaluateItems_, resourceEvaluateItems) };


    // resourceTypeFormat Field Functions 
    bool hasResourceTypeFormat() const { return this->resourceTypeFormat_ != nullptr;};
    void deleteResourceTypeFormat() { this->resourceTypeFormat_ = nullptr;};
    inline string getResourceTypeFormat() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeFormat_, "") };
    inline EvaluatePreConfigRulesRequest& setResourceTypeFormat(string resourceTypeFormat) { DARABONBA_PTR_SET_VALUE(resourceTypeFormat_, resourceTypeFormat) };


  protected:
    // Specifies whether to enable the managed rule. Valid values:
    // 
    // *   true: enables the managed rule.
    // *   false: does not enable the managed rule. This is the default value.
    // 
    // >  After you create an evaluation rule, a managed rule that has the same settings as the evaluation rule is created. After you create a resource, the managed rule can be used to continuously check the compliance of the resource.
    shared_ptr<bool> enableManagedRules_ {};
    // The resources that you want to evaluate.
    // 
    // This parameter is required.
    shared_ptr<vector<EvaluatePreConfigRulesRequest::ResourceEvaluateItems>> resourceEvaluateItems_ {};
    // 下一个查询开始Token
    shared_ptr<string> resourceTypeFormat_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
