// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNOTEBOOKANDSUBMITTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNOTEBOOKANDSUBMITTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dms20250414
{
namespace Models
{
  class GetNotebookAndSubmitTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNotebookAndSubmitTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Params, params_);
      DARABONBA_PTR_TO_JSON(Path, path_);
      DARABONBA_PTR_TO_JSON(Retry, retry_);
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNotebookAndSubmitTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Params, params_);
      DARABONBA_PTR_FROM_JSON(Path, path_);
      DARABONBA_PTR_FROM_JSON(Retry, retry_);
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetNotebookAndSubmitTaskRequest() = default ;
    GetNotebookAndSubmitTaskRequest(const GetNotebookAndSubmitTaskRequest &) = default ;
    GetNotebookAndSubmitTaskRequest(GetNotebookAndSubmitTaskRequest &&) = default ;
    GetNotebookAndSubmitTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNotebookAndSubmitTaskRequest() = default ;
    GetNotebookAndSubmitTaskRequest& operator=(const GetNotebookAndSubmitTaskRequest &) = default ;
    GetNotebookAndSubmitTaskRequest& operator=(GetNotebookAndSubmitTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->params_ == nullptr
        && this->path_ == nullptr && this->retry_ == nullptr && this->sessionId_ == nullptr && this->workspaceId_ == nullptr; };
    // params Field Functions 
    bool hasParams() const { return this->params_ != nullptr;};
    void deleteParams() { this->params_ = nullptr;};
    inline string getParams() const { DARABONBA_PTR_GET_DEFAULT(params_, "") };
    inline GetNotebookAndSubmitTaskRequest& setParams(string params) { DARABONBA_PTR_SET_VALUE(params_, params) };


    // path Field Functions 
    bool hasPath() const { return this->path_ != nullptr;};
    void deletePath() { this->path_ = nullptr;};
    inline string getPath() const { DARABONBA_PTR_GET_DEFAULT(path_, "") };
    inline GetNotebookAndSubmitTaskRequest& setPath(string path) { DARABONBA_PTR_SET_VALUE(path_, path) };


    // retry Field Functions 
    bool hasRetry() const { return this->retry_ != nullptr;};
    void deleteRetry() { this->retry_ = nullptr;};
    inline int64_t getRetry() const { DARABONBA_PTR_GET_DEFAULT(retry_, 0L) };
    inline GetNotebookAndSubmitTaskRequest& setRetry(int64_t retry) { DARABONBA_PTR_SET_VALUE(retry_, retry) };


    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline GetNotebookAndSubmitTaskRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetNotebookAndSubmitTaskRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> params_ {};
    // This parameter is required.
    shared_ptr<string> path_ {};
    shared_ptr<int64_t> retry_ {};
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dms20250414
#endif
