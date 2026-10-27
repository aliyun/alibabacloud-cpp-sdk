// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERDEPARTMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERDEPARTMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentCore20260804
{
namespace Models
{
  class ListIdentityProviderDepartmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProviderDepartmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(parentDepartmentId, parentDepartmentId_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProviderDepartmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(parentDepartmentId, parentDepartmentId_);
    };
    ListIdentityProviderDepartmentsRequest() = default ;
    ListIdentityProviderDepartmentsRequest(const ListIdentityProviderDepartmentsRequest &) = default ;
    ListIdentityProviderDepartmentsRequest(ListIdentityProviderDepartmentsRequest &&) = default ;
    ListIdentityProviderDepartmentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListIdentityProviderDepartmentsRequest() = default ;
    ListIdentityProviderDepartmentsRequest& operator=(const ListIdentityProviderDepartmentsRequest &) = default ;
    ListIdentityProviderDepartmentsRequest& operator=(ListIdentityProviderDepartmentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->parentDepartmentId_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListIdentityProviderDepartmentsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListIdentityProviderDepartmentsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // parentDepartmentId Field Functions 
    bool hasParentDepartmentId() const { return this->parentDepartmentId_ != nullptr;};
    void deleteParentDepartmentId() { this->parentDepartmentId_ = nullptr;};
    inline string getParentDepartmentId() const { DARABONBA_PTR_GET_DEFAULT(parentDepartmentId_, "") };
    inline ListIdentityProviderDepartmentsRequest& setParentDepartmentId(string parentDepartmentId) { DARABONBA_PTR_SET_VALUE(parentDepartmentId_, parentDepartmentId) };


  protected:
    // The number of departments to return per page. Valid values: 1 to 50. Default value: 50.
    shared_ptr<int32_t> maxResults_ {};
    // The nextToken returned from the previous page. Do not specify this parameter for the first query. When continuing pagination, keep the identity provider and parentDepartmentId unchanged, and pass the token as is. An empty or missing return value indicates that there are no subsequent pages at the current hierarchy level.
    shared_ptr<string> nextToken_ {};
    // Queries the direct child departments of the specified department. If this parameter is not specified or is empty, the root hierarchy is queried, and all descendants are not recursively returned. When expanding a node in the list, pass the ID of the node, not its parentId.
    shared_ptr<string> parentDepartmentId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentCore20260804
#endif
