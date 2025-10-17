// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCERESPONSEBODYCATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class DescribeInstanceResponseBodyCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceResponseBodyCategories& obj) { 
      DARABONBA_PTR_TO_JSON(AbilityType, abilityType_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceResponseBodyCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(AbilityType, abilityType_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
    };
    DescribeInstanceResponseBodyCategories() = default ;
    DescribeInstanceResponseBodyCategories(const DescribeInstanceResponseBodyCategories &) = default ;
    DescribeInstanceResponseBodyCategories(DescribeInstanceResponseBodyCategories &&) = default ;
    DescribeInstanceResponseBodyCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceResponseBodyCategories() = default ;
    DescribeInstanceResponseBodyCategories& operator=(const DescribeInstanceResponseBodyCategories &) = default ;
    DescribeInstanceResponseBodyCategories& operator=(DescribeInstanceResponseBodyCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abilityType_ == nullptr
        && return this->categoryId_ == nullptr && return this->name_ == nullptr && return this->parentCategoryId_ == nullptr; };
    // abilityType Field Functions 
    bool hasAbilityType() const { return this->abilityType_ != nullptr;};
    void deleteAbilityType() { this->abilityType_ = nullptr;};
    inline string abilityType() const { DARABONBA_PTR_GET_DEFAULT(abilityType_, "") };
    inline DescribeInstanceResponseBodyCategories& setAbilityType(string abilityType) { DARABONBA_PTR_SET_VALUE(abilityType_, abilityType) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline DescribeInstanceResponseBodyCategories& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeInstanceResponseBodyCategories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline DescribeInstanceResponseBodyCategories& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    std::shared_ptr<string> abilityType_ = nullptr;
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> parentCategoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
