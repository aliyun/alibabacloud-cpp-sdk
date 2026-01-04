// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    DescribeTagResourcesResponseBody() = default ;
    DescribeTagResourcesResponseBody(const DescribeTagResourcesResponseBody &) = default ;
    DescribeTagResourcesResponseBody(DescribeTagResourcesResponseBody &&) = default ;
    DescribeTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagResourcesResponseBody() = default ;
    DescribeTagResourcesResponseBody& operator=(const DescribeTagResourcesResponseBody &) = default ;
    DescribeTagResourcesResponseBody& operator=(DescribeTagResourcesResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
          DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagResource& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
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
        virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->tagKey_ == nullptr && this->tagValue_ == nullptr; };
        // resourceId Field Functions 
        bool hasResourceId() const { return this->resourceId_ != nullptr;};
        void deleteResourceId() { this->resourceId_ = nullptr;};
        inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
        inline TagResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline TagResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


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
        // The ID of the Anti-DDoS Proxy (Chinese Mainland) instance.
        shared_ptr<string> resourceId_ {};
        // The resource type. The value is fixed as **INSTANCE**, which indicates an Anti-DDoS Proxy instance.
        shared_ptr<string> resourceType_ {};
        // The key of the tag that is added to the Anti-DDoS Proxy (Chinese Mainland) instance.
        shared_ptr<string> tagKey_ {};
        // The value of the tag that is added to the Anti-DDoS Proxy (Chinese Mainland) instance.
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
    inline DescribeTagResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const DescribeTagResourcesResponseBody::TagResources & getTagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, DescribeTagResourcesResponseBody::TagResources) };
    inline DescribeTagResourcesResponseBody::TagResources getTagResources() { DARABONBA_PTR_GET(tagResources_, DescribeTagResourcesResponseBody::TagResources) };
    inline DescribeTagResourcesResponseBody& setTagResources(const DescribeTagResourcesResponseBody::TagResources & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline DescribeTagResourcesResponseBody& setTagResources(DescribeTagResourcesResponseBody::TagResources && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    // The query token that is returned in this call.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The tags that are added to the Anti-DDoS Proxy (Chinese Mainland) instance.
    shared_ptr<DescribeTagResourcesResponseBody::TagResources> tagResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
