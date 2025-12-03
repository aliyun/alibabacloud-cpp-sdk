// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERGROUPSMAPPINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERGROUPSMAPPINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListUserGroupsMappingsResponseBodyUserGroupsMappings.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DFS20180620
{
namespace Models
{
  class ListUserGroupsMappingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserGroupsMappingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(HasMore, hasMore_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserGroupsMappings, userGroupsMappings_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserGroupsMappingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(HasMore, hasMore_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserGroupsMappings, userGroupsMappings_);
    };
    ListUserGroupsMappingsResponseBody() = default ;
    ListUserGroupsMappingsResponseBody(const ListUserGroupsMappingsResponseBody &) = default ;
    ListUserGroupsMappingsResponseBody(ListUserGroupsMappingsResponseBody &&) = default ;
    ListUserGroupsMappingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserGroupsMappingsResponseBody() = default ;
    ListUserGroupsMappingsResponseBody& operator=(const ListUserGroupsMappingsResponseBody &) = default ;
    ListUserGroupsMappingsResponseBody& operator=(ListUserGroupsMappingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hasMore_ == nullptr
        && return this->nextToken_ == nullptr && return this->requestId_ == nullptr && return this->userGroupsMappings_ == nullptr; };
    // hasMore Field Functions 
    bool hasHasMore() const { return this->hasMore_ != nullptr;};
    void deleteHasMore() { this->hasMore_ = nullptr;};
    inline bool hasMore() const { DARABONBA_PTR_GET_DEFAULT(hasMore_, false) };
    inline ListUserGroupsMappingsResponseBody& setHasMore(bool hasMore) { DARABONBA_PTR_SET_VALUE(hasMore_, hasMore) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserGroupsMappingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserGroupsMappingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroupsMappings Field Functions 
    bool hasUserGroupsMappings() const { return this->userGroupsMappings_ != nullptr;};
    void deleteUserGroupsMappings() { this->userGroupsMappings_ = nullptr;};
    inline const vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings> & userGroupsMappings() const { DARABONBA_PTR_GET_CONST(userGroupsMappings_, vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings>) };
    inline vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings> userGroupsMappings() { DARABONBA_PTR_GET(userGroupsMappings_, vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings>) };
    inline ListUserGroupsMappingsResponseBody& setUserGroupsMappings(const vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings> & userGroupsMappings) { DARABONBA_PTR_SET_VALUE(userGroupsMappings_, userGroupsMappings) };
    inline ListUserGroupsMappingsResponseBody& setUserGroupsMappings(vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings> && userGroupsMappings) { DARABONBA_PTR_SET_RVALUE(userGroupsMappings_, userGroupsMappings) };


  protected:
    std::shared_ptr<bool> hasMore_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<ListUserGroupsMappingsResponseBodyUserGroupsMappings>> userGroupsMappings_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DFS20180620
#endif
