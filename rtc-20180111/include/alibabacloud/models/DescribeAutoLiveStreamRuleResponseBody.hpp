// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAUTOLIVESTREAMRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAUTOLIVESTREAMRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAutoLiveStreamRuleResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeAutoLiveStreamRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAutoLiveStreamRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAutoLiveStreamRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeAutoLiveStreamRuleResponseBody() = default ;
    DescribeAutoLiveStreamRuleResponseBody(const DescribeAutoLiveStreamRuleResponseBody &) = default ;
    DescribeAutoLiveStreamRuleResponseBody(DescribeAutoLiveStreamRuleResponseBody &&) = default ;
    DescribeAutoLiveStreamRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAutoLiveStreamRuleResponseBody() = default ;
    DescribeAutoLiveStreamRuleResponseBody& operator=(const DescribeAutoLiveStreamRuleResponseBody &) = default ;
    DescribeAutoLiveStreamRuleResponseBody& operator=(DescribeAutoLiveStreamRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->rules_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAutoLiveStreamRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeAutoLiveStreamRuleResponseBodyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeAutoLiveStreamRuleResponseBodyRules>) };
    inline vector<DescribeAutoLiveStreamRuleResponseBodyRules> rules() { DARABONBA_PTR_GET(rules_, vector<DescribeAutoLiveStreamRuleResponseBodyRules>) };
    inline DescribeAutoLiveStreamRuleResponseBody& setRules(const vector<DescribeAutoLiveStreamRuleResponseBodyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeAutoLiveStreamRuleResponseBody& setRules(vector<DescribeAutoLiveStreamRuleResponseBodyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeAutoLiveStreamRuleResponseBodyRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
