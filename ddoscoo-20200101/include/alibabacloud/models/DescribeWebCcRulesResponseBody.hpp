// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWebCCRulesResponseBodyWebCCRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCCRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCCRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(WebCCRules, webCCRules_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCCRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(WebCCRules, webCCRules_);
    };
    DescribeWebCCRulesResponseBody() = default ;
    DescribeWebCCRulesResponseBody(const DescribeWebCCRulesResponseBody &) = default ;
    DescribeWebCCRulesResponseBody(DescribeWebCCRulesResponseBody &&) = default ;
    DescribeWebCCRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCCRulesResponseBody() = default ;
    DescribeWebCCRulesResponseBody& operator=(const DescribeWebCCRulesResponseBody &) = default ;
    DescribeWebCCRulesResponseBody& operator=(DescribeWebCCRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->totalCount_ == nullptr && return this->webCCRules_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWebCCRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeWebCCRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // webCCRules Field Functions 
    bool hasWebCCRules() const { return this->webCCRules_ != nullptr;};
    void deleteWebCCRules() { this->webCCRules_ = nullptr;};
    inline const vector<DescribeWebCCRulesResponseBodyWebCCRules> & webCCRules() const { DARABONBA_PTR_GET_CONST(webCCRules_, vector<DescribeWebCCRulesResponseBodyWebCCRules>) };
    inline vector<DescribeWebCCRulesResponseBodyWebCCRules> webCCRules() { DARABONBA_PTR_GET(webCCRules_, vector<DescribeWebCCRulesResponseBodyWebCCRules>) };
    inline DescribeWebCCRulesResponseBody& setWebCCRules(const vector<DescribeWebCCRulesResponseBodyWebCCRules> & webCCRules) { DARABONBA_PTR_SET_VALUE(webCCRules_, webCCRules) };
    inline DescribeWebCCRulesResponseBody& setWebCCRules(vector<DescribeWebCCRulesResponseBodyWebCCRules> && webCCRules) { DARABONBA_PTR_SET_RVALUE(webCCRules_, webCCRules) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of custom frequency control rules.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
    // The custom frequency control rule.
    std::shared_ptr<vector<DescribeWebCCRulesResponseBodyWebCCRules>> webCCRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
