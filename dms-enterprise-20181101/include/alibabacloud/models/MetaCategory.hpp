// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METACATEGORY_HPP_
#define ALIBABACLOUD_MODELS_METACATEGORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class MetaCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MetaCategory& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Depth, depth_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, MetaCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Depth, depth_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
    };
    MetaCategory() = default ;
    MetaCategory(const MetaCategory &) = default ;
    MetaCategory(MetaCategory &&) = default ;
    MetaCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MetaCategory() = default ;
    MetaCategory& operator=(const MetaCategory &) = default ;
    MetaCategory& operator=(MetaCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->createTime_ != nullptr && this->depth_ != nullptr && this->name_ != nullptr && this->parentCategoryId_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline MetaCategory& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MetaCategory& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline int32_t depth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
    inline MetaCategory& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MetaCategory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline MetaCategory& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> depth_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> parentCategoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
