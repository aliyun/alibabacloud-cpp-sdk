// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPLUGINWORKSPACERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPLUGINWORKSPACERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class GetPluginWorkspaceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPluginWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPluginWorkspaceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPluginWorkspaceResponseBody() = default ;
    GetPluginWorkspaceResponseBody(const GetPluginWorkspaceResponseBody &) = default ;
    GetPluginWorkspaceResponseBody(GetPluginWorkspaceResponseBody &&) = default ;
    GetPluginWorkspaceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPluginWorkspaceResponseBody() = default ;
    GetPluginWorkspaceResponseBody& operator=(const GetPluginWorkspaceResponseBody &) = default ;
    GetPluginWorkspaceResponseBody& operator=(GetPluginWorkspaceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
        DARABONBA_PTR_TO_JSON(pipelineRunId, pipelineRunId_);
        DARABONBA_PTR_TO_JSON(repoId, repoId_);
        DARABONBA_PTR_TO_JSON(repoName, repoName_);
        DARABONBA_PTR_TO_JSON(wasmUrl, wasmUrl_);
        DARABONBA_PTR_TO_JSON(workspaceId, workspaceId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
        DARABONBA_PTR_FROM_JSON(pipelineRunId, pipelineRunId_);
        DARABONBA_PTR_FROM_JSON(repoId, repoId_);
        DARABONBA_PTR_FROM_JSON(repoName, repoName_);
        DARABONBA_PTR_FROM_JSON(wasmUrl, wasmUrl_);
        DARABONBA_PTR_FROM_JSON(workspaceId, workspaceId_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->organizationId_ == nullptr
        && this->pipelineRunId_ == nullptr && this->repoId_ == nullptr && this->repoName_ == nullptr && this->wasmUrl_ == nullptr && this->workspaceId_ == nullptr; };
      // organizationId Field Functions 
      bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
      void deleteOrganizationId() { this->organizationId_ = nullptr;};
      inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
      inline Data& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


      // pipelineRunId Field Functions 
      bool hasPipelineRunId() const { return this->pipelineRunId_ != nullptr;};
      void deletePipelineRunId() { this->pipelineRunId_ = nullptr;};
      inline string getPipelineRunId() const { DARABONBA_PTR_GET_DEFAULT(pipelineRunId_, "") };
      inline Data& setPipelineRunId(string pipelineRunId) { DARABONBA_PTR_SET_VALUE(pipelineRunId_, pipelineRunId) };


      // repoId Field Functions 
      bool hasRepoId() const { return this->repoId_ != nullptr;};
      void deleteRepoId() { this->repoId_ = nullptr;};
      inline string getRepoId() const { DARABONBA_PTR_GET_DEFAULT(repoId_, "") };
      inline Data& setRepoId(string repoId) { DARABONBA_PTR_SET_VALUE(repoId_, repoId) };


      // repoName Field Functions 
      bool hasRepoName() const { return this->repoName_ != nullptr;};
      void deleteRepoName() { this->repoName_ = nullptr;};
      inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
      inline Data& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


      // wasmUrl Field Functions 
      bool hasWasmUrl() const { return this->wasmUrl_ != nullptr;};
      void deleteWasmUrl() { this->wasmUrl_ = nullptr;};
      inline string getWasmUrl() const { DARABONBA_PTR_GET_DEFAULT(wasmUrl_, "") };
      inline Data& setWasmUrl(string wasmUrl) { DARABONBA_PTR_SET_VALUE(wasmUrl_, wasmUrl) };


      // workspaceId Field Functions 
      bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
      void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
      inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
      inline Data& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    protected:
      shared_ptr<string> organizationId_ {};
      shared_ptr<string> pipelineRunId_ {};
      shared_ptr<string> repoId_ {};
      shared_ptr<string> repoName_ {};
      shared_ptr<string> wasmUrl_ {};
      shared_ptr<string> workspaceId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetPluginWorkspaceResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetPluginWorkspaceResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetPluginWorkspaceResponseBody::Data) };
    inline GetPluginWorkspaceResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetPluginWorkspaceResponseBody::Data) };
    inline GetPluginWorkspaceResponseBody& setData(const GetPluginWorkspaceResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetPluginWorkspaceResponseBody& setData(GetPluginWorkspaceResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetPluginWorkspaceResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPluginWorkspaceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetPluginWorkspaceResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
