// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERPOOLSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERPOOLSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentIdentity20250901
{
namespace Models
{
  class ListUserPoolsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserPoolsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserPools, userPools_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserPoolsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserPools, userPools_);
    };
    ListUserPoolsResponseBody() = default ;
    ListUserPoolsResponseBody(const ListUserPoolsResponseBody &) = default ;
    ListUserPoolsResponseBody(ListUserPoolsResponseBody &&) = default ;
    ListUserPoolsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserPoolsResponseBody() = default ;
    ListUserPoolsResponseBody& operator=(const ListUserPoolsResponseBody &) = default ;
    ListUserPoolsResponseBody& operator=(ListUserPoolsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserPools : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserPools& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserPoolId, userPoolId_);
        DARABONBA_PTR_TO_JSON(UserPoolName, userPoolName_);
      };
      friend void from_json(const Darabonba::Json& j, UserPools& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserPoolId, userPoolId_);
        DARABONBA_PTR_FROM_JSON(UserPoolName, userPoolName_);
      };
      UserPools() = default ;
      UserPools(const UserPools &) = default ;
      UserPools(UserPools &&) = default ;
      UserPools(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserPools() = default ;
      UserPools& operator=(const UserPools &) = default ;
      UserPools& operator=(UserPools &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->updateTime_ == nullptr && this->userPoolId_ == nullptr && this->userPoolName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline UserPools& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline UserPools& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline UserPools& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userPoolId Field Functions 
      bool hasUserPoolId() const { return this->userPoolId_ != nullptr;};
      void deleteUserPoolId() { this->userPoolId_ = nullptr;};
      inline string getUserPoolId() const { DARABONBA_PTR_GET_DEFAULT(userPoolId_, "") };
      inline UserPools& setUserPoolId(string userPoolId) { DARABONBA_PTR_SET_VALUE(userPoolId_, userPoolId) };


      // userPoolName Field Functions 
      bool hasUserPoolName() const { return this->userPoolName_ != nullptr;};
      void deleteUserPoolName() { this->userPoolName_ = nullptr;};
      inline string getUserPoolName() const { DARABONBA_PTR_GET_DEFAULT(userPoolName_, "") };
      inline UserPools& setUserPoolName(string userPoolName) { DARABONBA_PTR_SET_VALUE(userPoolName_, userPoolName) };


    protected:
      shared_ptr<string> createTime_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> updateTime_ {};
      shared_ptr<string> userPoolId_ {};
      shared_ptr<string> userPoolName_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->userPools_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserPoolsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserPoolsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserPoolsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserPoolsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userPools Field Functions 
    bool hasUserPools() const { return this->userPools_ != nullptr;};
    void deleteUserPools() { this->userPools_ = nullptr;};
    inline const vector<ListUserPoolsResponseBody::UserPools> & getUserPools() const { DARABONBA_PTR_GET_CONST(userPools_, vector<ListUserPoolsResponseBody::UserPools>) };
    inline vector<ListUserPoolsResponseBody::UserPools> getUserPools() { DARABONBA_PTR_GET(userPools_, vector<ListUserPoolsResponseBody::UserPools>) };
    inline ListUserPoolsResponseBody& setUserPools(const vector<ListUserPoolsResponseBody::UserPools> & userPools) { DARABONBA_PTR_SET_VALUE(userPools_, userPools) };
    inline ListUserPoolsResponseBody& setUserPools(vector<ListUserPoolsResponseBody::UserPools> && userPools) { DARABONBA_PTR_SET_RVALUE(userPools_, userPools) };


  protected:
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<ListUserPoolsResponseBody::UserPools>> userPools_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentIdentity20250901
#endif
