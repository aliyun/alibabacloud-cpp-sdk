// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
    };
    ListUsersRequest() = default ;
    ListUsersRequest(const ListUsersRequest &) = default ;
    ListUsersRequest(ListUsersRequest &&) = default ;
    ListUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersRequest() = default ;
    ListUsersRequest& operator=(const ListUsersRequest &) = default ;
    ListUsersRequest& operator=(ListUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->userPoolName_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUsersRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUsersRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // userPoolName Field Functions 
    bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
    void deleteUserPoolName() { this->userPoolName_ = nullptr;};
    inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
    inline ListUsersRequest& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


  protected:
    // The maximum number of entries to return per page. Valid values: 1 to 1000. Default value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to query the next page of data. You do not need to specify this parameter for the first call. If a NextToken is returned in the response of the previous call, specify it as the input parameter for the current call to obtain the next page.
    shared_ptr<string> nextToken_ {};
    // The name of the user pool.
    shared_ptr<string> userPoolName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
