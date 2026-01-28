// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTGROUPSFORAUTHORIZATIONRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTGROUPSFORAUTHORIZATIONRULERESPONSEBODY_HPP_
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
  class ListGroupsForAuthorizationRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListGroupsForAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Groups, groups_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListGroupsForAuthorizationRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Groups, groups_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListGroupsForAuthorizationRuleResponseBody() = default ;
    ListGroupsForAuthorizationRuleResponseBody(const ListGroupsForAuthorizationRuleResponseBody &) = default ;
    ListGroupsForAuthorizationRuleResponseBody(ListGroupsForAuthorizationRuleResponseBody &&) = default ;
    ListGroupsForAuthorizationRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListGroupsForAuthorizationRuleResponseBody() = default ;
    ListGroupsForAuthorizationRuleResponseBody& operator=(const ListGroupsForAuthorizationRuleResponseBody &) = default ;
    ListGroupsForAuthorizationRuleResponseBody& operator=(ListGroupsForAuthorizationRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Groups : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Groups& obj) { 
        DARABONBA_PTR_TO_JSON(GroupId, groupId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(ValidityPeriod, validityPeriod_);
        DARABONBA_PTR_TO_JSON(ValidityType, validityType_);
      };
      friend void from_json(const Darabonba::Json& j, Groups& obj) { 
        DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(ValidityPeriod, validityPeriod_);
        DARABONBA_PTR_FROM_JSON(ValidityType, validityType_);
      };
      Groups() = default ;
      Groups(const Groups &) = default ;
      Groups(Groups &&) = default ;
      Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Groups() = default ;
      Groups& operator=(const Groups &) = default ;
      Groups& operator=(Groups &&) = default ;
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

      virtual bool empty() const override { return this->groupId_ == nullptr
        && this->instanceId_ == nullptr && this->validityPeriod_ == nullptr && this->validityType_ == nullptr; };
      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
      inline Groups& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Groups& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // validityPeriod Field Functions 
      bool hasValidityPeriod() const { return this->validityPeriod_ != nullptr;};
      void deleteValidityPeriod() { this->validityPeriod_ = nullptr;};
      inline const Groups::ValidityPeriod & getValidityPeriod() const { DARABONBA_PTR_GET_CONST(validityPeriod_, Groups::ValidityPeriod) };
      inline Groups::ValidityPeriod getValidityPeriod() { DARABONBA_PTR_GET(validityPeriod_, Groups::ValidityPeriod) };
      inline Groups& setValidityPeriod(const Groups::ValidityPeriod & validityPeriod) { DARABONBA_PTR_SET_VALUE(validityPeriod_, validityPeriod) };
      inline Groups& setValidityPeriod(Groups::ValidityPeriod && validityPeriod) { DARABONBA_PTR_SET_RVALUE(validityPeriod_, validityPeriod) };


      // validityType Field Functions 
      bool hasValidityType() const { return this->validityType_ != nullptr;};
      void deleteValidityType() { this->validityType_ = nullptr;};
      inline string getValidityType() const { DARABONBA_PTR_GET_DEFAULT(validityType_, "") };
      inline Groups& setValidityType(string validityType) { DARABONBA_PTR_SET_VALUE(validityType_, validityType) };


    protected:
      // 组标识。
      shared_ptr<string> groupId_ {};
      // 实例ID。
      shared_ptr<string> instanceId_ {};
      // 有效周期。
      shared_ptr<Groups::ValidityPeriod> validityPeriod_ {};
      // 有效期类型，枚举值：permanent（永久），time_bound（自定义时间范围）。
      shared_ptr<string> validityType_ {};
    };

    virtual bool empty() const override { return this->groups_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // groups Field Functions 
    bool hasGroups() const { return this->groups_ != nullptr;};
    void deleteGroups() { this->groups_ = nullptr;};
    inline const vector<ListGroupsForAuthorizationRuleResponseBody::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<ListGroupsForAuthorizationRuleResponseBody::Groups>) };
    inline vector<ListGroupsForAuthorizationRuleResponseBody::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<ListGroupsForAuthorizationRuleResponseBody::Groups>) };
    inline ListGroupsForAuthorizationRuleResponseBody& setGroups(const vector<ListGroupsForAuthorizationRuleResponseBody::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
    inline ListGroupsForAuthorizationRuleResponseBody& setGroups(vector<ListGroupsForAuthorizationRuleResponseBody::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListGroupsForAuthorizationRuleResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListGroupsForAuthorizationRuleResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListGroupsForAuthorizationRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListGroupsForAuthorizationRuleResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListGroupsForAuthorizationRuleResponseBody::Groups>> groups_ {};
    // 分页查询时每页行数。
    shared_ptr<int32_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
