// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ASYNCWRITINGBIDDINGDOCREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ASYNCWRITINGBIDDINGDOCREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class AsyncWritingBiddingDocRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AsyncWritingBiddingDocRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CompanyKeyword, companyKeyword_);
      DARABONBA_PTR_TO_JSON(Prompt, prompt_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, AsyncWritingBiddingDocRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CompanyKeyword, companyKeyword_);
      DARABONBA_PTR_FROM_JSON(Prompt, prompt_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    AsyncWritingBiddingDocRequest() = default ;
    AsyncWritingBiddingDocRequest(const AsyncWritingBiddingDocRequest &) = default ;
    AsyncWritingBiddingDocRequest(AsyncWritingBiddingDocRequest &&) = default ;
    AsyncWritingBiddingDocRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AsyncWritingBiddingDocRequest() = default ;
    AsyncWritingBiddingDocRequest& operator=(const AsyncWritingBiddingDocRequest &) = default ;
    AsyncWritingBiddingDocRequest& operator=(AsyncWritingBiddingDocRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->companyKeyword_ == nullptr
        && return this->prompt_ == nullptr && return this->taskId_ == nullptr && return this->workspaceId_ == nullptr; };
    // companyKeyword Field Functions 
    bool hasCompanyKeyword() const { return this->companyKeyword_ != nullptr;};
    void deleteCompanyKeyword() { this->companyKeyword_ = nullptr;};
    inline string companyKeyword() const { DARABONBA_PTR_GET_DEFAULT(companyKeyword_, "") };
    inline AsyncWritingBiddingDocRequest& setCompanyKeyword(string companyKeyword) { DARABONBA_PTR_SET_VALUE(companyKeyword_, companyKeyword) };


    // prompt Field Functions 
    bool hasPrompt() const { return this->prompt_ != nullptr;};
    void deletePrompt() { this->prompt_ = nullptr;};
    inline string prompt() const { DARABONBA_PTR_GET_DEFAULT(prompt_, "") };
    inline AsyncWritingBiddingDocRequest& setPrompt(string prompt) { DARABONBA_PTR_SET_VALUE(prompt_, prompt) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline AsyncWritingBiddingDocRequest& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline AsyncWritingBiddingDocRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> companyKeyword_ = nullptr;
    std::shared_ptr<string> prompt_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
