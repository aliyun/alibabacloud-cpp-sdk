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
    virtual bool empty() const override { this->beginTime_ != nullptr
        && this->endTime_ != nullptr && this->instanceId_ != nullptr && this->nodeId_ != nullptr && this->owner_ != nullptr && this->pageNumber_ != nullptr
        && this->pageSize_ != nullptr && this->topicStatuses_ != nullptr && this->topicTypes_ != nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline ListTopicsRequest& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListTopicsRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListTopicsRequest& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListTopicsRequest& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // owner Field Functions 
    bool hasOwner() const { return this->owner_ != nullptr;};
    void deleteOwner() { this->owner_ = nullptr;};
    inline string owner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
    inline ListTopicsRequest& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListTopicsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListTopicsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // topicStatuses Field Functions 
    bool hasTopicStatuses() const { return this->topicStatuses_ != nullptr;};
    void deleteTopicStatuses() { this->topicStatuses_ = nullptr;};
    inline string topicStatuses() const { DARABONBA_PTR_GET_DEFAULT(topicStatuses_, "") };
    inline ListTopicsRequest& setTopicStatuses(string topicStatuses) { DARABONBA_PTR_SET_VALUE(topicStatuses_, topicStatuses) };


    // topicTypes Field Functions 
    bool hasTopicTypes() const { return this->topicTypes_ != nullptr;};
    void deleteTopicTypes() { this->topicTypes_ = nullptr;};
    inline string topicTypes() const { DARABONBA_PTR_GET_DEFAULT(topicTypes_, "") };
    inline ListTopicsRequest& setTopicTypes(string topicTypes) { DARABONBA_PTR_SET_VALUE(topicTypes_, topicTypes) };


  protected:
    // The beginning of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-dd\\"T\\"HH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> beginTime_ = nullptr;
    // The end of the time range to query. Specify the time in the ISO 8601 standard in the yyyy-MM-dd\\"T\\"HH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    std::shared_ptr<string> endTime_ = nullptr;
    // The ID of the node instance that triggers the events. You can configure either this parameter or the NodeId parameter.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The ID of the node that triggers the events. You can configure either this parameter or the InstanceId parameter.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The ID of the Alibaba Cloud account used by the owner of the events.
    std::shared_ptr<string> owner_ = nullptr;
    // The number of the page to return. Valid values: 1 to 30. Default value: 1.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries to return on each page. Default value: 10. Maximum value: 100.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The status of the events. Valid values: IGNORE, NEW, FIXING, and RECOVER. The value IGNORE indicates that the events are ignored. The value NEW indicates that the events are new events. The value FIXING indicates that the events are being processed. The value RECOVER indicates that the events are processed. You can specify multiple states. Separate them with commas (,).
    std::shared_ptr<string> topicStatuses_ = nullptr;
    // The types of the events. Valid values: SLOW and ERROR. The value SLOW indicates that the running duration of the node in the current scheduling cycle is significantly longer than the average running duration of the node in previous scheduling cycles. The value ERROR indicates that the node fails to run. You can specify multiple types. Separate them with commas (,).
    std::shared_ptr<string> topicTypes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
