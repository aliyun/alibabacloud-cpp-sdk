// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEQUEUESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEQUEUESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListWorkspaceQueuesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceQueuesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(maxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(nextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(queues, queues_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(totalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceQueuesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(maxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(nextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(queues, queues_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(totalCount, totalCount_);
    };
    ListWorkspaceQueuesResponseBody() = default ;
    ListWorkspaceQueuesResponseBody(const ListWorkspaceQueuesResponseBody &) = default ;
    ListWorkspaceQueuesResponseBody(ListWorkspaceQueuesResponseBody &&) = default ;
    ListWorkspaceQueuesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceQueuesResponseBody() = default ;
    ListWorkspaceQueuesResponseBody& operator=(const ListWorkspaceQueuesResponseBody &) = default ;
    ListWorkspaceQueuesResponseBody& operator=(ListWorkspaceQueuesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Queues : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Queues& obj) { 
        DARABONBA_PTR_TO_JSON(allowActions, allowActions_);
        DARABONBA_PTR_TO_JSON(createTime, createTime_);
        DARABONBA_PTR_TO_JSON(creator, creator_);
        DARABONBA_PTR_TO_JSON(environments, environments_);
        DARABONBA_PTR_TO_JSON(maxResource, maxResource_);
        DARABONBA_PTR_TO_JSON(minResource, minResource_);
        DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
        DARABONBA_PTR_TO_JSON(preheat, preheat_);
        DARABONBA_PTR_TO_JSON(properties, properties_);
        DARABONBA_PTR_TO_JSON(queueName, queueName_);
        DARABONBA_PTR_TO_JSON(queueScope, queueScope_);
        DARABONBA_PTR_TO_JSON(queueStatus, queueStatus_);
        DARABONBA_PTR_TO_JSON(queueType, queueType_);
        DARABONBA_PTR_TO_JSON(regionId, regionId_);
        DARABONBA_PTR_TO_JSON(usedResource, usedResource_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Queues& obj) { 
        DARABONBA_PTR_FROM_JSON(allowActions, allowActions_);
        DARABONBA_PTR_FROM_JSON(createTime, createTime_);
        DARABONBA_PTR_FROM_JSON(creator, creator_);
        DARABONBA_PTR_FROM_JSON(environments, environments_);
        DARABONBA_PTR_FROM_JSON(maxResource, maxResource_);
        DARABONBA_PTR_FROM_JSON(minResource, minResource_);
        DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
        DARABONBA_PTR_FROM_JSON(preheat, preheat_);
        DARABONBA_PTR_FROM_JSON(properties, properties_);
        DARABONBA_PTR_FROM_JSON(queueName, queueName_);
        DARABONBA_PTR_FROM_JSON(queueScope, queueScope_);
        DARABONBA_PTR_FROM_JSON(queueStatus, queueStatus_);
        DARABONBA_PTR_FROM_JSON(queueType, queueType_);
        DARABONBA_PTR_FROM_JSON(regionId, regionId_);
        DARABONBA_PTR_FROM_JSON(usedResource, usedResource_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Queues() = default ;
      Queues(const Queues &) = default ;
      Queues(Queues &&) = default ;
      Queues(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Queues() = default ;
      Queues& operator=(const Queues &) = default ;
      Queues& operator=(Queues &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AllowActions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllowActions& obj) { 
          DARABONBA_PTR_TO_JSON(actionArn, actionArn_);
          DARABONBA_PTR_TO_JSON(actionName, actionName_);
          DARABONBA_PTR_TO_JSON(dependencies, dependencies_);
          DARABONBA_PTR_TO_JSON(description, description_);
          DARABONBA_PTR_TO_JSON(displayName, displayName_);
        };
        friend void from_json(const Darabonba::Json& j, AllowActions& obj) { 
          DARABONBA_PTR_FROM_JSON(actionArn, actionArn_);
          DARABONBA_PTR_FROM_JSON(actionName, actionName_);
          DARABONBA_PTR_FROM_JSON(dependencies, dependencies_);
          DARABONBA_PTR_FROM_JSON(description, description_);
          DARABONBA_PTR_FROM_JSON(displayName, displayName_);
        };
        AllowActions() = default ;
        AllowActions(const AllowActions &) = default ;
        AllowActions(AllowActions &&) = default ;
        AllowActions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllowActions() = default ;
        AllowActions& operator=(const AllowActions &) = default ;
        AllowActions& operator=(AllowActions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionArn_ == nullptr
        && this->actionName_ == nullptr && this->dependencies_ == nullptr && this->description_ == nullptr && this->displayName_ == nullptr; };
        // actionArn Field Functions 
        bool hasActionArn() const { return this->actionArn_ != nullptr;};
        void deleteActionArn() { this->actionArn_ = nullptr;};
        inline string getActionArn() const { DARABONBA_PTR_GET_DEFAULT(actionArn_, "") };
        inline AllowActions& setActionArn(string actionArn) { DARABONBA_PTR_SET_VALUE(actionArn_, actionArn) };


        // actionName Field Functions 
        bool hasActionName() const { return this->actionName_ != nullptr;};
        void deleteActionName() { this->actionName_ = nullptr;};
        inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
        inline AllowActions& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


        // dependencies Field Functions 
        bool hasDependencies() const { return this->dependencies_ != nullptr;};
        void deleteDependencies() { this->dependencies_ = nullptr;};
        inline const vector<string> & getDependencies() const { DARABONBA_PTR_GET_CONST(dependencies_, vector<string>) };
        inline vector<string> getDependencies() { DARABONBA_PTR_GET(dependencies_, vector<string>) };
        inline AllowActions& setDependencies(const vector<string> & dependencies) { DARABONBA_PTR_SET_VALUE(dependencies_, dependencies) };
        inline AllowActions& setDependencies(vector<string> && dependencies) { DARABONBA_PTR_SET_RVALUE(dependencies_, dependencies) };


        // description Field Functions 
        bool hasDescription() const { return this->description_ != nullptr;};
        void deleteDescription() { this->description_ = nullptr;};
        inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
        inline AllowActions& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


        // displayName Field Functions 
        bool hasDisplayName() const { return this->displayName_ != nullptr;};
        void deleteDisplayName() { this->displayName_ = nullptr;};
        inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
        inline AllowActions& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      protected:
        // The Alibaba Cloud Resource Name (ARN) of a behavior.
        shared_ptr<string> actionArn_ {};
        // The name of the permission.
        shared_ptr<string> actionName_ {};
        // The dependencies of the operation.
        shared_ptr<vector<string>> dependencies_ {};
        // The description of the operation.
        shared_ptr<string> description_ {};
        // The display name of the permission.
        shared_ptr<string> displayName_ {};
      };

      virtual bool empty() const override { return this->allowActions_ == nullptr
        && this->createTime_ == nullptr && this->creator_ == nullptr && this->environments_ == nullptr && this->maxResource_ == nullptr && this->minResource_ == nullptr
        && this->paymentType_ == nullptr && this->preheat_ == nullptr && this->properties_ == nullptr && this->queueName_ == nullptr && this->queueScope_ == nullptr
        && this->queueStatus_ == nullptr && this->queueType_ == nullptr && this->regionId_ == nullptr && this->usedResource_ == nullptr && this->workspaceId_ == nullptr; };
      // allowActions Field Functions 
      bool hasAllowActions() const { return this->allowActions_ != nullptr;};
      void deleteAllowActions() { this->allowActions_ = nullptr;};
      inline const vector<Queues::AllowActions> & getAllowActions() const { DARABONBA_PTR_GET_CONST(allowActions_, vector<Queues::AllowActions>) };
      inline vector<Queues::AllowActions> getAllowActions() { DARABONBA_PTR_GET(allowActions_, vector<Queues::AllowActions>) };
      inline Queues& setAllowActions(const vector<Queues::AllowActions> & allowActions) { DARABONBA_PTR_SET_VALUE(allowActions_, allowActions) };
      inline Queues& setAllowActions(vector<Queues::AllowActions> && allowActions) { DARABONBA_PTR_SET_RVALUE(allowActions_, allowActions) };


      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
      inline Queues& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // creator Field Functions 
      bool hasCreator() const { return this->creator_ != nullptr;};
      void deleteCreator() { this->creator_ = nullptr;};
      inline string getCreator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
      inline Queues& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


      // environments Field Functions 
      bool hasEnvironments() const { return this->environments_ != nullptr;};
      void deleteEnvironments() { this->environments_ = nullptr;};
      inline const vector<string> & getEnvironments() const { DARABONBA_PTR_GET_CONST(environments_, vector<string>) };
      inline vector<string> getEnvironments() { DARABONBA_PTR_GET(environments_, vector<string>) };
      inline Queues& setEnvironments(const vector<string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
      inline Queues& setEnvironments(vector<string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


      // maxResource Field Functions 
      bool hasMaxResource() const { return this->maxResource_ != nullptr;};
      void deleteMaxResource() { this->maxResource_ = nullptr;};
      inline string getMaxResource() const { DARABONBA_PTR_GET_DEFAULT(maxResource_, "") };
      inline Queues& setMaxResource(string maxResource) { DARABONBA_PTR_SET_VALUE(maxResource_, maxResource) };


      // minResource Field Functions 
      bool hasMinResource() const { return this->minResource_ != nullptr;};
      void deleteMinResource() { this->minResource_ = nullptr;};
      inline string getMinResource() const { DARABONBA_PTR_GET_DEFAULT(minResource_, "") };
      inline Queues& setMinResource(string minResource) { DARABONBA_PTR_SET_VALUE(minResource_, minResource) };


      // paymentType Field Functions 
      bool hasPaymentType() const { return this->paymentType_ != nullptr;};
      void deletePaymentType() { this->paymentType_ = nullptr;};
      inline string getPaymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
      inline Queues& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


      // preheat Field Functions 
      bool hasPreheat() const { return this->preheat_ != nullptr;};
      void deletePreheat() { this->preheat_ = nullptr;};
      inline bool getPreheat() const { DARABONBA_PTR_GET_DEFAULT(preheat_, false) };
      inline Queues& setPreheat(bool preheat) { DARABONBA_PTR_SET_VALUE(preheat_, preheat) };


      // properties Field Functions 
      bool hasProperties() const { return this->properties_ != nullptr;};
      void deleteProperties() { this->properties_ = nullptr;};
      inline string getProperties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
      inline Queues& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


      // queueName Field Functions 
      bool hasQueueName() const { return this->queueName_ != nullptr;};
      void deleteQueueName() { this->queueName_ = nullptr;};
      inline string getQueueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
      inline Queues& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


      // queueScope Field Functions 
      bool hasQueueScope() const { return this->queueScope_ != nullptr;};
      void deleteQueueScope() { this->queueScope_ = nullptr;};
      inline string getQueueScope() const { DARABONBA_PTR_GET_DEFAULT(queueScope_, "") };
      inline Queues& setQueueScope(string queueScope) { DARABONBA_PTR_SET_VALUE(queueScope_, queueScope) };


      // queueStatus Field Functions 
      bool hasQueueStatus() const { return this->queueStatus_ != nullptr;};
      void deleteQueueStatus() { this->queueStatus_ = nullptr;};
      inline string getQueueStatus() const { DARABONBA_PTR_GET_DEFAULT(queueStatus_, "") };
      inline Queues& setQueueStatus(string queueStatus) { DARABONBA_PTR_SET_VALUE(queueStatus_, queueStatus) };


      // queueType Field Functions 
      bool hasQueueType() const { return this->queueType_ != nullptr;};
      void deleteQueueType() { this->queueType_ = nullptr;};
      inline string getQueueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
      inline Queues& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline Queues& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // usedResource Field Functions 
      bool hasUsedResource() const { return this->usedResource_ != nullptr;};
      void deleteUsedResource() { this->usedResource_ = nullptr;};
      inline string getUsedResource() const { DARABONBA_PTR_GET_DEFAULT(usedResource_, "") };
      inline Queues& setUsedResource(string usedResource) { DARABONBA_PTR_SET_VALUE(usedResource_, usedResource) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Queues& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      // The operations allowed for the queue.
      shared_ptr<vector<Queues::AllowActions>> allowActions_ {};
      // The time when the workspace was created.
      shared_ptr<int64_t> createTime_ {};
      // The ID of the user who created the queue.
      shared_ptr<string> creator_ {};
      // The environment types of the queue.
      shared_ptr<vector<string>> environments_ {};
      // The maximum capacity of resources that can be used in the queue.
      shared_ptr<string> maxResource_ {};
      // The minimum capacity of resources that can be used in the queue.
      shared_ptr<string> minResource_ {};
      // The billing method. Valid values:
      // 
      // *   PayAsYouGo
      // *   Pre
      shared_ptr<string> paymentType_ {};
      shared_ptr<bool> preheat_ {};
      // The queue label.
      shared_ptr<string> properties_ {};
      // The name of the queue.
      shared_ptr<string> queueName_ {};
      // The queue architecture.
      shared_ptr<string> queueScope_ {};
      // The status of the queue.
      shared_ptr<string> queueStatus_ {};
      // The type of the queue. Valid values:
      // 
      // *   instance
      // *   instanceChildren
      shared_ptr<string> queueType_ {};
      // The region ID.
      shared_ptr<string> regionId_ {};
      // The capacity of resources that are used in the queue.
      shared_ptr<string> usedResource_ {};
      // The workspace ID.
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->maxResults_ == nullptr
        && this->nextToken_ == nullptr && this->queues_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListWorkspaceQueuesResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListWorkspaceQueuesResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // queues Field Functions 
    bool hasQueues() const { return this->queues_ != nullptr;};
    void deleteQueues() { this->queues_ = nullptr;};
    inline const vector<ListWorkspaceQueuesResponseBody::Queues> & getQueues() const { DARABONBA_PTR_GET_CONST(queues_, vector<ListWorkspaceQueuesResponseBody::Queues>) };
    inline vector<ListWorkspaceQueuesResponseBody::Queues> getQueues() { DARABONBA_PTR_GET(queues_, vector<ListWorkspaceQueuesResponseBody::Queues>) };
    inline ListWorkspaceQueuesResponseBody& setQueues(const vector<ListWorkspaceQueuesResponseBody::Queues> & queues) { DARABONBA_PTR_SET_VALUE(queues_, queues) };
    inline ListWorkspaceQueuesResponseBody& setQueues(vector<ListWorkspaceQueuesResponseBody::Queues> && queues) { DARABONBA_PTR_SET_RVALUE(queues_, queues) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListWorkspaceQueuesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListWorkspaceQueuesResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The maximum number of entries returned.
    shared_ptr<int32_t> maxResults_ {};
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    shared_ptr<string> nextToken_ {};
    // The list of queues.
    shared_ptr<vector<ListWorkspaceQueuesResponseBody::Queues>> queues_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The total number of entries returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
