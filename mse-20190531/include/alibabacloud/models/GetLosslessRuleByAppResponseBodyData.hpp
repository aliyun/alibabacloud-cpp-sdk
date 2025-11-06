// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOSSLESSRULEBYAPPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETLOSSLESSRULEBYAPPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class GetLosslessRuleByAppResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLosslessRuleByAppResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(Aligned, aligned_);
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(Enable, enable_);
      DARABONBA_PTR_TO_JSON(FuncType, funcType_);
      DARABONBA_PTR_TO_JSON(LossLessDetail, lossLessDetail_);
      DARABONBA_PTR_TO_JSON(Notice, notice_);
      DARABONBA_PTR_TO_JSON(Related, related_);
      DARABONBA_PTR_TO_JSON(WarmupTime, warmupTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetLosslessRuleByAppResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(Aligned, aligned_);
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(Enable, enable_);
      DARABONBA_PTR_FROM_JSON(FuncType, funcType_);
      DARABONBA_PTR_FROM_JSON(LossLessDetail, lossLessDetail_);
      DARABONBA_PTR_FROM_JSON(Notice, notice_);
      DARABONBA_PTR_FROM_JSON(Related, related_);
      DARABONBA_PTR_FROM_JSON(WarmupTime, warmupTime_);
    };
    GetLosslessRuleByAppResponseBodyData() = default ;
    GetLosslessRuleByAppResponseBodyData(const GetLosslessRuleByAppResponseBodyData &) = default ;
    GetLosslessRuleByAppResponseBodyData(GetLosslessRuleByAppResponseBodyData &&) = default ;
    GetLosslessRuleByAppResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLosslessRuleByAppResponseBodyData() = default ;
    GetLosslessRuleByAppResponseBodyData& operator=(const GetLosslessRuleByAppResponseBodyData &) = default ;
    GetLosslessRuleByAppResponseBodyData& operator=(GetLosslessRuleByAppResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aligned_ == nullptr
        && return this->appId_ == nullptr && return this->appName_ == nullptr && return this->count_ == nullptr && return this->delayTime_ == nullptr && return this->enable_ == nullptr
        && return this->funcType_ == nullptr && return this->lossLessDetail_ == nullptr && return this->notice_ == nullptr && return this->related_ == nullptr && return this->warmupTime_ == nullptr; };
    // aligned Field Functions 
    bool hasAligned() const { return this->aligned_ != nullptr;};
    void deleteAligned() { this->aligned_ = nullptr;};
    inline bool aligned() const { DARABONBA_PTR_GET_DEFAULT(aligned_, false) };
    inline GetLosslessRuleByAppResponseBodyData& setAligned(bool aligned) { DARABONBA_PTR_SET_VALUE(aligned_, aligned) };


    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetLosslessRuleByAppResponseBodyData& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline GetLosslessRuleByAppResponseBodyData& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline GetLosslessRuleByAppResponseBodyData& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int32_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0) };
    inline GetLosslessRuleByAppResponseBodyData& setDelayTime(int32_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline GetLosslessRuleByAppResponseBodyData& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // funcType Field Functions 
    bool hasFuncType() const { return this->funcType_ != nullptr;};
    void deleteFuncType() { this->funcType_ = nullptr;};
    inline int32_t funcType() const { DARABONBA_PTR_GET_DEFAULT(funcType_, 0) };
    inline GetLosslessRuleByAppResponseBodyData& setFuncType(int32_t funcType) { DARABONBA_PTR_SET_VALUE(funcType_, funcType) };


    // lossLessDetail Field Functions 
    bool hasLossLessDetail() const { return this->lossLessDetail_ != nullptr;};
    void deleteLossLessDetail() { this->lossLessDetail_ = nullptr;};
    inline bool lossLessDetail() const { DARABONBA_PTR_GET_DEFAULT(lossLessDetail_, false) };
    inline GetLosslessRuleByAppResponseBodyData& setLossLessDetail(bool lossLessDetail) { DARABONBA_PTR_SET_VALUE(lossLessDetail_, lossLessDetail) };


    // notice Field Functions 
    bool hasNotice() const { return this->notice_ != nullptr;};
    void deleteNotice() { this->notice_ = nullptr;};
    inline bool notice() const { DARABONBA_PTR_GET_DEFAULT(notice_, false) };
    inline GetLosslessRuleByAppResponseBodyData& setNotice(bool notice) { DARABONBA_PTR_SET_VALUE(notice_, notice) };


    // related Field Functions 
    bool hasRelated() const { return this->related_ != nullptr;};
    void deleteRelated() { this->related_ = nullptr;};
    inline bool related() const { DARABONBA_PTR_GET_DEFAULT(related_, false) };
    inline GetLosslessRuleByAppResponseBodyData& setRelated(bool related) { DARABONBA_PTR_SET_VALUE(related_, related) };


    // warmupTime Field Functions 
    bool hasWarmupTime() const { return this->warmupTime_ != nullptr;};
    void deleteWarmupTime() { this->warmupTime_ = nullptr;};
    inline int32_t warmupTime() const { DARABONBA_PTR_GET_DEFAULT(warmupTime_, 0) };
    inline GetLosslessRuleByAppResponseBodyData& setWarmupTime(int32_t warmupTime) { DARABONBA_PTR_SET_VALUE(warmupTime_, warmupTime) };


  protected:
    // Indicates whether service registration is complete before readiness probe.
    std::shared_ptr<bool> aligned_ = nullptr;
    // The ID of the application.
    std::shared_ptr<string> appId_ = nullptr;
    // The name of the application.
    std::shared_ptr<string> appName_ = nullptr;
    // The number of instances.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The registration latency. Unit: seconds.
    std::shared_ptr<int32_t> delayTime_ = nullptr;
    // Indicates whether graceful start is enabled. Valid values:
    // 
    // *   `true`: enabled
    // *   `false`: disabled
    std::shared_ptr<bool> enable_ = nullptr;
    // The slope of the prefetching curve.
    std::shared_ptr<int32_t> funcType_ = nullptr;
    // Indicates whether online and offline processing details are displayed.
    std::shared_ptr<bool> lossLessDetail_ = nullptr;
    // Indicates whether notification is enabled.
    std::shared_ptr<bool> notice_ = nullptr;
    // Indicates whether service prefetching is complete before readiness probe.
    std::shared_ptr<bool> related_ = nullptr;
    // The prefetching duration. Unit: seconds.
    std::shared_ptr<int32_t> warmupTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
