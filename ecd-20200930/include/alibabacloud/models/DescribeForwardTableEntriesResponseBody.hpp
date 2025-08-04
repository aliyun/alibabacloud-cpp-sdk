// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEFORWARDTABLEENTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeForwardTableEntriesResponseBodyForwardTableEntries.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeForwardTableEntriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeForwardTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForwardTableEntries, forwardTableEntries_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeForwardTableEntriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForwardTableEntries, forwardTableEntries_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeForwardTableEntriesResponseBody() = default ;
    DescribeForwardTableEntriesResponseBody(const DescribeForwardTableEntriesResponseBody &) = default ;
    DescribeForwardTableEntriesResponseBody(DescribeForwardTableEntriesResponseBody &&) = default ;
    DescribeForwardTableEntriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeForwardTableEntriesResponseBody() = default ;
    DescribeForwardTableEntriesResponseBody& operator=(const DescribeForwardTableEntriesResponseBody &) = default ;
    DescribeForwardTableEntriesResponseBody& operator=(DescribeForwardTableEntriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forwardTableEntries_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->requestId_ != nullptr; };
    // forwardTableEntries Field Functions 
    bool hasForwardTableEntries() const { return this->forwardTableEntries_ != nullptr;};
    void deleteForwardTableEntries() { this->forwardTableEntries_ = nullptr;};
    inline const vector<DescribeForwardTableEntriesResponseBodyForwardTableEntries> & forwardTableEntries() const { DARABONBA_PTR_GET_CONST(forwardTableEntries_, vector<DescribeForwardTableEntriesResponseBodyForwardTableEntries>) };
    inline vector<DescribeForwardTableEntriesResponseBodyForwardTableEntries> forwardTableEntries() { DARABONBA_PTR_GET(forwardTableEntries_, vector<DescribeForwardTableEntriesResponseBodyForwardTableEntries>) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(const vector<DescribeForwardTableEntriesResponseBodyForwardTableEntries> & forwardTableEntries) { DARABONBA_PTR_SET_VALUE(forwardTableEntries_, forwardTableEntries) };
    inline DescribeForwardTableEntriesResponseBody& setForwardTableEntries(vector<DescribeForwardTableEntriesResponseBodyForwardTableEntries> && forwardTableEntries) { DARABONBA_PTR_SET_RVALUE(forwardTableEntries_, forwardTableEntries) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeForwardTableEntriesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeForwardTableEntriesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeForwardTableEntriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeForwardTableEntriesResponseBodyForwardTableEntries>> forwardTableEntries_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
