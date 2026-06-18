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
      DARABONBA_PTR_TO_JSON(ConnectorId, connectorId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentCategoryId, parentCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(CategoryType, categoryType_);
      DARABONBA_PTR_FROM_JSON(ConnectorId, connectorId_);
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
    virtual bool empty() const override { return this->categoryName_ == nullptr
        && this->categoryType_ == nullptr && this->connectorId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->parentCategoryId_ == nullptr; };
    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline ListCategoryRequest& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // categoryType Field Functions 
    bool hasCategoryType() const { return this->categoryType_ != nullptr;};
    void deleteCategoryType() { this->categoryType_ = nullptr;};
    inline string getCategoryType() const { DARABONBA_PTR_GET_DEFAULT(categoryType_, "") };
    inline ListCategoryRequest& setCategoryType(string categoryType) { DARABONBA_PTR_SET_VALUE(categoryType_, categoryType) };


    // connectorId Field Functions 
    bool hasConnectorId() const { return this->connectorId_ != nullptr;};
    void deleteConnectorId() { this->connectorId_ = nullptr;};
    inline string getConnectorId() const { DARABONBA_PTR_GET_DEFAULT(connectorId_, "") };
    inline ListCategoryRequest& setConnectorId(string connectorId) { DARABONBA_PTR_SET_VALUE(connectorId_, connectorId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCategoryRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCategoryRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentCategoryId Field Functions 
    bool hasParentCategoryId() const { return this->parentCategoryId_ != nullptr;};
    void deleteParentCategoryId() { this->parentCategoryId_ = nullptr;};
    inline string getParentCategoryId() const { DARABONBA_PTR_GET_DEFAULT(parentCategoryId_, "") };
    inline ListCategoryRequest& setParentCategoryId(string parentCategoryId) { DARABONBA_PTR_SET_VALUE(parentCategoryId_, parentCategoryId) };


  protected:
    // Filters the results to include only the category with this exact name. If this parameter is omitted, no filtering is applied.
    shared_ptr<string> categoryName_ {};
    // The type of category to query. Valid value:
    // 
    // - `UNSTRUCTURED`: A category for unstructured data.
    // 
    // <props="china">
    // 
    // > This API does not support querying structured data tables.
    // 
    // 
    // 
    // <props="intl">
    // 
    // > This API does not support querying structured data tables.
    // 
    // This parameter is required.
    shared_ptr<string> categoryType_ {};
    // The ID of the connector.
    shared_ptr<string> connectorId_ {};
    // The maximum number of categories to return per page. The valid range is 1 to 200.
    // 
    // Default value: 20. If this parameter is not specified or is set to a value less than 1, the default value is used. If a value greater than 200 is specified, the maximum value of 200 is used.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. To retrieve the next page of results, pass the `NextToken` value from the previous response.
    shared_ptr<string> nextToken_ {};
    // The ID of the parent category.
    shared_ptr<string> parentCategoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
