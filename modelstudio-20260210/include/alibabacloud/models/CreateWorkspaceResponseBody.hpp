// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelStudio20260210
{
namespace Models
{
  class CreateWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(httpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateWorkspaceResponseBody() = default ;
    CreateWorkspaceResponseBody(const CreateWorkspaceResponseBody &) = default ;
    CreateWorkspaceResponseBody(CreateWorkspaceResponseBody &&) = default ;
    CreateWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkspaceResponseBody() = default ;
    CreateWorkspaceResponseBody& operator=(const CreateWorkspaceResponseBody &) = default ;
    CreateWorkspaceResponseBody& operator=(CreateWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Workspace : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Workspace& obj) { 
        DARABONBA_PTR_TO_JSON(apiHost, apiHost_);
        DARABONBA_PTR_TO_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(region, region_);
        DARABONBA_PTR_TO_JSON(serviceSite, serviceSite_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
        DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
      };
      friend void from_json(const Darabonba::Json& j, Workspace& obj) { 
        DARABONBA_PTR_FROM_JSON(apiHost, apiHost_);
        DARABONBA_PTR_FROM_JSON(gmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(region, region_);
        DARABONBA_PTR_FROM_JSON(serviceSite, serviceSite_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
        DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
      };
      Workspace() = default ;
      Workspace(const Workspace &) = default ;
      Workspace(Workspace &&) = default ;
      Workspace(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Workspace() = default ;
      Workspace& operator=(const Workspace &) = default ;
      Workspace& operator=(Workspace &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->apiHost_ == nullptr
        && this->gmtCreate_ == nullptr && this->region_ == nullptr && this->serviceSite_ == nullptr && this->workspaceId_ == nullptr && this->workspaceName_ == nullptr; };
      // apiHost Field Functions 
      bool hasApiHost() const { return this->apiHost_ != nullptr;};
      void deleteApiHost() { this->apiHost_ = nullptr;};
      inline string getApiHost() const { DARABONBA_PTR_GET_DEFAULT(apiHost_, "") };
      inline Workspace& setApiHost(string apiHost) { DARABONBA_PTR_SET_VALUE(apiHost_, apiHost) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Workspace& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline Workspace& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      // serviceSite Field Functions 
      bool hasServiceSite() const { return this->serviceSite_ != nullptr;};
      void deleteServiceSite() { this->serviceSite_ = nullptr;};
      inline string getServiceSite() const { DARABONBA_PTR_GET_DEFAULT(serviceSite_, "") };
      inline Workspace& setServiceSite(string serviceSite) { DARABONBA_PTR_SET_VALUE(serviceSite_, serviceSite) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Workspace& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


      // workspaceName Field Functions 
      bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
      void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
      inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
      inline Workspace& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


    protected:
      // API Host。
      shared_ptr<string> apiHost_ {};
      shared_ptr<int64_t> gmtCreate_ {};
      shared_ptr<string> region_ {};
      shared_ptr<string> serviceSite_ {};
      shared_ptr<string> workspaceId_ {};
      shared_ptr<string> workspaceName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr && this->workspace_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateWorkspaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline CreateWorkspaceResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateWorkspaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateWorkspaceResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline const CreateWorkspaceResponseBody::Workspace & getWorkspace() const { DARABONBA_PTR_GET_CONST(workspace_, CreateWorkspaceResponseBody::Workspace) };
    inline CreateWorkspaceResponseBody::Workspace getWorkspace() { DARABONBA_PTR_GET(workspace_, CreateWorkspaceResponseBody::Workspace) };
    inline CreateWorkspaceResponseBody& setWorkspace(const CreateWorkspaceResponseBody::Workspace & workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };
    inline CreateWorkspaceResponseBody& setWorkspace(CreateWorkspaceResponseBody::Workspace && workspace) { DARABONBA_PTR_SET_RVALUE(workspace_, workspace) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<int32_t> httpStatusCode_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
    shared_ptr<CreateWorkspaceResponseBody::Workspace> workspace_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelStudio20260210
#endif
