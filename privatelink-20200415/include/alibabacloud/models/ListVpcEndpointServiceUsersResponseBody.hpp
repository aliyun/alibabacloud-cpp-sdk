// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTVPCENDPOINTSERVICEUSERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVpcEndpointServiceUsersResponseBodyUserARNs.hpp>
#include <alibabacloud/models/ListVpcEndpointServiceUsersResponseBodyUsers.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Privatelink20200415
{
namespace Models
{
  class ListVpcEndpointServiceUsersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVpcEndpointServiceUsersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserARNs, userARNs_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListVpcEndpointServiceUsersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserARNs, userARNs_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListVpcEndpointServiceUsersResponseBody() = default ;
    ListVpcEndpointServiceUsersResponseBody(const ListVpcEndpointServiceUsersResponseBody &) = default ;
    ListVpcEndpointServiceUsersResponseBody(ListVpcEndpointServiceUsersResponseBody &&) = default ;
    ListVpcEndpointServiceUsersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVpcEndpointServiceUsersResponseBody() = default ;
    ListVpcEndpointServiceUsersResponseBody& operator=(const ListVpcEndpointServiceUsersResponseBody &) = default ;
    ListVpcEndpointServiceUsersResponseBody& operator=(ListVpcEndpointServiceUsersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->maxResults_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr && return this->userARNs_ == nullptr && return this->users_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListVpcEndpointServiceUsersResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListVpcEndpointServiceUsersResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListVpcEndpointServiceUsersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline string totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, "") };
    inline ListVpcEndpointServiceUsersResponseBody& setTotalCount(string totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userARNs Field Functions 
    bool hasUserARNs() const { return this->userARNs_ != nullptr;};
    void deleteUserARNs() { this->userARNs_ = nullptr;};
    inline const vector<ListVpcEndpointServiceUsersResponseBodyUserARNs> & userARNs() const { DARABONBA_PTR_GET_CONST(userARNs_, vector<ListVpcEndpointServiceUsersResponseBodyUserARNs>) };
    inline vector<ListVpcEndpointServiceUsersResponseBodyUserARNs> userARNs() { DARABONBA_PTR_GET(userARNs_, vector<ListVpcEndpointServiceUsersResponseBodyUserARNs>) };
    inline ListVpcEndpointServiceUsersResponseBody& setUserARNs(const vector<ListVpcEndpointServiceUsersResponseBodyUserARNs> & userARNs) { DARABONBA_PTR_SET_VALUE(userARNs_, userARNs) };
    inline ListVpcEndpointServiceUsersResponseBody& setUserARNs(vector<ListVpcEndpointServiceUsersResponseBodyUserARNs> && userARNs) { DARABONBA_PTR_SET_RVALUE(userARNs_, userARNs) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListVpcEndpointServiceUsersResponseBodyUsers> & users() const { DARABONBA_PTR_GET_CONST(users_, vector<ListVpcEndpointServiceUsersResponseBodyUsers>) };
    inline vector<ListVpcEndpointServiceUsersResponseBodyUsers> users() { DARABONBA_PTR_GET(users_, vector<ListVpcEndpointServiceUsersResponseBodyUsers>) };
    inline ListVpcEndpointServiceUsersResponseBody& setUsers(const vector<ListVpcEndpointServiceUsersResponseBodyUsers> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListVpcEndpointServiceUsersResponseBody& setUsers(vector<ListVpcEndpointServiceUsersResponseBodyUsers> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // The number of entries returned on each page.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The returned value of NextToken is a pagination token, which can be used in the next request to retrieve a new page of results. Valid values:
    // 
    // *   If no value is returned for **NextToken**, no next requests are performed.
    // *   If a value is returned for **NextToken**, the value can be used in the next request to retrieve a new page of results.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<string> totalCount_ = nullptr;
    // The whitelists in the format of Aliyun Resource Name (ARN).
    std::shared_ptr<vector<ListVpcEndpointServiceUsersResponseBodyUserARNs>> userARNs_ = nullptr;
    // The Alibaba Cloud accounts in the whitelist of the endpoint service.
    std::shared_ptr<vector<ListVpcEndpointServiceUsersResponseBodyUsers>> users_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Privatelink20200415
#endif
