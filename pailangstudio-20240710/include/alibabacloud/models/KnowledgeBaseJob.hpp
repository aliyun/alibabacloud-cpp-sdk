// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_KNOWLEDGEBASEJOB_HPP_
#define ALIBABACLOUD_MODELS_KNOWLEDGEBASEJOB_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/KnowledgeBaseJobEcsSpecs.hpp>
#include <alibabacloud/models/KnowledgeBaseJobEmbeddingConfig.hpp>
#include <alibabacloud/models/KnowledgeBaseJobKnowledgeBaseJobResult.hpp>
#include <alibabacloud/models/KnowledgeBaseJobPipelineRunInfo.hpp>
#include <alibabacloud/models/KnowledgeBaseJobUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class KnowledgeBaseJob : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const KnowledgeBaseJob& obj) { 
      DARABONBA_PTR_TO_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_TO_JSON(Creator, creator_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_TO_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_TO_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(JobAction, jobAction_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseJobId, knowledgeBaseJobId_);
      DARABONBA_PTR_TO_JSON(KnowledgeBaseJobResult, knowledgeBaseJobResult_);
      DARABONBA_PTR_TO_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_TO_JSON(PipelineRunInfo, pipelineRunInfo_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, KnowledgeBaseJob& obj) { 
      DARABONBA_PTR_FROM_JSON(Accessibility, accessibility_);
      DARABONBA_PTR_FROM_JSON(Creator, creator_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EcsSpecs, ecsSpecs_);
      DARABONBA_PTR_FROM_JSON(EmbeddingConfig, embeddingConfig_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(GmtCreateTime, gmtCreateTime_);
      DARABONBA_PTR_FROM_JSON(GmtFinishTime, gmtFinishTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(JobAction, jobAction_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseId, knowledgeBaseId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseJobId, knowledgeBaseJobId_);
      DARABONBA_PTR_FROM_JSON(KnowledgeBaseJobResult, knowledgeBaseJobResult_);
      DARABONBA_PTR_FROM_JSON(MaxRunningTimeInSeconds, maxRunningTimeInSeconds_);
      DARABONBA_PTR_FROM_JSON(PipelineRunInfo, pipelineRunInfo_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    KnowledgeBaseJob() = default ;
    KnowledgeBaseJob(const KnowledgeBaseJob &) = default ;
    KnowledgeBaseJob(KnowledgeBaseJob &&) = default ;
    KnowledgeBaseJob(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~KnowledgeBaseJob() = default ;
    KnowledgeBaseJob& operator=(const KnowledgeBaseJob &) = default ;
    KnowledgeBaseJob& operator=(KnowledgeBaseJob &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->creator_ == nullptr && return this->description_ == nullptr && return this->ecsSpecs_ == nullptr && return this->embeddingConfig_ == nullptr && return this->errorMessage_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtFinishTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->jobAction_ == nullptr && return this->knowledgeBaseId_ == nullptr
        && return this->knowledgeBaseJobId_ == nullptr && return this->knowledgeBaseJobResult_ == nullptr && return this->maxRunningTimeInSeconds_ == nullptr && return this->pipelineRunInfo_ == nullptr && return this->resourceId_ == nullptr
        && return this->status_ == nullptr && return this->userVpc_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline KnowledgeBaseJob& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline KnowledgeBaseJob& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline KnowledgeBaseJob& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<KnowledgeBaseJobEcsSpecs> & ecsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<KnowledgeBaseJobEcsSpecs>) };
    inline vector<KnowledgeBaseJobEcsSpecs> ecsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<KnowledgeBaseJobEcsSpecs>) };
    inline KnowledgeBaseJob& setEcsSpecs(const vector<KnowledgeBaseJobEcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline KnowledgeBaseJob& setEcsSpecs(vector<KnowledgeBaseJobEcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const KnowledgeBaseJobEmbeddingConfig & embeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, KnowledgeBaseJobEmbeddingConfig) };
    inline KnowledgeBaseJobEmbeddingConfig embeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, KnowledgeBaseJobEmbeddingConfig) };
    inline KnowledgeBaseJob& setEmbeddingConfig(const KnowledgeBaseJobEmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline KnowledgeBaseJob& setEmbeddingConfig(KnowledgeBaseJobEmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline KnowledgeBaseJob& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline KnowledgeBaseJob& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline KnowledgeBaseJob& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline KnowledgeBaseJob& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string jobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline KnowledgeBaseJob& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string knowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline KnowledgeBaseJob& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeBaseJobId Field Functions 
    bool hasKnowledgeBaseJobId() const { return this->knowledgeBaseJobId_ != nullptr;};
    void deleteKnowledgeBaseJobId() { this->knowledgeBaseJobId_ = nullptr;};
    inline string knowledgeBaseJobId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseJobId_, "") };
    inline KnowledgeBaseJob& setKnowledgeBaseJobId(string knowledgeBaseJobId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobId_, knowledgeBaseJobId) };


    // knowledgeBaseJobResult Field Functions 
    bool hasKnowledgeBaseJobResult() const { return this->knowledgeBaseJobResult_ != nullptr;};
    void deleteKnowledgeBaseJobResult() { this->knowledgeBaseJobResult_ = nullptr;};
    inline const KnowledgeBaseJobKnowledgeBaseJobResult & knowledgeBaseJobResult() const { DARABONBA_PTR_GET_CONST(knowledgeBaseJobResult_, KnowledgeBaseJobKnowledgeBaseJobResult) };
    inline KnowledgeBaseJobKnowledgeBaseJobResult knowledgeBaseJobResult() { DARABONBA_PTR_GET(knowledgeBaseJobResult_, KnowledgeBaseJobKnowledgeBaseJobResult) };
    inline KnowledgeBaseJob& setKnowledgeBaseJobResult(const KnowledgeBaseJobKnowledgeBaseJobResult & knowledgeBaseJobResult) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobResult_, knowledgeBaseJobResult) };
    inline KnowledgeBaseJob& setKnowledgeBaseJobResult(KnowledgeBaseJobKnowledgeBaseJobResult && knowledgeBaseJobResult) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseJobResult_, knowledgeBaseJobResult) };


    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline int32_t maxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0) };
    inline KnowledgeBaseJob& setMaxRunningTimeInSeconds(int32_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


    // pipelineRunInfo Field Functions 
    bool hasPipelineRunInfo() const { return this->pipelineRunInfo_ != nullptr;};
    void deletePipelineRunInfo() { this->pipelineRunInfo_ = nullptr;};
    inline const KnowledgeBaseJobPipelineRunInfo & pipelineRunInfo() const { DARABONBA_PTR_GET_CONST(pipelineRunInfo_, KnowledgeBaseJobPipelineRunInfo) };
    inline KnowledgeBaseJobPipelineRunInfo pipelineRunInfo() { DARABONBA_PTR_GET(pipelineRunInfo_, KnowledgeBaseJobPipelineRunInfo) };
    inline KnowledgeBaseJob& setPipelineRunInfo(const KnowledgeBaseJobPipelineRunInfo & pipelineRunInfo) { DARABONBA_PTR_SET_VALUE(pipelineRunInfo_, pipelineRunInfo) };
    inline KnowledgeBaseJob& setPipelineRunInfo(KnowledgeBaseJobPipelineRunInfo && pipelineRunInfo) { DARABONBA_PTR_SET_RVALUE(pipelineRunInfo_, pipelineRunInfo) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline KnowledgeBaseJob& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline KnowledgeBaseJob& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const KnowledgeBaseJobUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, KnowledgeBaseJobUserVpc) };
    inline KnowledgeBaseJobUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, KnowledgeBaseJobUserVpc) };
    inline KnowledgeBaseJob& setUserVpc(const KnowledgeBaseJobUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline KnowledgeBaseJob& setUserVpc(KnowledgeBaseJobUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline KnowledgeBaseJob& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<KnowledgeBaseJobEcsSpecs>> ecsSpecs_ = nullptr;
    std::shared_ptr<KnowledgeBaseJobEmbeddingConfig> embeddingConfig_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> jobAction_ = nullptr;
    std::shared_ptr<string> knowledgeBaseId_ = nullptr;
    std::shared_ptr<string> knowledgeBaseJobId_ = nullptr;
    std::shared_ptr<KnowledgeBaseJobKnowledgeBaseJobResult> knowledgeBaseJobResult_ = nullptr;
    std::shared_ptr<int32_t> maxRunningTimeInSeconds_ = nullptr;
    std::shared_ptr<KnowledgeBaseJobPipelineRunInfo> pipelineRunInfo_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<KnowledgeBaseJobUserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
