// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSERVICESCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSERVICESCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunServiceScheduleResponseBodyCommandResults.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RunServiceScheduleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunServiceScheduleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommandResults, commandResults_);
      DARABONBA_PTR_TO_JSON(Index, index_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_TO_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RequestRepeated, requestRepeated_);
      DARABONBA_PTR_TO_JSON(TcpPorts, tcpPorts_);
    };
    friend void from_json(const Darabonba::Json& j, RunServiceScheduleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandResults, commandResults_);
      DARABONBA_PTR_FROM_JSON(Index, index_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceIp, instanceIp_);
      DARABONBA_PTR_FROM_JSON(InstancePort, instancePort_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RequestRepeated, requestRepeated_);
      DARABONBA_PTR_FROM_JSON(TcpPorts, tcpPorts_);
    };
    RunServiceScheduleResponseBody() = default ;
    RunServiceScheduleResponseBody(const RunServiceScheduleResponseBody &) = default ;
    RunServiceScheduleResponseBody(RunServiceScheduleResponseBody &&) = default ;
    RunServiceScheduleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunServiceScheduleResponseBody() = default ;
    RunServiceScheduleResponseBody& operator=(const RunServiceScheduleResponseBody &) = default ;
    RunServiceScheduleResponseBody& operator=(RunServiceScheduleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->commandResults_ != nullptr
        && this->index_ != nullptr && this->instanceId_ != nullptr && this->instanceIp_ != nullptr && this->instancePort_ != nullptr && this->requestId_ != nullptr
        && this->requestRepeated_ != nullptr && this->tcpPorts_ != nullptr; };
    // commandResults Field Functions 
    bool hasCommandResults() const { return this->commandResults_ != nullptr;};
    void deleteCommandResults() { this->commandResults_ = nullptr;};
    inline const RunServiceScheduleResponseBodyCommandResults & commandResults() const { DARABONBA_PTR_GET_CONST(commandResults_, RunServiceScheduleResponseBodyCommandResults) };
    inline RunServiceScheduleResponseBodyCommandResults commandResults() { DARABONBA_PTR_GET(commandResults_, RunServiceScheduleResponseBodyCommandResults) };
    inline RunServiceScheduleResponseBody& setCommandResults(const RunServiceScheduleResponseBodyCommandResults & commandResults) { DARABONBA_PTR_SET_VALUE(commandResults_, commandResults) };
    inline RunServiceScheduleResponseBody& setCommandResults(RunServiceScheduleResponseBodyCommandResults && commandResults) { DARABONBA_PTR_SET_RVALUE(commandResults_, commandResults) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t index() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline RunServiceScheduleResponseBody& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RunServiceScheduleResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string instanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline RunServiceScheduleResponseBody& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // instancePort Field Functions 
    bool hasInstancePort() const { return this->instancePort_ != nullptr;};
    void deleteInstancePort() { this->instancePort_ = nullptr;};
    inline int32_t instancePort() const { DARABONBA_PTR_GET_DEFAULT(instancePort_, 0) };
    inline RunServiceScheduleResponseBody& setInstancePort(int32_t instancePort) { DARABONBA_PTR_SET_VALUE(instancePort_, instancePort) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunServiceScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestRepeated Field Functions 
    bool hasRequestRepeated() const { return this->requestRepeated_ != nullptr;};
    void deleteRequestRepeated() { this->requestRepeated_ = nullptr;};
    inline string requestRepeated() const { DARABONBA_PTR_GET_DEFAULT(requestRepeated_, "") };
    inline RunServiceScheduleResponseBody& setRequestRepeated(string requestRepeated) { DARABONBA_PTR_SET_VALUE(requestRepeated_, requestRepeated) };


    // tcpPorts Field Functions 
    bool hasTcpPorts() const { return this->tcpPorts_ != nullptr;};
    void deleteTcpPorts() { this->tcpPorts_ = nullptr;};
    inline bool tcpPorts() const { DARABONBA_PTR_GET_DEFAULT(tcpPorts_, false) };
    inline RunServiceScheduleResponseBody& setTcpPorts(bool tcpPorts) { DARABONBA_PTR_SET_VALUE(tcpPorts_, tcpPorts) };


  protected:
    // The execution results of the commands.
    std::shared_ptr<RunServiceScheduleResponseBodyCommandResults> commandResults_ = nullptr;
    // The index number of the scheduled virtual device (pod).
    std::shared_ptr<int32_t> index_ = nullptr;
    // The ID of the scheduled instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the scheduled instance.
    std::shared_ptr<string> instanceIp_ = nullptr;
    // The start port of the scheduled instance.
    std::shared_ptr<int32_t> instancePort_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is repeated. This parameter is not returned if ServcieAction is set to Console.
    std::shared_ptr<string> requestRepeated_ = nullptr;
    // The TCP port range of the scheduled instance or container. The value is in the ${from}-$-{to} format. Example: 80-88.
    std::shared_ptr<bool> tcpPorts_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
