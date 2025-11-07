// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPBILLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPPLICATIONGROUPBILLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeApplicationGroupBillResponseBodyApplicationGroupConsume.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DescribeApplicationGroupBillResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApplicationGroupBillResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationGroupConsume, applicationGroupConsume_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApplicationGroupBillResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationGroupConsume, applicationGroupConsume_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeApplicationGroupBillResponseBody() = default ;
    DescribeApplicationGroupBillResponseBody(const DescribeApplicationGroupBillResponseBody &) = default ;
    DescribeApplicationGroupBillResponseBody(DescribeApplicationGroupBillResponseBody &&) = default ;
    DescribeApplicationGroupBillResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApplicationGroupBillResponseBody() = default ;
    DescribeApplicationGroupBillResponseBody& operator=(const DescribeApplicationGroupBillResponseBody &) = default ;
    DescribeApplicationGroupBillResponseBody& operator=(DescribeApplicationGroupBillResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationGroupConsume_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // applicationGroupConsume Field Functions 
    bool hasApplicationGroupConsume() const { return this->applicationGroupConsume_ != nullptr;};
    void deleteApplicationGroupConsume() { this->applicationGroupConsume_ = nullptr;};
    inline const vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume> & applicationGroupConsume() const { DARABONBA_PTR_GET_CONST(applicationGroupConsume_, vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume>) };
    inline vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume> applicationGroupConsume() { DARABONBA_PTR_GET(applicationGroupConsume_, vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume>) };
    inline DescribeApplicationGroupBillResponseBody& setApplicationGroupConsume(const vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume> & applicationGroupConsume) { DARABONBA_PTR_SET_VALUE(applicationGroupConsume_, applicationGroupConsume) };
    inline DescribeApplicationGroupBillResponseBody& setApplicationGroupConsume(vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume> && applicationGroupConsume) { DARABONBA_PTR_SET_RVALUE(applicationGroupConsume_, applicationGroupConsume) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeApplicationGroupBillResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeApplicationGroupBillResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeApplicationGroupBillResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The consume of application group.
    std::shared_ptr<vector<DescribeApplicationGroupBillResponseBodyApplicationGroupConsume>> applicationGroupConsume_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that is used to retrieve the next page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
