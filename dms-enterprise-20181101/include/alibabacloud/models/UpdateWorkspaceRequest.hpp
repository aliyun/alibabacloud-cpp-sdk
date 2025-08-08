// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWORKSPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class UpdateWorkspaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_TO_JSON(WorkspaceName, workspaceName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWorkspaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
      DARABONBA_PTR_FROM_JSON(WorkspaceName, workspaceName_);
    };
    UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest(UpdateWorkspaceRequest &&) = default ;
    UpdateWorkspaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWorkspaceRequest() = default ;
    UpdateWorkspaceRequest& operator=(const UpdateWorkspaceRequest &) = default ;
    UpdateWorkspaceRequest& operator=(UpdateWorkspaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->workspaceId_ != nullptr && this->workspaceName_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateWorkspaceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateWorkspaceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline int64_t workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, 0L) };
    inline UpdateWorkspaceRequest& setWorkspaceId(int64_t workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


    // workspaceName Field Functions 
    bool hasWorkspaceName() const { return this->workspaceName_ != nullptr;};
    void deleteWorkspaceName() { this->workspaceName_ = nullptr;};
    inline string workspaceName() const { DARABONBA_PTR_GET_DEFAULT(workspaceName_, "") };
    inline UpdateWorkspaceRequest& setWorkspaceName(string workspaceName) { DARABONBA_PTR_SET_VALUE(workspaceName_, workspaceName) };


  protected:
    std::shared_ptr<string> clientToken_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> workspaceId_ = nullptr;
    std::shared_ptr<string> workspaceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
