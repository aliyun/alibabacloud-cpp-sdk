// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKNOWLEDGEBASEJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetKnowledgeBaseJobResponseBodyEcsSpecs.hpp>
#include <alibabacloud/models/GetKnowledgeBaseJobResponseBodyEmbeddingConfig.hpp>
#include <alibabacloud/models/GetKnowledgeBaseJobResponseBodyKnowledgeBaseJobResult.hpp>
#include <alibabacloud/models/GetKnowledgeBaseJobResponseBodyPipelineRunInfo.hpp>
#include <alibabacloud/models/GetKnowledgeBaseJobResponseBodyUserVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PAILangStudio20240710
{
namespace Models
{
  class GetKnowledgeBaseJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKnowledgeBaseJobResponseBody& obj) { 
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
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_TO_JSON(WorkspaceId, workspaceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetKnowledgeBaseJobResponseBody& obj) { 
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
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserVpc, userVpc_);
      DARABONBA_PTR_FROM_JSON(WorkspaceId, workspaceId_);
    };
    GetKnowledgeBaseJobResponseBody() = default ;
    GetKnowledgeBaseJobResponseBody(const GetKnowledgeBaseJobResponseBody &) = default ;
    GetKnowledgeBaseJobResponseBody(GetKnowledgeBaseJobResponseBody &&) = default ;
    GetKnowledgeBaseJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKnowledgeBaseJobResponseBody() = default ;
    GetKnowledgeBaseJobResponseBody& operator=(const GetKnowledgeBaseJobResponseBody &) = default ;
    GetKnowledgeBaseJobResponseBody& operator=(GetKnowledgeBaseJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accessibility_ == nullptr
        && return this->creator_ == nullptr && return this->description_ == nullptr && return this->ecsSpecs_ == nullptr && return this->embeddingConfig_ == nullptr && return this->errorMessage_ == nullptr
        && return this->gmtCreateTime_ == nullptr && return this->gmtFinishTime_ == nullptr && return this->gmtModifiedTime_ == nullptr && return this->jobAction_ == nullptr && return this->knowledgeBaseId_ == nullptr
        && return this->knowledgeBaseJobId_ == nullptr && return this->knowledgeBaseJobResult_ == nullptr && return this->maxRunningTimeInSeconds_ == nullptr && return this->pipelineRunInfo_ == nullptr && return this->requestId_ == nullptr
        && return this->resourceId_ == nullptr && return this->status_ == nullptr && return this->userVpc_ == nullptr && return this->workspaceId_ == nullptr; };
    // accessibility Field Functions 
    bool hasAccessibility() const { return this->accessibility_ != nullptr;};
    void deleteAccessibility() { this->accessibility_ = nullptr;};
    inline string accessibility() const { DARABONBA_PTR_GET_DEFAULT(accessibility_, "") };
    inline GetKnowledgeBaseJobResponseBody& setAccessibility(string accessibility) { DARABONBA_PTR_SET_VALUE(accessibility_, accessibility) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetKnowledgeBaseJobResponseBody& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetKnowledgeBaseJobResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ecsSpecs Field Functions 
    bool hasEcsSpecs() const { return this->ecsSpecs_ != nullptr;};
    void deleteEcsSpecs() { this->ecsSpecs_ = nullptr;};
    inline const vector<GetKnowledgeBaseJobResponseBodyEcsSpecs> & ecsSpecs() const { DARABONBA_PTR_GET_CONST(ecsSpecs_, vector<GetKnowledgeBaseJobResponseBodyEcsSpecs>) };
    inline vector<GetKnowledgeBaseJobResponseBodyEcsSpecs> ecsSpecs() { DARABONBA_PTR_GET(ecsSpecs_, vector<GetKnowledgeBaseJobResponseBodyEcsSpecs>) };
    inline GetKnowledgeBaseJobResponseBody& setEcsSpecs(const vector<GetKnowledgeBaseJobResponseBodyEcsSpecs> & ecsSpecs) { DARABONBA_PTR_SET_VALUE(ecsSpecs_, ecsSpecs) };
    inline GetKnowledgeBaseJobResponseBody& setEcsSpecs(vector<GetKnowledgeBaseJobResponseBodyEcsSpecs> && ecsSpecs) { DARABONBA_PTR_SET_RVALUE(ecsSpecs_, ecsSpecs) };


    // embeddingConfig Field Functions 
    bool hasEmbeddingConfig() const { return this->embeddingConfig_ != nullptr;};
    void deleteEmbeddingConfig() { this->embeddingConfig_ = nullptr;};
    inline const GetKnowledgeBaseJobResponseBodyEmbeddingConfig & embeddingConfig() const { DARABONBA_PTR_GET_CONST(embeddingConfig_, GetKnowledgeBaseJobResponseBodyEmbeddingConfig) };
    inline GetKnowledgeBaseJobResponseBodyEmbeddingConfig embeddingConfig() { DARABONBA_PTR_GET(embeddingConfig_, GetKnowledgeBaseJobResponseBodyEmbeddingConfig) };
    inline GetKnowledgeBaseJobResponseBody& setEmbeddingConfig(const GetKnowledgeBaseJobResponseBodyEmbeddingConfig & embeddingConfig) { DARABONBA_PTR_SET_VALUE(embeddingConfig_, embeddingConfig) };
    inline GetKnowledgeBaseJobResponseBody& setEmbeddingConfig(GetKnowledgeBaseJobResponseBodyEmbeddingConfig && embeddingConfig) { DARABONBA_PTR_SET_RVALUE(embeddingConfig_, embeddingConfig) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetKnowledgeBaseJobResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // gmtCreateTime Field Functions 
    bool hasGmtCreateTime() const { return this->gmtCreateTime_ != nullptr;};
    void deleteGmtCreateTime() { this->gmtCreateTime_ = nullptr;};
    inline string gmtCreateTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreateTime_, "") };
    inline GetKnowledgeBaseJobResponseBody& setGmtCreateTime(string gmtCreateTime) { DARABONBA_PTR_SET_VALUE(gmtCreateTime_, gmtCreateTime) };


    // gmtFinishTime Field Functions 
    bool hasGmtFinishTime() const { return this->gmtFinishTime_ != nullptr;};
    void deleteGmtFinishTime() { this->gmtFinishTime_ = nullptr;};
    inline string gmtFinishTime() const { DARABONBA_PTR_GET_DEFAULT(gmtFinishTime_, "") };
    inline GetKnowledgeBaseJobResponseBody& setGmtFinishTime(string gmtFinishTime) { DARABONBA_PTR_SET_VALUE(gmtFinishTime_, gmtFinishTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetKnowledgeBaseJobResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // jobAction Field Functions 
    bool hasJobAction() const { return this->jobAction_ != nullptr;};
    void deleteJobAction() { this->jobAction_ = nullptr;};
    inline string jobAction() const { DARABONBA_PTR_GET_DEFAULT(jobAction_, "") };
    inline GetKnowledgeBaseJobResponseBody& setJobAction(string jobAction) { DARABONBA_PTR_SET_VALUE(jobAction_, jobAction) };


    // knowledgeBaseId Field Functions 
    bool hasKnowledgeBaseId() const { return this->knowledgeBaseId_ != nullptr;};
    void deleteKnowledgeBaseId() { this->knowledgeBaseId_ = nullptr;};
    inline string knowledgeBaseId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setKnowledgeBaseId(string knowledgeBaseId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseId_, knowledgeBaseId) };


    // knowledgeBaseJobId Field Functions 
    bool hasKnowledgeBaseJobId() const { return this->knowledgeBaseJobId_ != nullptr;};
    void deleteKnowledgeBaseJobId() { this->knowledgeBaseJobId_ = nullptr;};
    inline string knowledgeBaseJobId() const { DARABONBA_PTR_GET_DEFAULT(knowledgeBaseJobId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setKnowledgeBaseJobId(string knowledgeBaseJobId) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobId_, knowledgeBaseJobId) };


    // knowledgeBaseJobResult Field Functions 
    bool hasKnowledgeBaseJobResult() const { return this->knowledgeBaseJobResult_ != nullptr;};
    void deleteKnowledgeBaseJobResult() { this->knowledgeBaseJobResult_ = nullptr;};
    inline const GetKnowledgeBaseJobResponseBodyKnowledgeBaseJobResult & knowledgeBaseJobResult() const { DARABONBA_PTR_GET_CONST(knowledgeBaseJobResult_, GetKnowledgeBaseJobResponseBodyKnowledgeBaseJobResult) };
    inline GetKnowledgeBaseJobResponseBodyKnowledgeBaseJobResult knowledgeBaseJobResult() { DARABONBA_PTR_GET(knowledgeBaseJobResult_, GetKnowledgeBaseJobResponseBodyKnowledgeBaseJobResult) };
    inline GetKnowledgeBaseJobResponseBody& setKnowledgeBaseJobResult(const GetKnowledgeBaseJobResponseBodyKnowledgeBaseJobResult & knowledgeBaseJobResult) { DARABONBA_PTR_SET_VALUE(knowledgeBaseJobResult_, knowledgeBaseJobResult) };
    inline GetKnowledgeBaseJobResponseBody& setKnowledgeBaseJobResult(GetKnowledgeBaseJobResponseBodyKnowledgeBaseJobResult && knowledgeBaseJobResult) { DARABONBA_PTR_SET_RVALUE(knowledgeBaseJobResult_, knowledgeBaseJobResult) };


    // maxRunningTimeInSeconds Field Functions 
    bool hasMaxRunningTimeInSeconds() const { return this->maxRunningTimeInSeconds_ != nullptr;};
    void deleteMaxRunningTimeInSeconds() { this->maxRunningTimeInSeconds_ = nullptr;};
    inline int32_t maxRunningTimeInSeconds() const { DARABONBA_PTR_GET_DEFAULT(maxRunningTimeInSeconds_, 0) };
    inline GetKnowledgeBaseJobResponseBody& setMaxRunningTimeInSeconds(int32_t maxRunningTimeInSeconds) { DARABONBA_PTR_SET_VALUE(maxRunningTimeInSeconds_, maxRunningTimeInSeconds) };


    // pipelineRunInfo Field Functions 
    bool hasPipelineRunInfo() const { return this->pipelineRunInfo_ != nullptr;};
    void deletePipelineRunInfo() { this->pipelineRunInfo_ = nullptr;};
    inline const GetKnowledgeBaseJobResponseBodyPipelineRunInfo & pipelineRunInfo() const { DARABONBA_PTR_GET_CONST(pipelineRunInfo_, GetKnowledgeBaseJobResponseBodyPipelineRunInfo) };
    inline GetKnowledgeBaseJobResponseBodyPipelineRunInfo pipelineRunInfo() { DARABONBA_PTR_GET(pipelineRunInfo_, GetKnowledgeBaseJobResponseBodyPipelineRunInfo) };
    inline GetKnowledgeBaseJobResponseBody& setPipelineRunInfo(const GetKnowledgeBaseJobResponseBodyPipelineRunInfo & pipelineRunInfo) { DARABONBA_PTR_SET_VALUE(pipelineRunInfo_, pipelineRunInfo) };
    inline GetKnowledgeBaseJobResponseBody& setPipelineRunInfo(GetKnowledgeBaseJobResponseBodyPipelineRunInfo && pipelineRunInfo) { DARABONBA_PTR_SET_RVALUE(pipelineRunInfo_, pipelineRunInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetKnowledgeBaseJobResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userVpc Field Functions 
    bool hasUserVpc() const { return this->userVpc_ != nullptr;};
    void deleteUserVpc() { this->userVpc_ = nullptr;};
    inline const GetKnowledgeBaseJobResponseBodyUserVpc & userVpc() const { DARABONBA_PTR_GET_CONST(userVpc_, GetKnowledgeBaseJobResponseBodyUserVpc) };
    inline GetKnowledgeBaseJobResponseBodyUserVpc userVpc() { DARABONBA_PTR_GET(userVpc_, GetKnowledgeBaseJobResponseBodyUserVpc) };
    inline GetKnowledgeBaseJobResponseBody& setUserVpc(const GetKnowledgeBaseJobResponseBodyUserVpc & userVpc) { DARABONBA_PTR_SET_VALUE(userVpc_, userVpc) };
    inline GetKnowledgeBaseJobResponseBody& setUserVpc(GetKnowledgeBaseJobResponseBodyUserVpc && userVpc) { DARABONBA_PTR_SET_RVALUE(userVpc_, userVpc) };


    // workspaceId Field Functions 
    bool hasWorkspaceId() const { return this->workspaceId_ != nullptr;};
    void deleteWorkspaceId() { this->workspaceId_ = nullptr;};
    inline string workspaceId() const { DARABONBA_PTR_GET_DEFAULT(workspaceId_, "") };
    inline GetKnowledgeBaseJobResponseBody& setWorkspaceId(string workspaceId) { DARABONBA_PTR_SET_VALUE(workspaceId_, workspaceId) };


  protected:
    std::shared_ptr<string> accessibility_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<vector<GetKnowledgeBaseJobResponseBodyEcsSpecs>> ecsSpecs_ = nullptr;
    std::shared_ptr<GetKnowledgeBaseJobResponseBodyEmbeddingConfig> embeddingConfig_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> gmtCreateTime_ = nullptr;
    std::shared_ptr<string> gmtFinishTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<string> jobAction_ = nullptr;
    std::shared_ptr<string> knowledgeBaseId_ = nullptr;
    std::shared_ptr<string> knowledgeBaseJobId_ = nullptr;
    std::shared_ptr<GetKnowledgeBaseJobResponseBodyKnowledgeBaseJobResult> knowledgeBaseJobResult_ = nullptr;
    std::shared_ptr<int32_t> maxRunningTimeInSeconds_ = nullptr;
    std::shared_ptr<GetKnowledgeBaseJobResponseBodyPipelineRunInfo> pipelineRunInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<GetKnowledgeBaseJobResponseBodyUserVpc> userVpc_ = nullptr;
    std::shared_ptr<string> workspaceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PAILangStudio20240710
#endif
