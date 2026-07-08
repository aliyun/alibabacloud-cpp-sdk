// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOSCRIPTGENERATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOSCRIPTGENERATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunVideoScriptGenerateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoScriptGenerateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ScriptLength, scriptLength_);
      DARABONBA_PTR_TO_JSON(ScriptNumber, scriptNumber_);
      DARABONBA_PTR_TO_JSON(UseSearch, useSearch_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoScriptGenerateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ScriptLength, scriptLength_);
      DARABONBA_PTR_FROM_JSON(ScriptNumber, scriptNumber_);
      DARABONBA_PTR_FROM_JSON(UseSearch, useSearch_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunVideoScriptGenerateRequest() = default ;
    RunVideoScriptGenerateRequest(const RunVideoScriptGenerateRequest &) = default ;
    RunVideoScriptGenerateRequest(RunVideoScriptGenerateRequest &&) = default ;
    RunVideoScriptGenerateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoScriptGenerateRequest() = default ;
    RunVideoScriptGenerateRequest& operator=(const RunVideoScriptGenerateRequest &) = default ;
    RunVideoScriptGenerateRequest& operator=(RunVideoScriptGenerateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->language_ == nullptr
        && this->prompt_ == nullptr && this->scriptLength_ == nullptr && this->scriptNumber_ == nullptr && this->useSearch_ == nullptr && this->workspaceId_ == nullptr; };
    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline RunVideoScriptGenerateRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunVideoScriptGenerateRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // scriptLength Field Functions 
    bool hasScriptLength() const { return this->scriptLength_ != nullptr;};
    void deleteScriptLength() { this->scriptLength_ = nullptr;};
    inline string getScriptLength() const { DARABONBA_PTR_GET_DEFAULT(scriptLength_, "") };
    inline RunVideoScriptGenerateRequest& setScriptLength(string scriptLength) { DARABONBA_PTR_SET_VALUE(scriptLength_, scriptLength) };


    // scriptNumber Field Functions 
    bool hasScriptNumber() const { return this->scriptNumber_ != nullptr;};
    void deleteScriptNumber() { this->scriptNumber_ = nullptr;};
    inline int32_t getScriptNumber() const { DARABONBA_PTR_GET_DEFAULT(scriptNumber_, 0) };
    inline RunVideoScriptGenerateRequest& setScriptNumber(int32_t scriptNumber) { DARABONBA_PTR_SET_VALUE(scriptNumber_, scriptNumber) };


    // useSearch Field Functions 
    bool hasUseSearch() const { return this->useSearch_ != nullptr;};
    void deleteUseSearch() { this->useSearch_ = nullptr;};
    inline bool getUseSearch() const { DARABONBA_PTR_GET_DEFAULT(useSearch_, false) };
    inline RunVideoScriptGenerateRequest& setUseSearch(bool useSearch) { DARABONBA_PTR_SET_VALUE(useSearch_, useSearch) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunVideoScriptGenerateRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // The language of the generated script.
    // Recommended values:
    // 
    // zh-CN: Chinese
    // 
    // en-US: English
    // 
    // The default is Chinese.
    shared_ptr<string> language_ {};
    // The prompt for the video script.
    // 
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    // The length of the script. Valid values:
    // 
    // 20\\~75: 10 to 15 seconds of normal speaking time.
    // 
    // 75\\~150: 15 to 30 seconds of normal speaking time.
    // 
    // 150\\~300: Approximately 30 to 60 seconds of normal speaking time.
    // 
    // \\>=300: 60 seconds or more of normal speaking time.
    shared_ptr<string> scriptLength_ {};
    // The number of scripts to generate. The default is 1. You can generate a maximum of three scripts at a time.
    // If you specify multiple scripts, the results are returned in parallel streams. The client distinguishes between the streams using different session IDs.
    shared_ptr<int32_t> scriptNumber_ {};
    // Specifies whether to use an internet search. If you set this to true, the system performs intention recognition and then searches the internet for relevant reference materials.
    shared_ptr<bool> useSearch_ {};
    // The unique ID of the Alibaba Cloud Model Studio workspace. For more information, see [Get a Workspace ID](https://help.aliyun.com/document_detail/2782167.html).
    // 
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
