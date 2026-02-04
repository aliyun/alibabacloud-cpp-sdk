// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHCREATEDCDNWAFRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHCREATEDCDNWAFRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class BatchCreateDcdnWafRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchCreateDcdnWafRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleIds, ruleIds_);
    };
    friend void from_json(const Darabonba::Json& j, BatchCreateDcdnWafRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleIds, ruleIds_);
    };
    BatchCreateDcdnWafRulesResponseBody() = default ;
    BatchCreateDcdnWafRulesResponseBody(const BatchCreateDcdnWafRulesResponseBody &) = default ;
    BatchCreateDcdnWafRulesResponseBody(BatchCreateDcdnWafRulesResponseBody &&) = default ;
    BatchCreateDcdnWafRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchCreateDcdnWafRulesResponseBody() = default ;
    BatchCreateDcdnWafRulesResponseBody& operator=(const BatchCreateDcdnWafRulesResponseBody &) = default ;
    BatchCreateDcdnWafRulesResponseBody& operator=(BatchCreateDcdnWafRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleIds : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleIds& obj) { 
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, RuleIds& obj) { 
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      };
      RuleIds() = default ;
      RuleIds(const RuleIds &) = default ;
      RuleIds(RuleIds &&) = default ;
      RuleIds(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleIds() = default ;
      RuleIds& operator=(const RuleIds &) = default ;
      RuleIds& operator=(RuleIds &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->ruleId_ == nullptr; };
      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline const vector<string> & getRuleId() const { DARABONBA_PTR_GET_CONST(ruleId_, vector<string>) };
      inline vector<string> getRuleId() { DARABONBA_PTR_GET(ruleId_, vector<string>) };
      inline RuleIds& setRuleId(const vector<string> & ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };
      inline RuleIds& setRuleId(vector<string> && ruleId) { DARABONBA_PTR_SET_RVALUE(ruleId_, ruleId) };


    protected:
      shared_ptr<vector<string>> ruleId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleIds_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchCreateDcdnWafRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleIds Field Functions 
    bool hasRuleIds() const { return this->ruleIds_ != nullptr;};
    void deleteRuleIds() { this->ruleIds_ = nullptr;};
    inline const BatchCreateDcdnWafRulesResponseBody::RuleIds & getRuleIds() const { DARABONBA_PTR_GET_CONST(ruleIds_, BatchCreateDcdnWafRulesResponseBody::RuleIds) };
    inline BatchCreateDcdnWafRulesResponseBody::RuleIds getRuleIds() { DARABONBA_PTR_GET(ruleIds_, BatchCreateDcdnWafRulesResponseBody::RuleIds) };
    inline BatchCreateDcdnWafRulesResponseBody& setRuleIds(const BatchCreateDcdnWafRulesResponseBody::RuleIds & ruleIds) { DARABONBA_PTR_SET_VALUE(ruleIds_, ruleIds) };
    inline BatchCreateDcdnWafRulesResponseBody& setRuleIds(BatchCreateDcdnWafRulesResponseBody::RuleIds && ruleIds) { DARABONBA_PTR_SET_RVALUE(ruleIds_, ruleIds) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The IDs of created rules.
    shared_ptr<BatchCreateDcdnWafRulesResponseBody::RuleIds> ruleIds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
