// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BACKFLOWFEATURECONSISTENCYCHECKJOBDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BACKFLOWFEATURECONSISTENCYCHECKJOBDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class BackflowFeatureConsistencyCheckJobDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BackflowFeatureConsistencyCheckJobDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ItemFeatures, itemFeatures_);
      DARABONBA_PTR_TO_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_TO_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_TO_JSON(LogRequestTime, logRequestTime_);
      DARABONBA_PTR_TO_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
      DARABONBA_PTR_TO_JSON(Scores, scores_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(UserFeatures, userFeatures_);
    };
    friend void from_json(const Darabonba::Json& j, BackflowFeatureConsistencyCheckJobDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(FeatureConsistencyCheckJobConfigId, featureConsistencyCheckJobConfigId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ItemFeatures, itemFeatures_);
      DARABONBA_PTR_FROM_JSON(LogItemId, logItemId_);
      DARABONBA_PTR_FROM_JSON(LogRequestId, logRequestId_);
      DARABONBA_PTR_FROM_JSON(LogRequestTime, logRequestTime_);
      DARABONBA_PTR_FROM_JSON(LogUserId, logUserId_);
      DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
      DARABONBA_PTR_FROM_JSON(Scores, scores_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(UserFeatures, userFeatures_);
    };
    BackflowFeatureConsistencyCheckJobDataRequest() = default ;
    BackflowFeatureConsistencyCheckJobDataRequest(const BackflowFeatureConsistencyCheckJobDataRequest &) = default ;
    BackflowFeatureConsistencyCheckJobDataRequest(BackflowFeatureConsistencyCheckJobDataRequest &&) = default ;
    BackflowFeatureConsistencyCheckJobDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BackflowFeatureConsistencyCheckJobDataRequest() = default ;
    BackflowFeatureConsistencyCheckJobDataRequest& operator=(const BackflowFeatureConsistencyCheckJobDataRequest &) = default ;
    BackflowFeatureConsistencyCheckJobDataRequest& operator=(BackflowFeatureConsistencyCheckJobDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->featureConsistencyCheckJobConfigId_ != nullptr
        && this->instanceId_ != nullptr && this->itemFeatures_ != nullptr && this->logItemId_ != nullptr && this->logRequestId_ != nullptr && this->logRequestTime_ != nullptr
        && this->logUserId_ != nullptr && this->sceneName_ != nullptr && this->scores_ != nullptr && this->serviceName_ != nullptr && this->userFeatures_ != nullptr; };
    // featureConsistencyCheckJobConfigId Field Functions 
    bool hasFeatureConsistencyCheckJobConfigId() const { return this->featureConsistencyCheckJobConfigId_ != nullptr;};
    void deleteFeatureConsistencyCheckJobConfigId() { this->featureConsistencyCheckJobConfigId_ = nullptr;};
    inline string featureConsistencyCheckJobConfigId() const { DARABONBA_PTR_GET_DEFAULT(featureConsistencyCheckJobConfigId_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setFeatureConsistencyCheckJobConfigId(string featureConsistencyCheckJobConfigId) { DARABONBA_PTR_SET_VALUE(featureConsistencyCheckJobConfigId_, featureConsistencyCheckJobConfigId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // itemFeatures Field Functions 
    bool hasItemFeatures() const { return this->itemFeatures_ != nullptr;};
    void deleteItemFeatures() { this->itemFeatures_ = nullptr;};
    inline string itemFeatures() const { DARABONBA_PTR_GET_DEFAULT(itemFeatures_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setItemFeatures(string itemFeatures) { DARABONBA_PTR_SET_VALUE(itemFeatures_, itemFeatures) };


    // logItemId Field Functions 
    bool hasLogItemId() const { return this->logItemId_ != nullptr;};
    void deleteLogItemId() { this->logItemId_ = nullptr;};
    inline string logItemId() const { DARABONBA_PTR_GET_DEFAULT(logItemId_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setLogItemId(string logItemId) { DARABONBA_PTR_SET_VALUE(logItemId_, logItemId) };


    // logRequestId Field Functions 
    bool hasLogRequestId() const { return this->logRequestId_ != nullptr;};
    void deleteLogRequestId() { this->logRequestId_ = nullptr;};
    inline string logRequestId() const { DARABONBA_PTR_GET_DEFAULT(logRequestId_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setLogRequestId(string logRequestId) { DARABONBA_PTR_SET_VALUE(logRequestId_, logRequestId) };


    // logRequestTime Field Functions 
    bool hasLogRequestTime() const { return this->logRequestTime_ != nullptr;};
    void deleteLogRequestTime() { this->logRequestTime_ = nullptr;};
    inline int64_t logRequestTime() const { DARABONBA_PTR_GET_DEFAULT(logRequestTime_, 0L) };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setLogRequestTime(int64_t logRequestTime) { DARABONBA_PTR_SET_VALUE(logRequestTime_, logRequestTime) };


    // logUserId Field Functions 
    bool hasLogUserId() const { return this->logUserId_ != nullptr;};
    void deleteLogUserId() { this->logUserId_ = nullptr;};
    inline string logUserId() const { DARABONBA_PTR_GET_DEFAULT(logUserId_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setLogUserId(string logUserId) { DARABONBA_PTR_SET_VALUE(logUserId_, logUserId) };


    // sceneName Field Functions 
    bool hasSceneName() const { return this->sceneName_ != nullptr;};
    void deleteSceneName() { this->sceneName_ = nullptr;};
    inline string sceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


    // scores Field Functions 
    bool hasScores() const { return this->scores_ != nullptr;};
    void deleteScores() { this->scores_ = nullptr;};
    inline string scores() const { DARABONBA_PTR_GET_DEFAULT(scores_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setScores(string scores) { DARABONBA_PTR_SET_VALUE(scores_, scores) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // userFeatures Field Functions 
    bool hasUserFeatures() const { return this->userFeatures_ != nullptr;};
    void deleteUserFeatures() { this->userFeatures_ = nullptr;};
    inline string userFeatures() const { DARABONBA_PTR_GET_DEFAULT(userFeatures_, "") };
    inline BackflowFeatureConsistencyCheckJobDataRequest& setUserFeatures(string userFeatures) { DARABONBA_PTR_SET_VALUE(userFeatures_, userFeatures) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> featureConsistencyCheckJobConfigId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> itemFeatures_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> logItemId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> logRequestId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> logRequestTime_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> logUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> sceneName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> scores_ = nullptr;
    std::shared_ptr<string> serviceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> userFeatures_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
