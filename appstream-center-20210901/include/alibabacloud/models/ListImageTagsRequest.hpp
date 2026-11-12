// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMAGETAGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIMAGETAGSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class ListImageTagsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImageTagsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
    };
    friend void from_json(const Darabonba::Json& j, ListImageTagsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
    };
    ListImageTagsRequest() = default ;
    ListImageTagsRequest(const ListImageTagsRequest &) = default ;
    ListImageTagsRequest(ListImageTagsRequest &&) = default ;
    ListImageTagsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImageTagsRequest() = default ;
    ListImageTagsRequest& operator=(const ListImageTagsRequest &) = default ;
    ListImageTagsRequest& operator=(ListImageTagsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline ListImageTagsRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListImageTagsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListImageTagsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


  protected:
    // The label categorization to query.
    shared_ptr<string> category_ {};
    // A compatibility field. The current version does not use this field to specify the number of returned entries.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to determine whether a next query is available. This parameter is not currently supported.
    shared_ptr<string> nextToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
