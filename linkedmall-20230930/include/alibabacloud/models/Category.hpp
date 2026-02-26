// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORY_HPP_
#define ALIBABACLOUD_MODELS_CATEGORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class Category : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Category& obj) { 
      DARABONBA_PTR_TO_JSON(categoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(isLeaf, isLeaf_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(parentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, Category& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(isLeaf, isLeaf_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(parentId, parentId_);
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
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->isLeaf_ == nullptr && this->level_ == nullptr && this->name_ == nullptr && this->parentId_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline Category& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // isLeaf Field Functions 
    bool hasIsLeaf() const { return this->isLeaf_ != nullptr;};
    void deleteIsLeaf() { this->isLeaf_ = nullptr;};
    inline bool getIsLeaf() const { DARABONBA_PTR_GET_DEFAULT(isLeaf_, false) };
    inline Category& setIsLeaf(bool isLeaf) { DARABONBA_PTR_SET_VALUE(isLeaf_, isLeaf) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int32_t getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, 0) };
    inline Category& setLevel(int32_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline Category& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t getParentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline Category& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    shared_ptr<int64_t> categoryId_ {};
    shared_ptr<bool> isLeaf_ {};
    shared_ptr<int32_t> level_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int64_t> parentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
