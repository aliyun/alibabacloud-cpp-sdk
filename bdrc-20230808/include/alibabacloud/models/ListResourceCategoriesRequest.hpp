// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCECATEGORIESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCECATEGORIESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BDRC20230808
{
namespace Models
{
  class ListResourceCategoriesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceCategoriesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceCategoryId, resourceCategoryId_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceCategoriesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceCategoryId, resourceCategoryId_);
    };
    ListResourceCategoriesRequest() = default ;
    ListResourceCategoriesRequest(const ListResourceCategoriesRequest &) = default ;
    ListResourceCategoriesRequest(ListResourceCategoriesRequest &&) = default ;
    ListResourceCategoriesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceCategoriesRequest() = default ;
    ListResourceCategoriesRequest& operator=(const ListResourceCategoriesRequest &) = default ;
    ListResourceCategoriesRequest& operator=(ListResourceCategoriesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceCategoryId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListResourceCategoriesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListResourceCategoriesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceCategoryId Field Functions 
    bool hasResourceCategoryId() const { return this->resourceCategoryId_ != nullptr;};
    void deleteResourceCategoryId() { this->resourceCategoryId_ = nullptr;};
    inline string getResourceCategoryId() const { DARABONBA_PTR_GET_DEFAULT(resourceCategoryId_, "") };
    inline ListResourceCategoriesRequest& setResourceCategoryId(string resourceCategoryId) { DARABONBA_PTR_SET_VALUE(resourceCategoryId_, resourceCategoryId) };


  protected:
    // The maximum number of records to return in this request.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token. If more entries are to be returned on the next page, a pagination token is returned. Note: If this parameter returns data, it indicates there is a next page. You can use the returned NextToken as a request parameter to obtain the next page of data until it returns Null, indicating all data has been retrieved.
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> resourceCategoryId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BDRC20230808
#endif
