// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTPOLARCLAWGATEWAYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RESTARTPOLARCLAWGATEWAYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class RestartPolarClawGatewayResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartPolarClawGatewayResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DowntimeMs, downtimeMs_);
      DARABONBA_PTR_TO_JSON(GatewayVersion, gatewayVersion_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(Ok, ok_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Restarted, restarted_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RestartPolarClawGatewayResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DowntimeMs, downtimeMs_);
      DARABONBA_PTR_FROM_JSON(GatewayVersion, gatewayVersion_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(Ok, ok_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Restarted, restarted_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    RestartPolarClawGatewayResponseBody() = default ;
    RestartPolarClawGatewayResponseBody(const RestartPolarClawGatewayResponseBody &) = default ;
    RestartPolarClawGatewayResponseBody(RestartPolarClawGatewayResponseBody &&) = default ;
    RestartPolarClawGatewayResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartPolarClawGatewayResponseBody() = default ;
    RestartPolarClawGatewayResponseBody& operator=(const RestartPolarClawGatewayResponseBody &) = default ;
    RestartPolarClawGatewayResponseBody& operator=(RestartPolarClawGatewayResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->downtimeMs_ == nullptr && this->gatewayVersion_ == nullptr && this->message_ == nullptr && this->mode_ == nullptr
        && this->ok_ == nullptr && this->operation_ == nullptr && this->requestId_ == nullptr && this->restarted_ == nullptr && this->state_ == nullptr
        && this->taskId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline RestartPolarClawGatewayResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline RestartPolarClawGatewayResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // downtimeMs Field Functions 
    bool hasDowntimeMs() const { return this->downtimeMs_ != nullptr;};
    void deleteDowntimeMs() { this->downtimeMs_ = nullptr;};
    inline int64_t getDowntimeMs() const { DARABONBA_PTR_GET_DEFAULT(downtimeMs_, 0L) };
    inline RestartPolarClawGatewayResponseBody& setDowntimeMs(int64_t downtimeMs) { DARABONBA_PTR_SET_VALUE(downtimeMs_, downtimeMs) };


    // gatewayVersion Field Functions 
    bool hasGatewayVersion() const { return this->gatewayVersion_ != nullptr;};
    void deleteGatewayVersion() { this->gatewayVersion_ = nullptr;};
    inline string getGatewayVersion() const { DARABONBA_PTR_GET_DEFAULT(gatewayVersion_, "") };
    inline RestartPolarClawGatewayResponseBody& setGatewayVersion(string gatewayVersion) { DARABONBA_PTR_SET_VALUE(gatewayVersion_, gatewayVersion) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RestartPolarClawGatewayResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string getMode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline RestartPolarClawGatewayResponseBody& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // ok Field Functions 
    bool hasOk() const { return this->ok_ != nullptr;};
    void deleteOk() { this->ok_ = nullptr;};
    inline bool getOk() const { DARABONBA_PTR_GET_DEFAULT(ok_, false) };
    inline RestartPolarClawGatewayResponseBody& setOk(bool ok) { DARABONBA_PTR_SET_VALUE(ok_, ok) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline RestartPolarClawGatewayResponseBody& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RestartPolarClawGatewayResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restarted Field Functions 
    bool hasRestarted() const { return this->restarted_ != nullptr;};
    void deleteRestarted() { this->restarted_ = nullptr;};
    inline bool getRestarted() const { DARABONBA_PTR_GET_DEFAULT(restarted_, false) };
    inline RestartPolarClawGatewayResponseBody& setRestarted(bool restarted) { DARABONBA_PTR_SET_VALUE(restarted_, restarted) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline RestartPolarClawGatewayResponseBody& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RestartPolarClawGatewayResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> applicationId_ {};
    shared_ptr<int32_t> code_ {};
    shared_ptr<int64_t> downtimeMs_ {};
    shared_ptr<string> gatewayVersion_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> mode_ {};
    shared_ptr<bool> ok_ {};
    shared_ptr<string> operation_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> restarted_ {};
    shared_ptr<string> state_ {};
    shared_ptr<string> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
