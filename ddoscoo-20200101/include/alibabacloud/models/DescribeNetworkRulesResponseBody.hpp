// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENETWORKRULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENETWORKRULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNetworkRulesResponseBodyNetworkRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeNetworkRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNetworkRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNetworkRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNetworkRulesResponseBody() = default ;
    DescribeNetworkRulesResponseBody(const DescribeNetworkRulesResponseBody &) = default ;
    DescribeNetworkRulesResponseBody(DescribeNetworkRulesResponseBody &&) = default ;
    DescribeNetworkRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNetworkRulesResponseBody() = default ;
    DescribeNetworkRulesResponseBody& operator=(const DescribeNetworkRulesResponseBody &) = default ;
    DescribeNetworkRulesResponseBody& operator=(DescribeNetworkRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkRules_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline const vector<DescribeNetworkRulesResponseBodyNetworkRules> & networkRules() const { DARABONBA_PTR_GET_CONST(networkRules_, vector<DescribeNetworkRulesResponseBodyNetworkRules>) };
    inline vector<DescribeNetworkRulesResponseBodyNetworkRules> networkRules() { DARABONBA_PTR_GET(networkRules_, vector<DescribeNetworkRulesResponseBodyNetworkRules>) };
    inline DescribeNetworkRulesResponseBody& setNetworkRules(const vector<DescribeNetworkRulesResponseBodyNetworkRules> & networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };
    inline DescribeNetworkRulesResponseBody& setNetworkRules(vector<DescribeNetworkRulesResponseBodyNetworkRules> && networkRules) { DARABONBA_PTR_SET_RVALUE(networkRules_, networkRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNetworkRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeNetworkRulesResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The details of the port forwarding rules.
    std::shared_ptr<vector<DescribeNetworkRulesResponseBodyNetworkRules>> networkRules_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of returned port forwarding rules.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
