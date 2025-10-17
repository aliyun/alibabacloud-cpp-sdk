// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSCRIPTCHATREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNSCRIPTCHATREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunScriptChatRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunScriptChatRequest& obj) { 
      DARABONBA_PTR_TO_JSON(prompt, prompt_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, RunScriptChatRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    RunScriptChatRequest() = default ;
    RunScriptChatRequest(const RunScriptChatRequest &) = default ;
    RunScriptChatRequest(RunScriptChatRequest &&) = default ;
    RunScriptChatRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunScriptChatRequest() = default ;
    RunScriptChatRequest& operator=(const RunScriptChatRequest &) = default ;
    RunScriptChatRequest& operator=(RunScriptChatRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prompt_ == nullptr
        && return this->taskId_ == nullptr; };
    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunScriptChatRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunScriptChatRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
