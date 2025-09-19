// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEANTIBRUTEFORCERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEANTIBRUTEFORCERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeAntiBruteForceRulesResponseBodyPageInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAntiBruteForceRulesResponseBodyRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAntiBruteForceRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAntiBruteForceRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Rules, rules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAntiBruteForceRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Rules, rules_);
    };
    DescribeAntiBruteForceRulesResponseBody() = default ;
    DescribeAntiBruteForceRulesResponseBody(const DescribeAntiBruteForceRulesResponseBody &) = default ;
    DescribeAntiBruteForceRulesResponseBody(DescribeAntiBruteForceRulesResponseBody &&) = default ;
    DescribeAntiBruteForceRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAntiBruteForceRulesResponseBody() = default ;
    DescribeAntiBruteForceRulesResponseBody& operator=(const DescribeAntiBruteForceRulesResponseBody &) = default ;
    DescribeAntiBruteForceRulesResponseBody& operator=(DescribeAntiBruteForceRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->pageInfo_ != nullptr
        && this->requestId_ != nullptr && this->rules_ != nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const DescribeAntiBruteForceRulesResponseBodyPageInfo & pageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, DescribeAntiBruteForceRulesResponseBodyPageInfo) };
    inline DescribeAntiBruteForceRulesResponseBodyPageInfo pageInfo() { DARABONBA_PTR_GET(pageInfo_, DescribeAntiBruteForceRulesResponseBodyPageInfo) };
    inline DescribeAntiBruteForceRulesResponseBody& setPageInfo(const DescribeAntiBruteForceRulesResponseBodyPageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline DescribeAntiBruteForceRulesResponseBody& setPageInfo(DescribeAntiBruteForceRulesResponseBodyPageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAntiBruteForceRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rules Field Functions 
    bool hasRules() const { return this->rules_ != nullptr;};
    void deleteRules() { this->rules_ = nullptr;};
    inline const vector<DescribeAntiBruteForceRulesResponseBodyRules> & rules() const { DARABONBA_PTR_GET_CONST(rules_, vector<DescribeAntiBruteForceRulesResponseBodyRules>) };
    inline vector<DescribeAntiBruteForceRulesResponseBodyRules> rules() { DARABONBA_PTR_GET(rules_, vector<DescribeAntiBruteForceRulesResponseBodyRules>) };
    inline DescribeAntiBruteForceRulesResponseBody& setRules(const vector<DescribeAntiBruteForceRulesResponseBodyRules> & rules) { DARABONBA_PTR_SET_VALUE(rules_, rules) };
    inline DescribeAntiBruteForceRulesResponseBody& setRules(vector<DescribeAntiBruteForceRulesResponseBodyRules> && rules) { DARABONBA_PTR_SET_RVALUE(rules_, rules) };


  protected:
    // The pagination information.
    std::shared_ptr<DescribeAntiBruteForceRulesResponseBodyPageInfo> pageInfo_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array that consists of the defense rules returned.
    std::shared_ptr<vector<DescribeAntiBruteForceRulesResponseBodyRules>> rules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
