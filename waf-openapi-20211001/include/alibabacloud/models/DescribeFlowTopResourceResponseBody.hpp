// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFLOWTOPRESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFLOWTOPRESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeFlowTopResourceResponseBodyRuleHitsTopResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeFlowTopResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeFlowTopResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RuleHitsTopResource, ruleHitsTopResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeFlowTopResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RuleHitsTopResource, ruleHitsTopResource_);
    };
    DescribeFlowTopResourceResponseBody() = default ;
    DescribeFlowTopResourceResponseBody(const DescribeFlowTopResourceResponseBody &) = default ;
    DescribeFlowTopResourceResponseBody(DescribeFlowTopResourceResponseBody &&) = default ;
    DescribeFlowTopResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeFlowTopResourceResponseBody() = default ;
    DescribeFlowTopResourceResponseBody& operator=(const DescribeFlowTopResourceResponseBody &) = default ;
    DescribeFlowTopResourceResponseBody& operator=(DescribeFlowTopResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->ruleHitsTopResource_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeFlowTopResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // ruleHitsTopResource Field Functions 
    bool hasRuleHitsTopResource() const { return this->ruleHitsTopResource_ != nullptr;};
    void deleteRuleHitsTopResource() { this->ruleHitsTopResource_ = nullptr;};
    inline const vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource> & ruleHitsTopResource() const { DARABONBA_PTR_GET_CONST(ruleHitsTopResource_, vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource>) };
    inline vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource> ruleHitsTopResource() { DARABONBA_PTR_GET(ruleHitsTopResource_, vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource>) };
    inline DescribeFlowTopResourceResponseBody& setRuleHitsTopResource(const vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource> & ruleHitsTopResource) { DARABONBA_PTR_SET_VALUE(ruleHitsTopResource_, ruleHitsTopResource) };
    inline DescribeFlowTopResourceResponseBody& setRuleHitsTopResource(vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource> && ruleHitsTopResource) { DARABONBA_PTR_SET_RVALUE(ruleHitsTopResource_, ruleHitsTopResource) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The array of the top 10 protected objects that receive requests.
    std::shared_ptr<vector<DescribeFlowTopResourceResponseBodyRuleHitsTopResource>> ruleHitsTopResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
