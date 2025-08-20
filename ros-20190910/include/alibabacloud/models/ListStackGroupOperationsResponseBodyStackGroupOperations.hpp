// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONSRESPONSEBODYSTACKGROUPOPERATIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTSTACKGROUPOPERATIONSRESPONSEBODYSTACKGROUPOPERATIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class ListStackGroupOperationsResponseBodyStackGroupOperations : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStackGroupOperationsResponseBodyStackGroupOperations& obj) { 
      DARABONBA_PTR_TO_JSON(Action, action_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_TO_JSON(OperationId, operationId_);
      DARABONBA_PTR_TO_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_TO_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListStackGroupOperationsResponseBodyStackGroupOperations& obj) { 
      DARABONBA_PTR_FROM_JSON(Action, action_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OperationDescription, operationDescription_);
      DARABONBA_PTR_FROM_JSON(OperationId, operationId_);
      DARABONBA_PTR_FROM_JSON(StackGroupId, stackGroupId_);
      DARABONBA_PTR_FROM_JSON(StackGroupName, stackGroupName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListStackGroupOperationsResponseBodyStackGroupOperations() = default ;
    ListStackGroupOperationsResponseBodyStackGroupOperations(const ListStackGroupOperationsResponseBodyStackGroupOperations &) = default ;
    ListStackGroupOperationsResponseBodyStackGroupOperations(ListStackGroupOperationsResponseBodyStackGroupOperations &&) = default ;
    ListStackGroupOperationsResponseBodyStackGroupOperations(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStackGroupOperationsResponseBodyStackGroupOperations() = default ;
    ListStackGroupOperationsResponseBodyStackGroupOperations& operator=(const ListStackGroupOperationsResponseBodyStackGroupOperations &) = default ;
    ListStackGroupOperationsResponseBodyStackGroupOperations& operator=(ListStackGroupOperationsResponseBodyStackGroupOperations &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->action_ != nullptr
        && this->createTime_ != nullptr && this->endTime_ != nullptr && this->operationDescription_ != nullptr && this->operationId_ != nullptr && this->stackGroupId_ != nullptr
        && this->stackGroupName_ != nullptr && this->status_ != nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline ListStackGroupOperationsResponseBodyStackGroupOperations& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListStackGroupOperationsResponseBodyStackGroupOperations& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline ListStackGroupOperationsResponseBodyStackGroupOperations& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // operationDescription Field Functions 
    bool hasOperationDescription() const { return this->operationDescription_ != nullptr;};
    void deleteOperationDescription() { this->operationDescription_ = nullptr;};
    inline string operationDescription() const { DARABONBA_PTR_GET_DEFAULT(operationDescription_, "") };
    inline ListStackGroupOperationsResponseBodyStackGroupOperations& setOperationDescription(string operationDescription) { DARABONBA_PTR_SET_VALUE(operationDescription_, operationDescription) };


    // operationId Field Functions 
    bool hasOperationId() const { return this->operationId_ != nullptr;};
    void deleteOperationId() { this->operationId_ = nullptr;};
    inline string operationId() const { DARABONBA_PTR_GET_DEFAULT(operationId_, "") };
    inline ListStackGroupOperationsResponseBodyStackGroupOperations& setOperationId(string operationId) { DARABONBA_PTR_SET_VALUE(operationId_, operationId) };


    // stackGroupId Field Functions 
    bool hasStackGroupId() const { return this->stackGroupId_ != nullptr;};
    void deleteStackGroupId() { this->stackGroupId_ = nullptr;};
    inline string stackGroupId() const { DARABONBA_PTR_GET_DEFAULT(stackGroupId_, "") };
    inline ListStackGroupOperationsResponseBodyStackGroupOperations& setStackGroupId(string stackGroupId) { DARABONBA_PTR_SET_VALUE(stackGroupId_, stackGroupId) };


    // stackGroupName Field Functions 
    bool hasStackGroupName() const { return this->stackGroupName_ != nullptr;};
    void deleteStackGroupName() { this->stackGroupName_ = nullptr;};
    inline string stackGroupName() const { DARABONBA_PTR_GET_DEFAULT(stackGroupName_, "") };
    inline ListStackGroupOperationsResponseBodyStackGroupOperations& setStackGroupName(string stackGroupName) { DARABONBA_PTR_SET_VALUE(stackGroupName_, stackGroupName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStackGroupOperationsResponseBodyStackGroupOperations& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The operation type.
    // 
    // Valid values:
    // 
    // *   CREATE
    // *   UPDATE
    // *   DELETE
    // *   DETECT_DRIFT
    std::shared_ptr<string> action_ = nullptr;
    // The time when the operation was initiated.
    std::shared_ptr<string> createTime_ = nullptr;
    // The time when the operation ended.
    std::shared_ptr<string> endTime_ = nullptr;
    // The description of the operation.
    std::shared_ptr<string> operationDescription_ = nullptr;
    // The operation ID.
    std::shared_ptr<string> operationId_ = nullptr;
    // The ID of the stack group.
    std::shared_ptr<string> stackGroupId_ = nullptr;
    // The name of the stack group.
    std::shared_ptr<string> stackGroupName_ = nullptr;
    // The state of the operation.
    // 
    // Valid values:
    // 
    // *   RUNNING
    // *   SUCCEEDED
    // *   FAILED
    // *   STOPPING
    // *   STOPPED
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
