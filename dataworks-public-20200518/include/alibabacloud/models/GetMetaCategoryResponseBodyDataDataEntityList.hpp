// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMETACATEGORYRESPONSEBODYDATADATAENTITYLIST_HPP_
#define ALIBABACLOUD_MODELS_GETMETACATEGORYRESPONSEBODYDATADATAENTITYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GetMetaCategoryResponseBodyDataDataEntityList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMetaCategoryResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Depth, depth_);
      DARABONBA_PTR_TO_JSON(LastOperatorId, lastOperatorId_);
      DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, GetMetaCategoryResponseBodyDataDataEntityList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Depth, depth_);
      DARABONBA_PTR_FROM_JSON(LastOperatorId, lastOperatorId_);
      DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
    };
    GetMetaCategoryResponseBodyDataDataEntityList() = default ;
    GetMetaCategoryResponseBodyDataDataEntityList(const GetMetaCategoryResponseBodyDataDataEntityList &) = default ;
    GetMetaCategoryResponseBodyDataDataEntityList(GetMetaCategoryResponseBodyDataDataEntityList &&) = default ;
    GetMetaCategoryResponseBodyDataDataEntityList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMetaCategoryResponseBodyDataDataEntityList() = default ;
    GetMetaCategoryResponseBodyDataDataEntityList& operator=(const GetMetaCategoryResponseBodyDataDataEntityList &) = default ;
    GetMetaCategoryResponseBodyDataDataEntityList& operator=(GetMetaCategoryResponseBodyDataDataEntityList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryId_ != nullptr
        && this->comment_ != nullptr && this->createTime_ != nullptr && this->depth_ != nullptr && this->lastOperatorId_ != nullptr && this->modifiedTime_ != nullptr
        && this->name_ != nullptr && this->ownerId_ != nullptr && this->parentCategoryId_ != nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // depth Field Functions 
    bool hasDepth() const { return this->depth_ != nullptr;};
    void deleteDepth() { this->depth_ = nullptr;};
    inline int32_t depth() const { DARABONBA_PTR_GET_DEFAULT(depth_, 0) };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setDepth(int32_t depth) { DARABONBA_PTR_SET_VALUE(depth_, depth) };


    // lastOperatorId Field Functions 
    bool hasLastOperatorId() const { return this->lastOperatorId_ != nullptr;};
    void deleteLastOperatorId() { this->lastOperatorId_ = nullptr;};
    inline string lastOperatorId() const { DARABONBA_PTR_GET_DEFAULT(lastOperatorId_, "") };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setLastOperatorId(string lastOperatorId) { DARABONBA_PTR_SET_VALUE(lastOperatorId_, lastOperatorId) };


    // modifiedTime Field Functions 
    bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
    void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
    inline int64_t modifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, 0L) };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setModifiedTime(int64_t modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline int64_t parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, 0L) };
    inline GetMetaCategoryResponseBodyDataDataEntityList& setParentCategoryId(int64_t parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    // The category ID.
    std::shared_ptr<int64_t> categoryId_ = nullptr;
    // The remarks of the category.
    std::shared_ptr<string> comment_ = nullptr;
    // The time when the category was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The number of category levels.
    std::shared_ptr<int32_t> depth_ = nullptr;
    // The ID of the user that performed the last operation.
    std::shared_ptr<string> lastOperatorId_ = nullptr;
    // The time when the category was last modified.
    std::shared_ptr<int64_t> modifiedTime_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> name_ = nullptr;
    // The category owner ID.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The parent category ID.
    std::shared_ptr<int64_t> parentCategoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
