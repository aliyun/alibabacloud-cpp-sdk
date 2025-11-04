// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCATEGORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_ADDCATEGORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddCategoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
    };
    friend void from_json(const Darabonba::Json& j, AddCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
    };
    AddCategoryResponseBodyData() = default ;
    AddCategoryResponseBodyData(const AddCategoryResponseBodyData &) = default ;
    AddCategoryResponseBodyData(AddCategoryResponseBodyData &&) = default ;
    AddCategoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCategoryResponseBodyData() = default ;
    AddCategoryResponseBodyData& operator=(const AddCategoryResponseBodyData &) = default ;
    AddCategoryResponseBodyData& operator=(AddCategoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->categoryName_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline AddCategoryResponseBodyData& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline AddCategoryResponseBodyData& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


  protected:
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
