// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATEDISYNCTASKCONFIGFORCREATINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GENERATEDISYNCTASKCONFIGFORCREATINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class GenerateDISyncTaskConfigForCreatingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateDISyncTaskConfigForCreatingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateDISyncTaskConfigForCreatingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(TaskParam, taskParam_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
    };
    GenerateDISyncTaskConfigForCreatingRequest() = default ;
    GenerateDISyncTaskConfigForCreatingRequest(const GenerateDISyncTaskConfigForCreatingRequest &) = default ;
    GenerateDISyncTaskConfigForCreatingRequest(GenerateDISyncTaskConfigForCreatingRequest &&) = default ;
    GenerateDISyncTaskConfigForCreatingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateDISyncTaskConfigForCreatingRequest() = default ;
    GenerateDISyncTaskConfigForCreatingRequest& operator=(const GenerateDISyncTaskConfigForCreatingRequest &) = default ;
    GenerateDISyncTaskConfigForCreatingRequest& operator=(GenerateDISyncTaskConfigForCreatingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->projectId_ != nullptr && this->taskParam_ != nullptr && this->taskType_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline GenerateDISyncTaskConfigForCreatingRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline GenerateDISyncTaskConfigForCreatingRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // taskParam Field Functions 
    bool hasTaskParam() const { return this->taskParam_ != nullptr;};
    void deleteTaskParam() { this->taskParam_ = nullptr;};
    inline string taskParam() const { DARABONBA_PTR_GET_DEFAULT(taskParam_, "") };
    inline GenerateDISyncTaskConfigForCreatingRequest& setTaskParam(string taskParam) { DARABONBA_PTR_SET_VALUE(taskParam_, taskParam) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GenerateDISyncTaskConfigForCreatingRequest& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


  protected:
    // The client token that is used to ensure the idempotence of the request. This parameter is used to prevent repeated operations that are caused by multiple calls.
    std::shared_ptr<string> clientToken_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to obtain the ID.
    // 
    // You must configure this parameter to specify the DataWorks workspace to which the API operation is applied.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The script for the synchronization task. DataWorks allows you to create the following types of synchronization tasks:
    // 
    // *   Synchronization task that is used to synchronize data from MySQL to MaxCompute
    // *   Synchronization task that is used to synchronize data from MySQL data to Kafka
    // *   Synchronization task that is used to synchronize data from MySQL to Hologres
    // 
    // The SelectedTables parameter is used to specify tables that you want to synchronize from multiple databases. The Tables parameter is used to specify tables that you want to synchronize from a single database.
    // 
    // *   If the script contains the SelectedTables parameter, the system synchronizes data from the tables that you specify in the SelectedTables parameter.
    // *   If the script contains the Tables parameter, the system synchronizes data from the tables that you specify in the Tables parameter.
    // 
    // The following sample code provides a script for data synchronization from MySQL to MaxCompute:
    // 
    //     {
    //       "type": "realtime",
    //       "version": "1.0",
    //       "setting": {
    //         "resourceGroup": "S_res_group_280749521950784_1623033752022",
    //         "taskType": "oneclick_to_odps"
    //       },
    //       "steps": [
    //         {
    //           "stepType": "mysql",
    //           "parameter": {
    //             "connection": [
    //               {
    //                 "datasourceType": "mysql",
    //                 "datasource": "mysql_pub1",
    //                 "selectedTables": [
    //                   {
    //                     "dbName": "mysql_db",
    //                     "schema": [
    //                       {
    //                         "tableInfos": [
    //                           {
    //                             "table": "molin_di_test_in_pk_v4"
    //                           }
    //                         ]
    //                       }
    //                     ]
    //                   }
    //                 ]
    //               }
    //             ]
    //           },
    //           "name": "Reader",
    //           "category": "reader"
    //         },
    //         {
    //           "stepType": "odps",
    //           "parameter": {
    //             "datasource": "odps_source"
    //           },
    //           "name": "Writer",
    //           "category": "writer"
    //         }
    //       ]
    //     }
    // 
    // The following sample code provides a script for data synchronization from MySQL to Kafka:
    // 
    //     {
    //       "type": "realtime",
    //       "version": "1.0",
    //       "setting": {
    //         "resourceGroup": "S_res_group_280749521950784_1623033752022",
    //         "taskType": "oneclick_to_kafka"
    //       },
    //       "steps": [
    //         {
    //           "stepType": "mysql",
    //           "parameter": {
    //             "connection": [
    //               {
    //                 "datasourceType": "mysql",
    //                 "datasource": "pkset_test",
    //                 "selectedTables": [
    //                   {
    //                     "dbName": "mysql_db",
    //                     "schema": [
    //                       {
    //                         "tableInfos": [
    //                           {
    //                             "table": "molin_di_test_in_pk_v4"
    //                           }
    //                         ]
    //                       }
    //                     ]
    //                   }
    //                 ]
    //               }
    //             ]
    //           },
    //           "name": "Reader",
    //           "category": "reader"
    //         },
    //         {
    //           "stepType": "kafka",
    //           "parameter": {
    //             "datasource": "azn_kafka"
    //           },
    //           "name": "Writer",
    //           "category": "writer"
    //         }
    //       ]
    //     }
    // 
    // The following sample code provides a script for data synchronization from MySQL to Hologres:
    // 
    //     {
    //       "type": "realtime",
    //       "version": "1.0",
    //       "setting": {
    //         "resourceGroup": "S_res_group_280749521950784_1623033752022",
    //         "taskType": "oneclick_to_holo"
    //       },
    //       "steps": [
    //         {
    //           "stepType": "mysql",
    //           "parameter": {
    //             "connection": [
    //               {
    //                 "datasourceType": "mysql",
    //                 "datasource": "mysql_pub",
    //                 "selectedTables": [
    //                   {
    //                     "dbName": "mysql_db",
    //                     "schema": [
    //                       {
    //                         "tableInfos": [
    //                           {
    //                             "table": "molin_di_test_in2_pk_v3"
    //                           }
    //                         ]
    //                       }
    //                     ]
    //                   }
    //                 ]
    //               }
    //             ]
    //           },
    //           "name": "Reader",
    //           "category": "reader"
    //         },
    //         {
    //           "stepType": "holo",
    //           "parameter": {
    //             "datasource": "holo"
    //           },
    //           "name": "Writer",
    //           "category": "writer"
    //         }
    //       ]
    //     }
    // 
    // This parameter is required.
    std::shared_ptr<string> taskParam_ = nullptr;
    // The type of task that you want to create in Data Integration in asynchronous mode. Valid values:
    // 
    // *   DI_REALTIME: real-time synchronization task
    // *   DI_SOLUTION: another type of synchronization task
    // 
    // DataWorks allows you to create real-time synchronization tasks and other types of synchronization tasks in Data Integration only in asynchronous mode.
    // 
    // *   DI_OFFLINE
    // *   DI_REALTIME
    // *   DI_SOLUTION
    // 
    // This parameter is required.
    std::shared_ptr<string> taskType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
