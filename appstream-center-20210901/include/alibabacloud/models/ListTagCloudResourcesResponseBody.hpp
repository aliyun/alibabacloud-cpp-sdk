// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGCLOUDRESOURCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGCLOUDRESOURCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListTagCloudResourcesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagCloudResourcesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceTags, resourceTags_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListTagCloudResourcesResponseBody() = default ;
    ListTagCloudResourcesResponseBody(const ListTagCloudResourcesResponseBody &) = default ;
    ListTagCloudResourcesResponseBody(ListTagCloudResourcesResponseBody &&) = default ;
    ListTagCloudResourcesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagCloudResourcesResponseBody() = default ;
    ListTagCloudResourcesResponseBody& operator=(const ListTagCloudResourcesResponseBody &) = default ;
    ListTagCloudResourcesResponseBody& operator=(ListTagCloudResourcesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourceTags : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourceTags& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
      };
      friend void from_json(const Darabonba::Json& j, ResourceTags& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(Tags, tags_);
      };
      ResourceTags() = default ;
      ResourceTags(const ResourceTags &) = default ;
      ResourceTags(ResourceTags &&) = default ;
      ResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourceTags() = default ;
      ResourceTags& operator=(const ResourceTags &) = default ;
      ResourceTags& operator=(ResourceTags &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Key, key_);
          DARABONBA_PTR_TO_JSON(Scope, scope_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Key, key_);
          DARABONBA_PTR_FROM_JSON(Scope, scope_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->scope_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Tags& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // scope Field Functions 
        bool hasScope() const { return this->scope_ != nullptr;};
        void deleteScope() { this->scope_ = nullptr;};
        inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
        inline Tags& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Tags& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The tag key.
        shared_ptr<string> key_ {};
        // The tag type.
        // 
        // Valid values:
        // 
        // *   Custom: custom tag.
        // *   System: system tag.
        shared_ptr<string> scope_ {};
        // The tag value.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->tags_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
      inline ResourceTags& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourceTags& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const vector<ResourceTags::Tags> & getTags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ResourceTags::Tags>) };
      inline vector<ResourceTags::Tags> getTags() { DARABONBA_PTR_GET(tags_, vector<ResourceTags::Tags>) };
      inline ResourceTags& setTags(const vector<ResourceTags::Tags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline ResourceTags& setTags(vector<ResourceTags::Tags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    protected:
      // The resource ID.
      shared_ptr<string> resourceId_ {};
      // The type of the cloud resource.
      // 
      // Valid values:
      // 
      // *   AppId: app ID.
      // *   WyId: Alibaba Cloud Workspace user ID.
      // *   AppInstanceGroupId: delivery group ID.
      // *   AliUid: tenant ID.
      shared_ptr<string> resourceType_ {};
      // The tags.
      shared_ptr<vector<ResourceTags::Tags>> tags_ {};
    };

    virtual bool empty() const override { return this->nextToken_ == nullptr
        && this->requestId_ == nullptr && this->resourceTags_ == nullptr && this->totalCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagCloudResourcesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListTagCloudResourcesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceTags Field Functions 
    bool hasResourceTags() const { return this->resourceTags_ != nullptr;};
    void deleteResourceTags() { this->resourceTags_ = nullptr;};
    inline const vector<ListTagCloudResourcesResponseBody::ResourceTags> & getResourceTags() const { DARABONBA_PTR_GET_CONST(resourceTags_, vector<ListTagCloudResourcesResponseBody::ResourceTags>) };
    inline vector<ListTagCloudResourcesResponseBody::ResourceTags> getResourceTags() { DARABONBA_PTR_GET(resourceTags_, vector<ListTagCloudResourcesResponseBody::ResourceTags>) };
    inline ListTagCloudResourcesResponseBody& setResourceTags(const vector<ListTagCloudResourcesResponseBody::ResourceTags> & resourceTags) { DARABONBA_PTR_SET_VALUE(resourceTags_, resourceTags) };
    inline ListTagCloudResourcesResponseBody& setResourceTags(vector<ListTagCloudResourcesResponseBody::ResourceTags> && resourceTags) { DARABONBA_PTR_SET_RVALUE(resourceTags_, resourceTags) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListTagCloudResourcesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // Indicates whether the next query is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The tags added to the cloud resources.
    shared_ptr<vector<ListTagCloudResourcesResponseBody::ResourceTags>> resourceTags_ {};
    // The total number of entries.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
