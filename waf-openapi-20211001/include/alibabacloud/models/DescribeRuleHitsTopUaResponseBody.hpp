// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPUARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPUARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeRuleHitsTopUaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopUaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopUa, ruleHitsTopUa_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopUaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopUa, ruleHitsTopUa_);
    };
    DescribeRuleHitsTopUaResponseBody() = default ;
    DescribeRuleHitsTopUaResponseBody(const DescribeRuleHitsTopUaResponseBody &) = default ;
    DescribeRuleHitsTopUaResponseBody(DescribeRuleHitsTopUaResponseBody &&) = default ;
    DescribeRuleHitsTopUaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopUaResponseBody() = default ;
    DescribeRuleHitsTopUaResponseBody& operator=(const DescribeRuleHitsTopUaResponseBody &) = default ;
    DescribeRuleHitsTopUaResponseBody& operator=(DescribeRuleHitsTopUaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleHitsTopUa : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleHitsTopUa& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Ua, ua_);
      };
      friend void from_json(const Darabonba::Json& j, RuleHitsTopUa& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Ua, ua_);
      };
      RuleHitsTopUa() = default ;
      RuleHitsTopUa(const RuleHitsTopUa &) = default ;
      RuleHitsTopUa(RuleHitsTopUa &&) = default ;
      RuleHitsTopUa(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleHitsTopUa() = default ;
      RuleHitsTopUa& operator=(const RuleHitsTopUa &) = default ;
      RuleHitsTopUa& operator=(RuleHitsTopUa &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->ua_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline RuleHitsTopUa& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // ua Field Functions 
      bool hasUa() const { return this->ua_ != nullptr;};
      void deleteUa() { this->ua_ = nullptr;};
      inline string getUa() const { DARABONBA_PTR_GET_DEFAULT(ua_, "") };
      inline RuleHitsTopUa& setUa(string ua) { DARABONBA_PTR_SET_VALUE(ua_, ua) };


    protected:
      // The number of attacks that are initiated from the IP address.
      shared_ptr<int64_t> count_ {};
      // The user agent.
      shared_ptr<string> ua_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleHitsTopUa_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopUaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopUa Field Functions 
    bool hasRuleHitsTopUa() const { return this->ruleHitsTopUa_ != nullptr;};
    void deleteRuleHitsTopUa() { this->ruleHitsTopUa_ = nullptr;};
    inline const vector<DescribeRuleHitsTopUaResponseBody::RuleHitsTopUa> & getRuleHitsTopUa() const { DARABONBA_PTR_GET_CONST(ruleHitsTopUa_, vector<DescribeRuleHitsTopUaResponseBody::RuleHitsTopUa>) };
    inline vector<DescribeRuleHitsTopUaResponseBody::RuleHitsTopUa> getRuleHitsTopUa() { DARABONBA_PTR_GET(ruleHitsTopUa_, vector<DescribeRuleHitsTopUaResponseBody::RuleHitsTopUa>) };
    inline DescribeRuleHitsTopUaResponseBody& setRuleHitsTopUa(const vector<DescribeRuleHitsTopUaResponseBody::RuleHitsTopUa> & ruleHitsTopUa) { DARABONBA_PTR_SET_VALUE(ruleHitsTopUa_, ruleHitsTopUa) };
    inline DescribeRuleHitsTopUaResponseBody& setRuleHitsTopUa(vector<DescribeRuleHitsTopUaResponseBody::RuleHitsTopUa> && ruleHitsTopUa) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopUa_, ruleHitsTopUa) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the top 10 user agents that are used to initiate attacks.
    shared_ptr<vector<DescribeRuleHitsTopUaResponseBody::RuleHitsTopUa>> ruleHitsTopUa_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
