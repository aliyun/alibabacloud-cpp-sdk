// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class CreateCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ReplyMode, replyMode_);
      DARABONBA_PTR_TO_JSON(ToolDescription, toolDescription_);
      DARABONBA_PTR_TO_JSON(ToolExamples, toolExamples_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      DARABONBA_PTR_TO_JSON(ToolParams, toolParams_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ReplyMode, replyMode_);
      DARABONBA_PTR_FROM_JSON(ToolDescription, toolDescription_);
      DARABONBA_PTR_FROM_JSON(ToolExamples, toolExamples_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      DARABONBA_PTR_FROM_JSON(ToolParams, toolParams_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateCommandRequest() = default ;
    CreateCommandRequest(const CreateCommandRequest &) = default ;
    CreateCommandRequest(CreateCommandRequest &&) = default ;
    CreateCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommandRequest() = default ;
    CreateCommandRequest& operator=(const CreateCommandRequest &) = default ;
    CreateCommandRequest& operator=(CreateCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ToolParams : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolParams& obj) { 
        DARABONBA_PTR_TO_JSON(ParamDesc, paramDesc_);
        DARABONBA_PTR_TO_JSON(ParamExample, paramExample_);
        DARABONBA_PTR_TO_JSON(ParamName, paramName_);
        DARABONBA_PTR_TO_JSON(ParamType, paramType_);
        DARABONBA_PTR_TO_JSON(Required, required_);
      };
      friend void from_json(const Darabonba::Json& j, ToolParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
        DARABONBA_PTR_FROM_JSON(ParamExample, paramExample_);
        DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
        DARABONBA_PTR_FROM_JSON(ParamType, paramType_);
        DARABONBA_PTR_FROM_JSON(Required, required_);
      };
      ToolParams() = default ;
      ToolParams(const ToolParams &) = default ;
      ToolParams(ToolParams &&) = default ;
      ToolParams(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolParams() = default ;
      ToolParams& operator=(const ToolParams &) = default ;
      ToolParams& operator=(ToolParams &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->paramDesc_ == nullptr
        && this->paramExample_ == nullptr && this->paramName_ == nullptr && this->paramType_ == nullptr && this->required_ == nullptr; };
      // paramDesc Field Functions 
      bool hasParamDesc() const { return this->paramDesc_ != nullptr;};
      void deleteParamDesc() { this->paramDesc_ = nullptr;};
      inline string getParamDesc() const { DARABONBA_PTR_GET_DEFAULT(paramDesc_, "") };
      inline ToolParams& setParamDesc(string paramDesc) { DARABONBA_PTR_SET_VALUE(paramDesc_, paramDesc) };


      // paramExample Field Functions 
      bool hasParamExample() const { return this->paramExample_ != nullptr;};
      void deleteParamExample() { this->paramExample_ = nullptr;};
      inline string getParamExample() const { DARABONBA_PTR_GET_DEFAULT(paramExample_, "") };
      inline ToolParams& setParamExample(string paramExample) { DARABONBA_PTR_SET_VALUE(paramExample_, paramExample) };


      // paramName Field Functions 
      bool hasParamName() const { return this->paramName_ != nullptr;};
      void deleteParamName() { this->paramName_ = nullptr;};
      inline string getParamName() const { DARABONBA_PTR_GET_DEFAULT(paramName_, "") };
      inline ToolParams& setParamName(string paramName) { DARABONBA_PTR_SET_VALUE(paramName_, paramName) };


      // paramType Field Functions 
      bool hasParamType() const { return this->paramType_ != nullptr;};
      void deleteParamType() { this->paramType_ = nullptr;};
      inline string getParamType() const { DARABONBA_PTR_GET_DEFAULT(paramType_, "") };
      inline ToolParams& setParamType(string paramType) { DARABONBA_PTR_SET_VALUE(paramType_, paramType) };


      // required Field Functions 
      bool hasRequired() const { return this->required_ != nullptr;};
      void deleteRequired() { this->required_ = nullptr;};
      inline bool getRequired() const { DARABONBA_PTR_GET_DEFAULT(required_, false) };
      inline ToolParams& setRequired(bool required) { DARABONBA_PTR_SET_VALUE(required_, required) };


    protected:
      shared_ptr<string> paramDesc_ {};
      shared_ptr<string> paramExample_ {};
      shared_ptr<string> paramName_ {};
      shared_ptr<string> paramType_ {};
      shared_ptr<bool> required_ {};
    };

    class ToolExamples : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolExamples& obj) { 
        DARABONBA_PTR_TO_JSON(Parameters, parameters_);
        DARABONBA_PTR_TO_JSON(Query, query_);
      };
      friend void from_json(const Darabonba::Json& j, ToolExamples& obj) { 
        DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
        DARABONBA_PTR_FROM_JSON(Query, query_);
      };
      ToolExamples() = default ;
      ToolExamples(const ToolExamples &) = default ;
      ToolExamples(ToolExamples &&) = default ;
      ToolExamples(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ToolExamples() = default ;
      ToolExamples& operator=(const ToolExamples &) = default ;
      ToolExamples& operator=(ToolExamples &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->parameters_ == nullptr
        && this->query_ == nullptr; };
      // parameters Field Functions 
      bool hasParameters() const { return this->parameters_ != nullptr;};
      void deleteParameters() { this->parameters_ = nullptr;};
      inline const map<string, string> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, map<string, string>) };
      inline map<string, string> getParameters() { DARABONBA_PTR_GET(parameters_, map<string, string>) };
      inline ToolExamples& setParameters(const map<string, string> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
      inline ToolExamples& setParameters(map<string, string> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline ToolExamples& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    protected:
      shared_ptr<map<string, string>> parameters_ {};
      shared_ptr<string> query_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->domainCode_ == nullptr && this->domainName_ == nullptr && this->replyMode_ == nullptr && this->toolDescription_ == nullptr && this->toolExamples_ == nullptr
        && this->toolName_ == nullptr && this->toolParams_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateCommandRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline CreateCommandRequest& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateCommandRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // replyMode Field Functions 
    bool hasReplyMode() const { return this->replyMode_ != nullptr;};
    void deleteReplyMode() { this->replyMode_ = nullptr;};
    inline string getReplyMode() const { DARABONBA_PTR_GET_DEFAULT(replyMode_, "") };
    inline CreateCommandRequest& setReplyMode(string replyMode) { DARABONBA_PTR_SET_VALUE(replyMode_, replyMode) };


    // toolDescription Field Functions 
    bool hasToolDescription() const { return this->toolDescription_ != nullptr;};
    void deleteToolDescription() { this->toolDescription_ = nullptr;};
    inline string getToolDescription() const { DARABONBA_PTR_GET_DEFAULT(toolDescription_, "") };
    inline CreateCommandRequest& setToolDescription(string toolDescription) { DARABONBA_PTR_SET_VALUE(toolDescription_, toolDescription) };


    // toolExamples Field Functions 
    bool hasToolExamples() const { return this->toolExamples_ != nullptr;};
    void deleteToolExamples() { this->toolExamples_ = nullptr;};
    inline const vector<CreateCommandRequest::ToolExamples> & getToolExamples() const { DARABONBA_PTR_GET_CONST(toolExamples_, vector<CreateCommandRequest::ToolExamples>) };
    inline vector<CreateCommandRequest::ToolExamples> getToolExamples() { DARABONBA_PTR_GET(toolExamples_, vector<CreateCommandRequest::ToolExamples>) };
    inline CreateCommandRequest& setToolExamples(const vector<CreateCommandRequest::ToolExamples> & toolExamples) { DARABONBA_PTR_SET_VALUE(toolExamples_, toolExamples) };
    inline CreateCommandRequest& setToolExamples(vector<CreateCommandRequest::ToolExamples> && toolExamples) { DARABONBA_PTR_SET_RVALUE(toolExamples_, toolExamples) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline CreateCommandRequest& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParams Field Functions 
    bool hasToolParams() const { return this->toolParams_ != nullptr;};
    void deleteToolParams() { this->toolParams_ = nullptr;};
    inline const vector<CreateCommandRequest::ToolParams> & getToolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<CreateCommandRequest::ToolParams>) };
    inline vector<CreateCommandRequest::ToolParams> getToolParams() { DARABONBA_PTR_GET(toolParams_, vector<CreateCommandRequest::ToolParams>) };
    inline CreateCommandRequest& setToolParams(const vector<CreateCommandRequest::ToolParams> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
    inline CreateCommandRequest& setToolParams(vector<CreateCommandRequest::ToolParams> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateCommandRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> domainCode_ {};
    shared_ptr<string> domainName_ {};
    shared_ptr<string> replyMode_ {};
    // This parameter is required.
    shared_ptr<string> toolDescription_ {};
    shared_ptr<vector<CreateCommandRequest::ToolExamples>> toolExamples_ {};
    // This parameter is required.
    shared_ptr<string> toolName_ {};
    shared_ptr<vector<CreateCommandRequest::ToolParams>> toolParams_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
