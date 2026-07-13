// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCECATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCECATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class ListResourceCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListResourceCategoriesResponseBody() = default ;
    ListResourceCategoriesResponseBody(const ListResourceCategoriesResponseBody &) = default ;
    ListResourceCategoriesResponseBody(ListResourceCategoriesResponseBody &&) = default ;
    ListResourceCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceCategoriesResponseBody() = default ;
    ListResourceCategoriesResponseBody& operator=(const ListResourceCategoriesResponseBody &) = default ;
    ListResourceCategoriesResponseBody& operator=(ListResourceCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Content, content_);
        DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Content, content_);
        DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
        DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Content : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Content& obj) { 
          DARABONBA_PTR_TO_JSON(ProductType, productType_);
          DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
          DARABONBA_PTR_TO_JSON(ResourceCategoryName, resourceCategoryName_);
          DARABONBA_PTR_TO_JSON(ResourceCategoryType, resourceCategoryType_);
          DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_TO_JSON(ResourceMatcher, resourceMatcher_);
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        };
        friend void from_json(const Darabonba::Json& j, Content& obj) { 
          DARABONBA_PTR_FROM_JSON(ProductType, productType_);
          DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
          DARABONBA_PTR_FROM_JSON(ResourceCategoryName, resourceCategoryName_);
          DARABONBA_PTR_FROM_JSON(ResourceCategoryType, resourceCategoryType_);
          DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
          DARABONBA_PTR_FROM_JSON(ResourceMatcher, resourceMatcher_);
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        };
        Content() = default ;
        Content(const Content &) = default ;
        Content(Content &&) = default ;
        Content(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Content() = default ;
        Content& operator=(const Content &) = default ;
        Content& operator=(Content &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class ResourceCount : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const ResourceCount& obj) { 
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          };
          friend void from_json(const Darabonba::Json& j, ResourceCount& obj) { 
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          };
          ResourceCount() = default ;
          ResourceCount(const ResourceCount &) = default ;
          ResourceCount(ResourceCount &&) = default ;
          ResourceCount(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~ResourceCount() = default ;
          ResourceCount& operator=(const ResourceCount &) = default ;
          ResourceCount& operator=(ResourceCount &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->count_ == nullptr
        && this->resourceType_ == nullptr; };
          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline ResourceCount& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // resourceType Field Functions 
          bool hasResourceType() const { return this->resourceType_ != nullptr;};
          void deleteResourceType() { this->resourceType_ = nullptr;};
          inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
          inline ResourceCount& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        protected:
          // The number of resources of each type.
          shared_ptr<int64_t> count_ {};
          // The resource type.
          shared_ptr<string> resourceType_ {};
        };

        virtual bool empty() const override { return this->productType_ == nullptr
        && this->resourceCategoryId_ == nullptr && this->resourceCategoryName_ == nullptr && this->resourceCategoryType_ == nullptr && this->resourceCount_ == nullptr && this->resourceMatcher_ == nullptr
        && this->resourceType_ == nullptr; };
        // productType Field Functions 
        bool hasProductType() const { return this->productType_ != nullptr;};
        void deleteProductType() { this->productType_ = nullptr;};
        inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
        inline Content& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


        // resourceCategoryId Field Functions 
        bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
        void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
        inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
        inline Content& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


        // resourceCategoryName Field Functions 
        bool hasResourceCategoryName() const { return this->resourceCategoryName_ != nullptr;};
        void deleteResourceCategoryName() { this->resourceCategoryName_ = nullptr;};
        inline string getResourceCategoryName() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryName_, "") };
        inline Content& setResourceCategoryName(string resourceCategoryName) { DARABONBA_PTR_SET_VALUE(resourceCategoryName_, resourceCategoryName) };


        // resourceCategoryType Field Functions 
        bool hasResourceCategoryType() const { return this->resourceCategoryType_ != nullptr;};
        void deleteResourceCategoryType() { this->resourceCategoryType_ = nullptr;};
        inline string getResourceCategoryType() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryType_, "") };
        inline Content& setResourceCategoryType(string resourceCategoryType) { DARABONBA_PTR_SET_VALUE(resourceCategoryType_, resourceCategoryType) };


        // resourceCount Field Functions 
        bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
        void deleteResourceCount() { this->resourceCount_ = nullptr;};
        inline const vector<Content::ResourceCount> & getResourceCount() const { DARABONBA_PTR_GET_CONST(resourceCount_, vector<Content::ResourceCount>) };
        inline vector<Content::ResourceCount> getResourceCount() { DARABONBA_PTR_GET(resourceCount_, vector<Content::ResourceCount>) };
        inline Content& setResourceCount(const vector<Content::ResourceCount> & resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };
        inline Content& setResourceCount(vector<Content::ResourceCount> && resourceCount) { DARABONBA_PTR_SET_RVALUE(resourceCount_, resourceCount) };


        // resourceMatcher Field Functions 
        bool hasResourceMatcher() const { return this->resourceMatcher_ != nullptr;};
        void deleteResourceMatcher() { this->resourceMatcher_ = nullptr;};
        inline string getResourceMatcher() const { DARABONBA_PTR_GET_DEFAULT(resourceMatcher_, "") };
        inline Content& setResourceMatcher(string resourceMatcher) { DARABONBA_PTR_SET_VALUE(resourceMatcher_, resourceMatcher) };


        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline Content& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      protected:
        // The applicable product type. If this parameter is empty, all products are matched.
        shared_ptr<string> productType_ {};
        // The resource category ID, which is globally unique.
        shared_ptr<string> resourceCategoryId_ {};
        // The resource name, which is unique within the namespace.
        shared_ptr<string> resourceCategoryName_ {};
        // The resource category type. Valid values:
        // 
        // - DEFAULT: default group created by the system, cannot be deleted.
        // 
        // - CUSTOM: custom group, can be deleted.
        shared_ptr<string> resourceCategoryType_ {};
        // The number of resources of each type.
        shared_ptr<vector<Content::ResourceCount>> resourceCount_ {};
        // The resource matcher. If this parameter is empty, no resources are matched.
        shared_ptr<string> resourceMatcher_ {};
        // The applicable resource type. If this parameter is empty, all resources are matched.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->content_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->totalCount_ == nullptr; };
      // content Field Functions 
      bool hasContent() const { return this->content_ != nullptr;};
      void deleteContent() { this->content_ = nullptr;};
      inline const vector<Data::Content> & getContent() const { DARABONBA_PTR_GET_CONST(content_, vector<Data::Content>) };
      inline vector<Data::Content> getContent() { DARABONBA_PTR_GET(content_, vector<Data::Content>) };
      inline Data& setContent(const vector<Data::Content> & content) { DARABONBA_PTR_SET_VALUE(content_, content) };
      inline Data& setContent(vector<Data::Content> && content) { DARABONBA_PTR_SET_RVALUE(content_, content) };


      // maxResults Field Functions 
      bool hasMaxResults() const { return this->maxResults_ != nullptr;};
      void deleteMaxResults() { this->maxResults_ = nullptr;};
      inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
      inline Data& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


      // nextToken Field Functions 
      bool hasNextToken() const { return this->nextToken_ != nullptr;};
      void deleteNextToken() { this->nextToken_ = nullptr;};
      inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
      inline Data& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The collection of records returned in this request.
      shared_ptr<vector<Data::Content>> content_ {};
      // The maximum number of records returned in this request.
      shared_ptr<int32_t> maxResults_ {};
      // Indicates the position where the current call returns data from. An empty value indicates that all data has been read.
      shared_ptr<string> nextToken_ {};
      // The total number of data entries under the current request conditions. This parameter is optional and can be left unspecified by default.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const ListResourceCategoriesResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, ListResourceCategoriesResponseBody::Data) };
    inline ListResourceCategoriesResponseBody::Data getData() { DARABONBA_PTR_GET(data_, ListResourceCategoriesResponseBody::Data) };
    inline ListResourceCategoriesResponseBody& setData(const ListResourceCategoriesResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListResourceCategoriesResponseBody& setData(ListResourceCategoriesResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListResourceCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<ListResourceCategoriesResponseBody::Data> data_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
