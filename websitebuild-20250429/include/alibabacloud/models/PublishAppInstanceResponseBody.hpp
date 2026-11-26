// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHAPPINSTANCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHAPPINSTANCERESPONSEBODY_HPP_
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
  class PublishAppInstanceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishAppInstanceResponseBody& obj) { 
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
    friend void from_json(const Darabonba::Json& j, PublishAppInstanceResponseBody& obj) { 
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
    PublishAppInstanceResponseBody() = default ;
    PublishAppInstanceResponseBody(const PublishAppInstanceResponseBody &) = default ;
    PublishAppInstanceResponseBody(PublishAppInstanceResponseBody &&) = default ;
    PublishAppInstanceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishAppInstanceResponseBody() = default ;
    PublishAppInstanceResponseBody& operator=(const PublishAppInstanceResponseBody &) = default ;
    PublishAppInstanceResponseBody& operator=(PublishAppInstanceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Module : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Module& obj) { 
        DARABONBA_PTR_TO_JSON(ArtifactDigest, artifactDigest_);
        DARABONBA_PTR_TO_JSON(AuditId, auditId_);
        DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_TO_JSON(CandidateStatus, candidateStatus_);
        DARABONBA_PTR_TO_JSON(CommitHash, commitHash_);
        DARABONBA_PTR_TO_JSON(PlatformAppid, platformAppid_);
        DARABONBA_PTR_TO_JSON(PluginDeclarationHash, pluginDeclarationHash_);
        DARABONBA_PTR_TO_JSON(PluginState, pluginState_);
        DARABONBA_PTR_TO_JSON(PrivacyDraftId, privacyDraftId_);
        DARABONBA_PTR_TO_JSON(PrivacyRevision, privacyRevision_);
        DARABONBA_PTR_TO_JSON(PublishEnv, publishEnv_);
        DARABONBA_PTR_TO_JSON(PublishNumber, publishNumber_);
        DARABONBA_PTR_TO_JSON(PublishOrderId, publishOrderId_);
        DARABONBA_PTR_TO_JSON(ReadbackStatus, readbackStatus_);
        DARABONBA_PTR_TO_JSON(SubmitIntentStatus, submitIntentStatus_);
        DARABONBA_PTR_TO_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_TO_JSON(UploadSequence, uploadSequence_);
      };
      friend void from_json(const Darabonba::Json& j, Module& obj) { 
        DARABONBA_PTR_FROM_JSON(ArtifactDigest, artifactDigest_);
        DARABONBA_PTR_FROM_JSON(AuditId, auditId_);
        DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
        DARABONBA_PTR_FROM_JSON(CandidateStatus, candidateStatus_);
        DARABONBA_PTR_FROM_JSON(CommitHash, commitHash_);
        DARABONBA_PTR_FROM_JSON(PlatformAppid, platformAppid_);
        DARABONBA_PTR_FROM_JSON(PluginDeclarationHash, pluginDeclarationHash_);
        DARABONBA_PTR_FROM_JSON(PluginState, pluginState_);
        DARABONBA_PTR_FROM_JSON(PrivacyDraftId, privacyDraftId_);
        DARABONBA_PTR_FROM_JSON(PrivacyRevision, privacyRevision_);
        DARABONBA_PTR_FROM_JSON(PublishEnv, publishEnv_);
        DARABONBA_PTR_FROM_JSON(PublishNumber, publishNumber_);
        DARABONBA_PTR_FROM_JSON(PublishOrderId, publishOrderId_);
        DARABONBA_PTR_FROM_JSON(ReadbackStatus, readbackStatus_);
        DARABONBA_PTR_FROM_JSON(SubmitIntentStatus, submitIntentStatus_);
        DARABONBA_PTR_FROM_JSON(UpdatedAt, updatedAt_);
        DARABONBA_PTR_FROM_JSON(UploadSequence, uploadSequence_);
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
        && this->auditId_ == nullptr && this->candidateId_ == nullptr && this->candidateStatus_ == nullptr && this->commitHash_ == nullptr && this->platformAppid_ == nullptr
        && this->pluginDeclarationHash_ == nullptr && this->pluginState_ == nullptr && this->privacyDraftId_ == nullptr && this->privacyRevision_ == nullptr && this->publishEnv_ == nullptr
        && this->publishNumber_ == nullptr && this->publishOrderId_ == nullptr && this->readbackStatus_ == nullptr && this->submitIntentStatus_ == nullptr && this->updatedAt_ == nullptr
        && this->uploadSequence_ == nullptr; };
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


      // readbackStatus Field Functions 
      bool hasReadbackStatus() const { return this->readbackStatus_ != nullptr;};
      void deleteReadbackStatus() { this->readbackStatus_ = nullptr;};
      inline string getReadbackStatus() const { DARABONBA_PTR_GET_DEFAULT(readbackStatus_, "") };
      inline Module& setReadbackStatus(string readbackStatus) { DARABONBA_PTR_SET_VALUE(readbackStatus_, readbackStatus) };


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


      // uploadSequence Field Functions 
      bool hasUploadSequence() const { return this->uploadSequence_ != nullptr;};
      void deleteUploadSequence() { this->uploadSequence_ = nullptr;};
      inline int64_t getUploadSequence() const { DARABONBA_PTR_GET_DEFAULT(uploadSequence_, 0L) };
      inline Module& setUploadSequence(int64_t uploadSequence) { DARABONBA_PTR_SET_VALUE(uploadSequence_, uploadSequence) };


    protected:
      shared_ptr<string> artifactDigest_ {};
      shared_ptr<string> auditId_ {};
      shared_ptr<string> candidateId_ {};
      shared_ptr<string> candidateStatus_ {};
      shared_ptr<string> commitHash_ {};
      shared_ptr<string> platformAppid_ {};
      shared_ptr<string> pluginDeclarationHash_ {};
      shared_ptr<string> pluginState_ {};
      shared_ptr<string> privacyDraftId_ {};
      shared_ptr<string> privacyRevision_ {};
      shared_ptr<string> publishEnv_ {};
      shared_ptr<string> publishNumber_ {};
      // The publish order ID.
      shared_ptr<int64_t> publishOrderId_ {};
      shared_ptr<string> readbackStatus_ {};
      shared_ptr<string> submitIntentStatus_ {};
      shared_ptr<int64_t> updatedAt_ {};
      shared_ptr<int64_t> uploadSequence_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->allowRetry_ == nullptr && this->appName_ == nullptr && this->dynamicCode_ == nullptr && this->dynamicMessage_ == nullptr && this->errorArgs_ == nullptr
        && this->module_ == nullptr && this->requestId_ == nullptr && this->rootErrorCode_ == nullptr && this->rootErrorMsg_ == nullptr && this->synchro_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline PublishAppInstanceResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // allowRetry Field Functions 
    bool hasAllowRetry() const { return this->allowRetry_ != nullptr;};
    void deleteAllowRetry() { this->allowRetry_ = nullptr;};
    inline bool getAllowRetry() const { DARABONBA_PTR_GET_DEFAULT(allowRetry_, false) };
    inline PublishAppInstanceResponseBody& setAllowRetry(bool allowRetry) { DARABONBA_PTR_SET_VALUE(allowRetry_, allowRetry) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline PublishAppInstanceResponseBody& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // dynamicCode Field Functions 
    bool hasDynamicCode() const { return this->dynamicCode_ != nullptr;};
    void deleteDynamicCode() { this->dynamicCode_ = nullptr;};
    inline string getDynamicCode() const { DARABONBA_PTR_GET_DEFAULT(dynamicCode_, "") };
    inline PublishAppInstanceResponseBody& setDynamicCode(string dynamicCode) { DARABONBA_PTR_SET_VALUE(dynamicCode_, dynamicCode) };


    // dynamicMessage Field Functions 
    bool hasDynamicMessage() const { return this->dynamicMessage_ != nullptr;};
    void deleteDynamicMessage() { this->dynamicMessage_ = nullptr;};
    inline string getDynamicMessage() const { DARABONBA_PTR_GET_DEFAULT(dynamicMessage_, "") };
    inline PublishAppInstanceResponseBody& setDynamicMessage(string dynamicMessage) { DARABONBA_PTR_SET_VALUE(dynamicMessage_, dynamicMessage) };


    // errorArgs Field Functions 
    bool hasErrorArgs() const { return this->errorArgs_ != nullptr;};
    void deleteErrorArgs() { this->errorArgs_ = nullptr;};
    inline const vector<Darabonba::Json> & getErrorArgs() const { DARABONBA_PTR_GET_CONST(errorArgs_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getErrorArgs() { DARABONBA_PTR_GET(errorArgs_, vector<Darabonba::Json>) };
    inline PublishAppInstanceResponseBody& setErrorArgs(const vector<Darabonba::Json> & errorArgs) { DARABONBA_PTR_SET_VALUE(errorArgs_, errorArgs) };
    inline PublishAppInstanceResponseBody& setErrorArgs(vector<Darabonba::Json> && errorArgs) { DARABONBA_PTR_SET_RVALUE(errorArgs_, errorArgs) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline const PublishAppInstanceResponseBody::Module & getModule() const { DARABONBA_PTR_GET_CONST(module_, PublishAppInstanceResponseBody::Module) };
    inline PublishAppInstanceResponseBody::Module getModule() { DARABONBA_PTR_GET(module_, PublishAppInstanceResponseBody::Module) };
    inline PublishAppInstanceResponseBody& setModule(const PublishAppInstanceResponseBody::Module & module) { DARABONBA_PTR_SET_VALUE(module_, module) };
    inline PublishAppInstanceResponseBody& setModule(PublishAppInstanceResponseBody::Module && module) { DARABONBA_PTR_SET_RVALUE(module_, module) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline PublishAppInstanceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootErrorCode Field Functions 
    bool hasRootErrorCode() const { return this->rootErrorCode_ != nullptr;};
    void deleteRootErrorCode() { this->rootErrorCode_ = nullptr;};
    inline string getRootErrorCode() const { DARABONBA_PTR_GET_DEFAULT(rootErrorCode_, "") };
    inline PublishAppInstanceResponseBody& setRootErrorCode(string rootErrorCode) { DARABONBA_PTR_SET_VALUE(rootErrorCode_, rootErrorCode) };


    // rootErrorMsg Field Functions 
    bool hasRootErrorMsg() const { return this->rootErrorMsg_ != nullptr;};
    void deleteRootErrorMsg() { this->rootErrorMsg_ = nullptr;};
    inline string getRootErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(rootErrorMsg_, "") };
    inline PublishAppInstanceResponseBody& setRootErrorMsg(string rootErrorMsg) { DARABONBA_PTR_SET_VALUE(rootErrorMsg_, rootErrorMsg) };


    // synchro Field Functions 
    bool hasSynchro() const { return this->synchro_ != nullptr;};
    void deleteSynchro() { this->synchro_ = nullptr;};
    inline bool getSynchro() const { DARABONBA_PTR_GET_DEFAULT(synchro_, false) };
    inline PublishAppInstanceResponseBody& setSynchro(bool synchro) { DARABONBA_PTR_SET_VALUE(synchro_, synchro) };


  protected:
    // The access denial information.
    shared_ptr<string> accessDeniedDetail_ {};
    // Specifies whether retries are allowed.
    shared_ptr<bool> allowRetry_ {};
    // The app name.
    shared_ptr<string> appName_ {};
    // The dynamic error code.
    shared_ptr<string> dynamicCode_ {};
    // The dynamic message. This parameter is currently unused and can be ignored.
    shared_ptr<string> dynamicMessage_ {};
    // The returned error parameters.
    shared_ptr<vector<Darabonba::Json>> errorArgs_ {};
    // The response data.
    shared_ptr<PublishAppInstanceResponseBody::Module> module_ {};
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
