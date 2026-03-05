// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUNIONTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUNIONTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace UniMkt20181212
{
namespace Models
{
  class UpdateUnionTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUnionTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ChannelId, channelId_);
      DARABONBA_PTR_TO_JSON(ChargePloy, chargePloy_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(OptimizationSwitch, optimizationSwitch_);
      DARABONBA_PTR_TO_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_TO_JSON(Quota, quota_);
      DARABONBA_PTR_TO_JSON(QuotaDay, quotaDay_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUnionTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ChannelId, channelId_);
      DARABONBA_PTR_FROM_JSON(ChargePloy, chargePloy_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(OptimizationSwitch, optimizationSwitch_);
      DARABONBA_PTR_FROM_JSON(ProxyUserId, proxyUserId_);
      DARABONBA_PTR_FROM_JSON(Quota, quota_);
      DARABONBA_PTR_FROM_JSON(QuotaDay, quotaDay_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
    };
    UpdateUnionTaskRequest() = default ;
    UpdateUnionTaskRequest(const UpdateUnionTaskRequest &) = default ;
    UpdateUnionTaskRequest(UpdateUnionTaskRequest &&) = default ;
    UpdateUnionTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUnionTaskRequest() = default ;
    UpdateUnionTaskRequest& operator=(const UpdateUnionTaskRequest &) = default ;
    UpdateUnionTaskRequest& operator=(UpdateUnionTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channelId_ == nullptr
        && this->chargePloy_ == nullptr && this->endTime_ == nullptr && this->optimizationSwitch_ == nullptr && this->proxyUserId_ == nullptr && this->quota_ == nullptr
        && this->quotaDay_ == nullptr && this->startTime_ == nullptr && this->taskId_ == nullptr; };
    // channelId Field Functions 
    bool hasChannelId() const { return this->channelId_ != nullptr;};
    void deleteChannelId() { this->channelId_ = nullptr;};
    inline string getChannelId() const { DARABONBA_PTR_GET_DEFAULT(channelId_, "") };
    inline UpdateUnionTaskRequest& setChannelId(string channelId) { DARABONBA_PTR_SET_VALUE(channelId_, channelId) };


    // chargePloy Field Functions 
    bool hasChargePloy() const { return this->chargePloy_ != nullptr;};
    void deleteChargePloy() { this->chargePloy_ = nullptr;};
    inline int32_t getChargePloy() const { DARABONBA_PTR_GET_DEFAULT(chargePloy_, 0) };
    inline UpdateUnionTaskRequest& setChargePloy(int32_t chargePloy) { DARABONBA_PTR_SET_VALUE(chargePloy_, chargePloy) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline UpdateUnionTaskRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // optimizationSwitch Field Functions 
    bool hasOptimizationSwitch() const { return this->optimizationSwitch_ != nullptr;};
    void deleteOptimizationSwitch() { this->optimizationSwitch_ = nullptr;};
    inline int32_t getOptimizationSwitch() const { DARABONBA_PTR_GET_DEFAULT(optimizationSwitch_, 0) };
    inline UpdateUnionTaskRequest& setOptimizationSwitch(int32_t optimizationSwitch) { DARABONBA_PTR_SET_VALUE(optimizationSwitch_, optimizationSwitch) };


    // proxyUserId Field Functions 
    bool hasProxyUserId() const { return this->proxyUserId_ != nullptr;};
    void deleteProxyUserId() { this->proxyUserId_ = nullptr;};
    inline int64_t getProxyUserId() const { DARABONBA_PTR_GET_DEFAULT(proxyUserId_, 0L) };
    inline UpdateUnionTaskRequest& setProxyUserId(int64_t proxyUserId) { DARABONBA_PTR_SET_VALUE(proxyUserId_, proxyUserId) };


    // quota Field Functions 
    bool hasQuota() const { return this->quota_ != nullptr;};
    void deleteQuota() { this->quota_ = nullptr;};
    inline int32_t getQuota() const { DARABONBA_PTR_GET_DEFAULT(quota_, 0) };
    inline UpdateUnionTaskRequest& setQuota(int32_t quota) { DARABONBA_PTR_SET_VALUE(quota_, quota) };


    // quotaDay Field Functions 
    bool hasQuotaDay() const { return this->quotaDay_ != nullptr;};
    void deleteQuotaDay() { this->quotaDay_ = nullptr;};
    inline int32_t getQuotaDay() const { DARABONBA_PTR_GET_DEFAULT(quotaDay_, 0) };
    inline UpdateUnionTaskRequest& setQuotaDay(int32_t quotaDay) { DARABONBA_PTR_SET_VALUE(quotaDay_, quotaDay) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline UpdateUnionTaskRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t getTaskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline UpdateUnionTaskRequest& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    shared_ptr<string> channelId_ {};
    shared_ptr<int32_t> chargePloy_ {};
    shared_ptr<string> endTime_ {};
    shared_ptr<int32_t> optimizationSwitch_ {};
    // This parameter is required.
    shared_ptr<int64_t> proxyUserId_ {};
    shared_ptr<int32_t> quota_ {};
    shared_ptr<int32_t> quotaDay_ {};
    shared_ptr<string> startTime_ {};
    // This parameter is required.
    shared_ptr<int64_t> taskId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace UniMkt20181212
#endif
