// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTRANSLATEGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNTRANSLATEGENERATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunTranslateGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTranslateGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTranslateGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunTranslateGenerationRequest() = default ;
    RunTranslateGenerationRequest(const RunTranslateGenerationRequest &) = default ;
    RunTranslateGenerationRequest(RunTranslateGenerationRequest &&) = default ;
    RunTranslateGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTranslateGenerationRequest() = default ;
    RunTranslateGenerationRequest& operator=(const RunTranslateGenerationRequest &) = default ;
    RunTranslateGenerationRequest& operator=(RunTranslateGenerationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ReferenceData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReferenceData& obj) { 
        DARABONBA_PTR_TO_JSON(Contents, contents_);
      };
      friend void from_json(const Darabonba::Json& j, ReferenceData& obj) { 
        DARABONBA_PTR_FROM_JSON(Contents, contents_);
      };
      ReferenceData() = default ;
      ReferenceData(const ReferenceData &) = default ;
      ReferenceData(ReferenceData &&) = default ;
      ReferenceData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReferenceData() = default ;
      ReferenceData& operator=(const ReferenceData &) = default ;
      ReferenceData& operator=(ReferenceData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->contents_ == nullptr; };
      // contents Field Functions 
      bool hasContents() const { return this->contents_ != nullptr;};
      void deleteContents() { this->contents_ = nullptr;};
      inline const vector<string> & getContents() const { DARABONBA_PTR_GET_CONST(contents_, vector<string>) };
      inline vector<string> getContents() { DARABONBA_PTR_GET(contents_, vector<string>) };
      inline ReferenceData& setContents(const vector<string> & contents) { DARABONBA_PTR_SET_VALUE(contents_, contents) };
      inline ReferenceData& setContents(vector<string> && contents) { DARABONBA_PTR_SET_RVALUE(contents_, contents) };


    protected:
      // This parameter is required.
      shared_ptr<vector<string>> contents_ {};
    };

    virtual bool empty() const override { return this->prompt_ == nullptr
        && this->referenceData_ == nullptr && this->taskId_ == nullptr && this->workspaceId_ == nullptr; };
    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string getPrompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline RunTranslateGenerationRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // referenceData Field Functions 
    bool hasReferenceData() const { return this->referenceData_ != nullptr;};
    void deleteReferenceData() { this->referenceData_ = nullptr;};
    inline const RunTranslateGenerationRequest::ReferenceData & getReferenceData() const { DARABONBA_PTR_GET_CONST(referenceData_, RunTranslateGenerationRequest::ReferenceData) };
    inline RunTranslateGenerationRequest::ReferenceData getReferenceData() { DARABONBA_PTR_GET(referenceData_, RunTranslateGenerationRequest::ReferenceData) };
    inline RunTranslateGenerationRequest& setReferenceData(const RunTranslateGenerationRequest::ReferenceData & referenceData) { DARABONBA_PTR_SET_VALUE(referenceData_, referenceData) };
    inline RunTranslateGenerationRequest& setReferenceData(RunTranslateGenerationRequest::ReferenceData && referenceData) { DARABONBA_PTR_SET_RVALUE(referenceData_, referenceData) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunTranslateGenerationRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunTranslateGenerationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> prompt_ {};
    // This parameter is required.
    shared_ptr<RunTranslateGenerationRequest::ReferenceData> referenceData_ {};
    shared_ptr<string> taskId_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
