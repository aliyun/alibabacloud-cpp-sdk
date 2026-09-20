// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTOPICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTOPICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListTopicsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTopicsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Owner, owner_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TopicStatuses, topicStatuses_);
      DARABONBA_PTR_TO_JSON(TopicTypes, topicTypes_);
    };
    friend void from_json(const Darabonba::Json& j, ListTopicsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Owner, owner_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TopicStatuses, topicStatuses_);
      DARABONBA_PTR_FROM_JSON(TopicTypes, topicTypes_);
    };
    ListTopicsRequest() = default ;
    ListTopicsRequest(const ListTopicsRequest &) = default ;
    ListTopicsRequest(ListTopicsRequest &&) = default ;
    ListTopicsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTopicsRequest() = default ;
    ListTopicsRequest& operator=(const ListTopicsRequest &) = default ;
    ListTopicsRequest& operator=(ListTopicsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && this->endTime_ == nullptr && this->instanceId_ == nullptr && this->nodeId_ == nullptr && this->owner_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->topicStatuses_ == nullptr && this->topicTypes_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string getBeginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline ListTopicsRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTopicsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListTopicsRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListTopicsRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListTopicsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTopicsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTopicsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // topicStatuses Field Functions 
    bool hasTopicStatuses() const { return this->topicStatuses_ != nullptr;};
    void deleteTopicStatuses() { this->topicStatuses_ = nullptr;};
    inline string getTopicStatuses() const { DARABONBA_PTR_GET_DEFAULT(topicStatuses_, "") };
    inline ListTopicsRequest& setTopicStatuses(string topicStatuses) { DARABONBA_PTR_SET_VALUE(topicStatuses_, topicStatuses) };


    // topicTypes Field Functions 
    bool hasTopicTypes() const { return this->topicTypes_ != nullptr;};
    void deleteTopicTypes() { this->topicTypes_ = nullptr;};
    inline string getTopicTypes() const { DARABONBA_PTR_GET_DEFAULT(topicTypes_, "") };
    inline ListTopicsRequest& setTopicTypes(string topicTypes) { DARABONBA_PTR_SET_VALUE(topicTypes_, topicTypes) };


  protected:
    // The start time for discovery. Specify the time in UTC format (yyyy-MM-dd\\"T\\"HH:mm:ssZ).
    // 
    // This parameter is required.
    shared_ptr<string> beginTime_ {};
    // The end time for discovery. Specify the time in UTC format (yyyy-MM-dd\\"T\\"HH:mm:ssZ).
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The instance ID associated with the event. This parameter is mutually exclusive with NodeId.
    shared_ptr<int64_t> instanceId_ {};
    // The ID of the node associated with the event. This parameter is mutually exclusive with InstanceId.
    shared_ptr<int64_t> nodeId_ {};
    // The Alibaba Cloud UID of the event owner.
    shared_ptr<string> owner_ {};
    // The page number. Default value: 1. Minimum value: 1. Maximum value: 30.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries per page. Default value: 10. Maximum value: 100.
    // 
    // This parameter is required.
    shared_ptr<int32_t> pageSize_ {};
    // The status of the event. Valid values: IGNORE (ignored), NEW (newly discovered), FIXING (being processed), and RECOVER (recovered). Separate multiple event statuses with commas (,).
    shared_ptr<string> topicStatuses_ {};
    // The type of the event. Valid values: SLOW (slow) and ERROR (error). Separate multiple event types with commas (,).
    shared_ptr<string> topicTypes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
