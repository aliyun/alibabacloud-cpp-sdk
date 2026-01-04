// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSERVICESCHEDULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSERVICESCHEDULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
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
    class CommandResults : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommandResults& obj) { 
        DARABONBA_PTR_TO_JSON(CommandResult, commandResult_);
      };
      friend void from_json(const Darabonba::Json& j, CommandResults& obj) { 
        DARABONBA_PTR_FROM_JSON(CommandResult, commandResult_);
      };
      CommandResults() = default ;
      CommandResults(const CommandResults &) = default ;
      CommandResults(CommandResults &&) = default ;
      CommandResults(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommandResults() = default ;
      CommandResults& operator=(const CommandResults &) = default ;
      CommandResults& operator=(CommandResults &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CommandResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CommandResult& obj) { 
          DARABONBA_PTR_TO_JSON(Command, command_);
          DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
          DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
        };
        friend void from_json(const Darabonba::Json& j, CommandResult& obj) { 
          DARABONBA_PTR_FROM_JSON(Command, command_);
          DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
          DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
        };
        CommandResult() = default ;
        CommandResult(const CommandResult &) = default ;
        CommandResult(CommandResult &&) = default ;
        CommandResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CommandResult() = default ;
        CommandResult& operator=(const CommandResult &) = default ;
        CommandResult& operator=(CommandResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->command_ == nullptr
        && this->containerName_ == nullptr && this->resultMsg_ == nullptr; };
        // command Field Functions 
        bool hasCommand() const { return this->command_ != nullptr;};
        void deleteCommand() { this->command_ = nullptr;};
        inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
        inline CommandResult& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


        // containerName Field Functions 
        bool hasContainerName() const { return this->containerName_ != nullptr;};
        void deleteContainerName() { this->containerName_ = nullptr;};
        inline string getContainerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
        inline CommandResult& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


        // resultMsg Field Functions 
        bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
        void deleteResultMsg() { this->resultMsg_ = nullptr;};
        inline string getResultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
        inline CommandResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


      protected:
        // The command.
        shared_ptr<string> command_ {};
        // The name of the container.
        shared_ptr<string> containerName_ {};
        // The execution result of the command.
        shared_ptr<string> resultMsg_ {};
      };

      virtual bool empty() const override { return this->commandResult_ == nullptr; };
      // commandResult Field Functions 
      bool hasCommandResult() const { return this->commandResult_ != nullptr;};
      void deleteCommandResult() { this->commandResult_ = nullptr;};
      inline const vector<CommandResults::CommandResult> & getCommandResult() const { DARABONBA_PTR_GET_CONST(commandResult_, vector<CommandResults::CommandResult>) };
      inline vector<CommandResults::CommandResult> getCommandResult() { DARABONBA_PTR_GET(commandResult_, vector<CommandResults::CommandResult>) };
      inline CommandResults& setCommandResult(const vector<CommandResults::CommandResult> & commandResult) { DARABONBA_PTR_SET_VALUE(commandResult_, commandResult) };
      inline CommandResults& setCommandResult(vector<CommandResults::CommandResult> && commandResult) { DARABONBA_PTR_SET_RVALUE(commandResult_, commandResult) };


    protected:
      shared_ptr<vector<CommandResults::CommandResult>> commandResult_ {};
    };

    virtual bool empty() const override { return this->commandResults_ == nullptr
        && this->index_ == nullptr && this->instanceId_ == nullptr && this->instanceIp_ == nullptr && this->instancePort_ == nullptr && this->requestId_ == nullptr
        && this->requestRepeated_ == nullptr && this->tcpPorts_ == nullptr; };
    // commandResults Field Functions 
    bool hasCommandResults() const { return this->commandResults_ != nullptr;};
    void deleteCommandResults() { this->commandResults_ = nullptr;};
    inline const RunServiceScheduleResponseBody::CommandResults & getCommandResults() const { DARABONBA_PTR_GET_CONST(commandResults_, RunServiceScheduleResponseBody::CommandResults) };
    inline RunServiceScheduleResponseBody::CommandResults getCommandResults() { DARABONBA_PTR_GET(commandResults_, RunServiceScheduleResponseBody::CommandResults) };
    inline RunServiceScheduleResponseBody& setCommandResults(const RunServiceScheduleResponseBody::CommandResults & commandResults) { DARABONBA_PTR_SET_VALUE(commandResults_, commandResults) };
    inline RunServiceScheduleResponseBody& setCommandResults(RunServiceScheduleResponseBody::CommandResults && commandResults) { DARABONBA_PTR_SET_RVALUE(commandResults_, commandResults) };


    // index Field Functions 
    bool hasIndex() const { return this->index_ != nullptr;};
    void deleteIndex() { this->index_ = nullptr;};
    inline int32_t getIndex() const { DARABONBA_PTR_GET_DEFAULT(index_, 0) };
    inline RunServiceScheduleResponseBody& setIndex(int32_t index) { DARABONBA_PTR_SET_VALUE(index_, index) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline RunServiceScheduleResponseBody& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceIp Field Functions 
    bool hasInstanceIp() const { return this->instanceIp_ != nullptr;};
    void deleteInstanceIp() { this->instanceIp_ = nullptr;};
    inline string getInstanceIp() const { DARABONBA_PTR_GET_DEFAULT(instanceIp_, "") };
    inline RunServiceScheduleResponseBody& setInstanceIp(string instanceIp) { DARABONBA_PTR_SET_VALUE(instanceIp_, instanceIp) };


    // instancePort Field Functions 
    bool hasInstancePort() const { return this->instancePort_ != nullptr;};
    void deleteInstancePort() { this->instancePort_ = nullptr;};
    inline int32_t getInstancePort() const { DARABONBA_PTR_GET_DEFAULT(instancePort_, 0) };
    inline RunServiceScheduleResponseBody& setInstancePort(int32_t instancePort) { DARABONBA_PTR_SET_VALUE(instancePort_, instancePort) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunServiceScheduleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestRepeated Field Functions 
    bool hasRequestRepeated() const { return this->requestRepeated_ != nullptr;};
    void deleteRequestRepeated() { this->requestRepeated_ = nullptr;};
    inline string getRequestRepeated() const { DARABONBA_PTR_GET_DEFAULT(requestRepeated_, "") };
    inline RunServiceScheduleResponseBody& setRequestRepeated(string requestRepeated) { DARABONBA_PTR_SET_VALUE(requestRepeated_, requestRepeated) };


    // tcpPorts Field Functions 
    bool hasTcpPorts() const { return this->tcpPorts_ != nullptr;};
    void deleteTcpPorts() { this->tcpPorts_ = nullptr;};
    inline bool getTcpPorts() const { DARABONBA_PTR_GET_DEFAULT(tcpPorts_, false) };
    inline RunServiceScheduleResponseBody& setTcpPorts(bool tcpPorts) { DARABONBA_PTR_SET_VALUE(tcpPorts_, tcpPorts) };


  protected:
    // The execution results of the commands.
    shared_ptr<RunServiceScheduleResponseBody::CommandResults> commandResults_ {};
    // The index number of the scheduled virtual device (pod).
    shared_ptr<int32_t> index_ {};
    // The ID of the scheduled instance.
    shared_ptr<string> instanceId_ {};
    // The IP address of the scheduled instance.
    shared_ptr<string> instanceIp_ {};
    // The start port of the scheduled instance.
    shared_ptr<int32_t> instancePort_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is repeated. This parameter is not returned if ServcieAction is set to Console.
    shared_ptr<string> requestRepeated_ {};
    // The TCP port range of the scheduled instance or container. The value is in the ${from}-$-{to} format. Example: 80-88.
    shared_ptr<bool> tcpPorts_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
