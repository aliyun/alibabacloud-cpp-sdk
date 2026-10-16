// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERDEPARTMENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTIDENTITYPROVIDERDEPARTMENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListIdentityProviderDepartmentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListIdentityProviderDepartmentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ParentDepartmentId, parentDepartmentId_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, ListIdentityProviderDepartmentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IdentityProviderType, identityProviderType_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ParentDepartmentId, parentDepartmentId_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
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
    virtual bool empty() const override { return this->identityProviderType_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->parentDepartmentId_ == nullptr && this->userPoolName_ == nullptr; };
    // identityProviderType Field Functions 
    bool hasIdentityProviderType() const { return this->identityProviderType_ != nullptr;};
    void deleteIdentityProviderType() { this->identityProviderType_ = nullptr;};
    inline string getIdentityProviderType() const { DARABONBA_PTR_GET_DEFAULT(identityProviderType_, "") };
    inline ListIdentityProviderDepartmentsRequest& setIdentityProviderType(string identityProviderType) { DARABONBA_PTR_SET_VALUE(identityProviderType_, identityProviderType) };


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


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline ListIdentityProviderDepartmentsRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    shared_ptr<string> identityProviderType_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> parentDepartmentId_ {};
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
