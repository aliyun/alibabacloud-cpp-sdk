// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCEGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIACCOUNTRESOURCEGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMultiAccountResourceGroupsResponseBodyResourceGroups.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ResourceCenter20221201
{
namespace Models
{
  class ListMultiAccountResourceGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiAccountResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroups, resourceGroups_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiAccountResourceGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroups, resourceGroups_);
    };
    ListMultiAccountResourceGroupsResponseBody() = default ;
    ListMultiAccountResourceGroupsResponseBody(const ListMultiAccountResourceGroupsResponseBody &) = default ;
    ListMultiAccountResourceGroupsResponseBody(ListMultiAccountResourceGroupsResponseBody &&) = default ;
    ListMultiAccountResourceGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiAccountResourceGroupsResponseBody() = default ;
    ListMultiAccountResourceGroupsResponseBody& operator=(const ListMultiAccountResourceGroupsResponseBody &) = default ;
    ListMultiAccountResourceGroupsResponseBody& operator=(ListMultiAccountResourceGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->requestId_ == nullptr && return this->resourceGroups_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiAccountResourceGroupsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListMultiAccountResourceGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroups Field Functions 
    bool hasResourceGroups() const { return this->resourceGroups_ != nullptr;};
    void deleteResourceGroups() { this->resourceGroups_ = nullptr;};
    inline const vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups> & resourceGroups() const { DARABONBA_PTR_GET_CONST(resourceGroups_, vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups>) };
    inline vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups> resourceGroups() { DARABONBA_PTR_GET(resourceGroups_, vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups>) };
    inline ListMultiAccountResourceGroupsResponseBody& setResourceGroups(const vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups> & resourceGroups) { DARABONBA_PTR_SET_VALUE(resourceGroups_, resourceGroups) };
    inline ListMultiAccountResourceGroupsResponseBody& setResourceGroups(vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups> && resourceGroups) { DARABONBA_PTR_SET_RVALUE(resourceGroups_, resourceGroups) };


  protected:
    // The pagination token that is used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the resource groups.
    std::shared_ptr<vector<ListMultiAccountResourceGroupsResponseBodyResourceGroups>> resourceGroups_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ResourceCenter20221201
#endif
