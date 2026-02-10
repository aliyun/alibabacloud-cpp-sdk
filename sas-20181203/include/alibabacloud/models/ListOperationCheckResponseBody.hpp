// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTOPERATIONCHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTOPERATIONCHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListOperationCheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListOperationCheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(OperationTaskInstanceDetails, operationTaskInstanceDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListOperationCheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(OperationTaskInstanceDetails, operationTaskInstanceDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListOperationCheckResponseBody() = default ;
    ListOperationCheckResponseBody(const ListOperationCheckResponseBody &) = default ;
    ListOperationCheckResponseBody(ListOperationCheckResponseBody &&) = default ;
    ListOperationCheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListOperationCheckResponseBody() = default ;
    ListOperationCheckResponseBody& operator=(const ListOperationCheckResponseBody &) = default ;
    ListOperationCheckResponseBody& operator=(ListOperationCheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationTaskInstanceDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationTaskInstanceDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CheckId, checkId_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(Repair, repair_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, OperationTaskInstanceDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(Repair, repair_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      OperationTaskInstanceDetails() = default ;
      OperationTaskInstanceDetails(const OperationTaskInstanceDetails &) = default ;
      OperationTaskInstanceDetails(OperationTaskInstanceDetails &&) = default ;
      OperationTaskInstanceDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationTaskInstanceDetails() = default ;
      OperationTaskInstanceDetails& operator=(const OperationTaskInstanceDetails &) = default ;
      OperationTaskInstanceDetails& operator=(OperationTaskInstanceDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Repair : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Repair& obj) { 
          DARABONBA_PTR_TO_JSON(OperateTime, operateTime_);
          DARABONBA_PTR_TO_JSON(RepairConfigs, repairConfigs_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(StatusShowName, statusShowName_);
          DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        };
        friend void from_json(const Darabonba::Json& j, Repair& obj) { 
          DARABONBA_PTR_FROM_JSON(OperateTime, operateTime_);
          DARABONBA_PTR_FROM_JSON(RepairConfigs, repairConfigs_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(StatusShowName, statusShowName_);
          DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        };
        Repair() = default ;
        Repair(const Repair &) = default ;
        Repair(Repair &&) = default ;
        Repair(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Repair() = default ;
        Repair& operator=(const Repair &) = default ;
        Repair& operator=(Repair &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class RepairConfigs : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const RepairConfigs& obj) { 
            DARABONBA_PTR_TO_JSON(FlowId, flowId_);
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(ShowName, showName_);
            DARABONBA_PTR_TO_JSON(TypeDefine, typeDefine_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, RepairConfigs& obj) { 
            DARABONBA_PTR_FROM_JSON(FlowId, flowId_);
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(ShowName, showName_);
            DARABONBA_PTR_FROM_JSON(TypeDefine, typeDefine_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          RepairConfigs() = default ;
          RepairConfigs(const RepairConfigs &) = default ;
          RepairConfigs(RepairConfigs &&) = default ;
          RepairConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~RepairConfigs() = default ;
          RepairConfigs& operator=(const RepairConfigs &) = default ;
          RepairConfigs& operator=(RepairConfigs &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->flowId_ == nullptr
        && this->name_ == nullptr && this->showName_ == nullptr && this->typeDefine_ == nullptr && this->value_ == nullptr; };
          // flowId Field Functions 
          bool hasFlowId() const { return this->flowId_ != nullptr;};
          void deleteFlowId() { this->flowId_ = nullptr;};
          inline string getFlowId() const { DARABONBA_PTR_GET_DEFAULT(flowId_, "") };
          inline RepairConfigs& setFlowId(string flowId) { DARABONBA_PTR_SET_VALUE(flowId_, flowId) };


          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline RepairConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // showName Field Functions 
          bool hasShowName() const { return this->showName_ != nullptr;};
          void deleteShowName() { this->showName_ = nullptr;};
          inline string getShowName() const { DARABONBA_PTR_GET_DEFAULT(showName_, "") };
          inline RepairConfigs& setShowName(string showName) { DARABONBA_PTR_SET_VALUE(showName_, showName) };


          // typeDefine Field Functions 
          bool hasTypeDefine() const { return this->typeDefine_ != nullptr;};
          void deleteTypeDefine() { this->typeDefine_ = nullptr;};
          inline string getTypeDefine() const { DARABONBA_PTR_GET_DEFAULT(typeDefine_, "") };
          inline RepairConfigs& setTypeDefine(string typeDefine) { DARABONBA_PTR_SET_VALUE(typeDefine_, typeDefine) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline RepairConfigs& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // ID of the repair process during the repair operation.
          shared_ptr<string> flowId_ {};
          // Name of the repair parameter.
          shared_ptr<string> name_ {};
          // Display name.
          shared_ptr<string> showName_ {};
          // JSON string for the custom configuration type of the check item.
          shared_ptr<string> typeDefine_ {};
          // Real-time value of the parameter for the instance.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->operateTime_ == nullptr
        && this->repairConfigs_ == nullptr && this->status_ == nullptr && this->statusShowName_ == nullptr && this->taskId_ == nullptr; };
        // operateTime Field Functions 
        bool hasOperateTime() const { return this->operateTime_ != nullptr;};
        void deleteOperateTime() { this->operateTime_ = nullptr;};
        inline int64_t getOperateTime() const { DARABONBA_PTR_GET_DEFAULT(operateTime_, 0L) };
        inline Repair& setOperateTime(int64_t operateTime) { DARABONBA_PTR_SET_VALUE(operateTime_, operateTime) };


        // repairConfigs Field Functions 
        bool hasRepairConfigs() const { return this->repairConfigs_ != nullptr;};
        void deleteRepairConfigs() { this->repairConfigs_ = nullptr;};
        inline const vector<Repair::RepairConfigs> & getRepairConfigs() const { DARABONBA_PTR_GET_CONST(repairConfigs_, vector<Repair::RepairConfigs>) };
        inline vector<Repair::RepairConfigs> getRepairConfigs() { DARABONBA_PTR_GET(repairConfigs_, vector<Repair::RepairConfigs>) };
        inline Repair& setRepairConfigs(const vector<Repair::RepairConfigs> & repairConfigs) { DARABONBA_PTR_SET_VALUE(repairConfigs_, repairConfigs) };
        inline Repair& setRepairConfigs(vector<Repair::RepairConfigs> && repairConfigs) { DARABONBA_PTR_SET_RVALUE(repairConfigs_, repairConfigs) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline Repair& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // statusShowName Field Functions 
        bool hasStatusShowName() const { return this->statusShowName_ != nullptr;};
        void deleteStatusShowName() { this->statusShowName_ = nullptr;};
        inline string getStatusShowName() const { DARABONBA_PTR_GET_DEFAULT(statusShowName_, "") };
        inline Repair& setStatusShowName(string statusShowName) { DARABONBA_PTR_SET_VALUE(statusShowName_, statusShowName) };


        // taskId Field Functions 
        bool hasTaskId() const { return this->taskId_ != nullptr;};
        void deleteTaskId() { this->taskId_ = nullptr;};
        inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
        inline Repair& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      protected:
        // Timestamp for processing the risk. Unit: milliseconds.
        shared_ptr<int64_t> operateTime_ {};
        // Fix the corresponding configuration information.
        shared_ptr<vector<Repair::RepairConfigs>> repairConfigs_ {};
        // Status of the corresponding task.
        shared_ptr<string> status_ {};
        // Display name of the repair task status.
        shared_ptr<string> statusShowName_ {};
        // TaskId of the operation task.
        shared_ptr<string> taskId_ {};
      };

      virtual bool empty() const override { return this->checkId_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr && this->repair_ == nullptr && this->type_ == nullptr; };
      // checkId Field Functions 
      bool hasCheckId() const { return this->checkId_ != nullptr;};
      void deleteCheckId() { this->checkId_ = nullptr;};
      inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
      inline OperationTaskInstanceDetails& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline OperationTaskInstanceDetails& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline OperationTaskInstanceDetails& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // repair Field Functions 
      bool hasRepair() const { return this->repair_ != nullptr;};
      void deleteRepair() { this->repair_ = nullptr;};
      inline const vector<OperationTaskInstanceDetails::Repair> & getRepair() const { DARABONBA_PTR_GET_CONST(repair_, vector<OperationTaskInstanceDetails::Repair>) };
      inline vector<OperationTaskInstanceDetails::Repair> getRepair() { DARABONBA_PTR_GET(repair_, vector<OperationTaskInstanceDetails::Repair>) };
      inline OperationTaskInstanceDetails& setRepair(const vector<OperationTaskInstanceDetails::Repair> & repair) { DARABONBA_PTR_SET_VALUE(repair_, repair) };
      inline OperationTaskInstanceDetails& setRepair(vector<OperationTaskInstanceDetails::Repair> && repair) { DARABONBA_PTR_SET_RVALUE(repair_, repair) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline OperationTaskInstanceDetails& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // Check item ID.
      shared_ptr<int64_t> checkId_ {};
      // Instance ID.
      shared_ptr<string> instanceId_ {};
      // Region ID.
      shared_ptr<string> regionId_ {};
      // Information about the repair task.
      shared_ptr<vector<OperationTaskInstanceDetails::Repair>> repair_ {};
      // The operation type of the corresponding task:
      //  - **REPAIR**: Repair task 
      // - **ROLLBACK**: Rollback task
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->operationTaskInstanceDetails_ == nullptr
        && this->requestId_ == nullptr; };
    // operationTaskInstanceDetails Field Functions 
    bool hasOperationTaskInstanceDetails() const { return this->operationTaskInstanceDetails_ != nullptr;};
    void deleteOperationTaskInstanceDetails() { this->operationTaskInstanceDetails_ = nullptr;};
    inline const vector<ListOperationCheckResponseBody::OperationTaskInstanceDetails> & getOperationTaskInstanceDetails() const { DARABONBA_PTR_GET_CONST(operationTaskInstanceDetails_, vector<ListOperationCheckResponseBody::OperationTaskInstanceDetails>) };
    inline vector<ListOperationCheckResponseBody::OperationTaskInstanceDetails> getOperationTaskInstanceDetails() { DARABONBA_PTR_GET(operationTaskInstanceDetails_, vector<ListOperationCheckResponseBody::OperationTaskInstanceDetails>) };
    inline ListOperationCheckResponseBody& setOperationTaskInstanceDetails(const vector<ListOperationCheckResponseBody::OperationTaskInstanceDetails> & operationTaskInstanceDetails) { DARABONBA_PTR_SET_VALUE(operationTaskInstanceDetails_, operationTaskInstanceDetails) };
    inline ListOperationCheckResponseBody& setOperationTaskInstanceDetails(vector<ListOperationCheckResponseBody::OperationTaskInstanceDetails> && operationTaskInstanceDetails) { DARABONBA_PTR_SET_RVALUE(operationTaskInstanceDetails_, operationTaskInstanceDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListOperationCheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Detailed information about the operation instances.
    shared_ptr<vector<ListOperationCheckResponseBody::OperationTaskInstanceDetails>> operationTaskInstanceDetails_ {};
    // The ID of the current call request, which is a unique identifier generated by Alibaba Cloud for the request, and can be used for troubleshooting and problem localization.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
