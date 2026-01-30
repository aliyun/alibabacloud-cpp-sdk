// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEACTIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBELIFECYCLEACTIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ess20220222
{
namespace Models
{
  class DescribeLifecycleActionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeLifecycleActionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(LifecycleActions, lifecycleActions_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeLifecycleActionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(LifecycleActions, lifecycleActions_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeLifecycleActionsResponseBody() = default ;
    DescribeLifecycleActionsResponseBody(const DescribeLifecycleActionsResponseBody &) = default ;
    DescribeLifecycleActionsResponseBody(DescribeLifecycleActionsResponseBody &&) = default ;
    DescribeLifecycleActionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeLifecycleActionsResponseBody() = default ;
    DescribeLifecycleActionsResponseBody& operator=(const DescribeLifecycleActionsResponseBody &) = default ;
    DescribeLifecycleActionsResponseBody& operator=(DescribeLifecycleActionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class LifecycleActions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const LifecycleActions& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_TO_JSON(LifecycleActionResult, lifecycleActionResult_);
        DARABONBA_PTR_TO_JSON(LifecycleActionStatus, lifecycleActionStatus_);
        DARABONBA_PTR_TO_JSON(LifecycleActionToken, lifecycleActionToken_);
        DARABONBA_PTR_TO_JSON(LifecycleHookId, lifecycleHookId_);
      };
      friend void from_json(const Darabonba::Json& j, LifecycleActions& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
        DARABONBA_PTR_FROM_JSON(LifecycleActionResult, lifecycleActionResult_);
        DARABONBA_PTR_FROM_JSON(LifecycleActionStatus, lifecycleActionStatus_);
        DARABONBA_PTR_FROM_JSON(LifecycleActionToken, lifecycleActionToken_);
        DARABONBA_PTR_FROM_JSON(LifecycleHookId, lifecycleHookId_);
      };
      LifecycleActions() = default ;
      LifecycleActions(const LifecycleActions &) = default ;
      LifecycleActions(LifecycleActions &&) = default ;
      LifecycleActions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~LifecycleActions() = default ;
      LifecycleActions& operator=(const LifecycleActions &) = default ;
      LifecycleActions& operator=(LifecycleActions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceIds_ == nullptr
        && this->lifecycleActionResult_ == nullptr && this->lifecycleActionStatus_ == nullptr && this->lifecycleActionToken_ == nullptr && this->lifecycleHookId_ == nullptr; };
      // instanceIds Field Functions 
      bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
      void deleteInstanceIds() { this->instanceIds_ = nullptr;};
      inline const vector<string> & getInstanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
      inline vector<string> getInstanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
      inline LifecycleActions& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
      inline LifecycleActions& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


      // lifecycleActionResult Field Functions 
      bool hasLifecycleActionResult() const { return this->lifecycleActionResult_ != nullptr;};
      void deleteLifecycleActionResult() { this->lifecycleActionResult_ = nullptr;};
      inline string getLifecycleActionResult() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionResult_, "") };
      inline LifecycleActions& setLifecycleActionResult(string lifecycleActionResult) { DARABONBA_PTR_SET_VALUE(lifecycleActionResult_, lifecycleActionResult) };


      // lifecycleActionStatus Field Functions 
      bool hasLifecycleActionStatus() const { return this->lifecycleActionStatus_ != nullptr;};
      void deleteLifecycleActionStatus() { this->lifecycleActionStatus_ = nullptr;};
      inline string getLifecycleActionStatus() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionStatus_, "") };
      inline LifecycleActions& setLifecycleActionStatus(string lifecycleActionStatus) { DARABONBA_PTR_SET_VALUE(lifecycleActionStatus_, lifecycleActionStatus) };


      // lifecycleActionToken Field Functions 
      bool hasLifecycleActionToken() const { return this->lifecycleActionToken_ != nullptr;};
      void deleteLifecycleActionToken() { this->lifecycleActionToken_ = nullptr;};
      inline string getLifecycleActionToken() const { DARABONBA_PTR_GET_DEFAULT(lifecycleActionToken_, "") };
      inline LifecycleActions& setLifecycleActionToken(string lifecycleActionToken) { DARABONBA_PTR_SET_VALUE(lifecycleActionToken_, lifecycleActionToken) };


      // lifecycleHookId Field Functions 
      bool hasLifecycleHookId() const { return this->lifecycleHookId_ != nullptr;};
      void deleteLifecycleHookId() { this->lifecycleHookId_ = nullptr;};
      inline string getLifecycleHookId() const { DARABONBA_PTR_GET_DEFAULT(lifecycleHookId_, "") };
      inline LifecycleActions& setLifecycleHookId(string lifecycleHookId) { DARABONBA_PTR_SET_VALUE(lifecycleHookId_, lifecycleHookId) };


    protected:
      // The IDs of the ECS instances on which the lifecycle hook takes effect
      shared_ptr<vector<string>> instanceIds_ {};
      // The subsequent action that Auto Scaling performs after the lifecycle hook times out. Valid values:
      // 
      // *   CONTINUE: Auto Scaling continues to respond to a scale-in or scale-out request.
      // *   ABANDON: Auto Scaling releases ECS instances that are created during scale-out events, or removes ECS instances from the scaling group during scale-in events.
      shared_ptr<string> lifecycleActionResult_ {};
      // The status of the lifecycle hook action.
      shared_ptr<string> lifecycleActionStatus_ {};
      // The token of the lifecycle hook action.
      shared_ptr<string> lifecycleActionToken_ {};
      // The ID of the lifecycle hook.
      shared_ptr<string> lifecycleHookId_ {};
    };

    virtual bool empty() const override { return this->lifecycleActions_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // lifecycleActions Field Functions 
    bool hasLifecycleActions() const { return this->lifecycleActions_ != nullptr;};
    void deleteLifecycleActions() { this->lifecycleActions_ = nullptr;};
    inline const vector<DescribeLifecycleActionsResponseBody::LifecycleActions> & getLifecycleActions() const { DARABONBA_PTR_GET_CONST(lifecycleActions_, vector<DescribeLifecycleActionsResponseBody::LifecycleActions>) };
    inline vector<DescribeLifecycleActionsResponseBody::LifecycleActions> getLifecycleActions() { DARABONBA_PTR_GET(lifecycleActions_, vector<DescribeLifecycleActionsResponseBody::LifecycleActions>) };
    inline DescribeLifecycleActionsResponseBody& setLifecycleActions(const vector<DescribeLifecycleActionsResponseBody::LifecycleActions> & lifecycleActions) { DARABONBA_PTR_SET_VALUE(lifecycleActions_, lifecycleActions) };
    inline DescribeLifecycleActionsResponseBody& setLifecycleActions(vector<DescribeLifecycleActionsResponseBody::LifecycleActions> && lifecycleActions) { DARABONBA_PTR_SET_RVALUE(lifecycleActions_, lifecycleActions) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeLifecycleActionsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeLifecycleActionsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeLifecycleActionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeLifecycleActionsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The actions of the lifecycle hook.
    shared_ptr<vector<DescribeLifecycleActionsResponseBody::LifecycleActions>> lifecycleActions_ {};
    // The maximum number of entries returned per page.
    shared_ptr<int32_t> maxResults_ {};
    // The query token returned in this call.
    shared_ptr<string> nextToken_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of the queried lifecycle actions.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ess20220222
#endif
