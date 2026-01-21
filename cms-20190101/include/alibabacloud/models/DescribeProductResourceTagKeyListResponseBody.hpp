// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESOURCETAGKEYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRODUCTRESOURCETAGKEYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProductResourceTagKeyListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProductResourceTagKeyListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProductResourceTagKeyListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    DescribeProductResourceTagKeyListResponseBody() = default ;
    DescribeProductResourceTagKeyListResponseBody(const DescribeProductResourceTagKeyListResponseBody &) = default ;
    DescribeProductResourceTagKeyListResponseBody(DescribeProductResourceTagKeyListResponseBody &&) = default ;
    DescribeProductResourceTagKeyListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProductResourceTagKeyListResponseBody() = default ;
    DescribeProductResourceTagKeyListResponseBody& operator=(const DescribeProductResourceTagKeyListResponseBody &) = default ;
    DescribeProductResourceTagKeyListResponseBody& operator=(DescribeProductResourceTagKeyListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagKeys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagKeys& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      };
      friend void from_json(const Darabonba::Json& j, TagKeys& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      };
      TagKeys() = default ;
      TagKeys(const TagKeys &) = default ;
      TagKeys(TagKeys &&) = default ;
      TagKeys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagKeys() = default ;
      TagKeys& operator=(const TagKeys &) = default ;
      TagKeys& operator=(TagKeys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline const vector<string> & getTagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<string>) };
      inline vector<string> getTagKey() { DARABONBA_PTR_GET(tagKey_, vector<string>) };
      inline TagKeys& setTagKey(const vector<string> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
      inline TagKeys& setTagKey(vector<string> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


    protected:
      shared_ptr<vector<string>> tagKey_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->tagKeys_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeProductResourceTagKeyListResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DescribeProductResourceTagKeyListResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeProductResourceTagKeyListResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeProductResourceTagKeyListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeProductResourceTagKeyListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const DescribeProductResourceTagKeyListResponseBody::TagKeys & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, DescribeProductResourceTagKeyListResponseBody::TagKeys) };
    inline DescribeProductResourceTagKeyListResponseBody::TagKeys getTagKeys() { DARABONBA_PTR_GET(tagKeys_, DescribeProductResourceTagKeyListResponseBody::TagKeys) };
    inline DescribeProductResourceTagKeyListResponseBody& setTagKeys(const DescribeProductResourceTagKeyListResponseBody::TagKeys & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline DescribeProductResourceTagKeyListResponseBody& setTagKeys(DescribeProductResourceTagKeyListResponseBody::TagKeys && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    // The status code.
    // 
    // >  The status code 200 indicates that the request was successful.
    shared_ptr<string> code_ {};
    // The error message.
    shared_ptr<string> message_ {};
    // The pagination token. If more entries are to be returned on the next page, a pagination token is returned.
    // 
    // >  If the value of this parameter is not null, more entries are to be returned on the next page. You can use the returned pagination token as a request parameter to retrieve a new page of results. If the value of this parameter is null, all the entries have been returned.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values: true and false.
    shared_ptr<bool> success_ {};
    shared_ptr<DescribeProductResourceTagKeyListResponseBody::TagKeys> tagKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
