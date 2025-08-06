// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODYSUBCATEGORIESCATEGORY_HPP_
#define ALIBABACLOUD_MODELS_GETCATEGORIESRESPONSEBODYSUBCATEGORIESCATEGORY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetCategoriesResponseBodySubCategoriesCategory : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCategoriesResponseBodySubCategoriesCategory& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(SubTotal, subTotal_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetCategoriesResponseBodySubCategoriesCategory& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(SubTotal, subTotal_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetCategoriesResponseBodySubCategoriesCategory() = default ;
    GetCategoriesResponseBodySubCategoriesCategory(const GetCategoriesResponseBodySubCategoriesCategory &) = default ;
    GetCategoriesResponseBodySubCategoriesCategory(GetCategoriesResponseBodySubCategoriesCategory &&) = default ;
    GetCategoriesResponseBodySubCategoriesCategory(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCategoriesResponseBodySubCategoriesCategory() = default ;
    GetCategoriesResponseBodySubCategoriesCategory& operator=(const GetCategoriesResponseBodySubCategoriesCategory &) = default ;
    GetCategoriesResponseBodySubCategoriesCategory& operator=(GetCategoriesResponseBodySubCategoriesCategory &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->cateName_ != nullptr && this->level_ != nullptr && this->parentId_ != nullptr && this->subTotal_ != nullptr && this->type_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline GetCategoriesResponseBodySubCategoriesCategory& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline GetCategoriesResponseBodySubCategoriesCategory& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline GetCategoriesResponseBodySubCategoriesCategory& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline GetCategoriesResponseBodySubCategoriesCategory& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // subTotal Field Functions 
    bool hasSubTotal() const { return this->subTotal_ != nullptr;};
    void deleteSubTotal() { this->subTotal_ = nullptr;};
    inline int64_t subTotal() const { DARABONBA_PTR_GET_DEFAULT(subTotal_, 0L) };
    inline GetCategoriesResponseBodySubCategoriesCategory& setSubTotal(int64_t subTotal) { DARABONBA_PTR_SET_VALUE(subTotal_, subTotal) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetCategoriesResponseBodySubCategoriesCategory& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the category.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> cateName_ = nullptr;
    // The level of the category. Valid values:
    // 
    // *   **0**: level 1 category
    // *   **1**: level 2 category
    // *   **2**: level 3 category
    std::shared_ptr<int64_t> level_ = nullptr;
    // The ID of the parent category.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The total number of subcategories.
    std::shared_ptr<int64_t> subTotal_ = nullptr;
    // The type of the subcategory. Valid values:
    // 
    // *   **default**: audio, video, and image files
    // *   **material**: short video materials
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
