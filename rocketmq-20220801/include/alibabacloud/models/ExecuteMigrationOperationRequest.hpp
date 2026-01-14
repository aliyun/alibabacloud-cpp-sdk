// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RocketMQ20220801
{
namespace Models
{
  class ExecuteMigrationOperationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteMigrationOperationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(operationParam, operationParam_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteMigrationOperationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(operationParam, operationParam_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
    };
    ExecuteMigrationOperationRequest() = default ;
    ExecuteMigrationOperationRequest(const ExecuteMigrationOperationRequest &) = default ;
    ExecuteMigrationOperationRequest(ExecuteMigrationOperationRequest &&) = default ;
    ExecuteMigrationOperationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteMigrationOperationRequest() = default ;
    ExecuteMigrationOperationRequest& operator=(const ExecuteMigrationOperationRequest &) = default ;
    ExecuteMigrationOperationRequest& operator=(ExecuteMigrationOperationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class OperationParam : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const OperationParam& obj) { 
        DARABONBA_ANY_TO_JSON(paramData, paramData_);
      };
      friend void from_json(const Darabonba::Json& j, OperationParam& obj) { 
        DARABONBA_ANY_FROM_JSON(paramData, paramData_);
      };
      OperationParam() = default ;
      OperationParam(const OperationParam &) = default ;
      OperationParam(OperationParam &&) = default ;
      OperationParam(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~OperationParam() = default ;
      OperationParam& operator=(const OperationParam &) = default ;
      OperationParam& operator=(OperationParam &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramData_ == nullptr; };
      // paramData Field Functions 
      bool hasParamData() const { return this->paramData_ != nullptr;};
      void deleteParamData() { this->paramData_ = nullptr;};
      inline       const Darabonba::Json & getParamData() const { DARABONBA_GET(paramData_) };
      Darabonba::Json & getParamData() { DARABONBA_GET(paramData_) };
      inline OperationParam& setParamData(const Darabonba::Json & paramData) { DARABONBA_SET_VALUE(paramData_, paramData) };
      inline OperationParam& setParamData(Darabonba::Json && paramData) { DARABONBA_SET_RVALUE(paramData_, paramData) };


    protected:
      Darabonba::Json paramData_ {};
    };

    virtual bool empty() const override { return this->operationParam_ == nullptr
        && this->instanceId_ == nullptr; };
    // operationParam Field Functions 
    bool hasOperationParam() const { return this->operationParam_ != nullptr;};
    void deleteOperationParam() { this->operationParam_ = nullptr;};
    inline const ExecuteMigrationOperationRequest::OperationParam & getOperationParam() const { DARABONBA_PTR_GET_CONST(operationParam_, ExecuteMigrationOperationRequest::OperationParam) };
    inline ExecuteMigrationOperationRequest::OperationParam getOperationParam() { DARABONBA_PTR_GET(operationParam_, ExecuteMigrationOperationRequest::OperationParam) };
    inline ExecuteMigrationOperationRequest& setOperationParam(const ExecuteMigrationOperationRequest::OperationParam & operationParam) { DARABONBA_PTR_SET_VALUE(operationParam_, operationParam) };
    inline ExecuteMigrationOperationRequest& setOperationParam(ExecuteMigrationOperationRequest::OperationParam && operationParam) { DARABONBA_PTR_SET_RVALUE(operationParam_, operationParam) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExecuteMigrationOperationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    shared_ptr<ExecuteMigrationOperationRequest::OperationParam> operationParam_ {};
    shared_ptr<string> instanceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
