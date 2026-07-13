// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECATEGORYRESPONSEBODY_HPP_
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
  class GetResourceCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourceCategoryResponseBody() = default ;
    GetResourceCategoryResponseBody(const GetResourceCategoryResponseBody &) = default ;
    GetResourceCategoryResponseBody(GetResourceCategoryResponseBody &&) = default ;
    GetResourceCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceCategoryResponseBody() = default ;
    GetResourceCategoryResponseBody& operator=(const GetResourceCategoryResponseBody &) = default ;
    GetResourceCategoryResponseBody& operator=(GetResourceCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(ProductType, productType_);
        DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
        DARABONBA_PTR_TO_JSON(ResourceCategoryName, resourceCategoryName_);
        DARABONBA_PTR_TO_JSON(ResourceCategoryType, resourceCategoryType_);
        DARABONBA_PTR_TO_JSON(ResourceCount, resourceCount_);
        DARABONBA_PTR_TO_JSON(ResourceMatcher, resourceMatcher_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductType, productType_);
        DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
        DARABONBA_PTR_FROM_JSON(ResourceCategoryName, resourceCategoryName_);
        DARABONBA_PTR_FROM_JSON(ResourceCategoryType, resourceCategoryType_);
        DARABONBA_PTR_FROM_JSON(ResourceCount, resourceCount_);
        DARABONBA_PTR_FROM_JSON(ResourceMatcher, resourceMatcher_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
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
        // Number of resources by type.
        shared_ptr<int64_t> count_ {};
        // Resource type.
        shared_ptr<string> resourceType_ {};
      };

      virtual bool empty() const override { return this->productType_ == nullptr
        && this->resourceCategoryId_ == nullptr && this->resourceCategoryName_ == nullptr && this->resourceCategoryType_ == nullptr && this->resourceCount_ == nullptr && this->resourceMatcher_ == nullptr
        && this->resourceType_ == nullptr; };
      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline string getProductType() const { DARABONBA_PTR_GET_DEFAULT(productType_, "") };
      inline Data& setProductType(string productType) { DARABONBA_PTR_SET_VALUE(productType_, productType) };


      // resourceCategoryId Field Functions 
      bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
      void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
      inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
      inline Data& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


      // resourceCategoryName Field Functions 
      bool hasResourceCategoryName() const { return this->resourceCategoryName_ != nullptr;};
      void deleteResourceCategoryName() { this->resourceCategoryName_ = nullptr;};
      inline string getResourceCategoryName() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryName_, "") };
      inline Data& setResourceCategoryName(string resourceCategoryName) { DARABONBA_PTR_SET_VALUE(resourceCategoryName_, resourceCategoryName) };


      // resourceCategoryType Field Functions 
      bool hasResourceCategoryType() const { return this->resourceCategoryType_ != nullptr;};
      void deleteResourceCategoryType() { this->resourceCategoryType_ = nullptr;};
      inline string getResourceCategoryType() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryType_, "") };
      inline Data& setResourceCategoryType(string resourceCategoryType) { DARABONBA_PTR_SET_VALUE(resourceCategoryType_, resourceCategoryType) };


      // resourceCount Field Functions 
      bool hasResourceCount() const { return this->resourceCount_ != nullptr;};
      void deleteResourceCount() { this->resourceCount_ = nullptr;};
      inline const vector<Data::ResourceCount> & getResourceCount() const { DARABONBA_PTR_GET_CONST(resourceCount_, vector<Data::ResourceCount>) };
      inline vector<Data::ResourceCount> getResourceCount() { DARABONBA_PTR_GET(resourceCount_, vector<Data::ResourceCount>) };
      inline Data& setResourceCount(const vector<Data::ResourceCount> & resourceCount) { DARABONBA_PTR_SET_VALUE(resourceCount_, resourceCount) };
      inline Data& setResourceCount(vector<Data::ResourceCount> && resourceCount) { DARABONBA_PTR_SET_RVALUE(resourceCount_, resourceCount) };


      // resourceMatcher Field Functions 
      bool hasResourceMatcher() const { return this->resourceMatcher_ != nullptr;};
      void deleteResourceMatcher() { this->resourceMatcher_ = nullptr;};
      inline string getResourceMatcher() const { DARABONBA_PTR_GET_DEFAULT(resourceMatcher_, "") };
      inline Data& setResourceMatcher(string resourceMatcher) { DARABONBA_PTR_SET_VALUE(resourceMatcher_, resourceMatcher) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline Data& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // Applicable product type. If empty, matches all products.
      shared_ptr<string> productType_ {};
      // Resource category ID, globally unique.
      shared_ptr<string> resourceCategoryId_ {};
      // Resource name, unique within the namespace.
      shared_ptr<string> resourceCategoryName_ {};
      // Resource category type. Valid values:
      // 
      // - DEFAULT: default group, created by the system, cannot be deleted.
      // 
      // - CUSTOM: custom group, can be deleted.
      shared_ptr<string> resourceCategoryType_ {};
      // Number of resources by type.
      shared_ptr<vector<Data::ResourceCount>> resourceCount_ {};
      // Resource matcher. If empty, no resources are matched.
      shared_ptr<string> resourceMatcher_ {};
      // Applicable resource type. If empty, matches all resources.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetResourceCategoryResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetResourceCategoryResponseBody::Data) };
    inline GetResourceCategoryResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetResourceCategoryResponseBody::Data) };
    inline GetResourceCategoryResponseBody& setData(const GetResourceCategoryResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetResourceCategoryResponseBody& setData(GetResourceCategoryResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The returned data.
    shared_ptr<GetResourceCategoryResponseBody::Data> data_ {};
    // The unique ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
