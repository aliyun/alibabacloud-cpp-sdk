// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGVALUESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGVALUESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTagValuesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagValuesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(ValueFilter, valueFilter_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagValuesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(ValueFilter, valueFilter_);
    };
    ListTagValuesRequest() = default ;
    ListTagValuesRequest(const ListTagValuesRequest &) = default ;
    ListTagValuesRequest(ListTagValuesRequest &&) = default ;
    ListTagValuesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagValuesRequest() = default ;
    ListTagValuesRequest& operator=(const ListTagValuesRequest &) = default ;
    ListTagValuesRequest& operator=(ListTagValuesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->resourceType_ == nullptr && this->tagKey_ == nullptr && this->valueFilter_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTagValuesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagValuesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagValuesRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline ListTagValuesRequest& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // valueFilter Field Functions 
    bool hasValueFilter() const { return this->valueFilter_ != nullptr;};
    void deleteValueFilter() { this->valueFilter_ = nullptr;};
    inline string getValueFilter() const { DARABONBA_PTR_GET_DEFAULT(valueFilter_, "") };
    inline ListTagValuesRequest& setValueFilter(string valueFilter) { DARABONBA_PTR_SET_VALUE(valueFilter_, valueFilter) };


  protected:
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request.
    shared_ptr<string> nextToken_ {};
    // The resource type.
    // 
    // The value Account indicates the members of the resource directory.
    // 
    // This parameter is required.
    shared_ptr<string> resourceType_ {};
    // The tag key. This parameter specifies a filter condition for the query.
    // 
    // This parameter is required.
    shared_ptr<string> tagKey_ {};
    // The tag value for a fuzzy query.
    shared_ptr<string> valueFilter_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
