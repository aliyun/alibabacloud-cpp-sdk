// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTFILESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTFILESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class ListFileShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListFileShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(FileIds, fileIdsShrink_);
      DARABONBA_PTR_TO_JSON(FileName, fileName_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListFileShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(FileIds, fileIdsShrink_);
      DARABONBA_PTR_FROM_JSON(FileName, fileName_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListFileShrinkRequest() = default ;
    ListFileShrinkRequest(const ListFileShrinkRequest &) = default ;
    ListFileShrinkRequest(ListFileShrinkRequest &&) = default ;
    ListFileShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListFileShrinkRequest() = default ;
    ListFileShrinkRequest& operator=(const ListFileShrinkRequest &) = default ;
    ListFileShrinkRequest& operator=(ListFileShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->fileIdsShrink_ == nullptr && this->fileName_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline ListFileShrinkRequest& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // fileIdsShrink Field Functions 
    bool hasFileIdsShrink() const { return this->fileIdsShrink_ != nullptr;};
    void deleteFileIdsShrink() { this->fileIdsShrink_ = nullptr;};
    inline string getFileIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(fileIdsShrink_, "") };
    inline ListFileShrinkRequest& setFileIdsShrink(string fileIdsShrink) { DARABONBA_PTR_SET_VALUE(fileIdsShrink_, fileIdsShrink) };


    // fileName Field Functions 
    bool hasFileName() const { return this->fileName_ != nullptr;};
    void deleteFileName() { this->fileName_ = nullptr;};
    inline string getFileName() const { DARABONBA_PTR_GET_DEFAULT(fileName_, "") };
    inline ListFileShrinkRequest& setFileName(string fileName) { DARABONBA_PTR_SET_VALUE(fileName_, fileName) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListFileShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListFileShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // <props="china">
    // 
    // The category ID, which is the `CategoryId` returned by the **AddCategory** operation. You can also obtain it on the [Application Data](https://bailian.console.aliyun.com/?tab=app#/data-center) - Files tab by clicking the ID icon next to the category name.
    // 
    // 
    // 
    // <props="intl">
    // 
    // The category ID, which is the `CategoryId` returned by the **AddCategory** operation. You can also obtain it on the [Application Data](https://modelstudio.console.alibabacloud.com/?tab=app#/data-center) - Files tab by clicking the ID icon next to the category name.
    // 
    // .
    // 
    // This parameter is required.
    shared_ptr<string> categoryId_ {};
    // The list of file IDs to query. A maximum of 20 files can be queried at a time.
    shared_ptr<string> fileIdsShrink_ {};
    // The file name (without extension). Only exact match is supported. Fuzzy search is not supported.
    shared_ptr<string> fileName_ {};
    // The number of entries per page for paging. Valid values: 1 to 200.
    // 
    // Default value:
    // If no value is set or the value is less than 1, the default value is 20. If the value is set to greater than 200, the default value is 200.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. Set this to the NextToken value returned by the previous API call.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
