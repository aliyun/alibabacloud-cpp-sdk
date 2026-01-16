// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Headers, headers_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TagResources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Headers, headers_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TagResources, tagResources_);
    };
    ListTagResourcesResponseBody() = default ;
    ListTagResourcesResponseBody(const ListTagResourcesResponseBody &) = default ;
    ListTagResourcesResponseBody(ListTagResourcesResponseBody &&) = default ;
    ListTagResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagResourcesResponseBody() = default ;
    ListTagResourcesResponseBody& operator=(const ListTagResourcesResponseBody &) = default ;
    ListTagResourcesResponseBody& operator=(ListTagResourcesResponseBody &&) = default ;
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
        shared_ptr<string> resourceId_ {};
        shared_ptr<string> resourceType_ {};
        shared_ptr<string> tagKey_ {};
        // The tag key.
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
      // Indicates the ID of a resource.
      shared_ptr<vector<TagResources::TagResource>> tagResource_ {};
    };

    class Headers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Headers& obj) { 
        DARABONBA_PTR_TO_JSON(X-Total-Count, xTotalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Headers& obj) { 
        DARABONBA_PTR_FROM_JSON(X-Total-Count, xTotalCount_);
      };
      Headers() = default ;
      Headers(const Headers &) = default ;
      Headers(Headers &&) = default ;
      Headers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Headers() = default ;
      Headers& operator=(const Headers &) = default ;
      Headers& operator=(Headers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->xTotalCount_ == nullptr; };
      // xTotalCount Field Functions 
      bool hasXTotalCount() const { return this->xTotalCount_ != nullptr;};
      void deleteXTotalCount() { this->xTotalCount_ = nullptr;};
      inline int32_t getXTotalCount() const { DARABONBA_PTR_GET_DEFAULT(xTotalCount_, 0) };
      inline Headers& setXTotalCount(int32_t xTotalCount) { DARABONBA_PTR_SET_VALUE(xTotalCount_, xTotalCount) };


    protected:
      // The value of the tag.
      shared_ptr<int32_t> xTotalCount_ {};
    };

    virtual bool empty() const override { return this->headers_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tagResources_ == nullptr; };
    // headers Field Functions 
    bool hasHeaders() const { return this->headers_ != nullptr;};
    void deleteHeaders() { this->headers_ = nullptr;};
    inline const ListTagResourcesResponseBody::Headers & getHeaders() const { DARABONBA_PTR_GET_CONST(headers_, ListTagResourcesResponseBody::Headers) };
    inline ListTagResourcesResponseBody::Headers getHeaders() { DARABONBA_PTR_GET(headers_, ListTagResourcesResponseBody::Headers) };
    inline ListTagResourcesResponseBody& setHeaders(const ListTagResourcesResponseBody::Headers & headers) { DARABONBA_PTR_SET_VALUE(headers_, headers) };
    inline ListTagResourcesResponseBody& setHeaders(ListTagResourcesResponseBody::Headers && headers) { DARABONBA_PTR_SET_RVALUE(headers_, headers) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTagResourcesResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tagResources Field Functions 
    bool hasTagResources() const { return this->tagResources_ != nullptr;};
    void deleteTagResources() { this->tagResources_ = nullptr;};
    inline const ListTagResourcesResponseBody::TagResources & getTagResources() const { DARABONBA_PTR_GET_CONST(tagResources_, ListTagResourcesResponseBody::TagResources) };
    inline ListTagResourcesResponseBody::TagResources getTagResources() { DARABONBA_PTR_GET(tagResources_, ListTagResourcesResponseBody::TagResources) };
    inline ListTagResourcesResponseBody& setTagResources(const ListTagResourcesResponseBody::TagResources & tagResources) { DARABONBA_PTR_SET_VALUE(tagResources_, tagResources) };
    inline ListTagResourcesResponseBody& setTagResources(ListTagResourcesResponseBody::TagResources && tagResources) { DARABONBA_PTR_SET_RVALUE(tagResources_, tagResources) };


  protected:
    // The labels of the resource.
    shared_ptr<ListTagResourcesResponseBody::Headers> headers_ {};
    // The number of resources to query.
    shared_ptr<int32_t> pageSize_ {};
    // A list of resources that have tags.
    shared_ptr<string> requestId_ {};
    // The type of the resource. Fixed to `ALIYUN::ELASTICSEARCH::INSTANCE`.
    shared_ptr<ListTagResourcesResponseBody::TagResources> tagResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
