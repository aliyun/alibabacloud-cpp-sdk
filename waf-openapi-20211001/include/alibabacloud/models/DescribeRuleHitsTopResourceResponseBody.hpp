// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRESOURCERESPONSEBODY_HPP_
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
  class DescribeRuleHitsTopResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRuleHitsTopResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopResource, ruleHitsTopResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRuleHitsTopResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopResource, ruleHitsTopResource_);
    };
    DescribeRuleHitsTopResourceResponseBody() = default ;
    DescribeRuleHitsTopResourceResponseBody(const DescribeRuleHitsTopResourceResponseBody &) = default ;
    DescribeRuleHitsTopResourceResponseBody(DescribeRuleHitsTopResourceResponseBody &&) = default ;
    DescribeRuleHitsTopResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRuleHitsTopResourceResponseBody() = default ;
    DescribeRuleHitsTopResourceResponseBody& operator=(const DescribeRuleHitsTopResourceResponseBody &) = default ;
    DescribeRuleHitsTopResourceResponseBody& operator=(DescribeRuleHitsTopResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RuleHitsTopResource : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RuleHitsTopResource& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(Resource, resource_);
      };
      friend void from_json(const Darabonba::Json& j, RuleHitsTopResource& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(Resource, resource_);
      };
      RuleHitsTopResource() = default ;
      RuleHitsTopResource(const RuleHitsTopResource &) = default ;
      RuleHitsTopResource(RuleHitsTopResource &&) = default ;
      RuleHitsTopResource(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RuleHitsTopResource() = default ;
      RuleHitsTopResource& operator=(const RuleHitsTopResource &) = default ;
      RuleHitsTopResource& operator=(RuleHitsTopResource &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->resource_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline RuleHitsTopResource& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // resource Field Functions 
      bool hasResource() const { return this->resource_ != nullptr;};
      void deleteResource() { this->resource_ = nullptr;};
      inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
      inline RuleHitsTopResource& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    protected:
      // The number of requests that match protection rules.
      shared_ptr<int64_t> count_ {};
      // The protected object.
      shared_ptr<string> resource_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->ruleHitsTopResource_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopResource Field Functions 
    bool hasRuleHitsTopResource() const { return this->ruleHitsTopResource_ != nullptr;};
    void deleteRuleHitsTopResource() { this->ruleHitsTopResource_ = nullptr;};
    inline const vector<DescribeRuleHitsTopResourceResponseBody::RuleHitsTopResource> & getRuleHitsTopResource() const { DARABONBA_PTR_GET_CONST(ruleHitsTopResource_, vector<DescribeRuleHitsTopResourceResponseBody::RuleHitsTopResource>) };
    inline vector<DescribeRuleHitsTopResourceResponseBody::RuleHitsTopResource> getRuleHitsTopResource() { DARABONBA_PTR_GET(ruleHitsTopResource_, vector<DescribeRuleHitsTopResourceResponseBody::RuleHitsTopResource>) };
    inline DescribeRuleHitsTopResourceResponseBody& setRuleHitsTopResource(const vector<DescribeRuleHitsTopResourceResponseBody::RuleHitsTopResource> & ruleHitsTopResource) { DARABONBA_PTR_SET_VALUE(ruleHitsTopResource_, ruleHitsTopResource) };
    inline DescribeRuleHitsTopResourceResponseBody& setRuleHitsTopResource(vector<DescribeRuleHitsTopResourceResponseBody::RuleHitsTopResource> && ruleHitsTopResource) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopResource_, ruleHitsTopResource) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The array of the top 10 protected objects that trigger protection rules.
    shared_ptr<vector<DescribeRuleHitsTopResourceResponseBody::RuleHitsTopResource>> ruleHitsTopResource_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
