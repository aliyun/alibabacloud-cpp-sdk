// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNAPPINSTANCECOMMANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNAPPINSTANCECOMMANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class RunAppInstanceCommandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunAppInstanceCommandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CommandResultModel, commandResultModel_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunAppInstanceCommandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandResultModel, commandResultModel_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunAppInstanceCommandResponseBody() = default ;
    RunAppInstanceCommandResponseBody(const RunAppInstanceCommandResponseBody &) = default ;
    RunAppInstanceCommandResponseBody(RunAppInstanceCommandResponseBody &&) = default ;
    RunAppInstanceCommandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunAppInstanceCommandResponseBody() = default ;
    RunAppInstanceCommandResponseBody& operator=(const RunAppInstanceCommandResponseBody &) = default ;
    RunAppInstanceCommandResponseBody& operator=(RunAppInstanceCommandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CommandResultModel : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CommandResultModel& obj) { 
        DARABONBA_PTR_TO_JSON(InvocationId, invocationId_);
      };
      friend void from_json(const Darabonba::Json& j, CommandResultModel& obj) { 
        DARABONBA_PTR_FROM_JSON(InvocationId, invocationId_);
      };
      CommandResultModel() = default ;
      CommandResultModel(const CommandResultModel &) = default ;
      CommandResultModel(CommandResultModel &&) = default ;
      CommandResultModel(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CommandResultModel() = default ;
      CommandResultModel& operator=(const CommandResultModel &) = default ;
      CommandResultModel& operator=(CommandResultModel &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->invocationId_ == nullptr; };
      // invocationId Field Functions 
      bool hasInvocationId() const { return this->invocationId_ != nullptr;};
      void deleteInvocationId() { this->invocationId_ = nullptr;};
      inline string getInvocationId() const { DARABONBA_PTR_GET_DEFAULT(invocationId_, "") };
      inline CommandResultModel& setInvocationId(string invocationId) { DARABONBA_PTR_SET_VALUE(invocationId_, invocationId) };


    protected:
      // The command execution ID. When commands are issued in batches to multiple delivery groups, only one execution ID is returned. You can use this ID to call the ListCommandInvocationResults operation to query the command execution results on each session.
      shared_ptr<string> invocationId_ {};
    };

    virtual bool empty() const override { return this->commandResultModel_ == nullptr
        && this->requestId_ == nullptr; };
    // commandResultModel Field Functions 
    bool hasCommandResultModel() const { return this->commandResultModel_ != nullptr;};
    void deleteCommandResultModel() { this->commandResultModel_ = nullptr;};
    inline const RunAppInstanceCommandResponseBody::CommandResultModel & getCommandResultModel() const { DARABONBA_PTR_GET_CONST(commandResultModel_, RunAppInstanceCommandResponseBody::CommandResultModel) };
    inline RunAppInstanceCommandResponseBody::CommandResultModel getCommandResultModel() { DARABONBA_PTR_GET(commandResultModel_, RunAppInstanceCommandResponseBody::CommandResultModel) };
    inline RunAppInstanceCommandResponseBody& setCommandResultModel(const RunAppInstanceCommandResponseBody::CommandResultModel & commandResultModel) { DARABONBA_PTR_SET_VALUE(commandResultModel_, commandResultModel) };
    inline RunAppInstanceCommandResponseBody& setCommandResultModel(RunAppInstanceCommandResponseBody::CommandResultModel && commandResultModel) { DARABONBA_PTR_SET_RVALUE(commandResultModel_, commandResultModel) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunAppInstanceCommandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The command issuance result.
    shared_ptr<RunAppInstanceCommandResponseBody::CommandResultModel> commandResultModel_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
