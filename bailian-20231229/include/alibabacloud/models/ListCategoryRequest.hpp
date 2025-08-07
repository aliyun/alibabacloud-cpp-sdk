// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListCategoryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentCategoryId, parentCategoryId_);
    };
    ListCategoryRequest() = default ;
    ListCategoryRequest(const ListCategoryRequest &) = default ;
    ListCategoryRequest(ListCategoryRequest &&) = default ;
    ListCategoryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoryRequest() = default ;
    ListCategoryRequest& operator=(const ListCategoryRequest &) = default ;
    ListCategoryRequest& operator=(ListCategoryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryName_ != nullptr
        && this->categoryType_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->parentCategoryId_ != nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListCategoryRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string categoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline ListCategoryRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCategoryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCategoryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline string parentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, "") };
    inline ListCategoryRequest& setParentCategoryId(string parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    std::shared_ptr<string> categoryName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> categoryType_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> parentCategoryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
