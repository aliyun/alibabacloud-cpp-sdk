// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODYCATEGORY_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODYCATEGORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class GetCategoriesResponseBodyCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesResponseBodyCategory& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesResponseBodyCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCategoriesResponseBodyCategory() = default ;
    GetCategoriesResponseBodyCategory(const GetCategoriesResponseBodyCategory &) = default ;
    GetCategoriesResponseBodyCategory(GetCategoriesResponseBodyCategory &&) = default ;
    GetCategoriesResponseBodyCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesResponseBodyCategory() = default ;
    GetCategoriesResponseBodyCategory& operator=(const GetCategoriesResponseBodyCategory &) = default ;
    GetCategoriesResponseBodyCategory& operator=(GetCategoriesResponseBodyCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->cateName_ != nullptr && this->level_ != nullptr && this->parentId_ != nullptr && this->type_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetCategoriesResponseBodyCategory& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline GetCategoriesResponseBodyCategory& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline GetCategoriesResponseBodyCategory& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline GetCategoriesResponseBodyCategory& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCategoriesResponseBodyCategory& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The category ID.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The category name.
    std::shared_ptr<string> cateName_ = nullptr;
    // The level of the category. A value of **0** indicates a level-1 category, a value of **1** indicates a level-2 category, and a value of **2** indicates a level-3 category.
    std::shared_ptr<int64_t> level_ = nullptr;
    // The ID of the parent category.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The type of the category. Valid values:
    // 
    // *   **default**: audio, video, and image files. This is the default value.
    // *   **material**: short video materials.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
