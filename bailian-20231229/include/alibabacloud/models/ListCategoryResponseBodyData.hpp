// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTCATEGORYRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCategoryResponseBodyDataCategoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListCategoryResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_TO_JSON(HasNext, hasNext_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListCategoryResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_FROM_JSON(HasNext, hasNext_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListCategoryResponseBodyData() = default ;
    ListCategoryResponseBodyData(const ListCategoryResponseBodyData &) = default ;
    ListCategoryResponseBodyData(ListCategoryResponseBodyData &&) = default ;
    ListCategoryResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCategoryResponseBodyData() = default ;
    ListCategoryResponseBodyData& operator=(const ListCategoryResponseBodyData &) = default ;
    ListCategoryResponseBodyData& operator=(ListCategoryResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->categoryList_ != nullptr
        && this->hasNext_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->totalCount_ != nullptr; };
    // categoryList Field Functions 
    bool hasCategoryList() const { return this->categoryList_ != nullptr;};
    void deleteCategoryList() { this->categoryList_ = nullptr;};
    inline const vector<Models::ListCategoryResponseBodyDataCategoryList> & categoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<Models::ListCategoryResponseBodyDataCategoryList>) };
    inline vector<Models::ListCategoryResponseBodyDataCategoryList> categoryList() { DARABONBA_PTR_GET(categoryList_, vector<Models::ListCategoryResponseBodyDataCategoryList>) };
    inline ListCategoryResponseBodyData& setCategoryList(const vector<Models::ListCategoryResponseBodyDataCategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
    inline ListCategoryResponseBodyData& setCategoryList(vector<Models::ListCategoryResponseBodyDataCategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


    // hasNext Field Functions 
    bool hasHasNext() const { return this->hasNext_ != nullptr;};
    void deleteHasNext() { this->hasNext_ = nullptr;};
    inline bool hasNext() const { DARABONBA_PTR_GET_DEFAULT(hasNext_, false) };
    inline ListCategoryResponseBodyData& setHasNext(bool hasNext) { DARABONBA_PTR_SET_VALUE(hasNext_, hasNext) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListCategoryResponseBodyData& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListCategoryResponseBodyData& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListCategoryResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    std::shared_ptr<vector<Models::ListCategoryResponseBodyDataCategoryList>> categoryList_ = nullptr;
    std::shared_ptr<bool> hasNext_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
