// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEMIGRATIONOPERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ExecuteMigrationOperationRequestOperationParam.hpp>
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
    virtual bool empty() const override { return this->operationParam_ == nullptr
        && return this->instanceId_ == nullptr; };
    // operationParam Field Functions 
    bool hasOperationParam() const { return this->operationParam_ != nullptr;};
    void deleteOperationParam() { this->operationParam_ = nullptr;};
    inline const ExecuteMigrationOperationRequestOperationParam & operationParam() const { DARABONBA_PTR_GET_CONST(operationParam_, ExecuteMigrationOperationRequestOperationParam) };
    inline ExecuteMigrationOperationRequestOperationParam operationParam() { DARABONBA_PTR_GET(operationParam_, ExecuteMigrationOperationRequestOperationParam) };
    inline ExecuteMigrationOperationRequest& setOperationParam(const ExecuteMigrationOperationRequestOperationParam & operationParam) { DARABONBA_PTR_SET_VALUE(operationParam_, operationParam) };
    inline ExecuteMigrationOperationRequest& setOperationParam(ExecuteMigrationOperationRequestOperationParam && operationParam) { DARABONBA_PTR_SET_RVALUE(operationParam_, operationParam) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ExecuteMigrationOperationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


  protected:
    std::shared_ptr<ExecuteMigrationOperationRequestOperationParam> operationParam_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RocketMQ20220801
#endif
