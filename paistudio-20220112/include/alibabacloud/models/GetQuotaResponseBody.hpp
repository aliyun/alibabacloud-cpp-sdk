// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETQUOTARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETQUOTARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/Label.hpp>
#include <alibabacloud/models/ResourceSpec.hpp>
#include <alibabacloud/models/QuotaConfig.hpp>
#include <alibabacloud/models/QuotaDetails.hpp>
#include <alibabacloud/models/QuotaIdName.hpp>
#include <alibabacloud/models/WorkspaceIdName.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiStudio20220112
{
namespace Models
{
  class GetQuotaResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetQuotaResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AllocateStrategy, allocateStrategy_);
      DARABONBA_PTR_TO_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_TO_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(LatestOperationId, latestOperationId_);
      DARABONBA_PTR_TO_JSON(Min, min_);
      DARABONBA_PTR_TO_JSON(ParentQuotaId, parentQuotaId_);
      DARABONBA_PTR_TO_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_TO_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_TO_JSON(QuotaDetails, quotaDetails_);
      DARABONBA_PTR_TO_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_TO_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubQuotas, subQuotas_);
      DARABONBA_PTR_TO_JSON(Workspaces, workspaces_);
    };
    friend void from_json(const Darabonba::Json& j, GetQuotaResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AllocateStrategy, allocateStrategy_);
      DARABONBA_PTR_FROM_JSON(CreatorId, creatorId_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(GmtCreatedTime, gmtCreatedTime_);
      DARABONBA_PTR_FROM_JSON(GmtModifiedTime, gmtModifiedTime_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(LatestOperationId, latestOperationId_);
      DARABONBA_PTR_FROM_JSON(Min, min_);
      DARABONBA_PTR_FROM_JSON(ParentQuotaId, parentQuotaId_);
      DARABONBA_PTR_FROM_JSON(QueueStrategy, queueStrategy_);
      DARABONBA_PTR_FROM_JSON(QuotaConfig, quotaConfig_);
      DARABONBA_PTR_FROM_JSON(QuotaDetails, quotaDetails_);
      DARABONBA_PTR_FROM_JSON(QuotaId, quotaId_);
      DARABONBA_PTR_FROM_JSON(QuotaName, quotaName_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(ReasonMessage, reasonMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIds, resourceGroupIds_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubQuotas, subQuotas_);
      DARABONBA_PTR_FROM_JSON(Workspaces, workspaces_);
    };
    GetQuotaResponseBody() = default ;
    GetQuotaResponseBody(const GetQuotaResponseBody &) = default ;
    GetQuotaResponseBody(GetQuotaResponseBody &&) = default ;
    GetQuotaResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetQuotaResponseBody() = default ;
    GetQuotaResponseBody& operator=(const GetQuotaResponseBody &) = default ;
    GetQuotaResponseBody& operator=(GetQuotaResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->allocateStrategy_ != nullptr
        && this->creatorId_ != nullptr && this->description_ != nullptr && this->gmtCreatedTime_ != nullptr && this->gmtModifiedTime_ != nullptr && this->labels_ != nullptr
        && this->latestOperationId_ != nullptr && this->min_ != nullptr && this->parentQuotaId_ != nullptr && this->queueStrategy_ != nullptr && this->quotaConfig_ != nullptr
        && this->quotaDetails_ != nullptr && this->quotaId_ != nullptr && this->quotaName_ != nullptr && this->reasonCode_ != nullptr && this->reasonMessage_ != nullptr
        && this->requestId_ != nullptr && this->resourceGroupIds_ != nullptr && this->resourceType_ != nullptr && this->status_ != nullptr && this->subQuotas_ != nullptr
        && this->workspaces_ != nullptr; };
    // allocateStrategy Field Functions 
    bool hasAllocateStrategy() const { return this->allocateStrategy_ != nullptr;};
    void deleteAllocateStrategy() { this->allocateStrategy_ = nullptr;};
    inline string allocateStrategy() const { DARABONBA_PTR_GET_DEFAULT(allocateStrategy_, "") };
    inline GetQuotaResponseBody& setAllocateStrategy(string allocateStrategy) { DARABONBA_PTR_SET_VALUE(allocateStrategy_, allocateStrategy) };


    // creatorId Field Functions 
    bool hasCreatorId() const { return this->creatorId_ != nullptr;};
    void deleteCreatorId() { this->creatorId_ = nullptr;};
    inline string creatorId() const { DARABONBA_PTR_GET_DEFAULT(creatorId_, "") };
    inline GetQuotaResponseBody& setCreatorId(string creatorId) { DARABONBA_PTR_SET_VALUE(creatorId_, creatorId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetQuotaResponseBody& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // gmtCreatedTime Field Functions 
    bool hasGmtCreatedTime() const { return this->gmtCreatedTime_ != nullptr;};
    void deleteGmtCreatedTime() { this->gmtCreatedTime_ = nullptr;};
    inline string gmtCreatedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtCreatedTime_, "") };
    inline GetQuotaResponseBody& setGmtCreatedTime(string gmtCreatedTime) { DARABONBA_PTR_SET_VALUE(gmtCreatedTime_, gmtCreatedTime) };


    // gmtModifiedTime Field Functions 
    bool hasGmtModifiedTime() const { return this->gmtModifiedTime_ != nullptr;};
    void deleteGmtModifiedTime() { this->gmtModifiedTime_ = nullptr;};
    inline string gmtModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(gmtModifiedTime_, "") };
    inline GetQuotaResponseBody& setGmtModifiedTime(string gmtModifiedTime) { DARABONBA_PTR_SET_VALUE(gmtModifiedTime_, gmtModifiedTime) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const vector<Label> & labels() const { DARABONBA_PTR_GET_CONST(labels_, vector<Label>) };
    inline vector<Label> labels() { DARABONBA_PTR_GET(labels_, vector<Label>) };
    inline GetQuotaResponseBody& setLabels(const vector<Label> & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline GetQuotaResponseBody& setLabels(vector<Label> && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // latestOperationId Field Functions 
    bool hasLatestOperationId() const { return this->latestOperationId_ != nullptr;};
    void deleteLatestOperationId() { this->latestOperationId_ = nullptr;};
    inline string latestOperationId() const { DARABONBA_PTR_GET_DEFAULT(latestOperationId_, "") };
    inline GetQuotaResponseBody& setLatestOperationId(string latestOperationId) { DARABONBA_PTR_SET_VALUE(latestOperationId_, latestOperationId) };


    // min Field Functions 
    bool hasMin() const { return this->min_ != nullptr;};
    void deleteMin() { this->min_ = nullptr;};
    inline const ResourceSpec & min() const { DARABONBA_PTR_GET_CONST(min_, ResourceSpec) };
    inline ResourceSpec min() { DARABONBA_PTR_GET(min_, ResourceSpec) };
    inline GetQuotaResponseBody& setMin(const ResourceSpec & min) { DARABONBA_PTR_SET_VALUE(min_, min) };
    inline GetQuotaResponseBody& setMin(ResourceSpec && min) { DARABONBA_PTR_SET_RVALUE(min_, min) };


    // parentQuotaId Field Functions 
    bool hasParentQuotaId() const { return this->parentQuotaId_ != nullptr;};
    void deleteParentQuotaId() { this->parentQuotaId_ = nullptr;};
    inline string parentQuotaId() const { DARABONBA_PTR_GET_DEFAULT(parentQuotaId_, "") };
    inline GetQuotaResponseBody& setParentQuotaId(string parentQuotaId) { DARABONBA_PTR_SET_VALUE(parentQuotaId_, parentQuotaId) };


    // queueStrategy Field Functions 
    bool hasQueueStrategy() const { return this->queueStrategy_ != nullptr;};
    void deleteQueueStrategy() { this->queueStrategy_ = nullptr;};
    inline string queueStrategy() const { DARABONBA_PTR_GET_DEFAULT(queueStrategy_, "") };
    inline GetQuotaResponseBody& setQueueStrategy(string queueStrategy) { DARABONBA_PTR_SET_VALUE(queueStrategy_, queueStrategy) };


    // quotaConfig Field Functions 
    bool hasQuotaConfig() const { return this->quotaConfig_ != nullptr;};
    void deleteQuotaConfig() { this->quotaConfig_ = nullptr;};
    inline const QuotaConfig & quotaConfig() const { DARABONBA_PTR_GET_CONST(quotaConfig_, QuotaConfig) };
    inline QuotaConfig quotaConfig() { DARABONBA_PTR_GET(quotaConfig_, QuotaConfig) };
    inline GetQuotaResponseBody& setQuotaConfig(const QuotaConfig & quotaConfig) { DARABONBA_PTR_SET_VALUE(quotaConfig_, quotaConfig) };
    inline GetQuotaResponseBody& setQuotaConfig(QuotaConfig && quotaConfig) { DARABONBA_PTR_SET_RVALUE(quotaConfig_, quotaConfig) };


    // quotaDetails Field Functions 
    bool hasQuotaDetails() const { return this->quotaDetails_ != nullptr;};
    void deleteQuotaDetails() { this->quotaDetails_ = nullptr;};
    inline const QuotaDetails & quotaDetails() const { DARABONBA_PTR_GET_CONST(quotaDetails_, QuotaDetails) };
    inline QuotaDetails quotaDetails() { DARABONBA_PTR_GET(quotaDetails_, QuotaDetails) };
    inline GetQuotaResponseBody& setQuotaDetails(const QuotaDetails & quotaDetails) { DARABONBA_PTR_SET_VALUE(quotaDetails_, quotaDetails) };
    inline GetQuotaResponseBody& setQuotaDetails(QuotaDetails && quotaDetails) { DARABONBA_PTR_SET_RVALUE(quotaDetails_, quotaDetails) };


    // quotaId Field Functions 
    bool hasQuotaId() const { return this->quotaId_ != nullptr;};
    void deleteQuotaId() { this->quotaId_ = nullptr;};
    inline string quotaId() const { DARABONBA_PTR_GET_DEFAULT(quotaId_, "") };
    inline GetQuotaResponseBody& setQuotaId(string quotaId) { DARABONBA_PTR_SET_VALUE(quotaId_, quotaId) };


    // quotaName Field Functions 
    bool hasQuotaName() const { return this->quotaName_ != nullptr;};
    void deleteQuotaName() { this->quotaName_ = nullptr;};
    inline string quotaName() const { DARABONBA_PTR_GET_DEFAULT(quotaName_, "") };
    inline GetQuotaResponseBody& setQuotaName(string quotaName) { DARABONBA_PTR_SET_VALUE(quotaName_, quotaName) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline GetQuotaResponseBody& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // reasonMessage Field Functions 
    bool hasReasonMessage() const { return this->reasonMessage_ != nullptr;};
    void deleteReasonMessage() { this->reasonMessage_ = nullptr;};
    inline string reasonMessage() const { DARABONBA_PTR_GET_DEFAULT(reasonMessage_, "") };
    inline GetQuotaResponseBody& setReasonMessage(string reasonMessage) { DARABONBA_PTR_SET_VALUE(reasonMessage_, reasonMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetQuotaResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceGroupIds Field Functions 
    bool hasResourceGroupIds() const { return this->resourceGroupIds_ != nullptr;};
    void deleteResourceGroupIds() { this->resourceGroupIds_ = nullptr;};
    inline const vector<string> & resourceGroupIds() const { DARABONBA_PTR_GET_CONST(resourceGroupIds_, vector<string>) };
    inline vector<string> resourceGroupIds() { DARABONBA_PTR_GET(resourceGroupIds_, vector<string>) };
    inline GetQuotaResponseBody& setResourceGroupIds(const vector<string> & resourceGroupIds) { DARABONBA_PTR_SET_VALUE(resourceGroupIds_, resourceGroupIds) };
    inline GetQuotaResponseBody& setResourceGroupIds(vector<string> && resourceGroupIds) { DARABONBA_PTR_SET_RVALUE(resourceGroupIds_, resourceGroupIds) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetQuotaResponseBody& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetQuotaResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subQuotas Field Functions 
    bool hasSubQuotas() const { return this->subQuotas_ != nullptr;};
    void deleteSubQuotas() { this->subQuotas_ = nullptr;};
    inline const vector<QuotaIdName> & subQuotas() const { DARABONBA_PTR_GET_CONST(subQuotas_, vector<QuotaIdName>) };
    inline vector<QuotaIdName> subQuotas() { DARABONBA_PTR_GET(subQuotas_, vector<QuotaIdName>) };
    inline GetQuotaResponseBody& setSubQuotas(const vector<QuotaIdName> & subQuotas) { DARABONBA_PTR_SET_VALUE(subQuotas_, subQuotas) };
    inline GetQuotaResponseBody& setSubQuotas(vector<QuotaIdName> && subQuotas) { DARABONBA_PTR_SET_RVALUE(subQuotas_, subQuotas) };


    // workspaces Field Functions 
    bool hasWorkspaces() const { return this->workspaces_ != nullptr;};
    void deleteWorkspaces() { this->workspaces_ = nullptr;};
    inline const vector<WorkspaceIdName> & workspaces() const { DARABONBA_PTR_GET_CONST(workspaces_, vector<WorkspaceIdName>) };
    inline vector<WorkspaceIdName> workspaces() { DARABONBA_PTR_GET(workspaces_, vector<WorkspaceIdName>) };
    inline GetQuotaResponseBody& setWorkspaces(const vector<WorkspaceIdName> & workspaces) { DARABONBA_PTR_SET_VALUE(workspaces_, workspaces) };
    inline GetQuotaResponseBody& setWorkspaces(vector<WorkspaceIdName> && workspaces) { DARABONBA_PTR_SET_RVALUE(workspaces_, workspaces) };


  protected:
    std::shared_ptr<string> allocateStrategy_ = nullptr;
    std::shared_ptr<string> creatorId_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> gmtCreatedTime_ = nullptr;
    std::shared_ptr<string> gmtModifiedTime_ = nullptr;
    std::shared_ptr<vector<Label>> labels_ = nullptr;
    std::shared_ptr<string> latestOperationId_ = nullptr;
    std::shared_ptr<ResourceSpec> min_ = nullptr;
    std::shared_ptr<string> parentQuotaId_ = nullptr;
    std::shared_ptr<string> queueStrategy_ = nullptr;
    std::shared_ptr<QuotaConfig> quotaConfig_ = nullptr;
    std::shared_ptr<QuotaDetails> quotaDetails_ = nullptr;
    // Quota Id
    std::shared_ptr<string> quotaId_ = nullptr;
    std::shared_ptr<string> quotaName_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> reasonMessage_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<string>> resourceGroupIds_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<QuotaIdName>> subQuotas_ = nullptr;
    std::shared_ptr<vector<WorkspaceIdName>> workspaces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiStudio20220112
#endif
