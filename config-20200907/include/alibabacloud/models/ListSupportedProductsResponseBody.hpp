// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSUPPORTEDPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSUPPORTEDPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListSupportedProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSupportedProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(Products, products_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSupportedProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(Products, products_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSupportedProductsResponseBody() = default ;
    ListSupportedProductsResponseBody(const ListSupportedProductsResponseBody &) = default ;
    ListSupportedProductsResponseBody(ListSupportedProductsResponseBody &&) = default ;
    ListSupportedProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSupportedProductsResponseBody() = default ;
    ListSupportedProductsResponseBody& operator=(const ListSupportedProductsResponseBody &) = default ;
    ListSupportedProductsResponseBody& operator=(ListSupportedProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Products : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Products& obj) { 
        DARABONBA_PTR_TO_JSON(ProductNameEn, productNameEn_);
        DARABONBA_PTR_TO_JSON(ProductNameZh, productNameZh_);
        DARABONBA_PTR_TO_JSON(ResourceTypeList, resourceTypeList_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(ProductNameEn, productNameEn_);
        DARABONBA_PTR_FROM_JSON(ProductNameZh, productNameZh_);
        DARABONBA_PTR_FROM_JSON(ResourceTypeList, resourceTypeList_);
      };
      Products() = default ;
      Products(const Products &) = default ;
      Products(Products &&) = default ;
      Products(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Products() = default ;
      Products& operator=(const Products &) = default ;
      Products& operator=(Products &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ResourceTypeList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResourceTypeList& obj) { 
          DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_TO_JSON(TypeNameEn, typeNameEn_);
          DARABONBA_PTR_TO_JSON(TypeNameZh, typeNameZh_);
          DARABONBA_PTR_TO_JSON(TypePageLink, typePageLink_);
        };
        friend void from_json(const Darabonba::Json& j, ResourceTypeList& obj) { 
          DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
          DARABONBA_PTR_FROM_JSON(TypeNameEn, typeNameEn_);
          DARABONBA_PTR_FROM_JSON(TypeNameZh, typeNameZh_);
          DARABONBA_PTR_FROM_JSON(TypePageLink, typePageLink_);
        };
        ResourceTypeList() = default ;
        ResourceTypeList(const ResourceTypeList &) = default ;
        ResourceTypeList(ResourceTypeList &&) = default ;
        ResourceTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResourceTypeList() = default ;
        ResourceTypeList& operator=(const ResourceTypeList &) = default ;
        ResourceTypeList& operator=(ResourceTypeList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->resourceType_ == nullptr
        && this->typeNameEn_ == nullptr && this->typeNameZh_ == nullptr && this->typePageLink_ == nullptr; };
        // resourceType Field Functions 
        bool hasResourceType() const { return this->resourceType_ != nullptr;};
        void deleteResourceType() { this->resourceType_ = nullptr;};
        inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
        inline ResourceTypeList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


        // typeNameEn Field Functions 
        bool hasTypeNameEn() const { return this->typeNameEn_ != nullptr;};
        void deleteTypeNameEn() { this->typeNameEn_ = nullptr;};
        inline string getTypeNameEn() const { DARABONBA_PTR_GET_DEFAULT(typeNameEn_, "") };
        inline ResourceTypeList& setTypeNameEn(string typeNameEn) { DARABONBA_PTR_SET_VALUE(typeNameEn_, typeNameEn) };


        // typeNameZh Field Functions 
        bool hasTypeNameZh() const { return this->typeNameZh_ != nullptr;};
        void deleteTypeNameZh() { this->typeNameZh_ = nullptr;};
        inline string getTypeNameZh() const { DARABONBA_PTR_GET_DEFAULT(typeNameZh_, "") };
        inline ResourceTypeList& setTypeNameZh(string typeNameZh) { DARABONBA_PTR_SET_VALUE(typeNameZh_, typeNameZh) };


        // typePageLink Field Functions 
        bool hasTypePageLink() const { return this->typePageLink_ != nullptr;};
        void deleteTypePageLink() { this->typePageLink_ = nullptr;};
        inline string getTypePageLink() const { DARABONBA_PTR_GET_DEFAULT(typePageLink_, "") };
        inline ResourceTypeList& setTypePageLink(string typePageLink) { DARABONBA_PTR_SET_VALUE(typePageLink_, typePageLink) };


      protected:
        // The identifier of the resource type.
        shared_ptr<string> resourceType_ {};
        // The English name of the resource type.
        shared_ptr<string> typeNameEn_ {};
        // The Chinese name of the resource type.
        shared_ptr<string> typeNameZh_ {};
        // The URL of the resource type in the console.
        shared_ptr<string> typePageLink_ {};
      };

      virtual bool empty() const override { return this->productNameEn_ == nullptr
        && this->productNameZh_ == nullptr && this->resourceTypeList_ == nullptr; };
      // productNameEn Field Functions 
      bool hasProductNameEn() const { return this->productNameEn_ != nullptr;};
      void deleteProductNameEn() { this->productNameEn_ = nullptr;};
      inline string getProductNameEn() const { DARABONBA_PTR_GET_DEFAULT(productNameEn_, "") };
      inline Products& setProductNameEn(string productNameEn) { DARABONBA_PTR_SET_VALUE(productNameEn_, productNameEn) };


      // productNameZh Field Functions 
      bool hasProductNameZh() const { return this->productNameZh_ != nullptr;};
      void deleteProductNameZh() { this->productNameZh_ = nullptr;};
      inline string getProductNameZh() const { DARABONBA_PTR_GET_DEFAULT(productNameZh_, "") };
      inline Products& setProductNameZh(string productNameZh) { DARABONBA_PTR_SET_VALUE(productNameZh_, productNameZh) };


      // resourceTypeList Field Functions 
      bool hasResourceTypeList() const { return this->resourceTypeList_ != nullptr;};
      void deleteResourceTypeList() { this->resourceTypeList_ = nullptr;};
      inline const vector<Products::ResourceTypeList> & getResourceTypeList() const { DARABONBA_PTR_GET_CONST(resourceTypeList_, vector<Products::ResourceTypeList>) };
      inline vector<Products::ResourceTypeList> getResourceTypeList() { DARABONBA_PTR_GET(resourceTypeList_, vector<Products::ResourceTypeList>) };
      inline Products& setResourceTypeList(const vector<Products::ResourceTypeList> & resourceTypeList) { DARABONBA_PTR_SET_VALUE(resourceTypeList_, resourceTypeList) };
      inline Products& setResourceTypeList(vector<Products::ResourceTypeList> && resourceTypeList) { DARABONBA_PTR_SET_RVALUE(resourceTypeList_, resourceTypeList) };


    protected:
      // The English name of the Alibaba Cloud service.
      shared_ptr<string> productNameEn_ {};
      // The Chinese name of the Alibaba Cloud service.
      shared_ptr<string> productNameZh_ {};
      // The resource types that are supported by Cloud Config.
      shared_ptr<vector<Products::ResourceTypeList>> resourceTypeList_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->products_ == nullptr && this->requestId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline string getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, "") };
    inline ListSupportedProductsResponseBody& setMaxResults(string maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSupportedProductsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<ListSupportedProductsResponseBody::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<ListSupportedProductsResponseBody::Products>) };
    inline vector<ListSupportedProductsResponseBody::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<ListSupportedProductsResponseBody::Products>) };
    inline ListSupportedProductsResponseBody& setProducts(const vector<ListSupportedProductsResponseBody::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline ListSupportedProductsResponseBody& setProducts(vector<ListSupportedProductsResponseBody::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSupportedProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The maximum number of entries to return for a single request. Valid values: 1 to 500.
    shared_ptr<string> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The cloud services that are supported by Cloud Config.
    shared_ptr<vector<ListSupportedProductsResponseBody::Products>> products_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
