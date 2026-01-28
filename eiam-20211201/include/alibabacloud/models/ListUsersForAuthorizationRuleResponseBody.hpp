// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERSFORAUTHORIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERSFORAUTHORIZATIONRULERESPONSEBODY_HPP_
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
  class ListUsersForAuthorizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUsersForAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(Users, users_);
    };
    friend void from_json(const Darabonba::Json& j, ListUsersForAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(Users, users_);
    };
    ListUsersForAuthorizationRuleResponseBody() = default ;
    ListUsersForAuthorizationRuleResponseBody(const ListUsersForAuthorizationRuleResponseBody &) = default ;
    ListUsersForAuthorizationRuleResponseBody(ListUsersForAuthorizationRuleResponseBody &&) = default ;
    ListUsersForAuthorizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUsersForAuthorizationRuleResponseBody() = default ;
    ListUsersForAuthorizationRuleResponseBody& operator=(const ListUsersForAuthorizationRuleResponseBody &) = default ;
    ListUsersForAuthorizationRuleResponseBody& operator=(ListUsersForAuthorizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Users : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Users& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(ValidityPeriod, validityPeriod_);
        DARABONBA_PTR_TO_JSON(ValidityType, validityType_);
      };
      friend void from_json(const Darabonba::Json& j, Users& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(ValidityPeriod, validityPeriod_);
        DARABONBA_PTR_FROM_JSON(ValidityType, validityType_);
      };
      Users() = default ;
      Users(const Users &) = default ;
      Users(Users &&) = default ;
      Users(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Users() = default ;
      Users& operator=(const Users &) = default ;
      Users& operator=(Users &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class ValidityPeriod : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ValidityPeriod& obj) { 
          DARABONBA_PTR_TO_JSON(EndTime, endTime_);
          DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        };
        friend void from_json(const Darabonba::Json& j, ValidityPeriod& obj) { 
          DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
          DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        };
        ValidityPeriod() = default ;
        ValidityPeriod(const ValidityPeriod &) = default ;
        ValidityPeriod(ValidityPeriod &&) = default ;
        ValidityPeriod(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ValidityPeriod() = default ;
        ValidityPeriod& operator=(const ValidityPeriod &) = default ;
        ValidityPeriod& operator=(ValidityPeriod &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->endTime_ == nullptr
        && this->startTime_ == nullptr; };
        // endTime Field Functions 
        bool hasEndTime() const { return this->endTime_ != nullptr;};
        void deleteEndTime() { this->endTime_ = nullptr;};
        inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
        inline ValidityPeriod& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


        // startTime Field Functions 
        bool hasStartTime() const { return this->startTime_ != nullptr;};
        void deleteStartTime() { this->startTime_ = nullptr;};
        inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
        inline ValidityPeriod& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      protected:
        // 授权生效结束时间。
        shared_ptr<int64_t> endTime_ {};
        // 授权生效开始时间。
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->userId_ == nullptr && this->validityPeriod_ == nullptr && this->validityType_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Users& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Users& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // validityPeriod Field Functions 
      bool hasValidityPeriod() const { return this->validityPeriod_ != nullptr;};
      void deleteValidityPeriod() { this->validityPeriod_ = nullptr;};
      inline const Users::ValidityPeriod & getValidityPeriod() const { DARABONBA_PTR_GET_CONST(validityPeriod_, Users::ValidityPeriod) };
      inline Users::ValidityPeriod getValidityPeriod() { DARABONBA_PTR_GET(validityPeriod_, Users::ValidityPeriod) };
      inline Users& setValidityPeriod(const Users::ValidityPeriod & validityPeriod) { DARABONBA_PTR_SET_VALUE(validityPeriod_, validityPeriod) };
      inline Users& setValidityPeriod(Users::ValidityPeriod && validityPeriod) { DARABONBA_PTR_SET_RVALUE(validityPeriod_, validityPeriod) };


      // validityType Field Functions 
      bool hasValidityType() const { return this->validityType_ != nullptr;};
      void deleteValidityType() { this->validityType_ = nullptr;};
      inline string getValidityType() const { DARABONBA_PTR_GET_DEFAULT(validityType_, "") };
      inline Users& setValidityType(string validityType) { DARABONBA_PTR_SET_VALUE(validityType_, validityType) };


    protected:
      // 实例ID。
      shared_ptr<string> instanceId_ {};
      // 账户标识。
      shared_ptr<string> userId_ {};
      // 有效周期。
      shared_ptr<Users::ValidityPeriod> validityPeriod_ {};
      // 有效期类型，枚举值：permanent（永久），time_bound（自定义时间范围）。
      shared_ptr<string> validityType_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr && this->users_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListUsersForAuthorizationRuleResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListUsersForAuthorizationRuleResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListUsersForAuthorizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListUsersForAuthorizationRuleResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // users Field Functions 
    bool hasUsers() const { return this->users_ != nullptr;};
    void deleteUsers() { this->users_ = nullptr;};
    inline const vector<ListUsersForAuthorizationRuleResponseBody::Users> & getUsers() const { DARABONBA_PTR_GET_CONST(users_, vector<ListUsersForAuthorizationRuleResponseBody::Users>) };
    inline vector<ListUsersForAuthorizationRuleResponseBody::Users> getUsers() { DARABONBA_PTR_GET(users_, vector<ListUsersForAuthorizationRuleResponseBody::Users>) };
    inline ListUsersForAuthorizationRuleResponseBody& setUsers(const vector<ListUsersForAuthorizationRuleResponseBody::Users> & users) { DARABONBA_PTR_SET_VALUE(users_, users) };
    inline ListUsersForAuthorizationRuleResponseBody& setUsers(vector<ListUsersForAuthorizationRuleResponseBody::Users> && users) { DARABONBA_PTR_SET_RVALUE(users_, users) };


  protected:
    // 分页查询时每页行数。
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
    shared_ptr<vector<ListUsersForAuthorizationRuleResponseBody::Users>> users_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
