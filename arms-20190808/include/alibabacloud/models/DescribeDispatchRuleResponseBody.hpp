// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISPATCHRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDispatchRuleResponseBodyDispatchRule.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class DescribeDispatchRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDispatchRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DispatchRule, dispatchRule_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDispatchRuleResponseBody() = default ;
    DescribeDispatchRuleResponseBody(const DescribeDispatchRuleResponseBody &) = default ;
    DescribeDispatchRuleResponseBody(DescribeDispatchRuleResponseBody &&) = default ;
    DescribeDispatchRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDispatchRuleResponseBody() = default ;
    DescribeDispatchRuleResponseBody& operator=(const DescribeDispatchRuleResponseBody &) = default ;
    DescribeDispatchRuleResponseBody& operator=(DescribeDispatchRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dispatchRule_ != nullptr
        && this->requestId_ != nullptr; };
    // dispatchRule Field Functions 
    bool hasDispatchRule() const { return this->dispatchRule_ != nullptr;};
    void deleteDispatchRule() { this->dispatchRule_ = nullptr;};
    inline const DescribeDispatchRuleResponseBodyDispatchRule & dispatchRule() const { DARABONBA_PTR_GET_CONST(dispatchRule_, DescribeDispatchRuleResponseBodyDispatchRule) };
    inline DescribeDispatchRuleResponseBodyDispatchRule dispatchRule() { DARABONBA_PTR_GET(dispatchRule_, DescribeDispatchRuleResponseBodyDispatchRule) };
    inline DescribeDispatchRuleResponseBody& setDispatchRule(const DescribeDispatchRuleResponseBodyDispatchRule & dispatchRule) { DARABONBA_PTR_SET_VALUE(dispatchRule_, dispatchRule) };
    inline DescribeDispatchRuleResponseBody& setDispatchRule(DescribeDispatchRuleResponseBodyDispatchRule && dispatchRule) { DARABONBA_PTR_SET_RVALUE(dispatchRule_, dispatchRule) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDispatchRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The struct returned.
    std::shared_ptr<DescribeDispatchRuleResponseBodyDispatchRule> dispatchRule_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
