// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUBLISHAPPINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PUBLISHAPPINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class PublishAppInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PublishAppInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArtifactDigest, artifactDigest_);
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(CandidateId, candidateId_);
      DARABONBA_PTR_TO_JSON(DeployChannel, deployChannel_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Ext, ext_);
      DARABONBA_PTR_TO_JSON(IdempotencyKey, idempotencyKey_);
      DARABONBA_PTR_TO_JSON(LogicalNumber, logicalNumber_);
      DARABONBA_PTR_TO_JSON(PlatformAppid, platformAppid_);
      DARABONBA_PTR_TO_JSON(PluginDeclarationHash, pluginDeclarationHash_);
      DARABONBA_PTR_TO_JSON(PrivacyDraftId, privacyDraftId_);
      DARABONBA_PTR_TO_JSON(PrivacyRevision, privacyRevision_);
      DARABONBA_PTR_TO_JSON(PublishNumber, publishNumber_);
      DARABONBA_PTR_TO_JSON(PublishOrderId, publishOrderId_);
      DARABONBA_PTR_TO_JSON(UploadSequence, uploadSequence_);
      DARABONBA_PTR_TO_JSON(WeappAction, weappAction_);
    };
    friend void from_json(const Darabonba::Json& j, PublishAppInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArtifactDigest, artifactDigest_);
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(CandidateId, candidateId_);
      DARABONBA_PTR_FROM_JSON(DeployChannel, deployChannel_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Ext, ext_);
      DARABONBA_PTR_FROM_JSON(IdempotencyKey, idempotencyKey_);
      DARABONBA_PTR_FROM_JSON(LogicalNumber, logicalNumber_);
      DARABONBA_PTR_FROM_JSON(PlatformAppid, platformAppid_);
      DARABONBA_PTR_FROM_JSON(PluginDeclarationHash, pluginDeclarationHash_);
      DARABONBA_PTR_FROM_JSON(PrivacyDraftId, privacyDraftId_);
      DARABONBA_PTR_FROM_JSON(PrivacyRevision, privacyRevision_);
      DARABONBA_PTR_FROM_JSON(PublishNumber, publishNumber_);
      DARABONBA_PTR_FROM_JSON(PublishOrderId, publishOrderId_);
      DARABONBA_PTR_FROM_JSON(UploadSequence, uploadSequence_);
      DARABONBA_PTR_FROM_JSON(WeappAction, weappAction_);
    };
    PublishAppInstanceRequest() = default ;
    PublishAppInstanceRequest(const PublishAppInstanceRequest &) = default ;
    PublishAppInstanceRequest(PublishAppInstanceRequest &&) = default ;
    PublishAppInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PublishAppInstanceRequest() = default ;
    PublishAppInstanceRequest& operator=(const PublishAppInstanceRequest &) = default ;
    PublishAppInstanceRequest& operator=(PublishAppInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->artifactDigest_ == nullptr
        && this->bizId_ == nullptr && this->candidateId_ == nullptr && this->deployChannel_ == nullptr && this->description_ == nullptr && this->ext_ == nullptr
        && this->idempotencyKey_ == nullptr && this->logicalNumber_ == nullptr && this->platformAppid_ == nullptr && this->pluginDeclarationHash_ == nullptr && this->privacyDraftId_ == nullptr
        && this->privacyRevision_ == nullptr && this->publishNumber_ == nullptr && this->publishOrderId_ == nullptr && this->uploadSequence_ == nullptr && this->weappAction_ == nullptr; };
    // artifactDigest Field Functions 
    bool hasArtifactDigest() const { return this->artifactDigest_ != nullptr;};
    void deleteArtifactDigest() { this->artifactDigest_ = nullptr;};
    inline string getArtifactDigest() const { DARABONBA_PTR_GET_DEFAULT(artifactDigest_, "") };
    inline PublishAppInstanceRequest& setArtifactDigest(string artifactDigest) { DARABONBA_PTR_SET_VALUE(artifactDigest_, artifactDigest) };


    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline PublishAppInstanceRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // candidateId Field Functions 
    bool hasCandidateId() const { return this->candidateId_ != nullptr;};
    void deleteCandidateId() { this->candidateId_ = nullptr;};
    inline string getCandidateId() const { DARABONBA_PTR_GET_DEFAULT(candidateId_, "") };
    inline PublishAppInstanceRequest& setCandidateId(string candidateId) { DARABONBA_PTR_SET_VALUE(candidateId_, candidateId) };


    // deployChannel Field Functions 
    bool hasDeployChannel() const { return this->deployChannel_ != nullptr;};
    void deleteDeployChannel() { this->deployChannel_ = nullptr;};
    inline string getDeployChannel() const { DARABONBA_PTR_GET_DEFAULT(deployChannel_, "") };
    inline PublishAppInstanceRequest& setDeployChannel(string deployChannel) { DARABONBA_PTR_SET_VALUE(deployChannel_, deployChannel) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline PublishAppInstanceRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // ext Field Functions 
    bool hasExt() const { return this->ext_ != nullptr;};
    void deleteExt() { this->ext_ = nullptr;};
    inline string getExt() const { DARABONBA_PTR_GET_DEFAULT(ext_, "") };
    inline PublishAppInstanceRequest& setExt(string ext) { DARABONBA_PTR_SET_VALUE(ext_, ext) };


    // idempotencyKey Field Functions 
    bool hasIdempotencyKey() const { return this->idempotencyKey_ != nullptr;};
    void deleteIdempotencyKey() { this->idempotencyKey_ = nullptr;};
    inline string getIdempotencyKey() const { DARABONBA_PTR_GET_DEFAULT(idempotencyKey_, "") };
    inline PublishAppInstanceRequest& setIdempotencyKey(string idempotencyKey) { DARABONBA_PTR_SET_VALUE(idempotencyKey_, idempotencyKey) };


    // logicalNumber Field Functions 
    bool hasLogicalNumber() const { return this->logicalNumber_ != nullptr;};
    void deleteLogicalNumber() { this->logicalNumber_ = nullptr;};
    inline int32_t getLogicalNumber() const { DARABONBA_PTR_GET_DEFAULT(logicalNumber_, 0) };
    inline PublishAppInstanceRequest& setLogicalNumber(int32_t logicalNumber) { DARABONBA_PTR_SET_VALUE(logicalNumber_, logicalNumber) };


    // platformAppid Field Functions 
    bool hasPlatformAppid() const { return this->platformAppid_ != nullptr;};
    void deletePlatformAppid() { this->platformAppid_ = nullptr;};
    inline string getPlatformAppid() const { DARABONBA_PTR_GET_DEFAULT(platformAppid_, "") };
    inline PublishAppInstanceRequest& setPlatformAppid(string platformAppid) { DARABONBA_PTR_SET_VALUE(platformAppid_, platformAppid) };


    // pluginDeclarationHash Field Functions 
    bool hasPluginDeclarationHash() const { return this->pluginDeclarationHash_ != nullptr;};
    void deletePluginDeclarationHash() { this->pluginDeclarationHash_ = nullptr;};
    inline string getPluginDeclarationHash() const { DARABONBA_PTR_GET_DEFAULT(pluginDeclarationHash_, "") };
    inline PublishAppInstanceRequest& setPluginDeclarationHash(string pluginDeclarationHash) { DARABONBA_PTR_SET_VALUE(pluginDeclarationHash_, pluginDeclarationHash) };


    // privacyDraftId Field Functions 
    bool hasPrivacyDraftId() const { return this->privacyDraftId_ != nullptr;};
    void deletePrivacyDraftId() { this->privacyDraftId_ = nullptr;};
    inline string getPrivacyDraftId() const { DARABONBA_PTR_GET_DEFAULT(privacyDraftId_, "") };
    inline PublishAppInstanceRequest& setPrivacyDraftId(string privacyDraftId) { DARABONBA_PTR_SET_VALUE(privacyDraftId_, privacyDraftId) };


    // privacyRevision Field Functions 
    bool hasPrivacyRevision() const { return this->privacyRevision_ != nullptr;};
    void deletePrivacyRevision() { this->privacyRevision_ = nullptr;};
    inline string getPrivacyRevision() const { DARABONBA_PTR_GET_DEFAULT(privacyRevision_, "") };
    inline PublishAppInstanceRequest& setPrivacyRevision(string privacyRevision) { DARABONBA_PTR_SET_VALUE(privacyRevision_, privacyRevision) };


    // publishNumber Field Functions 
    bool hasPublishNumber() const { return this->publishNumber_ != nullptr;};
    void deletePublishNumber() { this->publishNumber_ = nullptr;};
    inline string getPublishNumber() const { DARABONBA_PTR_GET_DEFAULT(publishNumber_, "") };
    inline PublishAppInstanceRequest& setPublishNumber(string publishNumber) { DARABONBA_PTR_SET_VALUE(publishNumber_, publishNumber) };


    // publishOrderId Field Functions 
    bool hasPublishOrderId() const { return this->publishOrderId_ != nullptr;};
    void deletePublishOrderId() { this->publishOrderId_ = nullptr;};
    inline int64_t getPublishOrderId() const { DARABONBA_PTR_GET_DEFAULT(publishOrderId_, 0L) };
    inline PublishAppInstanceRequest& setPublishOrderId(int64_t publishOrderId) { DARABONBA_PTR_SET_VALUE(publishOrderId_, publishOrderId) };


    // uploadSequence Field Functions 
    bool hasUploadSequence() const { return this->uploadSequence_ != nullptr;};
    void deleteUploadSequence() { this->uploadSequence_ = nullptr;};
    inline int64_t getUploadSequence() const { DARABONBA_PTR_GET_DEFAULT(uploadSequence_, 0L) };
    inline PublishAppInstanceRequest& setUploadSequence(int64_t uploadSequence) { DARABONBA_PTR_SET_VALUE(uploadSequence_, uploadSequence) };


    // weappAction Field Functions 
    bool hasWeappAction() const { return this->weappAction_ != nullptr;};
    void deleteWeappAction() { this->weappAction_ = nullptr;};
    inline string getWeappAction() const { DARABONBA_PTR_GET_DEFAULT(weappAction_, "") };
    inline PublishAppInstanceRequest& setWeappAction(string weappAction) { DARABONBA_PTR_SET_VALUE(weappAction_, weappAction) };


  protected:
    shared_ptr<string> artifactDigest_ {};
    // The business ID.
    shared_ptr<string> bizId_ {};
    shared_ptr<string> candidateId_ {};
    // The deployment channel.
    shared_ptr<string> deployChannel_ {};
    // The publish description.
    shared_ptr<string> description_ {};
    shared_ptr<string> ext_ {};
    shared_ptr<string> idempotencyKey_ {};
    // The logical version number.
    shared_ptr<int32_t> logicalNumber_ {};
    shared_ptr<string> platformAppid_ {};
    shared_ptr<string> pluginDeclarationHash_ {};
    shared_ptr<string> privacyDraftId_ {};
    shared_ptr<string> privacyRevision_ {};
    // The publish number.
    shared_ptr<string> publishNumber_ {};
    shared_ptr<int64_t> publishOrderId_ {};
    shared_ptr<int64_t> uploadSequence_ {};
    // The action.
    shared_ptr<string> weappAction_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
