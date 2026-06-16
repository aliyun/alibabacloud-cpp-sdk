// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRULESFORGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZATIONRULESFORGROUPRESPONSEBODY_HPP_
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
  class ListAuthorizationRulesForGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizationRulesForGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuthorizationRules, authorizationRules_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizationRulesForGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthorizationRules, authorizationRules_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListAuthorizationRulesForGroupResponseBody() = default ;
    ListAuthorizationRulesForGroupResponseBody(const ListAuthorizationRulesForGroupResponseBody &) = default ;
    ListAuthorizationRulesForGroupResponseBody(ListAuthorizationRulesForGroupResponseBody &&) = default ;
    ListAuthorizationRulesForGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizationRulesForGroupResponseBody() = default ;
    ListAuthorizationRulesForGroupResponseBody& operator=(const ListAuthorizationRulesForGroupResponseBody &) = default ;
    ListAuthorizationRulesForGroupResponseBody& operator=(ListAuthorizationRulesForGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AuthorizationRules : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AuthorizationRules& obj) { 
        DARABONBA_PTR_TO_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ValidityPeriod, validityPeriod_);
        DARABONBA_PTR_TO_JSON(ValidityType, validityType_);
      };
      friend void from_json(const Darabonba::Json& j, AuthorizationRules& obj) { 
        DARABONBA_PTR_FROM_JSON(AuthorizationRuleId, authorizationRuleId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ValidityPeriod, validityPeriod_);
        DARABONBA_PTR_FROM_JSON(ValidityType, validityType_);
      };
      AuthorizationRules() = default ;
      AuthorizationRules(const AuthorizationRules &) = default ;
      AuthorizationRules(AuthorizationRules &&) = default ;
      AuthorizationRules(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AuthorizationRules() = default ;
      AuthorizationRules& operator=(const AuthorizationRules &) = default ;
      AuthorizationRules& operator=(AuthorizationRules &&) = default ;
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
        // The end time of the validity period. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> endTime_ {};
        // The start time of the validity period. The value is a UNIX timestamp in milliseconds.
        shared_ptr<int64_t> startTime_ {};
      };

      virtual bool empty() const override { return this->authorizationRuleId_ == nullptr
        && this->instanceId_ == nullptr && this->validityPeriod_ == nullptr && this->validityType_ == nullptr; };
      // authorizationRuleId Field Functions 
      bool hasAuthorizationRuleId() const { return this->authorizationRuleId_ != nullptr;};
      void deleteAuthorizationRuleId() { this->authorizationRuleId_ = nullptr;};
      inline string getAuthorizationRuleId() const { DARABONBA_PTR_GET_DEFAULT(authorizationRuleId_, "") };
      inline AuthorizationRules& setAuthorizationRuleId(string authorizationRuleId) { DARABONBA_PTR_SET_VALUE(authorizationRuleId_, authorizationRuleId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline AuthorizationRules& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // validityPeriod Field Functions 
      bool hasValidityPeriod() const { return this->validityPeriod_ != nullptr;};
      void deleteValidityPeriod() { this->validityPeriod_ = nullptr;};
      inline const AuthorizationRules::ValidityPeriod & getValidityPeriod() const { DARABONBA_PTR_GET_CONST(validityPeriod_, AuthorizationRules::ValidityPeriod) };
      inline AuthorizationRules::ValidityPeriod getValidityPeriod() { DARABONBA_PTR_GET(validityPeriod_, AuthorizationRules::ValidityPeriod) };
      inline AuthorizationRules& setValidityPeriod(const AuthorizationRules::ValidityPeriod & validityPeriod) { DARABONBA_PTR_SET_VALUE(validityPeriod_, validityPeriod) };
      inline AuthorizationRules& setValidityPeriod(AuthorizationRules::ValidityPeriod && validityPeriod) { DARABONBA_PTR_SET_RVALUE(validityPeriod_, validityPeriod) };


      // validityType Field Functions 
      bool hasValidityType() const { return this->validityType_ != nullptr;};
      void deleteValidityType() { this->validityType_ = nullptr;};
      inline string getValidityType() const { DARABONBA_PTR_GET_DEFAULT(validityType_, "") };
      inline AuthorizationRules& setValidityType(string validityType) { DARABONBA_PTR_SET_VALUE(validityType_, validityType) };


    protected:
      // The authorization rule ID.
      shared_ptr<string> authorizationRuleId_ {};
      // The instance ID.
      shared_ptr<string> instanceId_ {};
      // The time range of the validity period. This parameter takes effect only when **ValidityType** is set to **time_bound**.
      shared_ptr<AuthorizationRules::ValidityPeriod> validityPeriod_ {};
      // The type of the validity period. Valid values:
      // 
      // - permanent: The authorization is permanent.
      // 
      // - time_bound: The authorization is valid within a custom time range.
      shared_ptr<string> validityType_ {};
    };

    virtual bool empty() const override { return this->authorizationRules_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // authorizationRules Field Functions 
    bool hasAuthorizationRules() const { return this->authorizationRules_ != nullptr;};
    void deleteAuthorizationRules() { this->authorizationRules_ = nullptr;};
    inline const vector<ListAuthorizationRulesForGroupResponseBody::AuthorizationRules> & getAuthorizationRules() const { DARABONBA_PTR_GET_CONST(authorizationRules_, vector<ListAuthorizationRulesForGroupResponseBody::AuthorizationRules>) };
    inline vector<ListAuthorizationRulesForGroupResponseBody::AuthorizationRules> getAuthorizationRules() { DARABONBA_PTR_GET(authorizationRules_, vector<ListAuthorizationRulesForGroupResponseBody::AuthorizationRules>) };
    inline ListAuthorizationRulesForGroupResponseBody& setAuthorizationRules(const vector<ListAuthorizationRulesForGroupResponseBody::AuthorizationRules> & authorizationRules) { DARABONBA_PTR_SET_VALUE(authorizationRules_, authorizationRules) };
    inline ListAuthorizationRulesForGroupResponseBody& setAuthorizationRules(vector<ListAuthorizationRulesForGroupResponseBody::AuthorizationRules> && authorizationRules) { DARABONBA_PTR_SET_RVALUE(authorizationRules_, authorizationRules) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListAuthorizationRulesForGroupResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListAuthorizationRulesForGroupResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAuthorizationRulesForGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListAuthorizationRulesForGroupResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of authorization rules.
    shared_ptr<vector<ListAuthorizationRulesForGroupResponseBody::AuthorizationRules>> authorizationRules_ {};
    // The number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The token used to start the next paged query. This token is returned in the response.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of records.
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
