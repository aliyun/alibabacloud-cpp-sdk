// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONEXECUTIONSRESPONSEBODYREMEDIATIONEXECUTIONDATAREMEDIATIONEXECUTIONS_HPP_
#define ALIBABACLOUD_MODELS_LISTAGGREGATEREMEDIATIONEXECUTIONSRESPONSEBODYREMEDIATIONEXECUTIONDATAREMEDIATIONEXECUTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& obj) { 
      DARABONBA_PTR_TO_JSON(ExecutionCreateDate, executionCreateDate_);
      DARABONBA_PTR_TO_JSON(ExecutionInvocationId, executionInvocationId_);
      DARABONBA_PTR_TO_JSON(ExecutionResourceIds, executionResourceIds_);
      DARABONBA_PTR_TO_JSON(ExecutionResourceType, executionResourceType_);
      DARABONBA_PTR_TO_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_TO_JSON(ExecutionStatusMessage, executionStatusMessage_);
    };
    friend void from_json(const Darabonba::Json& j, ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecutionCreateDate, executionCreateDate_);
      DARABONBA_PTR_FROM_JSON(ExecutionInvocationId, executionInvocationId_);
      DARABONBA_PTR_FROM_JSON(ExecutionResourceIds, executionResourceIds_);
      DARABONBA_PTR_FROM_JSON(ExecutionResourceType, executionResourceType_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatus, executionStatus_);
      DARABONBA_PTR_FROM_JSON(ExecutionStatusMessage, executionStatusMessage_);
    };
    ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions() = default ;
    ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions(const ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions &) = default ;
    ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions(ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions &&) = default ;
    ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions() = default ;
    ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& operator=(const ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions &) = default ;
    ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& operator=(ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->executionCreateDate_ == nullptr
        && return this->executionInvocationId_ == nullptr && return this->executionResourceIds_ == nullptr && return this->executionResourceType_ == nullptr && return this->executionStatus_ == nullptr && return this->executionStatusMessage_ == nullptr; };
    // executionCreateDate Field Functions 
    bool hasExecutionCreateDate() const { return this->executionCreateDate_ != nullptr;};
    void deleteExecutionCreateDate() { this->executionCreateDate_ = nullptr;};
    inline string executionCreateDate() const { DARABONBA_PTR_GET_DEFAULT(executionCreateDate_, "") };
    inline ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& setExecutionCreateDate(string executionCreateDate) { DARABONBA_PTR_SET_VALUE(executionCreateDate_, executionCreateDate) };


    // executionInvocationId Field Functions 
    bool hasExecutionInvocationId() const { return this->executionInvocationId_ != nullptr;};
    void deleteExecutionInvocationId() { this->executionInvocationId_ = nullptr;};
    inline string executionInvocationId() const { DARABONBA_PTR_GET_DEFAULT(executionInvocationId_, "") };
    inline ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& setExecutionInvocationId(string executionInvocationId) { DARABONBA_PTR_SET_VALUE(executionInvocationId_, executionInvocationId) };


    // executionResourceIds Field Functions 
    bool hasExecutionResourceIds() const { return this->executionResourceIds_ != nullptr;};
    void deleteExecutionResourceIds() { this->executionResourceIds_ = nullptr;};
    inline string executionResourceIds() const { DARABONBA_PTR_GET_DEFAULT(executionResourceIds_, "") };
    inline ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& setExecutionResourceIds(string executionResourceIds) { DARABONBA_PTR_SET_VALUE(executionResourceIds_, executionResourceIds) };


    // executionResourceType Field Functions 
    bool hasExecutionResourceType() const { return this->executionResourceType_ != nullptr;};
    void deleteExecutionResourceType() { this->executionResourceType_ = nullptr;};
    inline string executionResourceType() const { DARABONBA_PTR_GET_DEFAULT(executionResourceType_, "") };
    inline ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& setExecutionResourceType(string executionResourceType) { DARABONBA_PTR_SET_VALUE(executionResourceType_, executionResourceType) };


    // executionStatus Field Functions 
    bool hasExecutionStatus() const { return this->executionStatus_ != nullptr;};
    void deleteExecutionStatus() { this->executionStatus_ = nullptr;};
    inline string executionStatus() const { DARABONBA_PTR_GET_DEFAULT(executionStatus_, "") };
    inline ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& setExecutionStatus(string executionStatus) { DARABONBA_PTR_SET_VALUE(executionStatus_, executionStatus) };


    // executionStatusMessage Field Functions 
    bool hasExecutionStatusMessage() const { return this->executionStatusMessage_ != nullptr;};
    void deleteExecutionStatusMessage() { this->executionStatusMessage_ = nullptr;};
    inline string executionStatusMessage() const { DARABONBA_PTR_GET_DEFAULT(executionStatusMessage_, "") };
    inline ListAggregateRemediationExecutionsResponseBodyRemediationExecutionDataRemediationExecutions& setExecutionStatusMessage(string executionStatusMessage) { DARABONBA_PTR_SET_VALUE(executionStatusMessage_, executionStatusMessage) };


  protected:
    // The time when the remediation record was created.
    std::shared_ptr<string> executionCreateDate_ = nullptr;
    // The invocation ID of the remediation record.
    std::shared_ptr<string> executionInvocationId_ = nullptr;
    // The IDs of the remediated resources. Multiple resource IDs are separated with commas (,).
    std::shared_ptr<string> executionResourceIds_ = nullptr;
    // The resource type.
    std::shared_ptr<string> executionResourceType_ = nullptr;
    // The status of the remediation. Valid values:
    // 
    // *   Success
    // *   Failed
    std::shared_ptr<string> executionStatus_ = nullptr;
    // The error message returned when the remediation fails.
    std::shared_ptr<string> executionStatusMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
