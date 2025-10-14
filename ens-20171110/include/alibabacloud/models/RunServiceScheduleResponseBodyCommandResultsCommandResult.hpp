// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSERVICESCHEDULERESPONSEBODYCOMMANDRESULTSCOMMANDRESULT_HPP_
#define ALIBABACLOUD_MODELS_RUNSERVICESCHEDULERESPONSEBODYCOMMANDRESULTSCOMMANDRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class RunServiceScheduleResponseBodyCommandResultsCommandResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunServiceScheduleResponseBodyCommandResultsCommandResult& obj) { 
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(ContainerName, containerName_);
      DARABONBA_PTR_TO_JSON(ResultMsg, resultMsg_);
    };
    friend void from_json(const Darabonba::Json& j, RunServiceScheduleResponseBodyCommandResultsCommandResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(ContainerName, containerName_);
      DARABONBA_PTR_FROM_JSON(ResultMsg, resultMsg_);
    };
    RunServiceScheduleResponseBodyCommandResultsCommandResult() = default ;
    RunServiceScheduleResponseBodyCommandResultsCommandResult(const RunServiceScheduleResponseBodyCommandResultsCommandResult &) = default ;
    RunServiceScheduleResponseBodyCommandResultsCommandResult(RunServiceScheduleResponseBodyCommandResultsCommandResult &&) = default ;
    RunServiceScheduleResponseBodyCommandResultsCommandResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunServiceScheduleResponseBodyCommandResultsCommandResult() = default ;
    RunServiceScheduleResponseBodyCommandResultsCommandResult& operator=(const RunServiceScheduleResponseBodyCommandResultsCommandResult &) = default ;
    RunServiceScheduleResponseBodyCommandResultsCommandResult& operator=(RunServiceScheduleResponseBodyCommandResultsCommandResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->command_ == nullptr
        && return this->containerName_ == nullptr && return this->resultMsg_ == nullptr; };
    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline RunServiceScheduleResponseBodyCommandResultsCommandResult& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // containerName Field Functions 
    bool hasContainerName() const { return this->containerName_ != nullptr;};
    void deleteContainerName() { this->containerName_ = nullptr;};
    inline string containerName() const { DARABONBA_PTR_GET_DEFAULT(containerName_, "") };
    inline RunServiceScheduleResponseBodyCommandResultsCommandResult& setContainerName(string containerName) { DARABONBA_PTR_SET_VALUE(containerName_, containerName) };


    // resultMsg Field Functions 
    bool hasResultMsg() const { return this->resultMsg_ != nullptr;};
    void deleteResultMsg() { this->resultMsg_ = nullptr;};
    inline string resultMsg() const { DARABONBA_PTR_GET_DEFAULT(resultMsg_, "") };
    inline RunServiceScheduleResponseBodyCommandResultsCommandResult& setResultMsg(string resultMsg) { DARABONBA_PTR_SET_VALUE(resultMsg_, resultMsg) };


  protected:
    // The command.
    std::shared_ptr<string> command_ = nullptr;
    // The name of the container.
    std::shared_ptr<string> containerName_ = nullptr;
    // The execution result of the command.
    std::shared_ptr<string> resultMsg_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
