// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODYCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODYCATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListCategoryResponseBodyCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoryResponseBodyCategories& obj) { 
      DARABONBA_PTR_TO_JSON(BizCode, bizCode_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryResponseBodyCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(BizCode, bizCode_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListCategoryResponseBodyCategories() = default ;
    ListCategoryResponseBodyCategories(const ListCategoryResponseBodyCategories &) = default ;
    ListCategoryResponseBodyCategories(ListCategoryResponseBodyCategories &&) = default ;
    ListCategoryResponseBodyCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoryResponseBodyCategories() = default ;
    ListCategoryResponseBodyCategories& operator=(const ListCategoryResponseBodyCategories &) = default ;
    ListCategoryResponseBodyCategories& operator=(ListCategoryResponseBodyCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizCode_ != nullptr
        && this->categoryId_ != nullptr && this->name_ != nullptr && this->parentCategoryId_ != nullptr && this->status_ != nullptr; };
    // bizCode Field Functions 
    bool hasBizCode() const { return this->bizCode_ != nullptr;};
    void deleteBizCode() { this->bizCode_ = nullptr;};
    inline string bizCode() const { DARABONBA_PTR_GET_DEFAULT(bizCode_, "") };
    inline ListCategoryResponseBodyCategories& setBizCode(string bizCode) { DARABONBA_PTR_SET_VALUE(bizCode_, bizCode) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline ListCategoryResponseBodyCategories& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListCategoryResponseBodyCategories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline ListCategoryResponseBodyCategories& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListCategoryResponseBodyCategories& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> bizCode_ = nullptr;
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> parentCategoryId_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
