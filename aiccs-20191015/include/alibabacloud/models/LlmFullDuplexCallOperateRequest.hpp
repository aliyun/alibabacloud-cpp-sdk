// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LLMFULLDUPLEXCALLOPERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LLMFULLDUPLEXCALLOPERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aiccs20191015
{
namespace Models
{
  class LlmFullDuplexCallOperateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LlmFullDuplexCallOperateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallId, callId_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(Param, param_);
    };
    friend void from_json(const Darabonba::Json& j, LlmFullDuplexCallOperateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallId, callId_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(Param, param_);
    };
    LlmFullDuplexCallOperateRequest() = default ;
    LlmFullDuplexCallOperateRequest(const LlmFullDuplexCallOperateRequest &) = default ;
    LlmFullDuplexCallOperateRequest(LlmFullDuplexCallOperateRequest &&) = default ;
    LlmFullDuplexCallOperateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LlmFullDuplexCallOperateRequest() = default ;
    LlmFullDuplexCallOperateRequest& operator=(const LlmFullDuplexCallOperateRequest &) = default ;
    LlmFullDuplexCallOperateRequest& operator=(LlmFullDuplexCallOperateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callId_ == nullptr
        && this->command_ == nullptr && this->param_ == nullptr; };
    // callId Field Functions 
    bool hasCallId() const { return this->callId_ != nullptr;};
    void deleteCallId() { this->callId_ = nullptr;};
    inline string getCallId() const { DARABONBA_PTR_GET_DEFAULT(callId_, "") };
    inline LlmFullDuplexCallOperateRequest& setCallId(string callId) { DARABONBA_PTR_SET_VALUE(callId_, callId) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline LlmFullDuplexCallOperateRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // param Field Functions 
    bool hasParam() const { return this->param_ != nullptr;};
    void deleteParam() { this->param_ = nullptr;};
    inline string getParam() const { DARABONBA_PTR_GET_DEFAULT(param_, "") };
    inline LlmFullDuplexCallOperateRequest& setParam(string param) { DARABONBA_PTR_SET_VALUE(param_, param) };


  protected:
    // The unique receipt ID of the call. You can obtain this ID by calling the LlmSmartCallFullDuplex operation.
    // 
    // This parameter is required.
    shared_ptr<string> callId_ {};
    // The action command: play / flush / hangup / sendDtmf.
    // 
    // This parameter is required.
    shared_ptr<string> command_ {};
    // The extension parameter, a JSON character string. The metric description for each command:
    shared_ptr<string> param_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aiccs20191015
#endif
