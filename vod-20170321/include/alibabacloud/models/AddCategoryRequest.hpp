// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class AddCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CateName, cateName_);
      DARABONBA_PTR_TO_JSON(ParentId, parentId_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, AddCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CateName, cateName_);
      DARABONBA_PTR_FROM_JSON(ParentId, parentId_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    AddCategoryRequest() = default ;
    AddCategoryRequest(const AddCategoryRequest &) = default ;
    AddCategoryRequest(AddCategoryRequest &&) = default ;
    AddCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCategoryRequest() = default ;
    AddCategoryRequest& operator=(const AddCategoryRequest &) = default ;
    AddCategoryRequest& operator=(AddCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cateName_ != nullptr
        && this->parentId_ != nullptr && this->type_ != nullptr; };
    // cateName Field Functions 
    bool hasCateName() const { return this->cateName_ != nullptr;};
    void deleteCateName() { this->cateName_ = nullptr;};
    inline string cateName() const { DARABONBA_PTR_GET_DEFAULT(cateName_, "") };
    inline AddCategoryRequest& setCateName(string cateName) { DARABONBA_PTR_SET_VALUE(cateName_, cateName) };


    // parentId Field Functions 
    bool hasParentId() const { return this->parentId_ != nullptr;};
    void deleteParentId() { this->parentId_ = nullptr;};
    inline int64_t parentId() const { DARABONBA_PTR_GET_DEFAULT(parentId_, 0L) };
    inline AddCategoryRequest& setParentId(int64_t parentId) { DARABONBA_PTR_SET_VALUE(parentId_, parentId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AddCategoryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The name of the category.
    // 
    // *   The value can be up to 64 bytes in length.
    // *   The value must be encoded in UTF-8.
    // 
    // This parameter is required.
    std::shared_ptr<string> cateName_ = nullptr;
    // The ID of the parent category.
    // 
    // To obtain the category ID, perform the following steps: Log on to the [ApsaraVideo VOD console](https://vod.console.aliyun.com). Choose **Configuration Management** > **Media Management** > **Categories**. On the **Audio and Video / Image Category** or **Short Video Material Category** tab, view the category ID.
    // 
    // > *   If you specify this parameter, the system creates a subcategory under the parent category. If you leave this parameter empty, the system creates a level 1 category.
    // >*   You cannot modify, add, or delete level 1 categories of short video materials. You can create only subcategories under level 1 categories for short video materials. This parameter is required when you set `Type` to `material`.
    std::shared_ptr<int64_t> parentId_ = nullptr;
    // The type of the category. Valid values:
    // 
    // *   **default** (default): audio, video, and image files
    // *   **material**: short video materials
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
