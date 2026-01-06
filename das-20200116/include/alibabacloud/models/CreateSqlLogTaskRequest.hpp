// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLLOGTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLLOGTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Filters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the filter parameter.
      // 
      // >  For more information about the supported filter parameters and their valid values, see the following **supplement about the Key parameter**.
      shared_ptr<string> key_ {};
      // The value of the filter parameter.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->filters_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr && this->nodeId_ == nullptr && this->role_ == nullptr
        && this->startTime_ == nullptr && this->type_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline CreateSqlLogTaskRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<CreateSqlLogTaskRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<CreateSqlLogTaskRequest::Filters>) };
    inline vector<CreateSqlLogTaskRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<CreateSqlLogTaskRequest::Filters>) };
    inline CreateSqlLogTaskRequest& setFilters(const vector<CreateSqlLogTaskRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline CreateSqlLogTaskRequest& setFilters(vector<CreateSqlLogTaskRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateSqlLogTaskRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateSqlLogTaskRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline CreateSqlLogTaskRequest& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // role Field Functions 
    bool hasRole() const { return this->role_ != nullptr;};
    void deleteRole() { this->role_ = nullptr;};
    inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
    inline CreateSqlLogTaskRequest& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline CreateSqlLogTaskRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateSqlLogTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The end of the time range to query. Specify the time in the UNIX timestamp format. Unit: milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The filter conditions.
    shared_ptr<vector<CreateSqlLogTaskRequest::Filters>> filters_ {};
    // The ID of the database instance.
    shared_ptr<string> instanceId_ {};
    // The name of the task.
    shared_ptr<string> name_ {};
    // The node ID.
    // 
    // >  This parameter is available only for instances that run in a cluster architecture. You can specify this parameter to query the offline tasks of a specific node. By default, if this parameter is not specified, the information about the offline tasks of the primary node is returned.
    shared_ptr<string> nodeId_ {};
    // The role of the node of the PolarDB-X 2.0 database instance. Valid values:
    // 
    // *   **polarx_cn**: compute node
    // *   **polarx_dn**: data node
    shared_ptr<string> role_ {};
    // The beginning of the time range to query. Specify the time in the UNIX timestamp format. Unit: milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The type of the task. Valid values:
    // 
    // *   **Export**
    // *   **Query**
    // *   **Insight**
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DAS20200116
#endif
