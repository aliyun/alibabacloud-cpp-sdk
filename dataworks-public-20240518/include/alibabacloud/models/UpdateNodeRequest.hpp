// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    UpdateNodeRequest() = default ;
    UpdateNodeRequest(const UpdateNodeRequest &) = default ;
    UpdateNodeRequest(UpdateNodeRequest &&) = default ;
    UpdateNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNodeRequest() = default ;
    UpdateNodeRequest& operator=(const UpdateNodeRequest &) = default ;
    UpdateNodeRequest& operator=(UpdateNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->projectId_ != nullptr && this->spec_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateNodeRequest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateNodeRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline UpdateNodeRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The ID of the node.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // { "title": "CycleWorkflow Schema", "description": "the JSON schema that is used to configure the auto triggered workflow and nodes in the workflow", "type": "object", "required": [ "version", "kind", "spec" ], "properties": { "version": { "type": "string", "const": "1.1.0", "description": "the schema version. The value is fixed to 1.1.0" }, "kind": { "type": "string", "enum": [ "Workflow", "Node" ], "description": "the resource type" }, "spec": { "type": "object", "description": "the key configurations of the workflow", "required": [ "nodes" ], "properties": { "nodes": { "type": "array", "description": "the nodes in the workflow", "items": { "type": "object", "required": [ "name", "script" ], "properties": { "recurrence": { "type": "string", "enum": [ "Normal", "Pause", "Skip", "NoneAuto" ], "description": "the running mode of the node. Valid values: Normal, Pause, Skip, and NoneAuto" }, "id": { "type": "string", "description": "the node ID" }, "timeout": { "type": "integer", "minimum": 0, "description": "the timeout period. Unit: seconds" }, "instanceMode": { "type": "string", "enum": [ "T+1", "Immediately" ], "description": "the instance generation mode. Valid values: T+1 and Immediately" }, "rerunMode": { "type": "string", "enum": [ "Allowed", "Denied", "FailureAllowed" ], "description": "the rerun mode. Valid values: AllAllowed, Denied, and FailureAllowed" }, "rerunTimes": { "type": "integer", "minimum": 0, "description": "the maximum number of reruns allowed after a failure" }, "rerunInterval": { "type": "integer", "minimum": 0, "description": "the rerun interval. Unit: seconds" }, "datasource": { "type": "object", "description": "the configurations of the data source", "required": [ "name", "type" ], "properties": { "name": { "type": "string", "description": "the name of the data source" }, "type": { "type": "string", "enum": [ "odps" ], "description": "the type of the data source. Only MaxCompute data sources are supported" } } }, "script": { "type": "object", "description": "the script configurations of the node", "required": [ "path", "runtime" ], "properties": { "language": { "type": "string", "description": "the programming language of the script" }, "path": { "type": "string", "description": "the storage path of the script file. The storage path ends with the node name and does not require a file extension" }, "runtime": { "type": "object", "description": "the configurations of the runtime environment", "required": [ "command" ], "properties": { "command": { "type": "string", "enum": [ "ODPS_SQL" ], "Description": "the command" }, "cu": { "type": "string", "description": "the unit of the computing resource" } } } } }, "trigger": { "type": "object", "description": "the configurations of the node trigger", "required": [ "type" ], "properties": { "type": { "type": "string", "enum": [ "Scheduler", "Manual", "Streaming", "None" ], "description": "the trigger type. Valid values: Scheduler, Manual, Streaming, and None" }, "cron": { "type": "string", "description": "the cron expression, which is suitable for only auto triggered nodes" }, "startTime": { "type": "string", "format": "yyyy-MM-dd hh:mm:ss", "description": "the start time for scheduling" }, "endTime": { "type": "string", "format": "yyyy-MM-dd hh:mm:ss", "description": "the end time for scheduling" } } }, "runtimeResource": { "type": "object", "description": "the resource configurations for running", "required": [ "resourceGroup" ], "properties": { "resourceGroup": { "type": "string", "description": "the name of the resource group" } } }, "name": { "type": "string", "description": "the name of the node" }, "owner": { "type": "string", "description": "the node owner" }, "inputs": { "type": "object", "description": "the node input parameters", "properties": { "nodeOutputs": { "type": "array", "description": "the node dependencies", "items": { "type": "object", "required": [ "data" ], "properties": { "data": { "type": "string", "description": "the identifier of the node dependency" }, "refTableName": { "type": "string", "description": "the name of the table that is associated with the node. You must configure this parameter if the artifactType parameter is set to Table" }, "isDefault": { "type": "boolean", "description": "specifies whether the table is the default input table“ } } } } } }, "outputs": { "type": "object", "description": "the node output parameters", "properties": { "nodeOutputs": { "type": "array", "description": "the node dependencies", "items": { "type": "object", "required": [ "data" ], "properties": { "data": { "type": "string", "description": "the identifier of the node dependency" }, "refTableName": { "type": "string", "description": "the name of the table that is associated with the node. You must configure this parameter if the artifactType parameter is set to Table" }, "isDefault": { "type": "boolean", "description": "specifies whether the table is the default output table“ } } } } } } } } } } } } }
    // 
    // This parameter is required.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
