// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEL7GLOBALRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEL7GLOBALRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeL7GlobalRuleResponseBodyGlobalRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeL7GlobalRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeL7GlobalRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(GlobalRules, globalRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeL7GlobalRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(GlobalRules, globalRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeL7GlobalRuleResponseBody() = default ;
    DescribeL7GlobalRuleResponseBody(const DescribeL7GlobalRuleResponseBody &) = default ;
    DescribeL7GlobalRuleResponseBody(DescribeL7GlobalRuleResponseBody &&) = default ;
    DescribeL7GlobalRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeL7GlobalRuleResponseBody() = default ;
    DescribeL7GlobalRuleResponseBody& operator=(const DescribeL7GlobalRuleResponseBody &) = default ;
    DescribeL7GlobalRuleResponseBody& operator=(DescribeL7GlobalRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->globalRules_ != nullptr
        && this->requestId_ != nullptr; };
    // globalRules Field Functions 
    bool hasGlobalRules() const { return this->globalRules_ != nullptr;};
    void deleteGlobalRules() { this->globalRules_ = nullptr;};
    inline const vector<DescribeL7GlobalRuleResponseBodyGlobalRules> & globalRules() const { DARABONBA_PTR_GET_CONST(globalRules_, vector<DescribeL7GlobalRuleResponseBodyGlobalRules>) };
    inline vector<DescribeL7GlobalRuleResponseBodyGlobalRules> globalRules() { DARABONBA_PTR_GET(globalRules_, vector<DescribeL7GlobalRuleResponseBodyGlobalRules>) };
    inline DescribeL7GlobalRuleResponseBody& setGlobalRules(const vector<DescribeL7GlobalRuleResponseBodyGlobalRules> & globalRules) { DARABONBA_PTR_SET_VALUE(globalRules_, globalRules) };
    inline DescribeL7GlobalRuleResponseBody& setGlobalRules(vector<DescribeL7GlobalRuleResponseBodyGlobalRules> && globalRules) { DARABONBA_PTR_SET_RVALUE(globalRules_, globalRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeL7GlobalRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeL7GlobalRuleResponseBodyGlobalRules>> globalRules_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
