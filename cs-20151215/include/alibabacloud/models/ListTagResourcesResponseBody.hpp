// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class ListTagResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(next_token, nextToken_);
      DARABONBA_PTR_TO_JSON(request_id, requestId_);
      DARABONBA_PTR_TO_JSON(tag_resources, tagResources_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(next_token, nextToken_);
      DARABONBA_PTR_FROM_JSON(request_id, requestId_);
      DARABONBA_PTR_FROM_JSON(tag_resources, tagResources_);
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
        DARABONBA_PTR_TO_JSON(tag_resource, tagResource_);
      };
      friend void from_json(const Darabonba::Json& j, TagResources& obj) { 
        DARABONBA_PTR_FROM_JSON(tag_resource, tagResource_);
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
          DARABONBA_PTR_TO_JSON(resource_id, resourceId_);
          DARABONBA_PTR_TO_JSON(resource_type, resourceType_);
          DARABONBA_PTR_TO_JSON(tag_key, tagKey_);
          DARABONBA_PTR_TO_JSON(tag_value, tagValue_);
        };
        friend void from_json(const Darabonba::Json& j, TagResource& obj) { 
          DARABONBA_PTR_FROM_JSON(resource_id, resourceId_);
          DARABONBA_PTR_FROM_JSON(resource_type, resourceType_);
          DARABONBA_PTR_FROM_JSON(tag_key, tagKey_);
          DARABONBA_PTR_FROM_JSON(tag_value, tagValue_);
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
        // The ID of the resource.
        shared_ptr<string> resourceId_ {};
        // The type of the resource. For more information, see [Labels](https://help.aliyun.com/document_detail/110425.html).
        shared_ptr<string> resourceType_ {};
        // The key of the label.
        shared_ptr<string> tagKey_ {};
        // The value of the label.
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
      // The resource and label.
      shared_ptr<vector<TagResources::TagResource>> tagResource_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->tagResources_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


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
    // The pagination token that is used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The details of the queried labels and resources.
    shared_ptr<ListTagResourcesResponseBody::TagResources> tagResources_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
