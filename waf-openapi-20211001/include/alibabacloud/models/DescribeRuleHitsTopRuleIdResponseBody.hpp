// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRULEIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRULEIDRESPONSEBODY_HPP_
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
  class DescribeRuleHitsTopRuleIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopRuleIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopRuleId, ruleHitsTopRuleId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopRuleIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopRuleId, ruleHitsTopRuleId_);
    };
    DescribeRuleHitsTopRuleIdResponseBody() = default ;
    DescribeRuleHitsTopRuleIdResponseBody(const DescribeRuleHitsTopRuleIdResponseBody &) = default ;
    DescribeRuleHitsTopRuleIdResponseBody(DescribeRuleHitsTopRuleIdResponseBody &&) = default ;
    DescribeRuleHitsTopRuleIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopRuleIdResponseBody() = default ;
    DescribeRuleHitsTopRuleIdResponseBody& operator=(const DescribeRuleHitsTopRuleIdResponseBody &) = default ;
    DescribeRuleHitsTopRuleIdResponseBody& operator=(DescribeRuleHitsTopRuleIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleHitsTopRuleId : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleHitsTopRuleId& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
        DARABONBA_PTR_TO_JSON(RuleId, ruleId_);
      };
      friend void from_json(const Darabonba::Json& j, RuleHitsTopRuleId& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
        DARABONBA_PTR_FROM_JSON(RuleId, ruleId_);
      };
      RuleHitsTopRuleId() = default ;
      RuleHitsTopRuleId(const RuleHitsTopRuleId &) = default ;
      RuleHitsTopRuleId(RuleHitsTopRuleId &&) = default ;
      RuleHitsTopRuleId(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleHitsTopRuleId() = default ;
      RuleHitsTopRuleId& operator=(const RuleHitsTopRuleId &) = default ;
      RuleHitsTopRuleId& operator=(RuleHitsTopRuleId &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->resource_ == nullptr && this->ruleId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline RuleHitsTopRuleId& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline RuleHitsTopRuleId& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


      // ruleId Field Functions 
      bool hasRuleId() const { return this->ruleId_ != nullptr;};
      void deleteRuleId() { this->ruleId_ = nullptr;};
      inline string getRuleId() const { DARABONBA_PTR_GET_DEFAULT(ruleId_, "") };
      inline RuleHitsTopRuleId& setRuleId(string ruleId) { DARABONBA_PTR_SET_VALUE(ruleId_, ruleId) };


    protected:
      // The number of requests that match the rule.
      shared_ptr<int64_t> count_ {};
      // The protected object.
      shared_ptr<string> resource_ {};
      // The ID of the rule.
      shared_ptr<string> ruleId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleHitsTopRuleId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopRuleIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopRuleId Field Functions 
    bool hasRuleHitsTopRuleId() const { return this->ruleHitsTopRuleId_ != nullptr;};
    void deleteRuleHitsTopRuleId() { this->ruleHitsTopRuleId_ = nullptr;};
    inline const vector<DescribeRuleHitsTopRuleIdResponseBody::RuleHitsTopRuleId> & getRuleHitsTopRuleId() const { DARABONBA_PTR_GET_CONST(ruleHitsTopRuleId_, vector<DescribeRuleHitsTopRuleIdResponseBody::RuleHitsTopRuleId>) };
    inline vector<DescribeRuleHitsTopRuleIdResponseBody::RuleHitsTopRuleId> getRuleHitsTopRuleId() { DARABONBA_PTR_GET(ruleHitsTopRuleId_, vector<DescribeRuleHitsTopRuleIdResponseBody::RuleHitsTopRuleId>) };
    inline DescribeRuleHitsTopRuleIdResponseBody& setRuleHitsTopRuleId(const vector<DescribeRuleHitsTopRuleIdResponseBody::RuleHitsTopRuleId> & ruleHitsTopRuleId) { DARABONBA_PTR_SET_VALUE(ruleHitsTopRuleId_, ruleHitsTopRuleId) };
    inline DescribeRuleHitsTopRuleIdResponseBody& setRuleHitsTopRuleId(vector<DescribeRuleHitsTopRuleIdResponseBody::RuleHitsTopRuleId> && ruleHitsTopRuleId) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopRuleId_, ruleHitsTopRuleId) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the IDs of the top 10 rules that are matched by requests.
    shared_ptr<vector<DescribeRuleHitsTopRuleIdResponseBody::RuleHitsTopRuleId>> ruleHitsTopRuleId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
