// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETASKINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATETASKINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class UpdateTaskInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTaskInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(TaskInstances, taskInstances_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTaskInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(TaskInstances, taskInstances_);
    };
    UpdateTaskInstancesRequest() = default ;
    UpdateTaskInstancesRequest(const UpdateTaskInstancesRequest &) = default ;
    UpdateTaskInstancesRequest(UpdateTaskInstancesRequest &&) = default ;
    UpdateTaskInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTaskInstancesRequest() = default ;
    UpdateTaskInstancesRequest& operator=(const UpdateTaskInstancesRequest &) = default ;
    UpdateTaskInstancesRequest& operator=(UpdateTaskInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TaskInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TaskInstances& obj) { 
        DARABONBA_PTR_TO_JSON(DataSource, dataSource_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Priority, priority_);
        DARABONBA_PTR_TO_JSON(RuntimeResource, runtimeResource_);
      };
      friend void from_json(const Darabonba::Json& j, TaskInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(DataSource, dataSource_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Priority, priority_);
        DARABONBA_PTR_FROM_JSON(RuntimeResource, runtimeResource_);
      };
      TaskInstances() = default ;
      TaskInstances(const TaskInstances &) = default ;
      TaskInstances(TaskInstances &&) = default ;
      TaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TaskInstances() = default ;
      TaskInstances& operator=(const TaskInstances &) = default ;
      TaskInstances& operator=(TaskInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataSource : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataSource& obj) { 
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, DataSource& obj) { 
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        DataSource() = default ;
        DataSource(const DataSource &) = default ;
        DataSource(DataSource &&) = default ;
        DataSource(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataSource() = default ;
        DataSource& operator=(const DataSource &) = default ;
        DataSource& operator=(DataSource &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->name_ == nullptr; };
        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline DataSource& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The name of the data source.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->dataSource_ == nullptr
        && this->id_ == nullptr && this->priority_ == nullptr && this->runtimeResource_ == nullptr; };
      // dataSource Field Functions 
      bool hasDataSource() const { return this->dataSource_ != nullptr;};
      void deleteDataSource() { this->dataSource_ = nullptr;};
      inline const TaskInstances::DataSource & getDataSource() const { DARABONBA_PTR_GET_CONST(dataSource_, TaskInstances::DataSource) };
      inline TaskInstances::DataSource getDataSource() { DARABONBA_PTR_GET(dataSource_, TaskInstances::DataSource) };
      inline TaskInstances& setDataSource(const TaskInstances::DataSource & dataSource) { DARABONBA_PTR_SET_VALUE(dataSource_, dataSource) };
      inline TaskInstances& setDataSource(TaskInstances::DataSource && dataSource) { DARABONBA_PTR_SET_RVALUE(dataSource_, dataSource) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
      inline TaskInstances& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // priority Field Functions 
      bool hasPriority() const { return this->priority_ != nullptr;};
      void deletePriority() { this->priority_ = nullptr;};
      inline int32_t getPriority() const { DARABONBA_PTR_GET_DEFAULT(priority_, 0) };
      inline TaskInstances& setPriority(int32_t priority) { DARABONBA_PTR_SET_VALUE(priority_, priority) };


      // runtimeResource Field Functions 
      bool hasRuntimeResource() const { return this->runtimeResource_ != nullptr;};
      void deleteRuntimeResource() { this->runtimeResource_ = nullptr;};
      inline string getRuntimeResource() const { DARABONBA_PTR_GET_DEFAULT(runtimeResource_, "") };
      inline TaskInstances& setRuntimeResource(string runtimeResource) { DARABONBA_PTR_SET_VALUE(runtimeResource_, runtimeResource) };


    protected:
      // The information about the associated data source.
      shared_ptr<TaskInstances::DataSource> dataSource_ {};
      // The instance ID.
      // 
      // This parameter is required.
      shared_ptr<int64_t> id_ {};
      // The priority of the instance. Valid values: 1, 3, 5, 7, and 8.
      // 
      // A larger value indicates a higher priority. Default value: 1.
      shared_ptr<int32_t> priority_ {};
      // The resource group information. Set this parameter to the ID of a resource group for scheduling.
      shared_ptr<string> runtimeResource_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->taskInstances_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateTaskInstancesRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // taskInstances Field Functions 
    bool hasTaskInstances() const { return this->taskInstances_ != nullptr;};
    void deleteTaskInstances() { this->taskInstances_ = nullptr;};
    inline const vector<UpdateTaskInstancesRequest::TaskInstances> & getTaskInstances() const { DARABONBA_PTR_GET_CONST(taskInstances_, vector<UpdateTaskInstancesRequest::TaskInstances>) };
    inline vector<UpdateTaskInstancesRequest::TaskInstances> getTaskInstances() { DARABONBA_PTR_GET(taskInstances_, vector<UpdateTaskInstancesRequest::TaskInstances>) };
    inline UpdateTaskInstancesRequest& setTaskInstances(const vector<UpdateTaskInstancesRequest::TaskInstances> & taskInstances) { DARABONBA_PTR_SET_VALUE(taskInstances_, taskInstances) };
    inline UpdateTaskInstancesRequest& setTaskInstances(vector<UpdateTaskInstancesRequest::TaskInstances> && taskInstances) { DARABONBA_PTR_SET_RVALUE(taskInstances_, taskInstances) };


  protected:
    // The remarks.
    shared_ptr<string> comment_ {};
    // The instances.
    shared_ptr<vector<UpdateTaskInstancesRequest::TaskInstances>> taskInstances_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
