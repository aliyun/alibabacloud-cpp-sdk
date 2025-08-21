// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortResponseBodyNetworkRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NetworkRules, networkRules_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribePortResponseBody() = default ;
    DescribePortResponseBody(const DescribePortResponseBody &) = default ;
    DescribePortResponseBody(DescribePortResponseBody &&) = default ;
    DescribePortResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortResponseBody() = default ;
    DescribePortResponseBody& operator=(const DescribePortResponseBody &) = default ;
    DescribePortResponseBody& operator=(DescribePortResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->networkRules_ != nullptr
        && this->requestId_ != nullptr && this->totalCount_ != nullptr; };
    // networkRules Field Functions 
    bool hasNetworkRules() const { return this->networkRules_ != nullptr;};
    void deleteNetworkRules() { this->networkRules_ = nullptr;};
    inline const vector<DescribePortResponseBodyNetworkRules> & networkRules() const { DARABONBA_PTR_GET_CONST(networkRules_, vector<DescribePortResponseBodyNetworkRules>) };
    inline vector<DescribePortResponseBodyNetworkRules> networkRules() { DARABONBA_PTR_GET(networkRules_, vector<DescribePortResponseBodyNetworkRules>) };
    inline DescribePortResponseBody& setNetworkRules(const vector<DescribePortResponseBodyNetworkRules> & networkRules) { DARABONBA_PTR_SET_VALUE(networkRules_, networkRules) };
    inline DescribePortResponseBody& setNetworkRules(vector<DescribePortResponseBodyNetworkRules> && networkRules) { DARABONBA_PTR_SET_RVALUE(networkRules_, networkRules) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePortResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribePortResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // An array that consists of port forwarding rules.
    std::shared_ptr<vector<DescribePortResponseBodyNetworkRules>> networkRules_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of port forwarding rules returned.
    std::shared_ptr<int64_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
