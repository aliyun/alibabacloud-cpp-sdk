// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SfmMultiModalApp20250909
{
namespace Models
{
  class UpdateCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(ToolDescription, toolDescription_);
      DARABONBA_PTR_TO_JSON(ToolExamples, toolExamples_);
      DARABONBA_PTR_TO_JSON(ToolId, toolId_);
      DARABONBA_PTR_TO_JSON(ToolName, toolName_);
      DARABONBA_PTR_TO_JSON(ToolParams, toolParams_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(DomainCode, domainCode_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(ToolDescription, toolDescription_);
      DARABONBA_PTR_FROM_JSON(ToolExamples, toolExamples_);
      DARABONBA_PTR_FROM_JSON(ToolId, toolId_);
      DARABONBA_PTR_FROM_JSON(ToolName, toolName_);
      DARABONBA_PTR_FROM_JSON(ToolParams, toolParams_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    UpdateCommandRequest() = default ;
    UpdateCommandRequest(const UpdateCommandRequest &) = default ;
    UpdateCommandRequest(UpdateCommandRequest &&) = default ;
    UpdateCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCommandRequest() = default ;
    UpdateCommandRequest& operator=(const UpdateCommandRequest &) = default ;
    UpdateCommandRequest& operator=(UpdateCommandRequest &&) = default ;
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
      };
      friend void from_json(const Darabonba::Json& j, ToolParams& obj) { 
        DARABONBA_PTR_FROM_JSON(ParamDesc, paramDesc_);
        DARABONBA_PTR_FROM_JSON(ParamExample, paramExample_);
        DARABONBA_PTR_FROM_JSON(ParamName, paramName_);
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
        && this->paramExample_ == nullptr && this->paramName_ == nullptr; };
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


    protected:
      shared_ptr<string> paramDesc_ {};
      shared_ptr<string> paramExample_ {};
      shared_ptr<string> paramName_ {};
    };

    class ToolExamples : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ToolExamples& obj) { 
        DARABONBA_PTR_TO_JSON(Query, query_);
      };
      friend void from_json(const Darabonba::Json& j, ToolExamples& obj) { 
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
      virtual bool empty() const override { return this->query_ == nullptr; };
      // query Field Functions 
      bool hasQuery() const { return this->query_ != nullptr;};
      void deleteQuery() { this->query_ = nullptr;};
      inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
      inline ToolExamples& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    protected:
      shared_ptr<string> query_ {};
    };

    virtual bool empty() const override { return this->appId_ == nullptr
        && this->domainCode_ == nullptr && this->domainName_ == nullptr && this->toolDescription_ == nullptr && this->toolExamples_ == nullptr && this->toolId_ == nullptr
        && this->toolName_ == nullptr && this->toolParams_ == nullptr && this->workspaceId_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string getAppId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline UpdateCommandRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string getDomainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline UpdateCommandRequest& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline UpdateCommandRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // toolDescription Field Functions 
    bool hasToolDescription() const { return this->toolDescription_ != nullptr;};
    void deleteToolDescription() { this->toolDescription_ = nullptr;};
    inline string getToolDescription() const { DARABONBA_PTR_GET_DEFAULT(toolDescription_, "") };
    inline UpdateCommandRequest& setToolDescription(string toolDescription) { DARABONBA_PTR_SET_VALUE(toolDescription_, toolDescription) };


    // toolExamples Field Functions 
    bool hasToolExamples() const { return this->toolExamples_ != nullptr;};
    void deleteToolExamples() { this->toolExamples_ = nullptr;};
    inline const vector<UpdateCommandRequest::ToolExamples> & getToolExamples() const { DARABONBA_PTR_GET_CONST(toolExamples_, vector<UpdateCommandRequest::ToolExamples>) };
    inline vector<UpdateCommandRequest::ToolExamples> getToolExamples() { DARABONBA_PTR_GET(toolExamples_, vector<UpdateCommandRequest::ToolExamples>) };
    inline UpdateCommandRequest& setToolExamples(const vector<UpdateCommandRequest::ToolExamples> & toolExamples) { DARABONBA_PTR_SET_VALUE(toolExamples_, toolExamples) };
    inline UpdateCommandRequest& setToolExamples(vector<UpdateCommandRequest::ToolExamples> && toolExamples) { DARABONBA_PTR_SET_RVALUE(toolExamples_, toolExamples) };


    // toolId Field Functions 
    bool hasToolId() const { return this->toolId_ != nullptr;};
    void deleteToolId() { this->toolId_ = nullptr;};
    inline string getToolId() const { DARABONBA_PTR_GET_DEFAULT(toolId_, "") };
    inline UpdateCommandRequest& setToolId(string toolId) { DARABONBA_PTR_SET_VALUE(toolId_, toolId) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string getToolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline UpdateCommandRequest& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParams Field Functions 
    bool hasToolParams() const { return this->toolParams_ != nullptr;};
    void deleteToolParams() { this->toolParams_ = nullptr;};
    inline const vector<UpdateCommandRequest::ToolParams> & getToolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<UpdateCommandRequest::ToolParams>) };
    inline vector<UpdateCommandRequest::ToolParams> getToolParams() { DARABONBA_PTR_GET(toolParams_, vector<UpdateCommandRequest::ToolParams>) };
    inline UpdateCommandRequest& setToolParams(const vector<UpdateCommandRequest::ToolParams> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
    inline UpdateCommandRequest& setToolParams(vector<UpdateCommandRequest::ToolParams> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string getWorkspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline UpdateCommandRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    shared_ptr<string> appId_ {};
    shared_ptr<string> domainCode_ {};
    shared_ptr<string> domainName_ {};
    // This parameter is required.
    shared_ptr<string> toolDescription_ {};
    shared_ptr<vector<UpdateCommandRequest::ToolExamples>> toolExamples_ {};
    // This parameter is required.
    shared_ptr<string> toolId_ {};
    // This parameter is required.
    shared_ptr<string> toolName_ {};
    shared_ptr<vector<UpdateCommandRequest::ToolParams>> toolParams_ {};
    shared_ptr<string> workspaceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
