// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCategoriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubCategories, subCategories_);
      DARABONBA_PTR_TO_JSON(SubTotal, subTotal_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubCategories, subCategories_);
      DARABONBA_PTR_FROM_JSON(SubTotal, subTotal_);
    };
    GetCategoriesResponseBody() = default ;
    GetCategoriesResponseBody(const GetCategoriesResponseBody &) = default ;
    GetCategoriesResponseBody(GetCategoriesResponseBody &&) = default ;
    GetCategoriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesResponseBody() = default ;
    GetCategoriesResponseBody& operator=(const GetCategoriesResponseBody &) = default ;
    GetCategoriesResponseBody& operator=(GetCategoriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SubCategories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SubCategories& obj) { 
        DARABONBA_PTR_TO_JSON(Category, category_);
      };
      friend void from_json(const Darabonba::Json& j, SubCategories& obj) { 
        DARABONBA_PTR_FROM_JSON(Category, category_);
      };
      SubCategories() = default ;
      SubCategories(const SubCategories &) = default ;
      SubCategories(SubCategories &&) = default ;
      SubCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SubCategories() = default ;
      SubCategories& operator=(const SubCategories &) = default ;
      SubCategories& operator=(SubCategories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Category : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Category& obj) { 
          DARABONBA_PTR_TO_JSON(CateId, cateId_);
          DARABONBA_PTR_TO_JSON(CateName, cateName_);
          DARABONBA_PTR_TO_JSON(Level, level_);
          DARABONBA_PTR_TO_JSON(ParentId, parentId_);
          DARABONBA_PTR_TO_JSON(SubTotal, subTotal_);
          DARABONBA_PTR_TO_JSON(Type, type_);
        };
        friend void from_json(const Darabonba::Json& j, Category& obj) { 
          DARABONBA_PTR_FROM_JSON(CateId, cateId_);
          DARABONBA_PTR_FROM_JSON(CateName, cateName_);
          DARABONBA_PTR_FROM_JSON(Level, level_);
          DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
          DARABONBA_PTR_FROM_JSON(SubTotal, subTotal_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
        };
        Category() = default ;
        Category(const Category &) = default ;
        Category(Category &&) = default ;
        Category(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Category() = default ;
        Category& operator=(const Category &) = default ;
        Category& operator=(Category &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->level_ == nullptr && this->parentId_ == nullptr && this->subTotal_ == nullptr && this->type_ == nullptr; };
        // cateId Field Functions 
        bool hasCateId() const { return this->cateId_ != nullptr;};
        void deleteCateId() { this->cateId_ = nullptr;};
        inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
        inline Category& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


        // cateName Field Functions 
        bool hasCateName() const { return this->cateName_ != nullptr;};
        void deleteCateName() { this->cateName_ = nullptr;};
        inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
        inline Category& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
        inline Category& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // parentId Field Functions 
        bool hasParentId() const { return this->parentId_ != nullptr;};
        void deleteParentId() { this->parentId_ = nullptr;};
        inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
        inline Category& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


        // subTotal Field Functions 
        bool hasSubTotal() const { return this->subTotal_ != nullptr;};
        void deleteSubTotal() { this->subTotal_ = nullptr;};
        inline int64_t getSubTotal() const { DARABONBA_PTR_GET_DEFAULT(subTotal_, 0L) };
        inline Category& setSubTotal(int64_t subTotal) { DARABONBA_PTR_SET_VALUE(subTotal_, subTotal) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline Category& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        // The ID of the category.
        shared_ptr<int64_t> cateId_ {};
        // The name of the category.
        shared_ptr<string> cateName_ {};
        // The level of the category. Valid values:
        // 
        // *   **0**: level 1 category
        // *   **1**: level 2 category
        // *   **2**: level 3 category
        shared_ptr<int64_t> level_ {};
        // The ID of the parent category.
        shared_ptr<int64_t> parentId_ {};
        // The total number of subcategories.
        shared_ptr<int64_t> subTotal_ {};
        // The type of the subcategory. Valid values:
        // 
        // *   **default**: audio, video, and image files
        // *   **material**: short video materials
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->category_ == nullptr; };
      // category Field Functions 
      bool hasCategory() const { return this->category_ != nullptr;};
      void deleteCategory() { this->category_ = nullptr;};
      inline const vector<SubCategories::Category> & getCategory() const { DARABONBA_PTR_GET_CONST(category_, vector<SubCategories::Category>) };
      inline vector<SubCategories::Category> getCategory() { DARABONBA_PTR_GET(category_, vector<SubCategories::Category>) };
      inline SubCategories& setCategory(const vector<SubCategories::Category> & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
      inline SubCategories& setCategory(vector<SubCategories::Category> && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    protected:
      shared_ptr<vector<SubCategories::Category>> category_ {};
    };

    class Category : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Category& obj) { 
        DARABONBA_PTR_TO_JSON(CateId, cateId_);
        DARABONBA_PTR_TO_JSON(CateName, cateName_);
        DARABONBA_PTR_TO_JSON(Level, level_);
        DARABONBA_PTR_TO_JSON(ParentId, parentId_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Category& obj) { 
        DARABONBA_PTR_FROM_JSON(CateId, cateId_);
        DARABONBA_PTR_FROM_JSON(CateName, cateName_);
        DARABONBA_PTR_FROM_JSON(Level, level_);
        DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Category() = default ;
      Category(const Category &) = default ;
      Category(Category &&) = default ;
      Category(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Category() = default ;
      Category& operator=(const Category &) = default ;
      Category& operator=(Category &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->cateId_ == nullptr
        && this->cateName_ == nullptr && this->level_ == nullptr && this->parentId_ == nullptr && this->type_ == nullptr; };
      // cateId Field Functions 
      bool hasCateId() const { return this->cateId_ != nullptr;};
      void deleteCateId() { this->cateId_ = nullptr;};
      inline int64_t getCateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
      inline Category& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


      // cateName Field Functions 
      bool hasCateName() const { return this->cateName_ != nullptr;};
      void deleteCateName() { this->cateName_ = nullptr;};
      inline string getCateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
      inline Category& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


      // level Field Functions 
      bool hasLevel() const { return this->level_ != nullptr;};
      void deleteLevel() { this->level_ = nullptr;};
      inline int64_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
      inline Category& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


      // parentId Field Functions 
      bool hasParentId() const { return this->parentId_ != nullptr;};
      void deleteParentId() { this->parentId_ = nullptr;};
      inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
      inline Category& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Category& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The ID of the category.
      shared_ptr<int64_t> cateId_ {};
      // The name of the category.
      shared_ptr<string> cateName_ {};
      // The level of the category. Valid values:
      // 
      // *   **0**: level 1 category
      // *   **1**: level 2 category
      // *   **2**: level 3 category
      shared_ptr<int64_t> level_ {};
      // The ID of the parent category.
      shared_ptr<int64_t> parentId_ {};
      // The type of the category. Valid values:
      // 
      // *   **default**: audio, video, and image files
      // *   **material**: short video materials
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->category_ == nullptr
        && this->requestId_ == nullptr && this->subCategories_ == nullptr && this->subTotal_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const GetCategoriesResponseBody::Category & getCategory() const { DARABONBA_PTR_GET_CONST(category_, GetCategoriesResponseBody::Category) };
    inline GetCategoriesResponseBody::Category getCategory() { DARABONBA_PTR_GET(category_, GetCategoriesResponseBody::Category) };
    inline GetCategoriesResponseBody& setCategory(const GetCategoriesResponseBody::Category & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline GetCategoriesResponseBody& setCategory(GetCategoriesResponseBody::Category && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCategoriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subCategories Field Functions 
    bool hasSubCategories() const { return this->subCategories_ != nullptr;};
    void deleteSubCategories() { this->subCategories_ = nullptr;};
    inline const GetCategoriesResponseBody::SubCategories & getSubCategories() const { DARABONBA_PTR_GET_CONST(subCategories_, GetCategoriesResponseBody::SubCategories) };
    inline GetCategoriesResponseBody::SubCategories getSubCategories() { DARABONBA_PTR_GET(subCategories_, GetCategoriesResponseBody::SubCategories) };
    inline GetCategoriesResponseBody& setSubCategories(const GetCategoriesResponseBody::SubCategories & subCategories) { DARABONBA_PTR_SET_VALUE(subCategories_, subCategories) };
    inline GetCategoriesResponseBody& setSubCategories(GetCategoriesResponseBody::SubCategories && subCategories) { DARABONBA_PTR_SET_RVALUE(subCategories_, subCategories) };


    // subTotal Field Functions 
    bool hasSubTotal() const { return this->subTotal_ != nullptr;};
    void deleteSubTotal() { this->subTotal_ = nullptr;};
    inline int64_t getSubTotal() const { DARABONBA_PTR_GET_DEFAULT(subTotal_, 0L) };
    inline GetCategoriesResponseBody& setSubTotal(int64_t subTotal) { DARABONBA_PTR_SET_VALUE(subTotal_, subTotal) };


  protected:
    // The information about the category.
    shared_ptr<GetCategoriesResponseBody::Category> category_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The details of the subcategory.
    shared_ptr<GetCategoriesResponseBody::SubCategories> subCategories_ {};
    // The total number of subcategories.
    shared_ptr<int64_t> subTotal_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
