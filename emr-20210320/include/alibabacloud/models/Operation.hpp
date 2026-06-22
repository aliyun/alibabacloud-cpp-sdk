// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_OPERATION_HPP_
#define ALIBABACLOUD_MODELS_OPERATION_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/OperationStateChangeReason.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Emr20210320
{
namespace Models
{
  class Operation : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const Operation& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(OperationState, operationState_);
      DARABONBA_PTR_TO_JSON(OperationType, operationType_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StateChangeReason, stateChangeReason_);
    };
    friend void from_json(const Darabonba::Json& j, Operation& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(OperationState, operationState_);
      DARABONBA_PTR_FROM_JSON(OperationType, operationType_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StateChangeReason, stateChangeReason_);
    };
    Operation() = default ;
    Operation(const Operation &) = default ;
    Operation(Operation &&) = default ;
    Operation(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~Operation() = default ;
    Operation& operator=(const Operation &) = default ;
    Operation& operator=(Operation &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->createTime_ == nullptr && this->description_ == nullptr && this->endTime_ == nullptr && this->operationId_ == nullptr && this->operationState_ == nullptr
        && this->operationType_ == nullptr && this->startTime_ == nullptr && this->stateChangeReason_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline Operation& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline Operation& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline Operation& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline Operation& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string getOperationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline Operation& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // operationState Field Functions 
    bool hasOperationState() const { return this->operationState_ != nullptr;};
    void deleteOperationState() { this->operationState_ = nullptr;};
    inline string getOperationState() const { DARABONBA_PTR_GET_DEFAULT(operationState_, "") };
    inline Operation& setOperationState(string operationState) { DARABONBA_PTR_SET_VALUE(operationState_, operationState) };


    // operationType Field Functions 
    bool hasOperationType() const { return this->operationType_ != nullptr;};
    void deleteOperationType() { this->operationType_ = nullptr;};
    inline string getOperationType() const { DARABONBA_PTR_GET_DEFAULT(operationType_, "") };
    inline Operation& setOperationType(string operationType) { DARABONBA_PTR_SET_VALUE(operationType_, operationType) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline Operation& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // stateChangeReason Field Functions 
    bool hasStateChangeReason() const { return this->stateChangeReason_ != nullptr;};
    void deleteStateChangeReason() { this->stateChangeReason_ = nullptr;};
    inline const OperationStateChangeReason & getStateChangeReason() const { DARABONBA_PTR_GET_CONST(stateChangeReason_, OperationStateChangeReason) };
    inline OperationStateChangeReason getStateChangeReason() { DARABONBA_PTR_GET(stateChangeReason_, OperationStateChangeReason) };
    inline Operation& setStateChangeReason(const OperationStateChangeReason & stateChangeReason) { DARABONBA_PTR_SET_VALUE(stateChangeReason_, stateChangeReason) };
    inline Operation& setStateChangeReason(OperationStateChangeReason && stateChangeReason) { DARABONBA_PTR_SET_RVALUE(stateChangeReason_, stateChangeReason) };


  protected:
    // The cluster ID.
    shared_ptr<string> clusterId_ {};
    // The time when the operation was created. This value is a UNIX timestamp, measured in milliseconds.
    shared_ptr<int64_t> createTime_ {};
    // The description of the operation.
    shared_ptr<string> description_ {};
    // The time when the operation ended. This value is a UNIX timestamp, measured in milliseconds.
    shared_ptr<int64_t> endTime_ {};
    // The operation ID.
    shared_ptr<string> operationId_ {};
    // The operation state. Valid values:
    // 
    // - `IN_PROGRESS`: The operation is in progress.
    // 
    // - `COMPLETED`: The operation completed.
    // 
    // - `HUMAN_PROCESSING`: The operation requires manual intervention.
    // 
    // - `FAILED`: The operation failed.
    shared_ptr<string> operationState_ {};
    // The operation type.
    shared_ptr<string> operationType_ {};
    // The time when the operation started. This value is a UNIX timestamp, measured in milliseconds.
    shared_ptr<int64_t> startTime_ {};
    // The reason for the state change.
    shared_ptr<OperationStateChangeReason> stateChangeReason_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Emr20210320
#endif
