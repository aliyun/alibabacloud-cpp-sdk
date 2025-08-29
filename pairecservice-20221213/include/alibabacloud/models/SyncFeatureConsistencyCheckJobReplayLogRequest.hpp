// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SYNCFEATURECONSISTENCYCHECKJOBREPLAYLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SYNCFEATURECONSISTENCYCHECKJOBREPLAYLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class SyncFeatureConsistencyCheckJobReplayLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SyncFeatureConsistencyCheckJobReplayLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContextFeatures, contextFeatures_);
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_TO_JSON(GeneratedFeatures, generatedFeatures_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_TO_JSON(LogRequestTime, logRequestTime_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(RawFeatures, rawFeatures_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
    };
    friend void from_json(const Darabonba::Json& j, SyncFeatureConsistencyCheckJobReplayLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContextFeatures, contextFeatures_);
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_FROM_JSON(GeneratedFeatures, generatedFeatures_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_FROM_JSON(LogRequestTime, logRequestTime_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(RawFeatures, rawFeatures_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
    };
    SyncFeatureConsistencyCheckJobReplayLogRequest() = default ;
    SyncFeatureConsistencyCheckJobReplayLogRequest(const SyncFeatureConsistencyCheckJobReplayLogRequest &) = default ;
    SyncFeatureConsistencyCheckJobReplayLogRequest(SyncFeatureConsistencyCheckJobReplayLogRequest &&) = default ;
    SyncFeatureConsistencyCheckJobReplayLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SyncFeatureConsistencyCheckJobReplayLogRequest() = default ;
    SyncFeatureConsistencyCheckJobReplayLogRequest& operator=(const SyncFeatureConsistencyCheckJobReplayLogRequest &) = default ;
    SyncFeatureConsistencyCheckJobReplayLogRequest& operator=(SyncFeatureConsistencyCheckJobReplayLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contextFeatures_ != nullptr
        && this->featureConsistencyCheckJobConfigId_ != nullptr && this->generatedFeatures_ != nullptr && this->instanceId_ != nullptr && this->logItemId_ != nullptr && this->logRequestId_ != nullptr
        && this->logRequestTime_ != nullptr && this->logUserId_ != nullptr && this->rawFeatures_ != nullptr && this->sceneName_ != nullptr; };
    // contextFeatures Field Functions 
    bool hasContextFeatures() const { return this->contextFeatures_ != nullptr;};
    void deleteContextFeatures() { this->contextFeatures_ = nullptr;};
    inline string contextFeatures() const { DARABONBA_PTR_GET_DEFAULT(contextFeatures_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setContextFeatures(string contextFeatures) { DARABONBA_PTR_SET_VALUE(contextFeatures_, contextFeatures) };


    // featureConsistencyCheckJobConfigId Field Functions 
    bool hasFeatureConsistencyCheckJobConfigId() const { return this->featureConsistencyCheckJobConfigId_ != nullptr;};
    void deleteFeatureConsistencyCheckJobConfigId() { this->featureConsistencyCheckJobConfigId_ = nullptr;};
    inline string featureConsistencyCheckJobConfigId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobConfigId_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setFeatureConsistencyCheckJobConfigId(string featureConsistencyCheckJobConfigId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobConfigId_, featureConsistencyCheckJobConfigId) };


    // generatedFeatures Field Functions 
    bool hasGeneratedFeatures() const { return this->generatedFeatures_ != nullptr;};
    void deleteGeneratedFeatures() { this->generatedFeatures_ = nullptr;};
    inline string generatedFeatures() const { DARABONBA_PTR_GET_DEFAULT(generatedFeatures_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setGeneratedFeatures(string generatedFeatures) { DARABONBA_PTR_SET_VALUE(generatedFeatures_, generatedFeatures) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // logItemId Field Functions 
    bool hasLogItemId() const { return this->logItemId_ != nullptr;};
    void deleteLogItemId() { this->logItemId_ = nullptr;};
    inline string logItemId() const { DARABONBA_PTR_GET_DEFAULT(logItemId_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setLogItemId(string logItemId) { DARABONBA_PTR_SET_VALUE(logItemId_, logItemId) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string logRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // logRequestTime Field Functions 
    bool hasLogRequestTime() const { return this->logRequestTime_ != nullptr;};
    void deleteLogRequestTime() { this->logRequestTime_ = nullptr;};
    inline int64_t logRequestTime() const { DARABONBA_PTR_GET_DEFAULT(logRequestTime_, 0L) };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setLogRequestTime(int64_t logRequestTime) { DARABONBA_PTR_SET_VALUE(logRequestTime_, logRequestTime) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline string logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setLogUserId(string logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // rawFeatures Field Functions 
    bool hasRawFeatures() const { return this->rawFeatures_ != nullptr;};
    void deleteRawFeatures() { this->rawFeatures_ = nullptr;};
    inline string rawFeatures() const { DARABONBA_PTR_GET_DEFAULT(rawFeatures_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setRawFeatures(string rawFeatures) { DARABONBA_PTR_SET_VALUE(rawFeatures_, rawFeatures) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline SyncFeatureConsistencyCheckJobReplayLogRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contextFeatures_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> featureConsistencyCheckJobConfigId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> generatedFeatures_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> logItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> logRequestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> logRequestTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> logUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> rawFeatures_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
