// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEKNOWLEDGEBASEJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateKnowledgeBaseJobRequestEcsSpecs.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseJobRequestEmbeddingConfig.hpp>
#include <alibabacloud/models/CreateKnowledgeBaseJobRequestUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class CreateKnowledgeBaseJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateKnowledgeBaseJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_TO_JSON(JobAction, jobAction_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateKnowledgeBaseJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_FROM_JSON(JobAction, jobAction_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    CreateKnowledgeBaseJobRequest() = default ;
    CreateKnowledgeBaseJobRequest(const CreateKnowledgeBaseJobRequest &) = default ;
    CreateKnowledgeBaseJobRequest(CreateKnowledgeBaseJobRequest &&) = default ;
    CreateKnowledgeBaseJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateKnowledgeBaseJobRequest() = default ;
    CreateKnowledgeBaseJobRequest& operator=(const CreateKnowledgeBaseJobRequest &) = default ;
    CreateKnowledgeBaseJobRequest& operator=(CreateKnowledgeBaseJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->description_ == nullptr && return this->ecsSpecs_ == nullptr && return this->embeddingConfig_ == nullptr && return this->jobAction_ == nullptr && return this->maxRunningTimeInSeconds_ == nullptr
        && return this->resourceId_ == nullptr && return this->userVpc_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline CreateKnowledgeBaseJobRequest& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateKnowledgeBaseJobRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<CreateKnowledgeBaseJobRequestEcsSpecs> & ecsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<CreateKnowledgeBaseJobRequestEcsSpecs>) };
    inline vector<CreateKnowledgeBaseJobRequestEcsSpecs> ecsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<CreateKnowledgeBaseJobRequestEcsSpecs>) };
    inline CreateKnowledgeBaseJobRequest& setEcsSpecs(const vector<CreateKnowledgeBaseJobRequestEcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline CreateKnowledgeBaseJobRequest& setEcsSpecs(vector<CreateKnowledgeBaseJobRequestEcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const CreateKnowledgeBaseJobRequestEmbeddingConfig & embeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, CreateKnowledgeBaseJobRequestEmbeddingConfig) };
    inline CreateKnowledgeBaseJobRequestEmbeddingConfig embeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, CreateKnowledgeBaseJobRequestEmbeddingConfig) };
    inline CreateKnowledgeBaseJobRequest& setEmbeddingConfig(const CreateKnowledgeBaseJobRequestEmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline CreateKnowledgeBaseJobRequest& setEmbeddingConfig(CreateKnowledgeBaseJobRequestEmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string jobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline CreateKnowledgeBaseJobRequest& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline int32_t maxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0) };
    inline CreateKnowledgeBaseJobRequest& setMaxRunningTimeInSeconds(int32_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateKnowledgeBaseJobRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const CreateKnowledgeBaseJobRequestUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, CreateKnowledgeBaseJobRequestUserVpc) };
    inline CreateKnowledgeBaseJobRequestUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, CreateKnowledgeBaseJobRequestUserVpc) };
    inline CreateKnowledgeBaseJobRequest& setUserVpc(const CreateKnowledgeBaseJobRequestUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline CreateKnowledgeBaseJobRequest& setUserVpc(CreateKnowledgeBaseJobRequestUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline CreateKnowledgeBaseJobRequest& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<CreateKnowledgeBaseJobRequestEcsSpecs>> ecsSpecs_ = nullptr;
    std::shared_ptr<CreateKnowledgeBaseJobRequestEmbeddingConfig> embeddingConfig_ = nullptr;
    std::shared_ptr<string> jobAction_ = nullptr;
    std::shared_ptr<int32_t> maxRunningTimeInSeconds_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<CreateKnowledgeBaseJobRequestUserVpc> userVpc_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
