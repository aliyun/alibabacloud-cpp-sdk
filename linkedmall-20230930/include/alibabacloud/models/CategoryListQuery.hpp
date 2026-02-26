// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CATEGORYLISTQUERY_HPP_
#define ALIBABACLOUD_MODELS_CATEGORYLISTQUERY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class CategoryListQuery : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CategoryListQuery& obj) { 
      DARABONBA_PTR_TO_JSON(categoryIds, categoryIds_);
      DARABONBA_PTR_TO_JSON(parentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, CategoryListQuery& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryIds, categoryIds_);
      DARABONBA_PTR_FROM_JSON(parentCategoryId, parentCategoryId_);
    };
    CategoryListQuery() = default ;
    CategoryListQuery(const CategoryListQuery &) = default ;
    CategoryListQuery(CategoryListQuery &&) = default ;
    CategoryListQuery(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CategoryListQuery() = default ;
    CategoryListQuery& operator=(const CategoryListQuery &) = default ;
    CategoryListQuery& operator=(CategoryListQuery &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryIds_ == nullptr
        && this->parentCategoryId_ == nullptr; };
    // categoryIds Field Functions 
    bool hasCategoryIds() const { return this->categoryIds_ != nullptr;};
    void deleteCategoryIds() { this->categoryIds_ = nullptr;};
    inline const vector<int64_t> & getCategoryIds() const { DARABONBA_PTR_GET_CONST(categoryIds_, vector<int64_t>) };
    inline vector<int64_t> getCategoryIds() { DARABONBA_PTR_GET(categoryIds_, vector<int64_t>) };
    inline CategoryListQuery& setCategoryIds(const vector<int64_t> & categoryIds) { DARABONBA_PTR_SET_VALUE(categoryIds_, categoryIds) };
    inline CategoryListQuery& setCategoryIds(vector<int64_t> && categoryIds) { DARABONBA_PTR_SET_RVALUE(categoryIds_, categoryIds) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t getParentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline CategoryListQuery& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    shared_ptr<vector<int64_t>> categoryIds_ {};
    shared_ptr<int64_t> parentCategoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
