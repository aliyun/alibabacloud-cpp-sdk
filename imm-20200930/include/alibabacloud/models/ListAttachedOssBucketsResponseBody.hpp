// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTATTACHEDOSSBUCKETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTATTACHEDOSSBUCKETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class ListAttachedOSSBucketsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAttachedOSSBucketsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AttachedOSSBuckets, attachedOSSBuckets_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAttachedOSSBucketsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AttachedOSSBuckets, attachedOSSBuckets_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAttachedOSSBucketsResponseBody() = default ;
    ListAttachedOSSBucketsResponseBody(const ListAttachedOSSBucketsResponseBody &) = default ;
    ListAttachedOSSBucketsResponseBody(ListAttachedOSSBucketsResponseBody &&) = default ;
    ListAttachedOSSBucketsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAttachedOSSBucketsResponseBody() = default ;
    ListAttachedOSSBucketsResponseBody& operator=(const ListAttachedOSSBucketsResponseBody &) = default ;
    ListAttachedOSSBucketsResponseBody& operator=(ListAttachedOSSBucketsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attachedOSSBuckets_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr; };
    // attachedOSSBuckets Field Functions 
    bool hasAttachedOSSBuckets() const { return this->attachedOSSBuckets_ != nullptr;};
    void deleteAttachedOSSBuckets() { this->attachedOSSBuckets_ = nullptr;};
    inline const vector<ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets> & attachedOSSBuckets() const { DARABONBA_PTR_GET_CONST(attachedOSSBuckets_, vector<ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets>) };
    inline vector<ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets> attachedOSSBuckets() { DARABONBA_PTR_GET(attachedOSSBuckets_, vector<ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets>) };
    inline ListAttachedOSSBucketsResponseBody& setAttachedOSSBuckets(const vector<ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets> & attachedOSSBuckets) { DARABONBA_PTR_SET_VALUE(attachedOSSBuckets_, attachedOSSBuckets) };
    inline ListAttachedOSSBucketsResponseBody& setAttachedOSSBuckets(vector<ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets> && attachedOSSBuckets) { DARABONBA_PTR_SET_RVALUE(attachedOSSBuckets_, attachedOSSBuckets) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAttachedOSSBucketsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAttachedOSSBucketsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // List of bound OSS Buckets.
    std::shared_ptr<vector<ListAttachedOSSBucketsResponseBodyAttachedOSSBuckets>> attachedOSSBuckets_ = nullptr;
    // Pagination token. When the total number of tasks in the list exceeds the set MaxResults, this token is used for pagination. This parameter has a value only when not all matching task lists are returned.
    // 
    // Use this value as NextToken in the next call to return the subsequent task list.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
