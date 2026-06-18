// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHTTPINCOMINGRESPONSEHEADERMODIFICATIONRULEREQUEST_HPP_
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
  class CreateHttpIncomingResponseHeaderModificationRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHttpIncomingResponseHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_TO_JSON(Rule, rule_);
      DARABONBA_PTR_TO_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
      DARABONBA_PTR_TO_JSON(Sequence, sequence_);
      DARABONBA_PTR_TO_JSON(SiteId, siteId_);
      DARABONBA_PTR_TO_JSON(SiteVersion, siteVersion_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHttpIncomingResponseHeaderModificationRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResponseHeaderModification, responseHeaderModification_);
      DARABONBA_PTR_FROM_JSON(Rule, rule_);
      DARABONBA_PTR_FROM_JSON(RuleEnable, ruleEnable_);
      DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
      DARABONBA_PTR_FROM_JSON(Sequence, sequence_);
      DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
      DARABONBA_PTR_FROM_JSON(SiteVersion, siteVersion_);
    };
    CreateHttpIncomingResponseHeaderModificationRuleRequest() = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequest(const CreateHttpIncomingResponseHeaderModificationRuleRequest &) = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequest(CreateHttpIncomingResponseHeaderModificationRuleRequest &&) = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHttpIncomingResponseHeaderModificationRuleRequest() = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequest& operator=(const CreateHttpIncomingResponseHeaderModificationRuleRequest &) = default ;
    CreateHttpIncomingResponseHeaderModificationRuleRequest& operator=(CreateHttpIncomingResponseHeaderModificationRuleRequest &&) = default ;
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
      // The name of the response header.
      // 
      // This parameter is required.
      shared_ptr<string> name_ {};
      // The operation to perform on the header. Valid values:
      // 
      // - `add`: Adds the header.
      // 
      // - `del`: Deletes the header.
      // 
      // - `modify`: Modifies the header.
      // 
      // This parameter is required.
      shared_ptr<string> operation_ {};
      // The type of the header value. Valid values:
      // 
      // - `static`: The `Value` is a fixed string.
      // 
      // - `dynamic`: The `Value` can contain variables.
      shared_ptr<string> type_ {};
      // The value of the response header.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->responseHeaderModification_ == nullptr
        && this->rule_ == nullptr && this->ruleEnable_ == nullptr && this->ruleName_ == nullptr && this->sequence_ == nullptr && this->siteId_ == nullptr
        && this->siteVersion_ == nullptr; };
    // responseHeaderModification Field Functions 
    bool hasResponseHeaderModification() const { return this->responseHeaderModification_ != nullptr;};
    void deleteResponseHeaderModification() { this->responseHeaderModification_ = nullptr;};
    inline const vector<CreateHttpIncomingResponseHeaderModificationRuleRequest::ResponseHeaderModification> & getResponseHeaderModification() const { DARABONBA_PTR_GET_CONST(responseHeaderModification_, vector<CreateHttpIncomingResponseHeaderModificationRuleRequest::ResponseHeaderModification>) };
    inline vector<CreateHttpIncomingResponseHeaderModificationRuleRequest::ResponseHeaderModification> getResponseHeaderModification() { DARABONBA_PTR_GET(responseHeaderModification_, vector<CreateHttpIncomingResponseHeaderModificationRuleRequest::ResponseHeaderModification>) };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequest& setResponseHeaderModification(const vector<CreateHttpIncomingResponseHeaderModificationRuleRequest::ResponseHeaderModification> & responseHeaderModification) { DARABONBA_PTR_SET_VALUE(responseHeaderModification_, responseHeaderModification) };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequest& setResponseHeaderModification(vector<CreateHttpIncomingResponseHeaderModificationRuleRequest::ResponseHeaderModification> && responseHeaderModification) { DARABONBA_PTR_SET_RVALUE(responseHeaderModification_, responseHeaderModification) };


    // rule Field Functions 
    bool hasRule() const { return this->rule_ != nullptr;};
    void deleteRule() { this->rule_ = nullptr;};
    inline string getRule() const { DARABONBA_PTR_GET_DEFAULT(rule_, "") };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequest& setRule(string rule) { DARABONBA_PTR_SET_VALUE(rule_, rule) };


    // ruleEnable Field Functions 
    bool hasRuleEnable() const { return this->ruleEnable_ != nullptr;};
    void deleteRuleEnable() { this->ruleEnable_ = nullptr;};
    inline string getRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ruleEnable_, "") };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequest& setRuleEnable(string ruleEnable) { DARABONBA_PTR_SET_VALUE(ruleEnable_, ruleEnable) };


    // ruleName Field Functions 
    bool hasRuleName() const { return this->ruleName_ != nullptr;};
    void deleteRuleName() { this->ruleName_ = nullptr;};
    inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequest& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


    // sequence Field Functions 
    bool hasSequence() const { return this->sequence_ != nullptr;};
    void deleteSequence() { this->sequence_ = nullptr;};
    inline int32_t getSequence() const { DARABONBA_PTR_GET_DEFAULT(sequence_, 0) };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequest& setSequence(int32_t sequence) { DARABONBA_PTR_SET_VALUE(sequence_, sequence) };


    // siteId Field Functions 
    bool hasSiteId() const { return this->siteId_ != nullptr;};
    void deleteSiteId() { this->siteId_ = nullptr;};
    inline int64_t getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, 0L) };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequest& setSiteId(int64_t siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


    // siteVersion Field Functions 
    bool hasSiteVersion() const { return this->siteVersion_ != nullptr;};
    void deleteSiteVersion() { this->siteVersion_ = nullptr;};
    inline int32_t getSiteVersion() const { DARABONBA_PTR_GET_DEFAULT(siteVersion_, 0) };
    inline CreateHttpIncomingResponseHeaderModificationRuleRequest& setSiteVersion(int32_t siteVersion) { DARABONBA_PTR_SET_VALUE(siteVersion_, siteVersion) };


  protected:
    // Specifies the modifications for a response header. The supported operations are `add`, `del`, and `modify`.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateHttpIncomingResponseHeaderModificationRuleRequest::ResponseHeaderModification>> responseHeaderModification_ {};
    // The conditional expression used to match an incoming request. This parameter is not required when adding a Global configuration. Two scenarios are supported:
    // 
    // - To match all incoming requests, set the value to `true`.
    // 
    // - To match specific requests, use a custom expression. For example: `(http.host eq "video.example.com")`
    shared_ptr<string> rule_ {};
    // Indicates if the Rule is enabled. This parameter is not required when adding a Global configuration. Valid values:
    // 
    // - `on`: Enables the Rule.
    // 
    // - `off`: Disables the Rule.
    shared_ptr<string> ruleEnable_ {};
    // The Rule name. This parameter is not required when adding a Global configuration.
    shared_ptr<string> ruleName_ {};
    // The Rule execution order. A smaller value indicates a higher priority, and the Rule is executed sooner.
    shared_ptr<int32_t> sequence_ {};
    // The unique identifier for the Site. To get this ID, call the [ListSites](https://help.aliyun.com/document_detail/2850189.html) operation.
    // 
    // This parameter is required.
    shared_ptr<int64_t> siteId_ {};
    // The configuration Version for the Site. If version management is enabled, this parameter specifies the target Version. Defaults to 0.
    shared_ptr<int32_t> siteVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
