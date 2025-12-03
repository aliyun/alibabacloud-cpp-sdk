// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRulesResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeRulesResponseBody() = default ;
    DescribeRulesResponseBody(const DescribeRulesResponseBody &) = default ;
    DescribeRulesResponseBody(DescribeRulesResponseBody &&) = default ;
    DescribeRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRulesResponseBody() = default ;
    DescribeRulesResponseBody& operator=(const DescribeRulesResponseBody &) = default ;
    DescribeRulesResponseBody& operator=(DescribeRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->rules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const DescribeRulesResponseBodyRules & rules() const { DARABONBA_PTR_GET_CONST(rules_, DescribeRulesResponseBodyRules) };
    inline DescribeRulesResponseBodyRules rules() { DARABONBA_PTR_GET(rules_, DescribeRulesResponseBodyRules) };
    inline DescribeRulesResponseBody& setRules(const DescribeRulesResponseBodyRules & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeRulesResponseBody& setRules(DescribeRulesResponseBodyRules && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The forwarding rules.
    std::shared_ptr<DescribeRulesResponseBodyRules> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
