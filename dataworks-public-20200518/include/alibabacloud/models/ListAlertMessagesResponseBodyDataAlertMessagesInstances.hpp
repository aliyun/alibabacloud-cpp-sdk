// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALERTMESSAGESRESPONSEBODYDATAALERTMESSAGESINSTANCES_HPP_
#define ALIBABACLOUD_MODELS_LISTALERTMESSAGESRESPONSEBODYDATAALERTMESSAGESINSTANCES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListAlertMessagesResponseBodyDataAlertMessagesInstances : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAlertMessagesResponseBodyDataAlertMessagesInstances& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListAlertMessagesResponseBodyDataAlertMessagesInstances& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListAlertMessagesResponseBodyDataAlertMessagesInstances() = default ;
    ListAlertMessagesResponseBodyDataAlertMessagesInstances(const ListAlertMessagesResponseBodyDataAlertMessagesInstances &) = default ;
    ListAlertMessagesResponseBodyDataAlertMessagesInstances(ListAlertMessagesResponseBodyDataAlertMessagesInstances &&) = default ;
    ListAlertMessagesResponseBodyDataAlertMessagesInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAlertMessagesResponseBodyDataAlertMessagesInstances() = default ;
    ListAlertMessagesResponseBodyDataAlertMessagesInstances& operator=(const ListAlertMessagesResponseBodyDataAlertMessagesInstances &) = default ;
    ListAlertMessagesResponseBodyDataAlertMessagesInstances& operator=(ListAlertMessagesResponseBodyDataAlertMessagesInstances &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->projectId_ != nullptr && this->status_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline int64_t instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, 0L) };
    inline ListAlertMessagesResponseBodyDataAlertMessagesInstances& setInstanceId(int64_t instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListAlertMessagesResponseBodyDataAlertMessagesInstances& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListAlertMessagesResponseBodyDataAlertMessagesInstances& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListAlertMessagesResponseBodyDataAlertMessagesInstances& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListAlertMessagesResponseBodyDataAlertMessagesInstances& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The instance ID.
    std::shared_ptr<int64_t> instanceId_ = nullptr;
    // The node ID.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the node.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The ID of the workspace to which the node belongs.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The status of the instance. Valid values: NOT_RUN, WAIT_TIME, WAIT_RESOURCE, RUNNING, CHECKING, CHECKING_CONDITION, FAILURE, and SUCCESS. The value NOT_RUN indicates that the instance is not run. The value WAIT_TIME indicates that the instance is waiting to be run. The value WAIT_RESOURCE indicates that the instance is waiting for resources. The value RUNNING indicates that the instance is running. The value CHECKING indicates that data quality is being checked for the node for which the instance is generated. The value CHECKING_CONDITION indicates that branch conditions are being checked for the node for which the instance is generated. The value FAILURE indicates that the instance fails to run. The value SUCCESS indicates that the instance is successfully run.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
