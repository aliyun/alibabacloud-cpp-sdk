// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODY_HPP_
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
  class DescribeTagsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    DescribeTagsResponseBody() = default ;
    DescribeTagsResponseBody(const DescribeTagsResponseBody &) = default ;
    DescribeTagsResponseBody(DescribeTagsResponseBody &&) = default ;
    DescribeTagsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBody() = default ;
    DescribeTagsResponseBody& operator=(const DescribeTagsResponseBody &) = default ;
    DescribeTagsResponseBody& operator=(DescribeTagsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagResources : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagResources& obj) { 
        DARABONBA_PTR_TO_JSON(TagResource, tagResource_);
      };
      friend void from_json(const Darabonba::Json& j, TagResources& obj) { 
        DARABONBA_PTR_FROM_JSON(TagResource, tagResource_);
      };
      TagResources() = default ;
      TagResources(const TagResources &) = default ;
      TagResources(TagResources &&) = default ;
      TagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagResources() = default ;
      TagResources& operator=(const TagResources &) = default ;
      TagResources& operator=(TagResources &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TagResource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TagResource& obj) { 
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagResource& obj) { 
          DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
          DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
        };
        TagResource() = default ;
        TagResource(const TagResource &) = default ;
        TagResource(TagResource &&) = default ;
        TagResource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TagResource() = default ;
        TagResource& operator=(const TagResource &) = default ;
        TagResource& operator=(TagResource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
        // tagKey Field Functions 
        bool hasTagKey() const { return this->tagKey_ != nullptr;};
        void deleteTagKey() { this->tagKey_ = nullptr;};
        inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
        inline TagResource& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


        // tagValue Field Functions 
        bool hasTagValue() const { return this->tagValue_ != nullptr;};
        void deleteTagValue() { this->tagValue_ = nullptr;};
        inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
        inline TagResource& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


      protected:
        // The tag key.
        shared_ptr<string> tagKey_ {};
        // The tag value.
        shared_ptr<string> tagValue_ {};
      };

      virtual bool empty() const override { return this->tagResource_ == nullptr; };
      // tagResource Field Functions 
      bool hasTagResource() const { return this->tagResource_ != nullptr;};
      void deleteTagResource() { this->tagResource_ = nullptr;};
      inline const vector<TagResources::TagResource> & getTagResource() const { DARABONBA_PTR_GET_CONST(tagResource_, vector<TagResources::TagResource>) };
      inline vector<TagResources::TagResource> getTagResource() { DARABONBA_PTR_GET(tagResource_, vector<TagResources::TagResource>) };
      inline TagResources& setTagResource(const vector<TagResources::TagResource> & tagResource) { DARABONBA_PTR_SET_VALUE(tagResource_, tagResource) };
      inline TagResources& setTagResource(vector<TagResources::TagResource> && tagResource) { DARABONBA_PTR_SET_RVALUE(tagResource_, tagResource) };


    protected:
      shared_ptr<vector<TagResources::TagResource>> tagResource_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->tagResources_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeTagsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const DescribeTagsResponseBody::TagResources & getTagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, DescribeTagsResponseBody::TagResources) };
    inline DescribeTagsResponseBody::TagResources getTagResources() { DARABONBA_PTR_GET(tagResources_, DescribeTagsResponseBody::TagResources) };
    inline DescribeTagsResponseBody& setTagResources(const DescribeTagsResponseBody::TagResources & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline DescribeTagsResponseBody& setTagResources(DescribeTagsResponseBody::TagResources && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    // The token that is used for the next query. Valid values:
    // 
    // *   If the value of **NextToken** is not returned, it indicates that no next query is to be sent.
    // *   If a value of **NextToken** is returned, the value is the token that is used for the subsequent query.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of tags that meet the filter conditions.
    shared_ptr<DescribeTagsResponseBody::TagResources> tagResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
