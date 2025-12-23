// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCEGROUPSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCEGROUPSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountResourceGroupsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountResourceGroupsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AccountId, accountId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountResourceGroupsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AccountId, accountId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
    };
    ListMultiAccountResourceGroupsRequest() = default ;
    ListMultiAccountResourceGroupsRequest(const ListMultiAccountResourceGroupsRequest &) = default ;
    ListMultiAccountResourceGroupsRequest(ListMultiAccountResourceGroupsRequest &&) = default ;
    ListMultiAccountResourceGroupsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountResourceGroupsRequest() = default ;
    ListMultiAccountResourceGroupsRequest& operator=(const ListMultiAccountResourceGroupsRequest &) = default ;
    ListMultiAccountResourceGroupsRequest& operator=(ListMultiAccountResourceGroupsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->resourceGroupIds_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string accountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline ListMultiAccountResourceGroupsRequest& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiAccountResourceGroupsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountResourceGroupsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & resourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> resourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline ListMultiAccountResourceGroupsRequest& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline ListMultiAccountResourceGroupsRequest& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


  protected:
    // The ID of the management account or member of the resource directory.
    // 
    // This parameter is required.
    std::shared_ptr<string> accountId_ = nullptr;
    // The maximum number of entries to return on each page.
    // 
    // Maximum value: 100. Default value: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The IDs of resource groups.
    std::shared_ptr<vector<string>> resourceGroupIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
