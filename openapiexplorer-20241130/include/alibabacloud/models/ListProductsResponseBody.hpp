// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenAPIExplorer20241130
{
namespace Models
{
  class ListProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(products, products_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(products, products_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    ListProductsResponseBody() = default ;
    ListProductsResponseBody(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody(ListProductsResponseBody &&) = default ;
    ListProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsResponseBody() = default ;
    ListProductsResponseBody& operator=(const ListProductsResponseBody &) = default ;
    ListProductsResponseBody& operator=(ListProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Products : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Products& obj) { 
        DARABONBA_PTR_TO_JSON(category2Name, category2Name_);
        DARABONBA_PTR_TO_JSON(categoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(defaultVersion, defaultVersion_);
        DARABONBA_PTR_TO_JSON(description, description_);
        DARABONBA_PTR_TO_JSON(group, group_);
        DARABONBA_PTR_TO_JSON(name, name_);
        DARABONBA_PTR_TO_JSON(shortName, shortName_);
        DARABONBA_PTR_TO_JSON(style, style_);
        DARABONBA_PTR_TO_JSON(versions, versions_);
      };
      friend void from_json(const Darabonba::Json& j, Products& obj) { 
        DARABONBA_PTR_FROM_JSON(category2Name, category2Name_);
        DARABONBA_PTR_FROM_JSON(categoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(defaultVersion, defaultVersion_);
        DARABONBA_PTR_FROM_JSON(description, description_);
        DARABONBA_PTR_FROM_JSON(group, group_);
        DARABONBA_PTR_FROM_JSON(name, name_);
        DARABONBA_PTR_FROM_JSON(shortName, shortName_);
        DARABONBA_PTR_FROM_JSON(style, style_);
        DARABONBA_PTR_FROM_JSON(versions, versions_);
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
      virtual bool empty() const override { return this->category2Name_ == nullptr
        && this->categoryName_ == nullptr && this->code_ == nullptr && this->defaultVersion_ == nullptr && this->description_ == nullptr && this->group_ == nullptr
        && this->name_ == nullptr && this->shortName_ == nullptr && this->style_ == nullptr && this->versions_ == nullptr; };
      // category2Name Field Functions 
      bool hasCategory2Name() const { return this->category2Name_ != nullptr;};
      void deleteCategory2Name() { this->category2Name_ = nullptr;};
      inline string getCategory2Name() const { DARABONBA_PTR_GET_DEFAULT(category2Name_, "") };
      inline Products& setCategory2Name(string category2Name) { DARABONBA_PTR_SET_VALUE(category2Name_, category2Name) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline Products& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Products& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // defaultVersion Field Functions 
      bool hasDefaultVersion() const { return this->defaultVersion_ != nullptr;};
      void deleteDefaultVersion() { this->defaultVersion_ = nullptr;};
      inline string getDefaultVersion() const { DARABONBA_PTR_GET_DEFAULT(defaultVersion_, "") };
      inline Products& setDefaultVersion(string defaultVersion) { DARABONBA_PTR_SET_VALUE(defaultVersion_, defaultVersion) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Products& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // group Field Functions 
      bool hasGroup() const { return this->group_ != nullptr;};
      void deleteGroup() { this->group_ = nullptr;};
      inline string getGroup() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
      inline Products& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Products& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // shortName Field Functions 
      bool hasShortName() const { return this->shortName_ != nullptr;};
      void deleteShortName() { this->shortName_ = nullptr;};
      inline string getShortName() const { DARABONBA_PTR_GET_DEFAULT(shortName_, "") };
      inline Products& setShortName(string shortName) { DARABONBA_PTR_SET_VALUE(shortName_, shortName) };


      // style Field Functions 
      bool hasStyle() const { return this->style_ != nullptr;};
      void deleteStyle() { this->style_ = nullptr;};
      inline string getStyle() const { DARABONBA_PTR_GET_DEFAULT(style_, "") };
      inline Products& setStyle(string style) { DARABONBA_PTR_SET_VALUE(style_, style) };


      // versions Field Functions 
      bool hasVersions() const { return this->versions_ != nullptr;};
      void deleteVersions() { this->versions_ = nullptr;};
      inline const vector<string> & getVersions() const { DARABONBA_PTR_GET_CONST(versions_, vector<string>) };
      inline vector<string> getVersions() { DARABONBA_PTR_GET(versions_, vector<string>) };
      inline Products& setVersions(const vector<string> & versions) { DARABONBA_PTR_SET_VALUE(versions_, versions) };
      inline Products& setVersions(vector<string> && versions) { DARABONBA_PTR_SET_RVALUE(versions_, versions) };


    protected:
      shared_ptr<string> category2Name_ {};
      shared_ptr<string> categoryName_ {};
      shared_ptr<string> code_ {};
      shared_ptr<string> defaultVersion_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> group_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> shortName_ {};
      shared_ptr<string> style_ {};
      shared_ptr<vector<string>> versions_ {};
    };

    virtual bool empty() const override { return this->products_ == nullptr
        && this->requestId_ == nullptr; };
    // products Field Functions 
    bool hasProducts() const { return this->products_ != nullptr;};
    void deleteProducts() { this->products_ = nullptr;};
    inline const vector<ListProductsResponseBody::Products> & getProducts() const { DARABONBA_PTR_GET_CONST(products_, vector<ListProductsResponseBody::Products>) };
    inline vector<ListProductsResponseBody::Products> getProducts() { DARABONBA_PTR_GET(products_, vector<ListProductsResponseBody::Products>) };
    inline ListProductsResponseBody& setProducts(const vector<ListProductsResponseBody::Products> & products) { DARABONBA_PTR_SET_VALUE(products_, products) };
    inline ListProductsResponseBody& setProducts(vector<ListProductsResponseBody::Products> && products) { DARABONBA_PTR_SET_RVALUE(products_, products) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListProductsResponseBody::Products>> products_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenAPIExplorer20241130
#endif
