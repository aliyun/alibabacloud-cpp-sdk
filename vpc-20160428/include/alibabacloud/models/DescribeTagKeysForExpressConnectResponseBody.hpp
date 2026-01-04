// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGKEYSFOREXPRESSCONNECTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGKEYSFOREXPRESSCONNECTRESPONSEBODY_HPP_
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
        // The key of the tag.
        shared_ptr<string> tagKey_ {};
        // The type of the resource. The value is set to **PHYSICALCONNECTION**, which indicates an Express Connect circuit.
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
    inline DescribeTagKeysForExpressConnectResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagKeysForExpressConnectResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const DescribeTagKeysForExpressConnectResponseBody::TagKeys & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, DescribeTagKeysForExpressConnectResponseBody::TagKeys) };
    inline DescribeTagKeysForExpressConnectResponseBody::TagKeys getTagKeys() { DARABONBA_PTR_GET(tagKeys_, DescribeTagKeysForExpressConnectResponseBody::TagKeys) };
    inline DescribeTagKeysForExpressConnectResponseBody& setTagKeys(const DescribeTagKeysForExpressConnectResponseBody::TagKeys & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline DescribeTagKeysForExpressConnectResponseBody& setTagKeys(DescribeTagKeysForExpressConnectResponseBody::TagKeys && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // 
    // *   If **NextToken** is empty, no next page exists.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The tag keys.
    shared_ptr<DescribeTagKeysForExpressConnectResponseBody::TagKeys> tagKeys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
