// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPPUBLISHSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAPPPUBLISHSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppPublishStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppPublishStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_TO_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_TO_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_TO_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_TO_JSON(Synchro, synchro_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppPublishStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(AllowRetry, allowRetry_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DynamicCode, dynamicCode_);
      DARABONBA_PTR_FROM_JSON(DynamicMessage, dynamicMessage_);
      DARABONBA_PTR_FROM_JSON(ErrorArgs, errorArgs_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootErrorCode, rootErrorCode_);
      DARABONBA_PTR_FROM_JSON(RootErrorMsg, rootErrorMsg_);
      DARABONBA_PTR_FROM_JSON(Synchro, synchro_);
    };
    GetAppPublishStatusResponseBody() = default ;
    GetAppPublishStatusResponseBody(const GetAppPublishStatusResponseBody &) = default ;
    GetAppPublishStatusResponseBody(GetAppPublishStatusResponseBody &&) = default ;
    GetAppPublishStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppPublishStatusResponseBody() = default ;
    GetAppPublishStatusResponseBody& operator=(const GetAppPublishStatusResponseBody &) = default ;
    GetAppPublishStatusResponseBody& operator=(GetAppPublishStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactDigest, artifactDigest_);
        DARABONBA_PTR_TO_JSON(AuditId, auditId_);
        DARABONBA_PTR_TO_JSON(BindingId, bindingId_);
        DARABONBA_PTR_TO_JSON(CanQuickRevert, canQuickRevert_);
        DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_TO_JSON(CandidateStatus, candidateStatus_);
        DARABONBA_PTR_TO_JSON(CommitHash, commitHash_);
        DARABONBA_PTR_TO_JSON(CurrentStep, currentStep_);
        DARABONBA_PTR_TO_JSON(CurrentStepCode, currentStepCode_);
        DARABONBA_PTR_TO_JSON(DeployChannel, deployChannel_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(ErrorStep, errorStep_);
        DARABONBA_PTR_TO_JSON(ErrorStepCode, errorStepCode_);
        DARABONBA_PTR_TO_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_TO_JSON(IsSuccess, isSuccess_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(OrderType, orderType_);
        DARABONBA_PTR_TO_JSON(OrderTypeCode, orderTypeCode_);
        DARABONBA_PTR_TO_JSON(Percent, percent_);
        DARABONBA_PTR_TO_JSON(PlatformAppid, platformAppid_);
        DARABONBA_PTR_TO_JSON(PluginDeclarationHash, pluginDeclarationHash_);
        DARABONBA_PTR_TO_JSON(PluginState, pluginState_);
        DARABONBA_PTR_TO_JSON(PrivacyDraftId, privacyDraftId_);
        DARABONBA_PTR_TO_JSON(PrivacyRevision, privacyRevision_);
        DARABONBA_PTR_TO_JSON(PublishDiagnostics, publishDiagnostics_);
        DARABONBA_PTR_TO_JSON(PublishEnv, publishEnv_);
        DARABONBA_PTR_TO_JSON(PublishNumber, publishNumber_);
        DARABONBA_PTR_TO_JSON(PublishOrderId, publishOrderId_);
        DARABONBA_PTR_TO_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_TO_JSON(ReadbackStatus, readbackStatus_);
        DARABONBA_PTR_TO_JSON(SiteId, siteId_);
        DARABONBA_PTR_TO_JSON(StepCodes, stepCodes_);
        DARABONBA_PTR_TO_JSON(Steps, steps_);
        DARABONBA_PTR_TO_JSON(Subchannel, subchannel_);
        DARABONBA_PTR_TO_JSON(SubmitIntentStatus, submitIntentStatus_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(UploadAttemptId, uploadAttemptId_);
        DARABONBA_PTR_TO_JSON(UploadLeaseState, uploadLeaseState_);
        DARABONBA_PTR_TO_JSON(UploadSequence, uploadSequence_);
        DARABONBA_PTR_TO_JSON(UploadTicketState, uploadTicketState_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactDigest, artifactDigest_);
        DARABONBA_PTR_FROM_JSON(AuditId, auditId_);
        DARABONBA_PTR_FROM_JSON(BindingId, bindingId_);
        DARABONBA_PTR_FROM_JSON(CanQuickRevert, canQuickRevert_);
        DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_FROM_JSON(CandidateStatus, candidateStatus_);
        DARABONBA_PTR_FROM_JSON(CommitHash, commitHash_);
        DARABONBA_PTR_FROM_JSON(CurrentStep, currentStep_);
        DARABONBA_PTR_FROM_JSON(CurrentStepCode, currentStepCode_);
        DARABONBA_PTR_FROM_JSON(DeployChannel, deployChannel_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(ErrorStep, errorStep_);
        DARABONBA_PTR_FROM_JSON(ErrorStepCode, errorStepCode_);
        DARABONBA_PTR_FROM_JSON(IsFinish, isFinish_);
        DARABONBA_PTR_FROM_JSON(IsSuccess, isSuccess_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(OrderType, orderType_);
        DARABONBA_PTR_FROM_JSON(OrderTypeCode, orderTypeCode_);
        DARABONBA_PTR_FROM_JSON(Percent, percent_);
        DARABONBA_PTR_FROM_JSON(PlatformAppid, platformAppid_);
        DARABONBA_PTR_FROM_JSON(PluginDeclarationHash, pluginDeclarationHash_);
        DARABONBA_PTR_FROM_JSON(PluginState, pluginState_);
        DARABONBA_PTR_FROM_JSON(PrivacyDraftId, privacyDraftId_);
        DARABONBA_PTR_FROM_JSON(PrivacyRevision, privacyRevision_);
        DARABONBA_PTR_FROM_JSON(PublishDiagnostics, publishDiagnostics_);
        DARABONBA_PTR_FROM_JSON(PublishEnv, publishEnv_);
        DARABONBA_PTR_FROM_JSON(PublishNumber, publishNumber_);
        DARABONBA_PTR_FROM_JSON(PublishOrderId, publishOrderId_);
        DARABONBA_PTR_FROM_JSON(PublishTime, publishTime_);
        DARABONBA_PTR_FROM_JSON(ReadbackStatus, readbackStatus_);
        DARABONBA_PTR_FROM_JSON(SiteId, siteId_);
        DARABONBA_PTR_FROM_JSON(StepCodes, stepCodes_);
        DARABONBA_PTR_FROM_JSON(Steps, steps_);
        DARABONBA_PTR_FROM_JSON(Subchannel, subchannel_);
        DARABONBA_PTR_FROM_JSON(SubmitIntentStatus, submitIntentStatus_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(UploadAttemptId, uploadAttemptId_);
        DARABONBA_PTR_FROM_JSON(UploadLeaseState, uploadLeaseState_);
        DARABONBA_PTR_FROM_JSON(UploadSequence, uploadSequence_);
        DARABONBA_PTR_FROM_JSON(UploadTicketState, uploadTicketState_);
      };
      Module() = default ;
      Module(const Module &) = default ;
      Module(Module &&) = default ;
      Module(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Module() = default ;
      Module& operator=(const Module &) = default ;
      Module& operator=(Module &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->artifactDigest_ == nullptr
        && this->auditId_ == nullptr && this->bindingId_ == nullptr && this->canQuickRevert_ == nullptr && this->candidateId_ == nullptr && this->candidateStatus_ == nullptr
        && this->commitHash_ == nullptr && this->currentStep_ == nullptr && this->currentStepCode_ == nullptr && this->deployChannel_ == nullptr && this->description_ == nullptr
        && this->errorStep_ == nullptr && this->errorStepCode_ == nullptr && this->isFinish_ == nullptr && this->isSuccess_ == nullptr && this->msg_ == nullptr
        && this->orderType_ == nullptr && this->orderTypeCode_ == nullptr && this->percent_ == nullptr && this->platformAppid_ == nullptr && this->pluginDeclarationHash_ == nullptr
        && this->pluginState_ == nullptr && this->privacyDraftId_ == nullptr && this->privacyRevision_ == nullptr && this->publishDiagnostics_ == nullptr && this->publishEnv_ == nullptr
        && this->publishNumber_ == nullptr && this->publishOrderId_ == nullptr && this->publishTime_ == nullptr && this->readbackStatus_ == nullptr && this->siteId_ == nullptr
        && this->stepCodes_ == nullptr && this->steps_ == nullptr && this->subchannel_ == nullptr && this->submitIntentStatus_ == nullptr && this->updatedAt_ == nullptr
        && this->uploadAttemptId_ == nullptr && this->uploadLeaseState_ == nullptr && this->uploadSequence_ == nullptr && this->uploadTicketState_ == nullptr; };
      // artifactDigest Field Functions 
      bool hasArtifactDigest() const { return this->artifactDigest_ != nullptr;};
      void deleteArtifactDigest() { this->artifactDigest_ = nullptr;};
      inline string getArtifactDigest() const { DARABONBA_PTR_GET_DEFAULT(artifactDigest_, "") };
      inline Module& setArtifactDigest(string artifactDigest) { DARABONBA_PTR_SET_VALUE(artifactDigest_, artifactDigest) };


      // auditId Field Functions 
      bool hasAuditId() const { return this->auditId_ != nullptr;};
      void deleteAuditId() { this->auditId_ = nullptr;};
      inline string getAuditId() const { DARABONBA_PTR_GET_DEFAULT(auditId_, "") };
      inline Module& setAuditId(string auditId) { DARABONBA_PTR_SET_VALUE(auditId_, auditId) };


      // bindingId Field Functions 
      bool hasBindingId() const { return this->bindingId_ != nullptr;};
      void deleteBindingId() { this->bindingId_ = nullptr;};
      inline string getBindingId() const { DARABONBA_PTR_GET_DEFAULT(bindingId_, "") };
      inline Module& setBindingId(string bindingId) { DARABONBA_PTR_SET_VALUE(bindingId_, bindingId) };


      // canQuickRevert Field Functions 
      bool hasCanQuickRevert() const { return this->canQuickRevert_ != nullptr;};
      void deleteCanQuickRevert() { this->canQuickRevert_ = nullptr;};
      inline string getCanQuickRevert() const { DARABONBA_PTR_GET_DEFAULT(canQuickRevert_, "") };
      inline Module& setCanQuickRevert(string canQuickRevert) { DARABONBA_PTR_SET_VALUE(canQuickRevert_, canQuickRevert) };


      // candidateId Field Functions 
      bool hasCandidateId() const { return this->candidateId_ != nullptr;};
      void deleteCandidateId() { this->candidateId_ = nullptr;};
      inline string getCandidateId() const { DARABONBA_PTR_GET_DEFAULT(candidateId_, "") };
      inline Module& setCandidateId(string candidateId) { DARABONBA_PTR_SET_VALUE(candidateId_, candidateId) };


      // candidateStatus Field Functions 
      bool hasCandidateStatus() const { return this->candidateStatus_ != nullptr;};
      void deleteCandidateStatus() { this->candidateStatus_ = nullptr;};
      inline string getCandidateStatus() const { DARABONBA_PTR_GET_DEFAULT(candidateStatus_, "") };
      inline Module& setCandidateStatus(string candidateStatus) { DARABONBA_PTR_SET_VALUE(candidateStatus_, candidateStatus) };


      // commitHash Field Functions 
      bool hasCommitHash() const { return this->commitHash_ != nullptr;};
      void deleteCommitHash() { this->commitHash_ = nullptr;};
      inline string getCommitHash() const { DARABONBA_PTR_GET_DEFAULT(commitHash_, "") };
      inline Module& setCommitHash(string commitHash) { DARABONBA_PTR_SET_VALUE(commitHash_, commitHash) };


      // currentStep Field Functions 
      bool hasCurrentStep() const { return this->currentStep_ != nullptr;};
      void deleteCurrentStep() { this->currentStep_ = nullptr;};
      inline string getCurrentStep() const { DARABONBA_PTR_GET_DEFAULT(currentStep_, "") };
      inline Module& setCurrentStep(string currentStep) { DARABONBA_PTR_SET_VALUE(currentStep_, currentStep) };


      // currentStepCode Field Functions 
      bool hasCurrentStepCode() const { return this->currentStepCode_ != nullptr;};
      void deleteCurrentStepCode() { this->currentStepCode_ = nullptr;};
      inline string getCurrentStepCode() const { DARABONBA_PTR_GET_DEFAULT(currentStepCode_, "") };
      inline Module& setCurrentStepCode(string currentStepCode) { DARABONBA_PTR_SET_VALUE(currentStepCode_, currentStepCode) };


      // deployChannel Field Functions 
      bool hasDeployChannel() const { return this->deployChannel_ != nullptr;};
      void deleteDeployChannel() { this->deployChannel_ = nullptr;};
      inline string getDeployChannel() const { DARABONBA_PTR_GET_DEFAULT(deployChannel_, "") };
      inline Module& setDeployChannel(string deployChannel) { DARABONBA_PTR_SET_VALUE(deployChannel_, deployChannel) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline Module& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // errorStep Field Functions 
      bool hasErrorStep() const { return this->errorStep_ != nullptr;};
      void deleteErrorStep() { this->errorStep_ = nullptr;};
      inline string getErrorStep() const { DARABONBA_PTR_GET_DEFAULT(errorStep_, "") };
      inline Module& setErrorStep(string errorStep) { DARABONBA_PTR_SET_VALUE(errorStep_, errorStep) };


      // errorStepCode Field Functions 
      bool hasErrorStepCode() const { return this->errorStepCode_ != nullptr;};
      void deleteErrorStepCode() { this->errorStepCode_ = nullptr;};
      inline string getErrorStepCode() const { DARABONBA_PTR_GET_DEFAULT(errorStepCode_, "") };
      inline Module& setErrorStepCode(string errorStepCode) { DARABONBA_PTR_SET_VALUE(errorStepCode_, errorStepCode) };


      // isFinish Field Functions 
      bool hasIsFinish() const { return this->isFinish_ != nullptr;};
      void deleteIsFinish() { this->isFinish_ = nullptr;};
      inline bool getIsFinish() const { DARABONBA_PTR_GET_DEFAULT(isFinish_, false) };
      inline Module& setIsFinish(bool isFinish) { DARABONBA_PTR_SET_VALUE(isFinish_, isFinish) };


      // isSuccess Field Functions 
      bool hasIsSuccess() const { return this->isSuccess_ != nullptr;};
      void deleteIsSuccess() { this->isSuccess_ = nullptr;};
      inline bool getIsSuccess() const { DARABONBA_PTR_GET_DEFAULT(isSuccess_, false) };
      inline Module& setIsSuccess(bool isSuccess) { DARABONBA_PTR_SET_VALUE(isSuccess_, isSuccess) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Module& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // orderType Field Functions 
      bool hasOrderType() const { return this->orderType_ != nullptr;};
      void deleteOrderType() { this->orderType_ = nullptr;};
      inline string getOrderType() const { DARABONBA_PTR_GET_DEFAULT(orderType_, "") };
      inline Module& setOrderType(string orderType) { DARABONBA_PTR_SET_VALUE(orderType_, orderType) };


      // orderTypeCode Field Functions 
      bool hasOrderTypeCode() const { return this->orderTypeCode_ != nullptr;};
      void deleteOrderTypeCode() { this->orderTypeCode_ = nullptr;};
      inline string getOrderTypeCode() const { DARABONBA_PTR_GET_DEFAULT(orderTypeCode_, "") };
      inline Module& setOrderTypeCode(string orderTypeCode) { DARABONBA_PTR_SET_VALUE(orderTypeCode_, orderTypeCode) };


      // percent Field Functions 
      bool hasPercent() const { return this->percent_ != nullptr;};
      void deletePercent() { this->percent_ = nullptr;};
      inline int32_t getPercent() const { DARABONBA_PTR_GET_DEFAULT(percent_, 0) };
      inline Module& setPercent(int32_t percent) { DARABONBA_PTR_SET_VALUE(percent_, percent) };


      // platformAppid Field Functions 
      bool hasPlatformAppid() const { return this->platformAppid_ != nullptr;};
      void deletePlatformAppid() { this->platformAppid_ = nullptr;};
      inline string getPlatformAppid() const { DARABONBA_PTR_GET_DEFAULT(platformAppid_, "") };
      inline Module& setPlatformAppid(string platformAppid) { DARABONBA_PTR_SET_VALUE(platformAppid_, platformAppid) };


      // pluginDeclarationHash Field Functions 
      bool hasPluginDeclarationHash() const { return this->pluginDeclarationHash_ != nullptr;};
      void deletePluginDeclarationHash() { this->pluginDeclarationHash_ = nullptr;};
      inline string getPluginDeclarationHash() const { DARABONBA_PTR_GET_DEFAULT(pluginDeclarationHash_, "") };
      inline Module& setPluginDeclarationHash(string pluginDeclarationHash) { DARABONBA_PTR_SET_VALUE(pluginDeclarationHash_, pluginDeclarationHash) };


      // pluginState Field Functions 
      bool hasPluginState() const { return this->pluginState_ != nullptr;};
      void deletePluginState() { this->pluginState_ = nullptr;};
      inline string getPluginState() const { DARABONBA_PTR_GET_DEFAULT(pluginState_, "") };
      inline Module& setPluginState(string pluginState) { DARABONBA_PTR_SET_VALUE(pluginState_, pluginState) };


      // privacyDraftId Field Functions 
      bool hasPrivacyDraftId() const { return this->privacyDraftId_ != nullptr;};
      void deletePrivacyDraftId() { this->privacyDraftId_ = nullptr;};
      inline string getPrivacyDraftId() const { DARABONBA_PTR_GET_DEFAULT(privacyDraftId_, "") };
      inline Module& setPrivacyDraftId(string privacyDraftId) { DARABONBA_PTR_SET_VALUE(privacyDraftId_, privacyDraftId) };


      // privacyRevision Field Functions 
      bool hasPrivacyRevision() const { return this->privacyRevision_ != nullptr;};
      void deletePrivacyRevision() { this->privacyRevision_ = nullptr;};
      inline string getPrivacyRevision() const { DARABONBA_PTR_GET_DEFAULT(privacyRevision_, "") };
      inline Module& setPrivacyRevision(string privacyRevision) { DARABONBA_PTR_SET_VALUE(privacyRevision_, privacyRevision) };


      // publishDiagnostics Field Functions 
      bool hasPublishDiagnostics() const { return this->publishDiagnostics_ != nullptr;};
      void deletePublishDiagnostics() { this->publishDiagnostics_ = nullptr;};
      inline string getPublishDiagnostics() const { DARABONBA_PTR_GET_DEFAULT(publishDiagnostics_, "") };
      inline Module& setPublishDiagnostics(string publishDiagnostics) { DARABONBA_PTR_SET_VALUE(publishDiagnostics_, publishDiagnostics) };


      // publishEnv Field Functions 
      bool hasPublishEnv() const { return this->publishEnv_ != nullptr;};
      void deletePublishEnv() { this->publishEnv_ = nullptr;};
      inline string getPublishEnv() const { DARABONBA_PTR_GET_DEFAULT(publishEnv_, "") };
      inline Module& setPublishEnv(string publishEnv) { DARABONBA_PTR_SET_VALUE(publishEnv_, publishEnv) };


      // publishNumber Field Functions 
      bool hasPublishNumber() const { return this->publishNumber_ != nullptr;};
      void deletePublishNumber() { this->publishNumber_ = nullptr;};
      inline string getPublishNumber() const { DARABONBA_PTR_GET_DEFAULT(publishNumber_, "") };
      inline Module& setPublishNumber(string publishNumber) { DARABONBA_PTR_SET_VALUE(publishNumber_, publishNumber) };


      // publishOrderId Field Functions 
      bool hasPublishOrderId() const { return this->publishOrderId_ != nullptr;};
      void deletePublishOrderId() { this->publishOrderId_ = nullptr;};
      inline int64_t getPublishOrderId() const { DARABONBA_PTR_GET_DEFAULT(publishOrderId_, 0L) };
      inline Module& setPublishOrderId(int64_t publishOrderId) { DARABONBA_PTR_SET_VALUE(publishOrderId_, publishOrderId) };


      // publishTime Field Functions 
      bool hasPublishTime() const { return this->publishTime_ != nullptr;};
      void deletePublishTime() { this->publishTime_ = nullptr;};
      inline string getPublishTime() const { DARABONBA_PTR_GET_DEFAULT(publishTime_, "") };
      inline Module& setPublishTime(string publishTime) { DARABONBA_PTR_SET_VALUE(publishTime_, publishTime) };


      // readbackStatus Field Functions 
      bool hasReadbackStatus() const { return this->readbackStatus_ != nullptr;};
      void deleteReadbackStatus() { this->readbackStatus_ = nullptr;};
      inline string getReadbackStatus() const { DARABONBA_PTR_GET_DEFAULT(readbackStatus_, "") };
      inline Module& setReadbackStatus(string readbackStatus) { DARABONBA_PTR_SET_VALUE(readbackStatus_, readbackStatus) };


      // siteId Field Functions 
      bool hasSiteId() const { return this->siteId_ != nullptr;};
      void deleteSiteId() { this->siteId_ = nullptr;};
      inline string getSiteId() const { DARABONBA_PTR_GET_DEFAULT(siteId_, "") };
      inline Module& setSiteId(string siteId) { DARABONBA_PTR_SET_VALUE(siteId_, siteId) };


      // stepCodes Field Functions 
      bool hasStepCodes() const { return this->stepCodes_ != nullptr;};
      void deleteStepCodes() { this->stepCodes_ = nullptr;};
      inline const vector<string> & getStepCodes() const { DARABONBA_PTR_GET_CONST(stepCodes_, vector<string>) };
      inline vector<string> getStepCodes() { DARABONBA_PTR_GET(stepCodes_, vector<string>) };
      inline Module& setStepCodes(const vector<string> & stepCodes) { DARABONBA_PTR_SET_VALUE(stepCodes_, stepCodes) };
      inline Module& setStepCodes(vector<string> && stepCodes) { DARABONBA_PTR_SET_RVALUE(stepCodes_, stepCodes) };


      // steps Field Functions 
      bool hasSteps() const { return this->steps_ != nullptr;};
      void deleteSteps() { this->steps_ = nullptr;};
      inline const vector<string> & getSteps() const { DARABONBA_PTR_GET_CONST(steps_, vector<string>) };
      inline vector<string> getSteps() { DARABONBA_PTR_GET(steps_, vector<string>) };
      inline Module& setSteps(const vector<string> & steps) { DARABONBA_PTR_SET_VALUE(steps_, steps) };
      inline Module& setSteps(vector<string> && steps) { DARABONBA_PTR_SET_RVALUE(steps_, steps) };


      // subchannel Field Functions 
      bool hasSubchannel() const { return this->subchannel_ != nullptr;};
      void deleteSubchannel() { this->subchannel_ = nullptr;};
      inline string getSubchannel() const { DARABONBA_PTR_GET_DEFAULT(subchannel_, "") };
      inline Module& setSubchannel(string subchannel) { DARABONBA_PTR_SET_VALUE(subchannel_, subchannel) };


      // submitIntentStatus Field Functions 
      bool hasSubmitIntentStatus() const { return this->submitIntentStatus_ != nullptr;};
      void deleteSubmitIntentStatus() { this->submitIntentStatus_ = nullptr;};
      inline string getSubmitIntentStatus() const { DARABONBA_PTR_GET_DEFAULT(submitIntentStatus_, "") };
      inline Module& setSubmitIntentStatus(string submitIntentStatus) { DARABONBA_PTR_SET_VALUE(submitIntentStatus_, submitIntentStatus) };


      // updatedAt Field Functions 
      bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
      void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
      inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
      inline Module& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


      // uploadAttemptId Field Functions 
      bool hasUploadAttemptId() const { return this->uploadAttemptId_ != nullptr;};
      void deleteUploadAttemptId() { this->uploadAttemptId_ = nullptr;};
      inline string getUploadAttemptId() const { DARABONBA_PTR_GET_DEFAULT(uploadAttemptId_, "") };
      inline Module& setUploadAttemptId(string uploadAttemptId) { DARABONBA_PTR_SET_VALUE(uploadAttemptId_, uploadAttemptId) };


      // uploadLeaseState Field Functions 
      bool hasUploadLeaseState() const { return this->uploadLeaseState_ != nullptr;};
      void deleteUploadLeaseState() { this->uploadLeaseState_ = nullptr;};
      inline string getUploadLeaseState() const { DARABONBA_PTR_GET_DEFAULT(uploadLeaseState_, "") };
      inline Module& setUploadLeaseState(string uploadLeaseState) { DARABONBA_PTR_SET_VALUE(uploadLeaseState_, uploadLeaseState) };


      // uploadSequence Field Functions 
      bool hasUploadSequence() const { return this->uploadSequence_ != nullptr;};
      void deleteUploadSequence() { this->uploadSequence_ = nullptr;};
      inline int64_t getUploadSequence() const { DARABONBA_PTR_GET_DEFAULT(uploadSequence_, 0L) };
      inline Module& setUploadSequence(int64_t uploadSequence) { DARABONBA_PTR_SET_VALUE(uploadSequence_, uploadSequence) };


      // uploadTicketState Field Functions 
      bool hasUploadTicketState() const { return this->uploadTicketState_ != nullptr;};
      void deleteUploadTicketState() { this->uploadTicketState_ = nullptr;};
      inline string getUploadTicketState() const { DARABONBA_PTR_GET_DEFAULT(uploadTicketState_, "") };
      inline Module& setUploadTicketState(string uploadTicketState) { DARABONBA_PTR_SET_VALUE(uploadTicketState_, uploadTicketState) };


    protected:
      shared_ptr<string> artifactDigest_ {};
      shared_ptr<string> auditId_ {};
      shared_ptr<string> bindingId_ {};
      // Indicates whether quick rollback is supported.
      shared_ptr<string> canQuickRevert_ {};
      shared_ptr<string> candidateId_ {};
      shared_ptr<string> candidateStatus_ {};
      shared_ptr<string> commitHash_ {};
      // The current step number of the task.
      shared_ptr<string> currentStep_ {};
      // The code of the current publish step.
      shared_ptr<string> currentStepCode_ {};
      // The deployment channel.
      shared_ptr<string> deployChannel_ {};
      // The application description.
      shared_ptr<string> description_ {};
      // The publish process.
      shared_ptr<string> errorStep_ {};
      // The code of the publish step where the error occurred.
      shared_ptr<string> errorStepCode_ {};
      // Indicates whether the task is completed.
      shared_ptr<bool> isFinish_ {};
      // Indicates whether the call is successful. Valid values:
      // 
      // - `true`: The call is successful.
      // 
      // - `false`: The call fails.
      shared_ptr<bool> isSuccess_ {};
      // The additional information.
      shared_ptr<string> msg_ {};
      // The sort order. Valid values: ASC and DESC.
      shared_ptr<string> orderType_ {};
      // The code of the publish order type.
      shared_ptr<string> orderTypeCode_ {};
      // The completion percentage of the task.
      shared_ptr<int32_t> percent_ {};
      shared_ptr<string> platformAppid_ {};
      shared_ptr<string> pluginDeclarationHash_ {};
      shared_ptr<string> pluginState_ {};
      shared_ptr<string> privacyDraftId_ {};
      shared_ptr<string> privacyRevision_ {};
      shared_ptr<string> publishDiagnostics_ {};
      shared_ptr<string> publishEnv_ {};
      // The publish number.
      shared_ptr<string> publishNumber_ {};
      // The publish order ID.
      shared_ptr<int64_t> publishOrderId_ {};
      // The scheduled publish time in UTC format yyyy-MM-dd\"T\"HH:mm:ss.SSS\"Z\".
      // 
      // Use the UTC time format: yyyy-MM-ddTHH:mm:ss.SSSZ
      shared_ptr<string> publishTime_ {};
      shared_ptr<string> readbackStatus_ {};
      // The site ID.
      shared_ptr<string> siteId_ {};
      // The list of publish step codes.
      shared_ptr<vector<string>> stepCodes_ {};
      // The error level. Valid values: FATAL, ERROR, WARNING, and CRITICAL.
      shared_ptr<vector<string>> steps_ {};
      // The publish subchannel.
      shared_ptr<string> subchannel_ {};
      shared_ptr<string> submitIntentStatus_ {};
      shared_ptr<int64_t> updatedAt_ {};
      shared_ptr<string> uploadAttemptId_ {};
      shared_ptr<string> uploadLeaseState_ {};
      shared_ptr<int64_t> uploadSequence_ {};
      shared_ptr<string> uploadTicketState_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline GetAppPublishStatusResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline GetAppPublishStatusResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetAppPublishStatusResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline GetAppPublishStatusResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline GetAppPublishStatusResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline GetAppPublishStatusResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline GetAppPublishStatusResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const GetAppPublishStatusResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, GetAppPublishStatusResponseBody::Module) };
    inline GetAppPublishStatusResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, GetAppPublishStatusResponseBody::Module) };
    inline GetAppPublishStatusResponseBody& setModule(const GetAppPublishStatusResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline GetAppPublishStatusResponseBody& setModule(GetAppPublishStatusResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAppPublishStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline GetAppPublishStatusResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline GetAppPublishStatusResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline GetAppPublishStatusResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The details of the access denial.
    shared_ptr<string> accessDeniedDetail_ {};
    // Indicates whether retries are allowed.
    shared_ptr<bool> allowRetry_ {};
    // The application name.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic message.
    shared_ptr<string> dynamicMessage_ {};
    // The returned error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The response data.
    shared_ptr<GetAppPublishStatusResponseBody::Module> module_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    // The error code.
    shared_ptr<string> rootErrorCode_ {};
    // The exception message.
    shared_ptr<string> rootErrorMsg_ {};
    // The reserved parameter.
    shared_ptr<bool> synchro_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
