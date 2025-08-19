// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTAGKEYSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTAGKEYSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceDirectoryMaster20220419
{
namespace Models
{
  class ListTagKeysRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTagKeysRequest& obj) { 
      DARABONBA_PTR_TO_JSON(KeyFilter, keyFilter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListTagKeysRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(KeyFilter, keyFilter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    ListTagKeysRequest() = default ;
    ListTagKeysRequest(const ListTagKeysRequest &) = default ;
    ListTagKeysRequest(ListTagKeysRequest &&) = default ;
    ListTagKeysRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTagKeysRequest() = default ;
    ListTagKeysRequest& operator=(const ListTagKeysRequest &) = default ;
    ListTagKeysRequest& operator=(ListTagKeysRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyFilter_ != nullptr
        && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->resourceType_ != nullptr; };
    // keyFilter Field Functions 
    bool hasKeyFilter() const { return this->keyFilter_ != nullptr;};
    void deleteKeyFilter() { this->keyFilter_ = nullptr;};
    inline string keyFilter() const { DARABONBA_PTR_GET_DEFAULT(keyFilter_, "") };
    inline ListTagKeysRequest& setKeyFilter(string keyFilter) { DARABONBA_PTR_SET_VALUE(keyFilter_, keyFilter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListTagKeysRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListTagKeysRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline ListTagKeysRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The tag key for a fuzzy query.
    std::shared_ptr<string> keyFilter_ = nullptr;
    // The maximum number of entries to return for a single request.
    // 
    // Valid values: 1 to 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results. You do not need to specify this parameter for the first request.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The resource type.
    // 
    // The value Account indicates the members of the resource directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceDirectoryMaster20220419
#endif
