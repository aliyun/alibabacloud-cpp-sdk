// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTACTIONPLANSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTACTIONPLANSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class ListActionPlansResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListActionPlansResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ActionPlans, actionPlans_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListActionPlansResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionPlans, actionPlans_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListActionPlansResponseBody() = default ;
    ListActionPlansResponseBody(const ListActionPlansResponseBody &) = default ;
    ListActionPlansResponseBody(ListActionPlansResponseBody &&) = default ;
    ListActionPlansResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListActionPlansResponseBody() = default ;
    ListActionPlansResponseBody& operator=(const ListActionPlansResponseBody &) = default ;
    ListActionPlansResponseBody& operator=(ListActionPlansResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ActionPlans : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ActionPlans& obj) { 
        DARABONBA_PTR_TO_JSON(ActionPlanId, actionPlanId_);
        DARABONBA_PTR_TO_JSON(ActionPlanName, actionPlanName_);
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      };
      friend void from_json(const Darabonba::Json& j, ActionPlans& obj) { 
        DARABONBA_PTR_FROM_JSON(ActionPlanId, actionPlanId_);
        DARABONBA_PTR_FROM_JSON(ActionPlanName, actionPlanName_);
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      };
      ActionPlans() = default ;
      ActionPlans(const ActionPlans &) = default ;
      ActionPlans(ActionPlans &&) = default ;
      ActionPlans(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ActionPlans() = default ;
      ActionPlans& operator=(const ActionPlans &) = default ;
      ActionPlans& operator=(ActionPlans &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->actionPlanId_ == nullptr
        && this->actionPlanName_ == nullptr && this->createTime_ == nullptr && this->status_ == nullptr && this->updateTime_ == nullptr; };
      // actionPlanId Field Functions 
      bool hasActionPlanId() const { return this->actionPlanId_ != nullptr;};
      void deleteActionPlanId() { this->actionPlanId_ = nullptr;};
      inline string getActionPlanId() const { DARABONBA_PTR_GET_DEFAULT(actionPlanId_, "") };
      inline ActionPlans& setActionPlanId(string actionPlanId) { DARABONBA_PTR_SET_VALUE(actionPlanId_, actionPlanId) };


      // actionPlanName Field Functions 
      bool hasActionPlanName() const { return this->actionPlanName_ != nullptr;};
      void deleteActionPlanName() { this->actionPlanName_ = nullptr;};
      inline string getActionPlanName() const { DARABONBA_PTR_GET_DEFAULT(actionPlanName_, "") };
      inline ActionPlans& setActionPlanName(string actionPlanName) { DARABONBA_PTR_SET_VALUE(actionPlanName_, actionPlanName) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline ActionPlans& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ActionPlans& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTime Field Functions 
      bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
      void deleteUpdateTime() { this->updateTime_ = nullptr;};
      inline string getUpdateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
      inline ActionPlans& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    protected:
      // The ID of the execution plan.
      shared_ptr<string> actionPlanId_ {};
      // The name of the execution plan.
      shared_ptr<string> actionPlanName_ {};
      // The time when the execution plan was created.
      shared_ptr<string> createTime_ {};
      // The status of the execution plan. The possible values are as follows:
      // 
      // *   Active Instant tasks are dynamically managed only when the execution plan is in the Active state.
      // *   Inactive Instant tasks are no longer managed by execution plans in the Inactive state.
      // *   Deleting: The execution plan is being deleted. You cannot modify the parameters of an execution plan in this state.
      shared_ptr<string> status_ {};
      // The time when the execution plan was last modified. The time follows the ISO 8601 standard and UTC +0. The format is yyyy-MM-ddTHH:mmZ.
      shared_ptr<string> updateTime_ {};
    };

    virtual bool empty() const override { return this->actionPlans_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // actionPlans Field Functions 
    bool hasActionPlans() const { return this->actionPlans_ != nullptr;};
    void deleteActionPlans() { this->actionPlans_ = nullptr;};
    inline const vector<ListActionPlansResponseBody::ActionPlans> & getActionPlans() const { DARABONBA_PTR_GET_CONST(actionPlans_, vector<ListActionPlansResponseBody::ActionPlans>) };
    inline vector<ListActionPlansResponseBody::ActionPlans> getActionPlans() { DARABONBA_PTR_GET(actionPlans_, vector<ListActionPlansResponseBody::ActionPlans>) };
    inline ListActionPlansResponseBody& setActionPlans(const vector<ListActionPlansResponseBody::ActionPlans> & actionPlans) { DARABONBA_PTR_SET_VALUE(actionPlans_, actionPlans) };
    inline ListActionPlansResponseBody& setActionPlans(vector<ListActionPlansResponseBody::ActionPlans> && actionPlans) { DARABONBA_PTR_SET_RVALUE(actionPlans_, actionPlans) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListActionPlansResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListActionPlansResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListActionPlansResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListActionPlansResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The list of execution plan results.
    shared_ptr<vector<ListActionPlansResponseBody::ActionPlans>> actionPlans_ {};
    // The maximum number of records returned in this request.
    shared_ptr<int32_t> maxResults_ {};
    // Indicates the read position returned by the current call. An empty value means all data has been read.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Total data count under the current request conditions (optional; not returned by default).
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
