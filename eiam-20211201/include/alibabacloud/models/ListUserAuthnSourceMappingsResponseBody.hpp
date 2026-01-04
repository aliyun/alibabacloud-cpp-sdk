// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERAUTHNSOURCEMAPPINGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERAUTHNSOURCEMAPPINGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListUserAuthnSourceMappingsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserAuthnSourceMappingsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UserAuthnSourceMappings, userAuthnSourceMappings_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserAuthnSourceMappingsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UserAuthnSourceMappings, userAuthnSourceMappings_);
    };
    ListUserAuthnSourceMappingsResponseBody() = default ;
    ListUserAuthnSourceMappingsResponseBody(const ListUserAuthnSourceMappingsResponseBody &) = default ;
    ListUserAuthnSourceMappingsResponseBody(ListUserAuthnSourceMappingsResponseBody &&) = default ;
    ListUserAuthnSourceMappingsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserAuthnSourceMappingsResponseBody() = default ;
    ListUserAuthnSourceMappingsResponseBody& operator=(const ListUserAuthnSourceMappingsResponseBody &) = default ;
    ListUserAuthnSourceMappingsResponseBody& operator=(ListUserAuthnSourceMappingsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class UserAuthnSourceMappings : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const UserAuthnSourceMappings& obj) { 
        DARABONBA_PTR_TO_JSON(AuthnSourceType, authnSourceType_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(ExternalData, externalData_);
        DARABONBA_PTR_TO_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_TO_JSON(UserExternalId, userExternalId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, UserAuthnSourceMappings& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthnSourceType, authnSourceType_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(ExternalData, externalData_);
        DARABONBA_PTR_FROM_JSON(IdentityProviderId, identityProviderId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
        DARABONBA_PTR_FROM_JSON(UserExternalId, userExternalId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      UserAuthnSourceMappings() = default ;
      UserAuthnSourceMappings(const UserAuthnSourceMappings &) = default ;
      UserAuthnSourceMappings(UserAuthnSourceMappings &&) = default ;
      UserAuthnSourceMappings(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~UserAuthnSourceMappings() = default ;
      UserAuthnSourceMappings& operator=(const UserAuthnSourceMappings &) = default ;
      UserAuthnSourceMappings& operator=(UserAuthnSourceMappings &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->authnSourceType_ == nullptr
        && this->createTime_ == nullptr && this->externalData_ == nullptr && this->identityProviderId_ == nullptr && this->instanceId_ == nullptr && this->updateTime_ == nullptr
        && this->userExternalId_ == nullptr && this->userId_ == nullptr; };
      // authnSourceType Field Functions 
      bool hasAuthnSourceType() const { return this->authnSourceType_ != nullptr;};
      void deleteAuthnSourceType() { this->authnSourceType_ = nullptr;};
      inline string getAuthnSourceType() const { DARABONBA_PTR_GET_DEFAULT(authnSourceType_, "") };
      inline UserAuthnSourceMappings& setAuthnSourceType(string authnSourceType) { DARABONBA_PTR_SET_VALUE(authnSourceType_, authnSourceType) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline UserAuthnSourceMappings& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // externalData Field Functions 
      bool hasExternalData() const { return this->externalData_ != nullptr;};
      void deleteExternalData() { this->externalData_ = nullptr;};
      inline string getExternalData() const { DARABONBA_PTR_GET_DEFAULT(externalData_, "") };
      inline UserAuthnSourceMappings& setExternalData(string externalData) { DARABONBA_PTR_SET_VALUE(externalData_, externalData) };


      // identityProviderId Field Functions 
      bool hasIdentityProviderId() const { return this->identityProviderId_ != nullptr;};
      void deleteIdentityProviderId() { this->identityProviderId_ = nullptr;};
      inline string getIdentityProviderId() const { DARABONBA_PTR_GET_DEFAULT(identityProviderId_, "") };
      inline UserAuthnSourceMappings& setIdentityProviderId(string identityProviderId) { DARABONBA_PTR_SET_VALUE(identityProviderId_, identityProviderId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline UserAuthnSourceMappings& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline int64_t getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
      inline UserAuthnSourceMappings& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


      // userExternalId Field Functions 
      bool hasUserExternalId() const { return this->userExternalId_ != nullptr;};
      void deleteUserExternalId() { this->userExternalId_ = nullptr;};
      inline string getUserExternalId() const { DARABONBA_PTR_GET_DEFAULT(userExternalId_, "") };
      inline UserAuthnSourceMappings& setUserExternalId(string userExternalId) { DARABONBA_PTR_SET_VALUE(userExternalId_, userExternalId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline UserAuthnSourceMappings& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // 来源Idp类型
      shared_ptr<string> authnSourceType_ {};
      // 创建时间
      shared_ptr<int64_t> createTime_ {};
      shared_ptr<string> externalData_ {};
      // 来源Idp Id
      shared_ptr<string> identityProviderId_ {};
      // 实例Id
      shared_ptr<string> instanceId_ {};
      // 最近一次更新时间
      shared_ptr<int64_t> updateTime_ {};
      // 外部ID
      shared_ptr<string> userExternalId_ {};
      // 用户ID
      shared_ptr<string> userId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->previousToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->userAuthnSourceMappings_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUserAuthnSourceMappingsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUserAuthnSourceMappingsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListUserAuthnSourceMappingsResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUserAuthnSourceMappingsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListUserAuthnSourceMappingsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // userAuthnSourceMappings Field Functions 
    bool hasUserAuthnSourceMappings() const { return this->userAuthnSourceMappings_ != nullptr;};
    void deleteUserAuthnSourceMappings() { this->userAuthnSourceMappings_ = nullptr;};
    inline const vector<ListUserAuthnSourceMappingsResponseBody::UserAuthnSourceMappings> & getUserAuthnSourceMappings() const { DARABONBA_PTR_GET_CONST(userAuthnSourceMappings_, vector<ListUserAuthnSourceMappingsResponseBody::UserAuthnSourceMappings>) };
    inline vector<ListUserAuthnSourceMappingsResponseBody::UserAuthnSourceMappings> getUserAuthnSourceMappings() { DARABONBA_PTR_GET(userAuthnSourceMappings_, vector<ListUserAuthnSourceMappingsResponseBody::UserAuthnSourceMappings>) };
    inline ListUserAuthnSourceMappingsResponseBody& setUserAuthnSourceMappings(const vector<ListUserAuthnSourceMappingsResponseBody::UserAuthnSourceMappings> & userAuthnSourceMappings) { DARABONBA_PTR_SET_VALUE(userAuthnSourceMappings_, userAuthnSourceMappings) };
    inline ListUserAuthnSourceMappingsResponseBody& setUserAuthnSourceMappings(vector<ListUserAuthnSourceMappingsResponseBody::UserAuthnSourceMappings> && userAuthnSourceMappings) { DARABONBA_PTR_SET_RVALUE(userAuthnSourceMappings_, userAuthnSourceMappings) };


  protected:
    // 分页查询时每页行数。
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    // 本次调用返回的查询凭证（Token）值，用于上一次翻页查询。
    shared_ptr<string> previousToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<ListUserAuthnSourceMappingsResponseBody::UserAuthnSourceMappings>> userAuthnSourceMappings_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
