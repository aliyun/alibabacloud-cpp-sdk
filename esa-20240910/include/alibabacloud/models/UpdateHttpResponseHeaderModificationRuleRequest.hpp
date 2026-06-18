// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEHTTPRESPONSEHEADERMODIFICATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEHTTPRESPONSEHEADERMODIFICATIONRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class UpdateHttpResponseHeaderModificationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateHttpResponseHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigId, configId_);
      DARABONBA_PTR_TO_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateHttpResponseHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigId, configId_);
      DARABONBA_PTR_FROM_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
    };
    UpdateHttpResponseHeaderModificationRuleRequest() = default ;
    UpdateHttpResponseHeaderModificationRuleRequest(const UpdateHttpResponseHeaderModificationRuleRequest &) = default ;
    UpdateHttpResponseHeaderModificationRuleRequest(UpdateHttpResponseHeaderModificationRuleRequest &&) = default ;
    UpdateHttpResponseHeaderModificationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateHttpResponseHeaderModificationRuleRequest() = default ;
    UpdateHttpResponseHeaderModificationRuleRequest& operator=(const UpdateHttpResponseHeaderModificationRuleRequest &) = default ;
    UpdateHttpResponseHeaderModificationRuleRequest& operator=(UpdateHttpResponseHeaderModificationRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResponseHeaderModification : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResponseHeaderModification& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, ResponseHeaderModification& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      ResponseHeaderModification() = default ;
      ResponseHeaderModification(const ResponseHeaderModification &) = default ;
      ResponseHeaderModification(ResponseHeaderModification &&) = default ;
      ResponseHeaderModification(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResponseHeaderModification() = default ;
      ResponseHeaderModification& operator=(const ResponseHeaderModification &) = default ;
      ResponseHeaderModification& operator=(ResponseHeaderModification &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->operation_ == nullptr && this->type_ == nullptr && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline ResponseHeaderModification& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline ResponseHeaderModification& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ResponseHeaderModification& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline ResponseHeaderModification& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the Response Header to modify.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The operation to perform on the Response Header. Valid values:
      // 
      // - `add`: Adds the specified Response Header.
      // 
      // - `del`: Deletes the specified Response Header.
      // 
      // - `modify`: Modifies the specified Response Header.
      // 
      // This parameter is required.
      shared_ptr<string> operation_ {};
      // The mode for assigning the header `Value`. Valid values:
      // 
      // - `static`: Static mode. The `Value` is a fixed string.
      // 
      // - `dynamic`: Dynamic mode. The `Value` is generated dynamically.
      shared_ptr<string> type_ {};
      // The new or modified Value for the Response Header. This parameter is required when the `Operation` is `add` or `modify`.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->configId_ == nullptr
        && this->responseHeaderModification_ == nullptr && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr
        && this->siteId_ == nullptr; };
    // configId Field Functions 
    bool hasConfigId() const { return this->configId_ != nullptr;};
    void deleteConfigId() { this->configId_ = nullptr;};
    inline int64_t getConfigId() const { DARABONBA_PTR_GET_DEFAULT(configId_, 0L) };
    inline UpdateHttpResponseHeaderModificationRuleRequest& setConfigId(int64_t configId) { DARABONBA_PTR_SET_VALUE(configId_, configId) };


    // responseHeaderModification Field Functions 
    bool hasResponseHeaderModification() const { return this->responseHeaderModification_ != nullptr;};
    void deleteResponseHeaderModification() { this->responseHeaderModification_ = nullptr;};
    inline const vector<UpdateHttpResponseHeaderModificationRuleRequest::ResponseHeaderModification> & getResponseHeaderModification() const { DARABONBA_PTR_GET_CONST(responseHeaderModification_, vector<UpdateHttpResponseHeaderModificationRuleRequest::ResponseHeaderModification>) };
    inline vector<UpdateHttpResponseHeaderModificationRuleRequest::ResponseHeaderModification> getResponseHeaderModification() { DARABONBA_PTR_GET(responseHeaderModification_, vector<UpdateHttpResponseHeaderModificationRuleRequest::ResponseHeaderModification>) };
    inline UpdateHttpResponseHeaderModificationRuleRequest& setResponseHeaderModification(const vector<UpdateHttpResponseHeaderModificationRuleRequest::ResponseHeaderModification> & responseHeaderModification) { DARABONBA_PTR_SET_VALUE(responseHeaderModification_, responseHeaderModification) };
    inline UpdateHttpResponseHeaderModificationRuleRequest& setResponseHeaderModification(vector<UpdateHttpResponseHeaderModificationRuleRequest::ResponseHeaderModification> && responseHeaderModification) { DARABONBA_PTR_SET_RVALUE(responseHeaderModification_, responseHeaderModification) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline UpdateHttpResponseHeaderModificationRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline UpdateHttpResponseHeaderModificationRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline UpdateHttpResponseHeaderModificationRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline UpdateHttpResponseHeaderModificationRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline UpdateHttpResponseHeaderModificationRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


  protected:
    // The ID of the Configuration. You can get this value by calling the [ListHttpResponseHeaderModificationRules](https://help.aliyun.com/document_detail/2867483.html) API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> configId_ {};
    // A list of objects, each defining a modification to a Response Header. Supported operations are `add`, `del`, and `modify`.
    shared_ptr<vector<UpdateHttpResponseHeaderModificationRuleRequest::ResponseHeaderModification>> responseHeaderModification_ {};
    // The matching condition for the Rule, written as a Conditional Expression. This parameter is optional for global Configurations. Use cases:
    // 
    // - To match all incoming requests, set the value to `true`.
    // 
    // - To match specific requests, set the value to a custom expression, such as `(http.host eq "video.example.com")`.
    shared_ptr<string> rule_ {};
    // Specifies whether the rule is enabled. This parameter is optional for a global Configuration. Valid values:
    // 
    // - `on`: Enables the Rule.
    // 
    // - `off`: Disables the Rule.
    shared_ptr<string> ruleEnable_ {};
    // The name of the Rule. This parameter is optional for a global Configuration.
    shared_ptr<string> ruleName_ {};
    // The execution order for the Rule. A lower value indicates a higher priority.
    shared_ptr<int32_t> sequence_ {};
    // The ID of the Site. You can get this value by calling the [ListSites](~~ListSites~~) API.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
