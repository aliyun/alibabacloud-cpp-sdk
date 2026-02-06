// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, AddCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    AddCategoryResponseBody() = default ;
    AddCategoryResponseBody(const AddCategoryResponseBody &) = default ;
    AddCategoryResponseBody(AddCategoryResponseBody &&) = default ;
    AddCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCategoryResponseBody() = default ;
    AddCategoryResponseBody& operator=(const AddCategoryResponseBody &) = default ;
    AddCategoryResponseBody& operator=(AddCategoryResponseBody &&) = default ;
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
      // The ID of the category. You can use the value of this parameter when you call the [UpdateCategory](~~UpdateCategory~~), [DeleteCategory](~~DeleteCategory~~), and [GetCategories](~~GetCategories~~) operations.
      shared_ptr<int64_t> cateId_ {};
      // The name of the category.
      shared_ptr<string> cateName_ {};
      // The level of the category. Valid values:
      // 
      // *   **0**: level 1 category
      // *   **1**: level 2 category
      // *   **1**: level 3 category
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
        && this->requestId_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline const AddCategoryResponseBody::Category & getCategory() const { DARABONBA_PTR_GET_CONST(category_, AddCategoryResponseBody::Category) };
    inline AddCategoryResponseBody::Category getCategory() { DARABONBA_PTR_GET(category_, AddCategoryResponseBody::Category) };
    inline AddCategoryResponseBody& setCategory(const AddCategoryResponseBody::Category & category) { DARABONBA_PTR_SET_VALUE(category_, category) };
    inline AddCategoryResponseBody& setCategory(AddCategoryResponseBody::Category && category) { DARABONBA_PTR_SET_RVALUE(category_, category) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the category.
    shared_ptr<AddCategoryResponseBody::Category> category_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
