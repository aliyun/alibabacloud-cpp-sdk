// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINVENTORYSYNCHRONIZATIONJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTINVENTORYSYNCHRONIZATIONJOBSREQUEST_HPP_
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
  class ListInventorySynchronizationJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInventorySynchronizationJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InventorySourceIds, inventorySourceIds_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListInventorySynchronizationJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InventorySourceIds, inventorySourceIds_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListInventorySynchronizationJobsRequest() = default ;
    ListInventorySynchronizationJobsRequest(const ListInventorySynchronizationJobsRequest &) = default ;
    ListInventorySynchronizationJobsRequest(ListInventorySynchronizationJobsRequest &&) = default ;
    ListInventorySynchronizationJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInventorySynchronizationJobsRequest() = default ;
    ListInventorySynchronizationJobsRequest& operator=(const ListInventorySynchronizationJobsRequest &) = default ;
    ListInventorySynchronizationJobsRequest& operator=(ListInventorySynchronizationJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceId_ == nullptr && this->inventorySourceIds_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->startTime_ == nullptr
        && this->status_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListInventorySynchronizationJobsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInventorySynchronizationJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // inventorySourceIds Field Functions 
    bool hasInventorySourceIds() const { return this->inventorySourceIds_ != nullptr;};
    void deleteInventorySourceIds() { this->inventorySourceIds_ = nullptr;};
    inline const vector<string> & getInventorySourceIds() const { DARABONBA_PTR_GET_CONST(inventorySourceIds_, vector<string>) };
    inline vector<string> getInventorySourceIds() { DARABONBA_PTR_GET(inventorySourceIds_, vector<string>) };
    inline ListInventorySynchronizationJobsRequest& setInventorySourceIds(const vector<string> & inventorySourceIds) { DARABONBA_PTR_SET_VALUE(inventorySourceIds_, inventorySourceIds) };
    inline ListInventorySynchronizationJobsRequest& setInventorySourceIds(vector<string> && inventorySourceIds) { DARABONBA_PTR_SET_RVALUE(inventorySourceIds_, inventorySourceIds) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListInventorySynchronizationJobsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListInventorySynchronizationJobsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListInventorySynchronizationJobsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInventorySynchronizationJobsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The end time.
    shared_ptr<int64_t> endTime_ {};
    // The ID of the IDaaS EIAM instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IDs of the synchronization targets.
    shared_ptr<vector<string>> inventorySourceIds_ {};
    // The number of entries to return per page in paging. Default value: 20. Maximum value: 100.
    shared_ptr<int32_t> maxResults_ {};
    // The query token. Set the value to the NextToken value returned in the previous API call.
    shared_ptr<string> nextToken_ {};
    // The start time.
    shared_ptr<int64_t> startTime_ {};
    // The synchronization status.
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
