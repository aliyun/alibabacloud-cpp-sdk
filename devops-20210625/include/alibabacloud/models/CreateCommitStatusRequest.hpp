// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECOMMITSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECOMMITSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class CreateCommitStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCommitStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(accessToken, accessToken_);
      DARABONBA_PTR_TO_JSON(context, context_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(state, state_);
      DARABONBA_PTR_TO_JSON(targetUrl, targetUrl_);
      DARABONBA_PTR_TO_JSON(organizationId, organizationId_);
      DARABONBA_PTR_TO_JSON(repositoryIdentity, repositoryIdentity_);
      DARABONBA_PTR_TO_JSON(sha, sha_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCommitStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(accessToken, accessToken_);
      DARABONBA_PTR_FROM_JSON(context, context_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(state, state_);
      DARABONBA_PTR_FROM_JSON(targetUrl, targetUrl_);
      DARABONBA_PTR_FROM_JSON(organizationId, organizationId_);
      DARABONBA_PTR_FROM_JSON(repositoryIdentity, repositoryIdentity_);
      DARABONBA_PTR_FROM_JSON(sha, sha_);
    };
    CreateCommitStatusRequest() = default ;
    CreateCommitStatusRequest(const CreateCommitStatusRequest &) = default ;
    CreateCommitStatusRequest(CreateCommitStatusRequest &&) = default ;
    CreateCommitStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCommitStatusRequest() = default ;
    CreateCommitStatusRequest& operator=(const CreateCommitStatusRequest &) = default ;
    CreateCommitStatusRequest& operator=(CreateCommitStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessToken_ == nullptr
        && return this->context_ == nullptr && return this->description_ == nullptr && return this->state_ == nullptr && return this->targetUrl_ == nullptr && return this->organizationId_ == nullptr
        && return this->repositoryIdentity_ == nullptr && return this->sha_ == nullptr; };
    // accessToken Field Functions 
    bool hasAccessToken() const { return this->accessToken_ != nullptr;};
    void deleteAccessToken() { this->accessToken_ = nullptr;};
    inline string accessToken() const { DARABONBA_PTR_GET_DEFAULT(accessToken_, "") };
    inline CreateCommitStatusRequest& setAccessToken(string accessToken) { DARABONBA_PTR_SET_VALUE(accessToken_, accessToken) };


    // context Field Functions 
    bool hasContext() const { return this->context_ != nullptr;};
    void deleteContext() { this->context_ = nullptr;};
    inline string context() const { DARABONBA_PTR_GET_DEFAULT(context_, "") };
    inline CreateCommitStatusRequest& setContext(string context) { DARABONBA_PTR_SET_VALUE(context_, context) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateCommitStatusRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline CreateCommitStatusRequest& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string targetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline CreateCommitStatusRequest& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline CreateCommitStatusRequest& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


    // repositoryIdentity Field Functions 
    bool hasRepositoryIdentity() const { return this->repositoryIdentity_ != nullptr;};
    void deleteRepositoryIdentity() { this->repositoryIdentity_ = nullptr;};
    inline string repositoryIdentity() const { DARABONBA_PTR_GET_DEFAULT(repositoryIdentity_, "") };
    inline CreateCommitStatusRequest& setRepositoryIdentity(string repositoryIdentity) { DARABONBA_PTR_SET_VALUE(repositoryIdentity_, repositoryIdentity) };


    // sha Field Functions 
    bool hasSha() const { return this->sha_ != nullptr;};
    void deleteSha() { this->sha_ = nullptr;};
    inline string sha() const { DARABONBA_PTR_GET_DEFAULT(sha_, "") };
    inline CreateCommitStatusRequest& setSha(string sha) { DARABONBA_PTR_SET_VALUE(sha_, sha) };


  protected:
    std::shared_ptr<string> accessToken_ = nullptr;
    std::shared_ptr<string> context_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> state_ = nullptr;
    std::shared_ptr<string> targetUrl_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> organizationId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> repositoryIdentity_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sha_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
