// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULEHITSTOPRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->ruleHitsTopResource_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRuleHitsTopResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopResource Field Functions 
    bool hasRuleHitsTopResource() const { return this->ruleHitsTopResource_ != nullptr;};
    void deleteRuleHitsTopResource() { this->ruleHitsTopResource_ = nullptr;};
    inline const vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource> & ruleHitsTopResource() const { DARABONBA_PTR_GET_CONST(ruleHitsTopResource_, vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource>) };
    inline vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource> ruleHitsTopResource() { DARABONBA_PTR_GET(ruleHitsTopResource_, vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource>) };
    inline DescribeRuleHitsTopResourceResponseBody& setRuleHitsTopResource(const vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource> & ruleHitsTopResource) { DARABONBA_PTR_SET_VALUE(ruleHitsTopResource_, ruleHitsTopResource) };
    inline DescribeRuleHitsTopResourceResponseBody& setRuleHitsTopResource(vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource> && ruleHitsTopResource) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopResource_, ruleHitsTopResource) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the top 10 protected objects that trigger protection rules.
    std::shared_ptr<vector<DescribeRuleHitsTopResourceResponseBodyRuleHitsTopResource>> ruleHitsTopResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
