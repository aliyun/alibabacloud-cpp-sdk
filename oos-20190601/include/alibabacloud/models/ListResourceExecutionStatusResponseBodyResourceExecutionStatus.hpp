// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEEXECUTIONSTATUSRESPONSEBODYRESOURCEEXECUTIONSTATUS_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEEXECUTIONSTATUSRESPONSEBODYRESOURCEEXECUTIONSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListResourceExecutionStatusResponseBodyResourceExecutionStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceExecutionStatusResponseBodyResourceExecutionStatus& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_TO_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_TO_JSON(Outputs, outputs_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceExecutionStatusResponseBodyResourceExecutionStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionId, executionId_);
      DARABONBA_PTR_FROM_JSON(ExecutionTime, executionTime_);
      DARABONBA_PTR_FROM_JSON(Outputs, outputs_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    ListResourceExecutionStatusResponseBodyResourceExecutionStatus() = default ;
    ListResourceExecutionStatusResponseBodyResourceExecutionStatus(const ListResourceExecutionStatusResponseBodyResourceExecutionStatus &) = default ;
    ListResourceExecutionStatusResponseBodyResourceExecutionStatus(ListResourceExecutionStatusResponseBodyResourceExecutionStatus &&) = default ;
    ListResourceExecutionStatusResponseBodyResourceExecutionStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceExecutionStatusResponseBodyResourceExecutionStatus() = default ;
    ListResourceExecutionStatusResponseBodyResourceExecutionStatus& operator=(const ListResourceExecutionStatusResponseBodyResourceExecutionStatus &) = default ;
    ListResourceExecutionStatusResponseBodyResourceExecutionStatus& operator=(ListResourceExecutionStatusResponseBodyResourceExecutionStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionId_ == nullptr
        && return this->executionTime_ == nullptr && return this->outputs_ == nullptr && return this->resourceId_ == nullptr && return this->status_ == nullptr; };
    // executionId Field Functions 
    bool hasExecutionId() const { return this->executionId_ != nullptr;};
    void deleteExecutionId() { this->executionId_ = nullptr;};
    inline string executionId() const { DARABONBA_PTR_GET_DEFAULT(executionId_, "") };
    inline ListResourceExecutionStatusResponseBodyResourceExecutionStatus& setExecutionId(string executionId) { DARABONBA_PTR_SET_VALUE(executionId_, executionId) };


    // executionTime Field Functions 
    bool hasExecutionTime() const { return this->executionTime_ != nullptr;};
    void deleteExecutionTime() { this->executionTime_ = nullptr;};
    inline string executionTime() const { DARABONBA_PTR_GET_DEFAULT(executionTime_, "") };
    inline ListResourceExecutionStatusResponseBodyResourceExecutionStatus& setExecutionTime(string executionTime) { DARABONBA_PTR_SET_VALUE(executionTime_, executionTime) };


    // outputs Field Functions 
    bool hasOutputs() const { return this->outputs_ != nullptr;};
    void deleteOutputs() { this->outputs_ = nullptr;};
    inline string outputs() const { DARABONBA_PTR_GET_DEFAULT(outputs_, "") };
    inline ListResourceExecutionStatusResponseBodyResourceExecutionStatus& setOutputs(string outputs) { DARABONBA_PTR_SET_VALUE(outputs_, outputs) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline ListResourceExecutionStatusResponseBodyResourceExecutionStatus& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListResourceExecutionStatusResponseBodyResourceExecutionStatus& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The ID of the execution.
    std::shared_ptr<string> executionId_ = nullptr;
    // The time when the execution started running.
    std::shared_ptr<string> executionTime_ = nullptr;
    // The output of the template.
    std::shared_ptr<string> outputs_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The status of the execution.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
