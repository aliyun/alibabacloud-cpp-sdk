// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWORKSPACEQUEUESRESPONSEBODYQUEUES_HPP_
#define ALIBABACLOUD_MODELS_LISTWORKSPACEQUEUESRESPONSEBODYQUEUES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListWorkspaceQueuesResponseBodyQueuesAllowActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrServerlessSpark20230808
{
namespace Models
{
  class ListWorkspaceQueuesResponseBodyQueues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWorkspaceQueuesResponseBodyQueues& obj) { 
      DARABONBA_PTR_TO_JSON(allowActions, allowActions_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(environments, environments_);
      DARABONBA_PTR_TO_JSON(maxResource, maxResource_);
      DARABONBA_PTR_TO_JSON(minResource, minResource_);
      DARABONBA_PTR_TO_JSON(paymentType, paymentType_);
      DARABONBA_PTR_TO_JSON(properties, properties_);
      DARABONBA_PTR_TO_JSON(queueName, queueName_);
      DARABONBA_PTR_TO_JSON(queueScope, queueScope_);
      DARABONBA_PTR_TO_JSON(queueStatus, queueStatus_);
      DARABONBA_PTR_TO_JSON(queueType, queueType_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(usedResource, usedResource_);
      DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, ListWorkspaceQueuesResponseBodyQueues& obj) { 
      DARABONBA_PTR_FROM_JSON(allowActions, allowActions_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(environments, environments_);
      DARABONBA_PTR_FROM_JSON(maxResource, maxResource_);
      DARABONBA_PTR_FROM_JSON(minResource, minResource_);
      DARABONBA_PTR_FROM_JSON(paymentType, paymentType_);
      DARABONBA_PTR_FROM_JSON(properties, properties_);
      DARABONBA_PTR_FROM_JSON(queueName, queueName_);
      DARABONBA_PTR_FROM_JSON(queueScope, queueScope_);
      DARABONBA_PTR_FROM_JSON(queueStatus, queueStatus_);
      DARABONBA_PTR_FROM_JSON(queueType, queueType_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(usedResource, usedResource_);
      DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
    };
    ListWorkspaceQueuesResponseBodyQueues() = default ;
    ListWorkspaceQueuesResponseBodyQueues(const ListWorkspaceQueuesResponseBodyQueues &) = default ;
    ListWorkspaceQueuesResponseBodyQueues(ListWorkspaceQueuesResponseBodyQueues &&) = default ;
    ListWorkspaceQueuesResponseBodyQueues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWorkspaceQueuesResponseBodyQueues() = default ;
    ListWorkspaceQueuesResponseBodyQueues& operator=(const ListWorkspaceQueuesResponseBodyQueues &) = default ;
    ListWorkspaceQueuesResponseBodyQueues& operator=(ListWorkspaceQueuesResponseBodyQueues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allowActions_ != nullptr
        && this->createTime_ != nullptr && this->creator_ != nullptr && this->environments_ != nullptr && this->maxResource_ != nullptr && this->minResource_ != nullptr
        && this->paymentType_ != nullptr && this->properties_ != nullptr && this->queueName_ != nullptr && this->queueScope_ != nullptr && this->queueStatus_ != nullptr
        && this->queueType_ != nullptr && this->regionId_ != nullptr && this->usedResource_ != nullptr && this->workspaceId_ != nullptr; };
    // allowActions Field Functions 
    bool hasAllowActions() const { return this->allowActions_ != nullptr;};
    void deleteAllowActions() { this->allowActions_ = nullptr;};
    inline const vector<Models::ListWorkspaceQueuesResponseBodyQueuesAllowActions> & allowActions() const { DARABONBA_PTR_GET_CONST(allowActions_, vector<Models::ListWorkspaceQueuesResponseBodyQueuesAllowActions>) };
    inline vector<Models::ListWorkspaceQueuesResponseBodyQueuesAllowActions> allowActions() { DARABONBA_PTR_GET(allowActions_, vector<Models::ListWorkspaceQueuesResponseBodyQueuesAllowActions>) };
    inline ListWorkspaceQueuesResponseBodyQueues& setAllowActions(const vector<Models::ListWorkspaceQueuesResponseBodyQueuesAllowActions> & allowActions) { DARABONBA_PTR_SET_VALUE(allowActions_, allowActions) };
    inline ListWorkspaceQueuesResponseBodyQueues& setAllowActions(vector<Models::ListWorkspaceQueuesResponseBodyQueuesAllowActions> && allowActions) { DARABONBA_PTR_SET_RVALUE(allowActions_, allowActions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListWorkspaceQueuesResponseBodyQueues& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // environments Field Functions 
    bool hasEnvironments() const { return this->environments_ != nullptr;};
    void deleteEnvironments() { this->environments_ = nullptr;};
    inline const vector<string> & environments() const { DARABONBA_PTR_GET_CONST(environments_, vector<string>) };
    inline vector<string> environments() { DARABONBA_PTR_GET(environments_, vector<string>) };
    inline ListWorkspaceQueuesResponseBodyQueues& setEnvironments(const vector<string> & environments) { DARABONBA_PTR_SET_VALUE(environments_, environments) };
    inline ListWorkspaceQueuesResponseBodyQueues& setEnvironments(vector<string> && environments) { DARABONBA_PTR_SET_RVALUE(environments_, environments) };


    // maxResource Field Functions 
    bool hasMaxResource() const { return this->maxResource_ != nullptr;};
    void deleteMaxResource() { this->maxResource_ = nullptr;};
    inline string maxResource() const { DARABONBA_PTR_GET_DEFAULT(maxResource_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setMaxResource(string maxResource) { DARABONBA_PTR_SET_VALUE(maxResource_, maxResource) };


    // minResource Field Functions 
    bool hasMinResource() const { return this->minResource_ != nullptr;};
    void deleteMinResource() { this->minResource_ = nullptr;};
    inline string minResource() const { DARABONBA_PTR_GET_DEFAULT(minResource_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setMinResource(string minResource) { DARABONBA_PTR_SET_VALUE(minResource_, minResource) };


    // paymentType Field Functions 
    bool hasPaymentType() const { return this->paymentType_ != nullptr;};
    void deletePaymentType() { this->paymentType_ = nullptr;};
    inline string paymentType() const { DARABONBA_PTR_GET_DEFAULT(paymentType_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setPaymentType(string paymentType) { DARABONBA_PTR_SET_VALUE(paymentType_, paymentType) };


    // properties Field Functions 
    bool hasProperties() const { return this->properties_ != nullptr;};
    void deleteProperties() { this->properties_ = nullptr;};
    inline string properties() const { DARABONBA_PTR_GET_DEFAULT(properties_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setProperties(string properties) { DARABONBA_PTR_SET_VALUE(properties_, properties) };


    // queueName Field Functions 
    bool hasQueueName() const { return this->queueName_ != nullptr;};
    void deleteQueueName() { this->queueName_ = nullptr;};
    inline string queueName() const { DARABONBA_PTR_GET_DEFAULT(queueName_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setQueueName(string queueName) { DARABONBA_PTR_SET_VALUE(queueName_, queueName) };


    // queueScope Field Functions 
    bool hasQueueScope() const { return this->queueScope_ != nullptr;};
    void deleteQueueScope() { this->queueScope_ = nullptr;};
    inline string queueScope() const { DARABONBA_PTR_GET_DEFAULT(queueScope_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setQueueScope(string queueScope) { DARABONBA_PTR_SET_VALUE(queueScope_, queueScope) };


    // queueStatus Field Functions 
    bool hasQueueStatus() const { return this->queueStatus_ != nullptr;};
    void deleteQueueStatus() { this->queueStatus_ = nullptr;};
    inline string queueStatus() const { DARABONBA_PTR_GET_DEFAULT(queueStatus_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setQueueStatus(string queueStatus) { DARABONBA_PTR_SET_VALUE(queueStatus_, queueStatus) };


    // queueType Field Functions 
    bool hasQueueType() const { return this->queueType_ != nullptr;};
    void deleteQueueType() { this->queueType_ = nullptr;};
    inline string queueType() const { DARABONBA_PTR_GET_DEFAULT(queueType_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setQueueType(string queueType) { DARABONBA_PTR_SET_VALUE(queueType_, queueType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // usedResource Field Functions 
    bool hasUsedResource() const { return this->usedResource_ != nullptr;};
    void deleteUsedResource() { this->usedResource_ = nullptr;};
    inline string usedResource() const { DARABONBA_PTR_GET_DEFAULT(usedResource_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setUsedResource(string usedResource) { DARABONBA_PTR_SET_VALUE(usedResource_, usedResource) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline ListWorkspaceQueuesResponseBodyQueues& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The operations allowed for the queue.
    std::shared_ptr<vector<Models::ListWorkspaceQueuesResponseBodyQueuesAllowActions>> allowActions_ = nullptr;
    // The time when the workspace was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The ID of the user who created the queue.
    std::shared_ptr<string> creator_ = nullptr;
    // The environment types of the queue.
    std::shared_ptr<vector<string>> environments_ = nullptr;
    // The maximum capacity of resources that can be used in the queue.
    std::shared_ptr<string> maxResource_ = nullptr;
    // The minimum capacity of resources that can be used in the queue.
    std::shared_ptr<string> minResource_ = nullptr;
    // The billing method. Valid values:
    // 
    // *   PayAsYouGo
    // *   Pre
    std::shared_ptr<string> paymentType_ = nullptr;
    // The queue label.
    std::shared_ptr<string> properties_ = nullptr;
    // The name of the queue.
    std::shared_ptr<string> queueName_ = nullptr;
    // The queue architecture.
    std::shared_ptr<string> queueScope_ = nullptr;
    // The status of the queue.
    std::shared_ptr<string> queueStatus_ = nullptr;
    // The type of the queue. Valid values:
    // 
    // *   instance
    // *   instanceChildren
    std::shared_ptr<string> queueType_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The capacity of resources that are used in the queue.
    std::shared_ptr<string> usedResource_ = nullptr;
    // The workspace ID.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrServerlessSpark20230808
#endif
