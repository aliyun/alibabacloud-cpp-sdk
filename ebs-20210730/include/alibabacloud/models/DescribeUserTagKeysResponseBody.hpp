// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEUSERTAGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEUSERTAGKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ebs20210730
{
namespace Models
{
  class DescribeUserTagKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeUserTagKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeUserTagKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    DescribeUserTagKeysResponseBody() = default ;
    DescribeUserTagKeysResponseBody(const DescribeUserTagKeysResponseBody &) = default ;
    DescribeUserTagKeysResponseBody(DescribeUserTagKeysResponseBody &&) = default ;
    DescribeUserTagKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeUserTagKeysResponseBody() = default ;
    DescribeUserTagKeysResponseBody& operator=(const DescribeUserTagKeysResponseBody &) = default ;
    DescribeUserTagKeysResponseBody& operator=(DescribeUserTagKeysResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->tagKeys_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeUserTagKeysResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeUserTagKeysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeUserTagKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<string> & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
    inline vector<string> getTagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
    inline DescribeUserTagKeysResponseBody& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline DescribeUserTagKeysResponseBody& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    // Number of items per page in paginated queries. The maximum value is 100.
    // 
    // Default value:
    // 
    // - If no value is set or the set value is less than 10, the default is 10.
    // 
    // - If the set value is greater than 100, the default is 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token for the next query. An empty NextToken indicates there are no more results.
    shared_ptr<string> nextToken_ {};
    // Request ID.
    shared_ptr<string> requestId_ {};
    // List of matching tag keys.
    shared_ptr<vector<string>> tagKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ebs20210730
#endif
