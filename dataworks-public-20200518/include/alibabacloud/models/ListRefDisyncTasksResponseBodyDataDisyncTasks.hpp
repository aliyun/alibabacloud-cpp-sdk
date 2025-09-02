// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTREFDISYNCTASKSRESPONSEBODYDATADISYNCTASKS_HPP_
#define ALIBABACLOUD_MODELS_LISTREFDISYNCTASKSRESPONSEBODYDATADISYNCTASKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class ListRefDISyncTasksResponseBodyDataDISyncTasks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRefDISyncTasksResponseBodyDataDISyncTasks& obj) { 
      DARABONBA_PTR_TO_JSON(DiDestinationDatasource, diDestinationDatasource_);
      DARABONBA_PTR_TO_JSON(DiSourceDatasource, diSourceDatasource_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(NodeName, nodeName_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRefDISyncTasksResponseBodyDataDISyncTasks& obj) { 
      DARABONBA_PTR_FROM_JSON(DiDestinationDatasource, diDestinationDatasource_);
      DARABONBA_PTR_FROM_JSON(DiSourceDatasource, diSourceDatasource_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(NodeName, nodeName_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    ListRefDISyncTasksResponseBodyDataDISyncTasks() = default ;
    ListRefDISyncTasksResponseBodyDataDISyncTasks(const ListRefDISyncTasksResponseBodyDataDISyncTasks &) = default ;
    ListRefDISyncTasksResponseBodyDataDISyncTasks(ListRefDISyncTasksResponseBodyDataDISyncTasks &&) = default ;
    ListRefDISyncTasksResponseBodyDataDISyncTasks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRefDISyncTasksResponseBodyDataDISyncTasks() = default ;
    ListRefDISyncTasksResponseBodyDataDISyncTasks& operator=(const ListRefDISyncTasksResponseBodyDataDISyncTasks &) = default ;
    ListRefDISyncTasksResponseBodyDataDISyncTasks& operator=(ListRefDISyncTasksResponseBodyDataDISyncTasks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->diDestinationDatasource_ != nullptr
        && this->diSourceDatasource_ != nullptr && this->nodeId_ != nullptr && this->nodeName_ != nullptr && this->taskType_ != nullptr; };
    // diDestinationDatasource Field Functions 
    bool hasDiDestinationDatasource() const { return this->diDestinationDatasource_ != nullptr;};
    void deleteDiDestinationDatasource() { this->diDestinationDatasource_ = nullptr;};
    inline string diDestinationDatasource() const { DARABONBA_PTR_GET_DEFAULT(diDestinationDatasource_, "") };
    inline ListRefDISyncTasksResponseBodyDataDISyncTasks& setDiDestinationDatasource(string diDestinationDatasource) { DARABONBA_PTR_SET_VALUE(diDestinationDatasource_, diDestinationDatasource) };


    // diSourceDatasource Field Functions 
    bool hasDiSourceDatasource() const { return this->diSourceDatasource_ != nullptr;};
    void deleteDiSourceDatasource() { this->diSourceDatasource_ = nullptr;};
    inline string diSourceDatasource() const { DARABONBA_PTR_GET_DEFAULT(diSourceDatasource_, "") };
    inline ListRefDISyncTasksResponseBodyDataDISyncTasks& setDiSourceDatasource(string diSourceDatasource) { DARABONBA_PTR_SET_VALUE(diSourceDatasource_, diSourceDatasource) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline int64_t nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, 0L) };
    inline ListRefDISyncTasksResponseBodyDataDISyncTasks& setNodeId(int64_t nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // nodeName Field Functions 
    bool hasNodeName() const { return this->nodeName_ != nullptr;};
    void deleteNodeName() { this->nodeName_ = nullptr;};
    inline string nodeName() const { DARABONBA_PTR_GET_DEFAULT(nodeName_, "") };
    inline ListRefDISyncTasksResponseBodyDataDISyncTasks& setNodeName(string nodeName) { DARABONBA_PTR_SET_VALUE(nodeName_, nodeName) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline ListRefDISyncTasksResponseBodyDataDISyncTasks& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The destination of the synchronization task. If the synchronization task has multiple destinations, the return value is a JSON array, such as \\\\"odps_writer\\\\", \\\\"mysql\\\\". If the RefType parameter is set to to, the synchronization tasks that use the specified data source as the destination are returned. In this case, the value of this parameter indicates the specified data source.
    std::shared_ptr<string> diDestinationDatasource_ = nullptr;
    // The source of the synchronization task. If the synchronization task has multiple sources, the return value is a JSON array, such as \\\\"odps_writer\\\\", \\\\"mysql\\\\". If the RefType parameter is set to from, the synchronization tasks that use the specified data source as the source are returned. In this case, the value of this parameter indicates the specified data source.
    std::shared_ptr<string> diSourceDatasource_ = nullptr;
    // The ID of the synchronization task.
    std::shared_ptr<int64_t> nodeId_ = nullptr;
    // The name of the synchronization task.
    std::shared_ptr<string> nodeName_ = nullptr;
    // The type of the synchronization task. Valid values:
    // 
    // *   DI_OFFLINE: batch synchronization task
    // *   DI_REALTIME: real-time synchronization task
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
