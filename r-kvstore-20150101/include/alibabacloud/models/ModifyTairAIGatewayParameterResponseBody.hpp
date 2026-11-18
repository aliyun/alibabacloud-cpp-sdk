// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYTAIRAIGATEWAYPARAMETERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_MODIFYTAIRAIGATEWAYPARAMETERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RKvstore20150101
{
namespace Models
{
  class ModifyTairAIGatewayParameterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyTairAIGatewayParameterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyTairAIGatewayParameterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    ModifyTairAIGatewayParameterResponseBody() = default ;
    ModifyTairAIGatewayParameterResponseBody(const ModifyTairAIGatewayParameterResponseBody &) = default ;
    ModifyTairAIGatewayParameterResponseBody(ModifyTairAIGatewayParameterResponseBody &&) = default ;
    ModifyTairAIGatewayParameterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyTairAIGatewayParameterResponseBody() = default ;
    ModifyTairAIGatewayParameterResponseBody& operator=(const ModifyTairAIGatewayParameterResponseBody &) = default ;
    ModifyTairAIGatewayParameterResponseBody& operator=(ModifyTairAIGatewayParameterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->instanceId_ == nullptr
        && this->requestId_ == nullptr && this->taskId_ == nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyTairAIGatewayParameterResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ModifyTairAIGatewayParameterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ModifyTairAIGatewayParameterResponseBody& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The instance ID.
    shared_ptr<string> instanceId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The ID of the created task flow.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RKvstore20150101
#endif
