// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCATEGORYRESPONSEBODYCATEGORY_HPP_
#define ALIBABACLOUD_MODELS_ADDCATEGORYRESPONSEBODYCATEGORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddCategoryResponseBodyCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCategoryResponseBodyCategory& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddCategoryResponseBodyCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddCategoryResponseBodyCategory() = default ;
    AddCategoryResponseBodyCategory(const AddCategoryResponseBodyCategory &) = default ;
    AddCategoryResponseBodyCategory(AddCategoryResponseBodyCategory &&) = default ;
    AddCategoryResponseBodyCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCategoryResponseBodyCategory() = default ;
    AddCategoryResponseBodyCategory& operator=(const AddCategoryResponseBodyCategory &) = default ;
    AddCategoryResponseBodyCategory& operator=(AddCategoryResponseBodyCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cateId_ == nullptr
        && return this->cateName_ == nullptr && return this->level_ == nullptr && return this->parentId_ == nullptr && return this->type_ == nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline AddCategoryResponseBodyCategory& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline AddCategoryResponseBodyCategory& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline AddCategoryResponseBodyCategory& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline AddCategoryResponseBodyCategory& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddCategoryResponseBodyCategory& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the category. You can use the value of this parameter when you call the [UpdateCategory](~~UpdateCategory~~), [DeleteCategory](~~DeleteCategory~~), and [GetCategories](~~GetCategories~~) operations.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> cateName_ = nullptr;
    // The level of the category. Valid values:
    // 
    // *   **0**: level 1 category
    // *   **1**: level 2 category
    // *   **1**: level 3 category
    std::shared_ptr<int64_t> level_ = nullptr;
    // The ID of the parent category.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The type of the category. Valid values:
    // 
    // *   **default**: audio, video, and image files
    // *   **material**: short video materials
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
