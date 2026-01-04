// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeTagKeysResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagKeysResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagKeysResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
    };
    DescribeTagKeysResponseBody() = default ;
    DescribeTagKeysResponseBody(const DescribeTagKeysResponseBody &) = default ;
    DescribeTagKeysResponseBody(DescribeTagKeysResponseBody &&) = default ;
    DescribeTagKeysResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagKeysResponseBody() = default ;
    DescribeTagKeysResponseBody& operator=(const DescribeTagKeysResponseBody &) = default ;
    DescribeTagKeysResponseBody& operator=(DescribeTagKeysResponseBody &&) = default ;
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
      class TagKey : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagKey& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, TagKey& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        TagKey() = default ;
        TagKey(const TagKey &) = default ;
        TagKey(TagKey &&) = default ;
        TagKey(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagKey() = default ;
        TagKey& operator=(const TagKey &) = default ;
        TagKey& operator=(TagKey &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->type_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagKey& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline TagKey& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The type of the tag key. Valid values:
        // 
        // *   **Custom**: custom
        // *   **System**: system
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->tagKey_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline const vector<TagKeys::TagKey> & getTagKey() const { DARABONBA_PTR_GET_CONST(tagKey_, vector<TagKeys::TagKey>) };
      inline vector<TagKeys::TagKey> getTagKey() { DARABONBA_PTR_GET(tagKey_, vector<TagKeys::TagKey>) };
      inline TagKeys& setTagKey(const vector<TagKeys::TagKey> & tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };
      inline TagKeys& setTagKey(vector<TagKeys::TagKey> && tagKey) { DARABONBA_PTR_SET_RVALUE(tagKey_, tagKey) };


    protected:
      shared_ptr<vector<TagKeys::TagKey>> tagKey_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->tagKeys_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTagKeysResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagKeysResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const DescribeTagKeysResponseBody::TagKeys & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, DescribeTagKeysResponseBody::TagKeys) };
    inline DescribeTagKeysResponseBody::TagKeys getTagKeys() { DARABONBA_PTR_GET(tagKeys_, DescribeTagKeysResponseBody::TagKeys) };
    inline DescribeTagKeysResponseBody& setTagKeys(const DescribeTagKeysResponseBody::TagKeys & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline DescribeTagKeysResponseBody& setTagKeys(DescribeTagKeysResponseBody::TagKeys && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    // The token that is used for the next query. Valid values:
    // 
    // *   If the value of **NextToken** is not returned, it indicates that no next query is to be sent.
    // *   If a value of **NextToken** is returned, the value is the token that is used for the subsequent query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of tag keys.
    shared_ptr<DescribeTagKeysResponseBody::TagKeys> tagKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
