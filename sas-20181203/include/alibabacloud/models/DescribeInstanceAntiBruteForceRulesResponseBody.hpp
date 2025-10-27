// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEANTIBRUTEFORCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEANTIBRUTEFORCERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInstanceAntiBruteForceRulesResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstanceAntiBruteForceRulesResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstanceAntiBruteForceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceAntiBruteForceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceAntiBruteForceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeInstanceAntiBruteForceRulesResponseBody() = default ;
    DescribeInstanceAntiBruteForceRulesResponseBody(const DescribeInstanceAntiBruteForceRulesResponseBody &) = default ;
    DescribeInstanceAntiBruteForceRulesResponseBody(DescribeInstanceAntiBruteForceRulesResponseBody &&) = default ;
    DescribeInstanceAntiBruteForceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceAntiBruteForceRulesResponseBody() = default ;
    DescribeInstanceAntiBruteForceRulesResponseBody& operator=(const DescribeInstanceAntiBruteForceRulesResponseBody &) = default ;
    DescribeInstanceAntiBruteForceRulesResponseBody& operator=(DescribeInstanceAntiBruteForceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->rules_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeInstanceAntiBruteForceRulesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeInstanceAntiBruteForceRulesResponseBodyPageInfo) };
    inline DescribeInstanceAntiBruteForceRulesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeInstanceAntiBruteForceRulesResponseBodyPageInfo) };
    inline DescribeInstanceAntiBruteForceRulesResponseBody& setPageInfo(const DescribeInstanceAntiBruteForceRulesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeInstanceAntiBruteForceRulesResponseBody& setPageInfo(DescribeInstanceAntiBruteForceRulesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceAntiBruteForceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeInstanceAntiBruteForceRulesResponseBodyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeInstanceAntiBruteForceRulesResponseBodyRules>) };
    inline vector<DescribeInstanceAntiBruteForceRulesResponseBodyRules> rules() { DARABONBA_PTR_GET(rules_, vector<DescribeInstanceAntiBruteForceRulesResponseBodyRules>) };
    inline DescribeInstanceAntiBruteForceRulesResponseBody& setRules(const vector<DescribeInstanceAntiBruteForceRulesResponseBodyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeInstanceAntiBruteForceRulesResponseBody& setRules(vector<DescribeInstanceAntiBruteForceRulesResponseBodyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeInstanceAntiBruteForceRulesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of the servers to which a defense rule is applied.
    std::shared_ptr<vector<DescribeInstanceAntiBruteForceRulesResponseBodyRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
