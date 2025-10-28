// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLLOGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLLOGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateSqlLogTaskRequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DAS20200116
{
namespace Models
{
  class CreateSqlLogTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSqlLogTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
      DARABONBA_PTR_TO_JSON(Role, role_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSqlLogTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
      DARABONBA_PTR_FROM_JSON(Role, role_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    CreateSqlLogTaskRequest() = default ;
    CreateSqlLogTaskRequest(const CreateSqlLogTaskRequest &) = default ;
    CreateSqlLogTaskRequest(CreateSqlLogTaskRequest &&) = default ;
    CreateSqlLogTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSqlLogTaskRequest() = default ;
    CreateSqlLogTaskRequest& operator=(const CreateSqlLogTaskRequest &) = default ;
    CreateSqlLogTaskRequest& operator=(CreateSqlLogTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->filters_ == nullptr && return this->instanceId_ == nullptr && return this->name_ == nullptr && return this->nodeId_ == nullptr && return this->role_ == nullptr
        && return this->startTime_ == nullptr && return this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateSqlLogTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<CreateSqlLogTaskRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<CreateSqlLogTaskRequestFilters>) };
    inline vector<CreateSqlLogTaskRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<CreateSqlLogTaskRequestFilters>) };
    inline CreateSqlLogTaskRequest& setFilters(const vector<CreateSqlLogTaskRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline CreateSqlLogTaskRequest& setFilters(vector<CreateSqlLogTaskRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSqlLogTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSqlLogTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateSqlLogTaskRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string role() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateSqlLogTaskRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateSqlLogTaskRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSqlLogTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The end of the time range to query. Specify the time in the UNIX timestamp format. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The filter conditions.
    std::shared_ptr<vector<CreateSqlLogTaskRequestFilters>> filters_ = nullptr;
    // The ID of the database instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the task.
    std::shared_ptr<string> name_ = nullptr;
    // The node ID.
    // 
    // >  This parameter is available only for instances that run in a cluster architecture. You can specify this parameter to query the offline tasks of a specific node. By default, if this parameter is not specified, the information about the offline tasks of the primary node is returned.
    std::shared_ptr<string> nodeId_ = nullptr;
    // The role of the node of the PolarDB-X 2.0 database instance. Valid values:
    // 
    // *   **polarx_cn**: compute node
    // *   **polarx_dn**: data node
    std::shared_ptr<string> role_ = nullptr;
    // The beginning of the time range to query. Specify the time in the UNIX timestamp format. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The type of the task. Valid values:
    // 
    // *   **Export**
    // *   **Query**
    // *   **Insight**
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
