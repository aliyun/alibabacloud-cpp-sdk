// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPCLIENTIPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPCLIENTIPRESPONSEBODY_HPP_
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
  class DescribeRuleHitsTopClientIpResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopClientIpResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopClientIp, ruleHitsTopClientIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopClientIpResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopClientIp, ruleHitsTopClientIp_);
    };
    DescribeRuleHitsTopClientIpResponseBody() = default ;
    DescribeRuleHitsTopClientIpResponseBody(const DescribeRuleHitsTopClientIpResponseBody &) = default ;
    DescribeRuleHitsTopClientIpResponseBody(DescribeRuleHitsTopClientIpResponseBody &&) = default ;
    DescribeRuleHitsTopClientIpResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopClientIpResponseBody() = default ;
    DescribeRuleHitsTopClientIpResponseBody& operator=(const DescribeRuleHitsTopClientIpResponseBody &) = default ;
    DescribeRuleHitsTopClientIpResponseBody& operator=(DescribeRuleHitsTopClientIpResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleHitsTopClientIp : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleHitsTopClientIp& obj) { 
        DARABONBA_PTR_TO_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_TO_JSON(Count, count_);
      };
      friend void from_json(const Darabonba::Json& j, RuleHitsTopClientIp& obj) { 
        DARABONBA_PTR_FROM_JSON(ClientIp, clientIp_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
      };
      RuleHitsTopClientIp() = default ;
      RuleHitsTopClientIp(const RuleHitsTopClientIp &) = default ;
      RuleHitsTopClientIp(RuleHitsTopClientIp &&) = default ;
      RuleHitsTopClientIp(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleHitsTopClientIp() = default ;
      RuleHitsTopClientIp& operator=(const RuleHitsTopClientIp &) = default ;
      RuleHitsTopClientIp& operator=(RuleHitsTopClientIp &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clientIp_ == nullptr
        && this->count_ == nullptr; };
      // clientIp Field Functions 
      bool hasClientIp() const { return this->clientIp_ != nullptr;};
      void deleteClientIp() { this->clientIp_ = nullptr;};
      inline string getClientIp() const { DARABONBA_PTR_GET_DEFAULT(clientIp_, "") };
      inline RuleHitsTopClientIp& setClientIp(string clientIp) { DARABONBA_PTR_SET_VALUE(clientIp_, clientIp) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline RuleHitsTopClientIp& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    protected:
      // The IP address of the service client.
      shared_ptr<string> clientIp_ {};
      // The number of attacks that are initiated from the IP address.
      shared_ptr<int64_t> count_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleHitsTopClientIp_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopClientIpResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopClientIp Field Functions 
    bool hasRuleHitsTopClientIp() const { return this->ruleHitsTopClientIp_ != nullptr;};
    void deleteRuleHitsTopClientIp() { this->ruleHitsTopClientIp_ = nullptr;};
    inline const vector<DescribeRuleHitsTopClientIpResponseBody::RuleHitsTopClientIp> & getRuleHitsTopClientIp() const { DARABONBA_PTR_GET_CONST(ruleHitsTopClientIp_, vector<DescribeRuleHitsTopClientIpResponseBody::RuleHitsTopClientIp>) };
    inline vector<DescribeRuleHitsTopClientIpResponseBody::RuleHitsTopClientIp> getRuleHitsTopClientIp() { DARABONBA_PTR_GET(ruleHitsTopClientIp_, vector<DescribeRuleHitsTopClientIpResponseBody::RuleHitsTopClientIp>) };
    inline DescribeRuleHitsTopClientIpResponseBody& setRuleHitsTopClientIp(const vector<DescribeRuleHitsTopClientIpResponseBody::RuleHitsTopClientIp> & ruleHitsTopClientIp) { DARABONBA_PTR_SET_VALUE(ruleHitsTopClientIp_, ruleHitsTopClientIp) };
    inline DescribeRuleHitsTopClientIpResponseBody& setRuleHitsTopClientIp(vector<DescribeRuleHitsTopClientIpResponseBody::RuleHitsTopClientIp> && ruleHitsTopClientIp) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopClientIp_, ruleHitsTopClientIp) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the top 10 IP addresses from which attacks are initiated.
    shared_ptr<vector<DescribeRuleHitsTopClientIpResponseBody::RuleHitsTopClientIp>> ruleHitsTopClientIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
