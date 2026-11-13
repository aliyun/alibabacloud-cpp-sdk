// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWEBFILTERRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWEBFILTERRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class UpdateWebFilterRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWebFilterRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWebFilterRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    UpdateWebFilterRulesRequest() = default ;
    UpdateWebFilterRulesRequest(const UpdateWebFilterRulesRequest &) = default ;
    UpdateWebFilterRulesRequest(UpdateWebFilterRulesRequest &&) = default ;
    UpdateWebFilterRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWebFilterRulesRequest() = default ;
    UpdateWebFilterRulesRequest& operator=(const UpdateWebFilterRulesRequest &) = default ;
    UpdateWebFilterRulesRequest& operator=(UpdateWebFilterRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Rules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Rules& obj) { 
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
        DARABONBA_PTR_TO_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_TO_JSON(WebFilterRuleId, webFilterRuleId_);
      };
      friend void from_json(const Darabonba::Json& j, Rules& obj) { 
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
        DARABONBA_PTR_FROM_JSON(RuleAction, ruleAction_);
        DARABONBA_PTR_FROM_JSON(WebFilterRuleId, webFilterRuleId_);
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
      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->values_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Conditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline string getValues() const { DARABONBA_PTR_GET_DEFAULT(values_, "") };
        inline Conditions& setValues(string values) { DARABONBA_PTR_SET_VALUE(values_, values) };


      protected:
        // The type of the match condition. Only **URL** is supported, which indicates matching by URL.
        shared_ptr<string> key_ {};
        // The URL to match. It cannot be empty and must not exceed 240 bytes in length (each Chinese character counts as 3 bytes). It must contain at least one forward slash (/), and the first segment must contain letters, digits, or Chinese characters. It cannot contain a protocol header, query parameters, or fragment identifiers. A single asterisk (*) indicates matching all URLs. When a wildcard is used, a maximum of one wildcard is allowed and it must end with /*. URLs within the same template must be unique.
        shared_ptr<string> values_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr
        && this->ruleAction_ == nullptr && this->webFilterRuleId_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Rules::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Rules::Conditions>) };
      inline vector<Rules::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Rules::Conditions>) };
      inline Rules& setConditions(const vector<Rules::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Rules& setConditions(vector<Rules::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


      // ruleAction Field Functions 
      bool hasRuleAction() const { return this->ruleAction_ != nullptr;};
      void deleteRuleAction() { this->ruleAction_ = nullptr;};
      inline string getRuleAction() const { DARABONBA_PTR_GET_DEFAULT(ruleAction_, "") };
      inline Rules& setRuleAction(string ruleAction) { DARABONBA_PTR_SET_VALUE(ruleAction_, ruleAction) };


      // webFilterRuleId Field Functions 
      bool hasWebFilterRuleId() const { return this->webFilterRuleId_ != nullptr;};
      void deleteWebFilterRuleId() { this->webFilterRuleId_ = nullptr;};
      inline string getWebFilterRuleId() const { DARABONBA_PTR_GET_DEFAULT(webFilterRuleId_, "") };
      inline Rules& setWebFilterRuleId(string webFilterRuleId) { DARABONBA_PTR_SET_VALUE(webFilterRuleId_, webFilterRuleId) };


    protected:
      // The list of match conditions for the rule. The list must contain exactly one condition. After the modification, URLs within the same template must be unique.
      shared_ptr<vector<Rules::Conditions>> conditions_ {};
      // The action to perform when the rule is matched. Valid values:
      // - **Allow**: allows the request.
      // - **Alert**: monitors the request.
      // - **Deny**: blocks the request.
      shared_ptr<string> ruleAction_ {};
      // The ID of the web filtering rule to be modified. The rule must exist within the current Alibaba Cloud account.
      shared_ptr<string> webFilterRuleId_ {};
    };

    virtual bool empty() const override { return this->rules_ == nullptr; };
    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<UpdateWebFilterRulesRequest::Rules> & getRules() const { DARABONBA_PTR_GET_CONST(rules_, vector<UpdateWebFilterRulesRequest::Rules>) };
    inline vector<UpdateWebFilterRulesRequest::Rules> getRules() { DARABONBA_PTR_GET(rules_, vector<UpdateWebFilterRulesRequest::Rules>) };
    inline UpdateWebFilterRulesRequest& setRules(const vector<UpdateWebFilterRulesRequest::Rules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline UpdateWebFilterRulesRequest& setRules(vector<UpdateWebFilterRulesRequest::Rules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The list of web filtering rules to be modified. You can specify up to 20 rules at a time, and the rule IDs in the list must be unique.
    // 
    // This parameter is required.
    shared_ptr<vector<UpdateWebFilterRulesRequest::Rules>> rules_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
