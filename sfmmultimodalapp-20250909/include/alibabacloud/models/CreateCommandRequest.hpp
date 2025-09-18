// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCommandRequestToolExamples.hpp>
#include <alibabacloud/models/CreateCommandRequestToolParams.hpp>
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
    virtual bool empty() const override { this->appId_ != nullptr
        && this->domainCode_ != nullptr && this->domainName_ != nullptr && this->toolDescription_ != nullptr && this->toolExamples_ != nullptr && this->toolName_ != nullptr
        && this->toolParams_ != nullptr && this->workspaceId_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateCommandRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // domainCode Field Functions 
    bool hasDomainCode() const { return this->domainCode_ != nullptr;};
    void deleteDomainCode() { this->domainCode_ = nullptr;};
    inline string domainCode() const { DARABONBA_PTR_GET_DEFAULT(domainCode_, "") };
    inline CreateCommandRequest& setDomainCode(string domainCode) { DARABONBA_PTR_SET_VALUE(domainCode_, domainCode) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline CreateCommandRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // toolDescription Field Functions 
    bool hasToolDescription() const { return this->toolDescription_ != nullptr;};
    void deleteToolDescription() { this->toolDescription_ = nullptr;};
    inline string toolDescription() const { DARABONBA_PTR_GET_DEFAULT(toolDescription_, "") };
    inline CreateCommandRequest& setToolDescription(string toolDescription) { DARABONBA_PTR_SET_VALUE(toolDescription_, toolDescription) };


    // toolExamples Field Functions 
    bool hasToolExamples() const { return this->toolExamples_ != nullptr;};
    void deleteToolExamples() { this->toolExamples_ = nullptr;};
    inline const vector<CreateCommandRequestToolExamples> & toolExamples() const { DARABONBA_PTR_GET_CONST(toolExamples_, vector<CreateCommandRequestToolExamples>) };
    inline vector<CreateCommandRequestToolExamples> toolExamples() { DARABONBA_PTR_GET(toolExamples_, vector<CreateCommandRequestToolExamples>) };
    inline CreateCommandRequest& setToolExamples(const vector<CreateCommandRequestToolExamples> & toolExamples) { DARABONBA_PTR_SET_VALUE(toolExamples_, toolExamples) };
    inline CreateCommandRequest& setToolExamples(vector<CreateCommandRequestToolExamples> && toolExamples) { DARABONBA_PTR_SET_RVALUE(toolExamples_, toolExamples) };


    // toolName Field Functions 
    bool hasToolName() const { return this->toolName_ != nullptr;};
    void deleteToolName() { this->toolName_ = nullptr;};
    inline string toolName() const { DARABONBA_PTR_GET_DEFAULT(toolName_, "") };
    inline CreateCommandRequest& setToolName(string toolName) { DARABONBA_PTR_SET_VALUE(toolName_, toolName) };


    // toolParams Field Functions 
    bool hasToolParams() const { return this->toolParams_ != nullptr;};
    void deleteToolParams() { this->toolParams_ = nullptr;};
    inline const vector<CreateCommandRequestToolParams> & toolParams() const { DARABONBA_PTR_GET_CONST(toolParams_, vector<CreateCommandRequestToolParams>) };
    inline vector<CreateCommandRequestToolParams> toolParams() { DARABONBA_PTR_GET(toolParams_, vector<CreateCommandRequestToolParams>) };
    inline CreateCommandRequest& setToolParams(const vector<CreateCommandRequestToolParams> & toolParams) { DARABONBA_PTR_SET_VALUE(toolParams_, toolParams) };
    inline CreateCommandRequest& setToolParams(vector<CreateCommandRequestToolParams> && toolParams) { DARABONBA_PTR_SET_RVALUE(toolParams_, toolParams) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateCommandRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> domainCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toolDescription_ = nullptr;
    std::shared_ptr<vector<CreateCommandRequestToolExamples>> toolExamples_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> toolName_ = nullptr;
    std::shared_ptr<vector<CreateCommandRequestToolParams>> toolParams_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SfmMultiModalApp20250909
#endif
