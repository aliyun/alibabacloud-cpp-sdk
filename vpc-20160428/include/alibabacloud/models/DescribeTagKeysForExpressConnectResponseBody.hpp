// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYSFOREXPRESSCONNECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYSFOREXPRESSCONNECTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeTagKeysForExpressConnectResponseBodyTagKeys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeTagKeysForExpressConnectResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagKeysForExpressConnectResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagKeysForExpressConnectResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    DescribeTagKeysForExpressConnectResponseBody() = default ;
    DescribeTagKeysForExpressConnectResponseBody(const DescribeTagKeysForExpressConnectResponseBody &) = default ;
    DescribeTagKeysForExpressConnectResponseBody(DescribeTagKeysForExpressConnectResponseBody &&) = default ;
    DescribeTagKeysForExpressConnectResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagKeysForExpressConnectResponseBody() = default ;
    DescribeTagKeysForExpressConnectResponseBody& operator=(const DescribeTagKeysForExpressConnectResponseBody &) = default ;
    DescribeTagKeysForExpressConnectResponseBody& operator=(DescribeTagKeysForExpressConnectResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->nextToken_ != nullptr
        && this->requestId_ != nullptr && this->tagKeys_ != nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTagKeysForExpressConnectResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagKeysForExpressConnectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const DescribeTagKeysForExpressConnectResponseBodyTagKeys & tagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, DescribeTagKeysForExpressConnectResponseBodyTagKeys) };
    inline DescribeTagKeysForExpressConnectResponseBodyTagKeys tagKeys() { DARABONBA_PTR_GET(tagKeys_, DescribeTagKeysForExpressConnectResponseBodyTagKeys) };
    inline DescribeTagKeysForExpressConnectResponseBody& setTagKeys(const DescribeTagKeysForExpressConnectResponseBodyTagKeys & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline DescribeTagKeysForExpressConnectResponseBody& setTagKeys(DescribeTagKeysForExpressConnectResponseBodyTagKeys && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The tag keys.
    std::shared_ptr<DescribeTagKeysForExpressConnectResponseBodyTagKeys> tagKeys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
