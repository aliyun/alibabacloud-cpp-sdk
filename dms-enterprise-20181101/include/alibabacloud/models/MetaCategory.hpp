// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_METACATEGORY_HPP_
#define ALIBABACLOUD_MODELS_METACATEGORY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_TO_JSON(OwnerNickNames, ownerNickNames_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, MetaCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Depth, depth_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerIds, ownerIds_);
      DARABONBA_PTR_FROM_JSON(OwnerNickNames, ownerNickNames_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
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
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->createTime_ == nullptr && return this->depth_ == nullptr && return this->description_ == nullptr && return this->name_ == nullptr && return this->ownerIds_ == nullptr
        && return this->ownerNickNames_ == nullptr && return this->parentCategoryId_ == nullptr && return this->remark_ == nullptr; };
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


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline MetaCategory& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MetaCategory& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerIds Field Functions 
    bool hasOwnerIds() const { return this->ownerIds_ != nullptr;};
    void deleteOwnerIds() { this->ownerIds_ = nullptr;};
    inline const vector<int64_t> & ownerIds() const { DARABONBA_PTR_GET_CONST(ownerIds_, vector<int64_t>) };
    inline vector<int64_t> ownerIds() { DARABONBA_PTR_GET(ownerIds_, vector<int64_t>) };
    inline MetaCategory& setOwnerIds(const vector<int64_t> & ownerIds) { DARABONBA_PTR_SET_VALUE(ownerIds_, ownerIds) };
    inline MetaCategory& setOwnerIds(vector<int64_t> && ownerIds) { DARABONBA_PTR_SET_RVALUE(ownerIds_, ownerIds) };


    // ownerNickNames Field Functions 
    bool hasOwnerNickNames() const { return this->ownerNickNames_ != nullptr;};
    void deleteOwnerNickNames() { this->ownerNickNames_ = nullptr;};
    inline const vector<string> & ownerNickNames() const { DARABONBA_PTR_GET_CONST(ownerNickNames_, vector<string>) };
    inline vector<string> ownerNickNames() { DARABONBA_PTR_GET(ownerNickNames_, vector<string>) };
    inline MetaCategory& setOwnerNickNames(const vector<string> & ownerNickNames) { DARABONBA_PTR_SET_VALUE(ownerNickNames_, ownerNickNames) };
    inline MetaCategory& setOwnerNickNames(vector<string> && ownerNickNames) { DARABONBA_PTR_SET_RVALUE(ownerNickNames_, ownerNickNames) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline MetaCategory& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline MetaCategory& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int32_t> depth_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<vector<int64_t>> ownerIds_ = nullptr;
    std::shared_ptr<vector<string>> ownerNickNames_ = nullptr;
    std::shared_ptr<int64_t> parentCategoryId_ = nullptr;
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
