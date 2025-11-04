// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListFileRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListFileRequest() = default ;
    ListFileRequest(const ListFileRequest &) = default ;
    ListFileRequest(ListFileRequest &&) = default ;
    ListFileRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileRequest() = default ;
    ListFileRequest& operator=(const ListFileRequest &) = default ;
    ListFileRequest& operator=(ListFileRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && return this->fileName_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ListFileRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string fileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListFileRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFileRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFileRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The category ID, which is the `CategoryId` returned by the [AddCategory](~~AddCategory~~) operation. To view the category ID, click the ID icon next to the category name on the Unstructured Data tab of the [Data Management](https://bailian.console.alibabacloud.com/#/data-center) page.
    // 
    // This parameter is required.
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> fileName_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
