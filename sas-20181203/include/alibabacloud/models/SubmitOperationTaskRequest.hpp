// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITOPERATIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITOPERATIONTASKREQUEST_HPP_
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
  class SubmitOperationTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitOperationTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_TO_JSON(OperationTaskInstances, operationTaskInstances_);
      DARABONBA_PTR_TO_JSON(RelationKey, relationKey_);
      DARABONBA_PTR_TO_JSON(RepairTempParam, repairTempParam_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitOperationTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(DimensionType, dimensionType_);
      DARABONBA_PTR_FROM_JSON(OperationTaskInstances, operationTaskInstances_);
      DARABONBA_PTR_FROM_JSON(RelationKey, relationKey_);
      DARABONBA_PTR_FROM_JSON(RepairTempParam, repairTempParam_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    SubmitOperationTaskRequest() = default ;
    SubmitOperationTaskRequest(const SubmitOperationTaskRequest &) = default ;
    SubmitOperationTaskRequest(SubmitOperationTaskRequest &&) = default ;
    SubmitOperationTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitOperationTaskRequest() = default ;
    SubmitOperationTaskRequest& operator=(const SubmitOperationTaskRequest &) = default ;
    SubmitOperationTaskRequest& operator=(SubmitOperationTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class RepairTempParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const RepairTempParam& obj) { 
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, RepairTempParam& obj) { 
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      RepairTempParam() = default ;
      RepairTempParam(const RepairTempParam &) = default ;
      RepairTempParam(RepairTempParam &&) = default ;
      RepairTempParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~RepairTempParam() = default ;
      RepairTempParam& operator=(const RepairTempParam &) = default ;
      RepairTempParam& operator=(RepairTempParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline RepairTempParam& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline RepairTempParam& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the temporary repair parameter.
      shared_ptr<string> name_ {};
      // The value of the temporary repair parameter.
      shared_ptr<string> value_ {};
    };

    class OperationTaskInstances : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationTaskInstances& obj) { 
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(TaskId, taskId_);
        DARABONBA_PTR_TO_JSON(Vendor, vendor_);
      };
      friend void from_json(const Darabonba::Json& j, OperationTaskInstances& obj) { 
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
        DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
      };
      OperationTaskInstances() = default ;
      OperationTaskInstances(const OperationTaskInstances &) = default ;
      OperationTaskInstances(OperationTaskInstances &&) = default ;
      OperationTaskInstances(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationTaskInstances() = default ;
      OperationTaskInstances& operator=(const OperationTaskInstances &) = default ;
      OperationTaskInstances& operator=(OperationTaskInstances &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->regionId_ == nullptr && this->taskId_ == nullptr && this->vendor_ == nullptr; };
      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline OperationTaskInstances& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline OperationTaskInstances& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // taskId Field Functions 
      bool hasTaskId() const { return this->taskId_ != nullptr;};
      void deleteTaskId() { this->taskId_ = nullptr;};
      inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
      inline OperationTaskInstances& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


      // vendor Field Functions 
      bool hasVendor() const { return this->vendor_ != nullptr;};
      void deleteVendor() { this->vendor_ = nullptr;};
      inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
      inline OperationTaskInstances& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


    protected:
      // The instance ID of the server.
      shared_ptr<string> instanceId_ {};
      // The region ID of the server.
      shared_ptr<string> regionId_ {};
      // The ID of the task that you want to roll back
      shared_ptr<string> taskId_ {};
      // The service provider of the asset. Valid values:
      // 
      // *   **0**: an asset provided by Alibaba Cloud.
      // *   **1**: an asset outside Alibaba Cloud.
      // *   **2**: an asset in a data center.
      // *   **3**, **4**, **5**, and **7**: an asset from a third-party cloud service provider.
      // *   **8**: a lightweight asset.
      shared_ptr<string> vendor_ {};
    };

    virtual bool empty() const override { return this->checkId_ == nullptr
        && this->dimensionType_ == nullptr && this->operationTaskInstances_ == nullptr && this->relationKey_ == nullptr && this->repairTempParam_ == nullptr && this->type_ == nullptr; };
    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline int64_t getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, 0L) };
    inline SubmitOperationTaskRequest& setCheckId(int64_t checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // dimensionType Field Functions 
    bool hasDimensionType() const { return this->dimensionType_ != nullptr;};
    void deleteDimensionType() { this->dimensionType_ = nullptr;};
    inline string getDimensionType() const { DARABONBA_PTR_GET_DEFAULT(dimensionType_, "") };
    inline SubmitOperationTaskRequest& setDimensionType(string dimensionType) { DARABONBA_PTR_SET_VALUE(dimensionType_, dimensionType) };


    // operationTaskInstances Field Functions 
    bool hasOperationTaskInstances() const { return this->operationTaskInstances_ != nullptr;};
    void deleteOperationTaskInstances() { this->operationTaskInstances_ = nullptr;};
    inline const vector<SubmitOperationTaskRequest::OperationTaskInstances> & getOperationTaskInstances() const { DARABONBA_PTR_GET_CONST(operationTaskInstances_, vector<SubmitOperationTaskRequest::OperationTaskInstances>) };
    inline vector<SubmitOperationTaskRequest::OperationTaskInstances> getOperationTaskInstances() { DARABONBA_PTR_GET(operationTaskInstances_, vector<SubmitOperationTaskRequest::OperationTaskInstances>) };
    inline SubmitOperationTaskRequest& setOperationTaskInstances(const vector<SubmitOperationTaskRequest::OperationTaskInstances> & operationTaskInstances) { DARABONBA_PTR_SET_VALUE(operationTaskInstances_, operationTaskInstances) };
    inline SubmitOperationTaskRequest& setOperationTaskInstances(vector<SubmitOperationTaskRequest::OperationTaskInstances> && operationTaskInstances) { DARABONBA_PTR_SET_RVALUE(operationTaskInstances_, operationTaskInstances) };


    // relationKey Field Functions 
    bool hasRelationKey() const { return this->relationKey_ != nullptr;};
    void deleteRelationKey() { this->relationKey_ = nullptr;};
    inline string getRelationKey() const { DARABONBA_PTR_GET_DEFAULT(relationKey_, "") };
    inline SubmitOperationTaskRequest& setRelationKey(string relationKey) { DARABONBA_PTR_SET_VALUE(relationKey_, relationKey) };


    // repairTempParam Field Functions 
    bool hasRepairTempParam() const { return this->repairTempParam_ != nullptr;};
    void deleteRepairTempParam() { this->repairTempParam_ = nullptr;};
    inline const vector<SubmitOperationTaskRequest::RepairTempParam> & getRepairTempParam() const { DARABONBA_PTR_GET_CONST(repairTempParam_, vector<SubmitOperationTaskRequest::RepairTempParam>) };
    inline vector<SubmitOperationTaskRequest::RepairTempParam> getRepairTempParam() { DARABONBA_PTR_GET(repairTempParam_, vector<SubmitOperationTaskRequest::RepairTempParam>) };
    inline SubmitOperationTaskRequest& setRepairTempParam(const vector<SubmitOperationTaskRequest::RepairTempParam> & repairTempParam) { DARABONBA_PTR_SET_VALUE(repairTempParam_, repairTempParam) };
    inline SubmitOperationTaskRequest& setRepairTempParam(vector<SubmitOperationTaskRequest::RepairTempParam> && repairTempParam) { DARABONBA_PTR_SET_RVALUE(repairTempParam_, repairTempParam) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline SubmitOperationTaskRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the check item.
    // 
    // >  You can call the [ListCheckResult](~~ListCheckResult~~) operation to obtain the ID of the check item.
    // 
    // This parameter is required.
    shared_ptr<int64_t> checkId_ {};
    // The dimension of the task that you want to submit. Valid values:
    // 
    // *   Instance dimension: INSTANCE
    // *   Check item dimension: CHECK_ID
    shared_ptr<string> dimensionType_ {};
    // The asset information required to submit the tasks for instances.
    shared_ptr<vector<SubmitOperationTaskRequest::OperationTaskInstances>> operationTaskInstances_ {};
    // The key linked to cross-page selections during task submission.
    // 
    // >  You can call the [CreateAssetSelectionConfig](~~CreateAssetSelectionConfig~~) operation to query the associated key from the BusinessType field.
    shared_ptr<string> relationKey_ {};
    // The temporary parameters required for the repair task.
    shared_ptr<vector<SubmitOperationTaskRequest::RepairTempParam>> repairTempParam_ {};
    // The type of the task that you want to submit. Valid values:
    // 
    // *   Repair task: REPAIR
    // *   Rollback task: ROLLBACK
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
