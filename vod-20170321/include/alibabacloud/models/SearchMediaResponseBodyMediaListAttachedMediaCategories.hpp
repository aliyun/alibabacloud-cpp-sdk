// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTATTACHEDMEDIACATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHMEDIARESPONSEBODYMEDIALISTATTACHEDMEDIACATEGORIES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class SearchMediaResponseBodyMediaListAttachedMediaCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchMediaResponseBodyMediaListAttachedMediaCategories& obj) { 
      DARABONBA_PTR_TO_JSON(CateId, cateId_);
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
    };
    friend void from_json(const Darabonba::Json& j, SearchMediaResponseBodyMediaListAttachedMediaCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(CateId, cateId_);
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
    };
    SearchMediaResponseBodyMediaListAttachedMediaCategories() = default ;
    SearchMediaResponseBodyMediaListAttachedMediaCategories(const SearchMediaResponseBodyMediaListAttachedMediaCategories &) = default ;
    SearchMediaResponseBodyMediaListAttachedMediaCategories(SearchMediaResponseBodyMediaListAttachedMediaCategories &&) = default ;
    SearchMediaResponseBodyMediaListAttachedMediaCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchMediaResponseBodyMediaListAttachedMediaCategories() = default ;
    SearchMediaResponseBodyMediaListAttachedMediaCategories& operator=(const SearchMediaResponseBodyMediaListAttachedMediaCategories &) = default ;
    SearchMediaResponseBodyMediaListAttachedMediaCategories& operator=(SearchMediaResponseBodyMediaListAttachedMediaCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateId_ != nullptr
        && this->cateName_ != nullptr && this->level_ != nullptr && this->parentId_ != nullptr; };
    // cateId Field Functions 
    bool hasCateId() const { return this->cateId_ != nullptr;};
    void deleteCateId() { this->cateId_ = nullptr;};
    inline int64_t cateId() const { DARABONBA_PTR_GET_DEFAULT(cateId_, 0L) };
    inline SearchMediaResponseBodyMediaListAttachedMediaCategories& setCateId(int64_t cateId) { DARABONBA_PTR_SET_VALUE(cateId_, cateId) };


    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline SearchMediaResponseBodyMediaListAttachedMediaCategories& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline int64_t level() const { DARABONBA_PTR_GET_DEFAULT(level_, 0L) };
    inline SearchMediaResponseBodyMediaListAttachedMediaCategories& setLevel(int64_t level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline SearchMediaResponseBodyMediaListAttachedMediaCategories& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


  protected:
    // The category ID of the auxiliary media asset.
    std::shared_ptr<int64_t> cateId_ = nullptr;
    // The name of the category.
    std::shared_ptr<string> cateName_ = nullptr;
    // The level of the category.
    std::shared_ptr<int64_t> level_ = nullptr;
    // The ID of the parent node.
    std::shared_ptr<int64_t> parentId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
