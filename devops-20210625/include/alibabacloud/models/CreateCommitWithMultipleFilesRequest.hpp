// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMITWITHMULTIPLEFILESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMITWITHMULTIPLEFILESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateCommitWithMultipleFilesRequestActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCommitWithMultipleFilesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommitWithMultipleFilesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(branch, branch_);
      DARABONBA_PTR_TO_JSON(commitMessage, commitMessage_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryIdentity, repositoryIdentity_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommitWithMultipleFilesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(branch, branch_);
      DARABONBA_PTR_FROM_JSON(commitMessage, commitMessage_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryIdentity, repositoryIdentity_);
    };
    CreateCommitWithMultipleFilesRequest() = default ;
    CreateCommitWithMultipleFilesRequest(const CreateCommitWithMultipleFilesRequest &) = default ;
    CreateCommitWithMultipleFilesRequest(CreateCommitWithMultipleFilesRequest &&) = default ;
    CreateCommitWithMultipleFilesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommitWithMultipleFilesRequest() = default ;
    CreateCommitWithMultipleFilesRequest& operator=(const CreateCommitWithMultipleFilesRequest &) = default ;
    CreateCommitWithMultipleFilesRequest& operator=(CreateCommitWithMultipleFilesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->actions_ == nullptr && return this->branch_ == nullptr && return this->commitMessage_ == nullptr && return this->organizationId_ == nullptr && return this->repositoryIdentity_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateCommitWithMultipleFilesRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<CreateCommitWithMultipleFilesRequestActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<CreateCommitWithMultipleFilesRequestActions>) };
    inline vector<CreateCommitWithMultipleFilesRequestActions> actions() { DARABONBA_PTR_GET(actions_, vector<CreateCommitWithMultipleFilesRequestActions>) };
    inline CreateCommitWithMultipleFilesRequest& setActions(const vector<CreateCommitWithMultipleFilesRequestActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline CreateCommitWithMultipleFilesRequest& setActions(vector<CreateCommitWithMultipleFilesRequestActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // branch Field Functions 
    bool hasBranch() const { return this->branch_ != nullptr;};
    void deleteBranch() { this->branch_ = nullptr;};
    inline string branch() const { DARABONBA_PTR_GET_DEFAULT(branch_, "") };
    inline CreateCommitWithMultipleFilesRequest& setBranch(string branch) { DARABONBA_PTR_SET_VALUE(branch_, branch) };


    // commitMessage Field Functions 
    bool hasCommitMessage() const { return this->commitMessage_ != nullptr;};
    void deleteCommitMessage() { this->commitMessage_ = nullptr;};
    inline string commitMessage() const { DARABONBA_PTR_GET_DEFAULT(commitMessage_, "") };
    inline CreateCommitWithMultipleFilesRequest& setCommitMessage(string commitMessage) { DARABONBA_PTR_SET_VALUE(commitMessage_, commitMessage) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateCommitWithMultipleFilesRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryIdentity Field Functions 
    bool hasRepositoryIdentity() const { return this->repositoryIdentity_ != nullptr;};
    void deleteRepositoryIdentity() { this->repositoryIdentity_ = nullptr;};
    inline string repositoryIdentity() const { DARABONBA_PTR_GET_DEFAULT(repositoryIdentity_, "") };
    inline CreateCommitWithMultipleFilesRequest& setRepositoryIdentity(string repositoryIdentity) { DARABONBA_PTR_SET_VALUE(repositoryIdentity_, repositoryIdentity) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<vector<CreateCommitWithMultipleFilesRequestActions>> actions_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> branch_ = nullptr;
    std::shared_ptr<string> commitMessage_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryIdentity_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
