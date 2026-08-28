// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPLUGINWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPLUGINWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace APIG20240327
{
namespace Models
{
  class CreatePluginWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePluginWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repoName, repoName_);
      DARABONBA_PTR_TO_JSON(workspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePluginWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(gatewayType, gatewayType_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repoName, repoName_);
      DARABONBA_PTR_FROM_JSON(workspaceName, workspaceName_);
    };
    CreatePluginWorkspaceRequest() = default ;
    CreatePluginWorkspaceRequest(const CreatePluginWorkspaceRequest &) = default ;
    CreatePluginWorkspaceRequest(CreatePluginWorkspaceRequest &&) = default ;
    CreatePluginWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePluginWorkspaceRequest() = default ;
    CreatePluginWorkspaceRequest& operator=(const CreatePluginWorkspaceRequest &) = default ;
    CreatePluginWorkspaceRequest& operator=(CreatePluginWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gatewayType_ == nullptr
        && this->organizationId_ == nullptr && this->repoName_ == nullptr && this->workspaceName_ == nullptr; };
    // gatewayType Field Functions 
    bool hasGatewayType() const { return this->gatewayType_ != nullptr;};
    void deleteGatewayType() { this->gatewayType_ = nullptr;};
    inline string getGatewayType() const { DARABONBA_PTR_GET_DEFAULT(gatewayType_, "") };
    inline CreatePluginWorkspaceRequest& setGatewayType(string gatewayType) { DARABONBA_PTR_SET_VALUE(gatewayType_, gatewayType) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string getOrganizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreatePluginWorkspaceRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repoName Field Functions 
    bool hasRepoName() const { return this->repoName_ != nullptr;};
    void deleteRepoName() { this->repoName_ = nullptr;};
    inline string getRepoName() const { DARABONBA_PTR_GET_DEFAULT(repoName_, "") };
    inline CreatePluginWorkspaceRequest& setRepoName(string repoName) { DARABONBA_PTR_SET_VALUE(repoName_, repoName) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string getWorkspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline CreatePluginWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    shared_ptr<string> gatewayType_ {};
    // This parameter is required.
    shared_ptr<string> organizationId_ {};
    // This parameter is required.
    shared_ptr<string> repoName_ {};
    shared_ptr<string> workspaceName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace APIG20240327
#endif
