// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNTITLEGENERATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RUNTITLEGENERATIONREQUEST_HPP_
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
  class RunTitleGenerationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunTitleGenerationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeduplicatedTitles, deduplicatedTitles_);
      DARABONBA_PTR_TO_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TitleCount, titleCount_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, RunTitleGenerationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeduplicatedTitles, deduplicatedTitles_);
      DARABONBA_PTR_FROM_JSON(ReferenceData, referenceData_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TitleCount, titleCount_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    RunTitleGenerationRequest() = default ;
    RunTitleGenerationRequest(const RunTitleGenerationRequest &) = default ;
    RunTitleGenerationRequest(RunTitleGenerationRequest &&) = default ;
    RunTitleGenerationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunTitleGenerationRequest() = default ;
    RunTitleGenerationRequest& operator=(const RunTitleGenerationRequest &) = default ;
    RunTitleGenerationRequest& operator=(RunTitleGenerationRequest &&) = default ;
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

    virtual bool empty() const override { return this->deduplicatedTitles_ == nullptr
        && this->referenceData_ == nullptr && this->taskId_ == nullptr && this->titleCount_ == nullptr && this->workspaceId_ == nullptr; };
    // deduplicatedTitles Field Functions 
    bool hasDeduplicatedTitles() const { return this->deduplicatedTitles_ != nullptr;};
    void deleteDeduplicatedTitles() { this->deduplicatedTitles_ = nullptr;};
    inline const vector<string> & getDeduplicatedTitles() const { DARABONBA_PTR_GET_CONST(deduplicatedTitles_, vector<string>) };
    inline vector<string> getDeduplicatedTitles() { DARABONBA_PTR_GET(deduplicatedTitles_, vector<string>) };
    inline RunTitleGenerationRequest& setDeduplicatedTitles(const vector<string> & deduplicatedTitles) { DARABONBA_PTR_SET_VALUE(deduplicatedTitles_, deduplicatedTitles) };
    inline RunTitleGenerationRequest& setDeduplicatedTitles(vector<string> && deduplicatedTitles) { DARABONBA_PTR_SET_RVALUE(deduplicatedTitles_, deduplicatedTitles) };


    // referenceData Field Functions 
    bool hasReferenceData() const { return this->referenceData_ != nullptr;};
    void deleteReferenceData() { this->referenceData_ = nullptr;};
    inline const RunTitleGenerationRequest::ReferenceData & getReferenceData() const { DARABONBA_PTR_GET_CONST(referenceData_, RunTitleGenerationRequest::ReferenceData) };
    inline RunTitleGenerationRequest::ReferenceData getReferenceData() { DARABONBA_PTR_GET(referenceData_, RunTitleGenerationRequest::ReferenceData) };
    inline RunTitleGenerationRequest& setReferenceData(const RunTitleGenerationRequest::ReferenceData & referenceData) { DARABONBA_PTR_SET_VALUE(referenceData_, referenceData) };
    inline RunTitleGenerationRequest& setReferenceData(RunTitleGenerationRequest::ReferenceData && referenceData) { DARABONBA_PTR_SET_RVALUE(referenceData_, referenceData) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline RunTitleGenerationRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // titleCount Field Functions 
    bool hasTitleCount() const { return this->titleCount_ != nullptr;};
    void deleteTitleCount() { this->titleCount_ = nullptr;};
    inline string getTitleCount() const { DARABONBA_PTR_GET_DEFAULT(titleCount_, "") };
    inline RunTitleGenerationRequest& setTitleCount(string titleCount) { DARABONBA_PTR_SET_VALUE(titleCount_, titleCount) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline RunTitleGenerationRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    shared_ptr<vector<string>> deduplicatedTitles_ {};
    // This parameter is required.
    shared_ptr<RunTitleGenerationRequest::ReferenceData> referenceData_ {};
    shared_ptr<string> taskId_ {};
    shared_ptr<string> titleCount_ {};
    // This parameter is required.
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
