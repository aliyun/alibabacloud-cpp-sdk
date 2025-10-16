// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODYDESKTOPSSCALETIMERINFOS_HPP_
#define ALIBABACLOUD_MODELS_GETDESKTOPGROUPDETAILRESPONSEBODYDESKTOPSSCALETIMERINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& obj) { 
      DARABONBA_PTR_TO_JSON(BuyResAmount, buyResAmount_);
      DARABONBA_PTR_TO_JSON(Cron, cron_);
      DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_TO_JSON(MaxResAmount, maxResAmount_);
      DARABONBA_PTR_TO_JSON(MinResAmount, minResAmount_);
      DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(BuyResAmount, buyResAmount_);
      DARABONBA_PTR_FROM_JSON(Cron, cron_);
      DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
      DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
      DARABONBA_PTR_FROM_JSON(MaxResAmount, maxResAmount_);
      DARABONBA_PTR_FROM_JSON(MinResAmount, minResAmount_);
      DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos() = default ;
    GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos(const GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos &) = default ;
    GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos(GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos &&) = default ;
    GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos() = default ;
    GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& operator=(const GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos &) = default ;
    GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& operator=(GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->buyResAmount_ == nullptr
        && return this->cron_ == nullptr && return this->keepDuration_ == nullptr && return this->loadPolicy_ == nullptr && return this->maxResAmount_ == nullptr && return this->minResAmount_ == nullptr
        && return this->ratioThreshold_ == nullptr && return this->type_ == nullptr; };
    // buyResAmount Field Functions 
    bool hasBuyResAmount() const { return this->buyResAmount_ != nullptr;};
    void deleteBuyResAmount() { this->buyResAmount_ = nullptr;};
    inline int32_t buyResAmount() const { DARABONBA_PTR_GET_DEFAULT(buyResAmount_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& setBuyResAmount(int32_t buyResAmount) { DARABONBA_PTR_SET_VALUE(buyResAmount_, buyResAmount) };


    // cron Field Functions 
    bool hasCron() const { return this->cron_ != nullptr;};
    void deleteCron() { this->cron_ = nullptr;};
    inline string cron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


    // keepDuration Field Functions 
    bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
    void deleteKeepDuration() { this->keepDuration_ = nullptr;};
    inline int64_t keepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
    inline GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


    // loadPolicy Field Functions 
    bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
    void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
    inline int32_t loadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& setLoadPolicy(int32_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


    // maxResAmount Field Functions 
    bool hasMaxResAmount() const { return this->maxResAmount_ != nullptr;};
    void deleteMaxResAmount() { this->maxResAmount_ = nullptr;};
    inline int32_t maxResAmount() const { DARABONBA_PTR_GET_DEFAULT(maxResAmount_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& setMaxResAmount(int32_t maxResAmount) { DARABONBA_PTR_SET_VALUE(maxResAmount_, maxResAmount) };


    // minResAmount Field Functions 
    bool hasMinResAmount() const { return this->minResAmount_ != nullptr;};
    void deleteMinResAmount() { this->minResAmount_ = nullptr;};
    inline int32_t minResAmount() const { DARABONBA_PTR_GET_DEFAULT(minResAmount_, 0) };
    inline GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& setMinResAmount(int32_t minResAmount) { DARABONBA_PTR_SET_VALUE(minResAmount_, minResAmount) };


    // ratioThreshold Field Functions 
    bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
    void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
    inline float ratioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
    inline GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline GetDesktopGroupDetailResponseBodyDesktopsScaleTimerInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The number of cloud computers that you purchase in the cloud computer pool. This parameter is one of the auto scaling parameters. Valid values: 0 to 200.
    std::shared_ptr<int32_t> buyResAmount_ = nullptr;
    // The cron expression for the scheduled task.
    std::shared_ptr<string> cron_ = nullptr;
    // The duration that is retained after the session is disconnected. Unit: milliseconds. Valid values: 180000 to 345600000. That is, the session can be retained for 3 to 5760 minutes (4 days). If you specify the value to 0, the session is permanently retained.
    // 
    // When a session is disconnected, take note of the following situations: If an end user does not resume the session within the specified duration, the session is closed and all unsaved data is cleared. If the end user resumes the session within the specified duration, the end user can still access data of the session.
    std::shared_ptr<int64_t> keepDuration_ = nullptr;
    // The load balancing policy for the multi-session many-to-many share.
    // 
    // Valid values:
    // 
    // *   0: depth-first.
    // *   1: breadth-first.
    std::shared_ptr<int32_t> loadPolicy_ = nullptr;
    // The maximum number of cloud computers in the cloud computer pool. This parameter is one of the auto scaling parameters. Valid values: 0 to 200.
    std::shared_ptr<int32_t> maxResAmount_ = nullptr;
    // The minimum number of cloud computers in the cloud computer pool. This parameter is one of the auto scaling parameters. Valid values: 0 to 200.
    std::shared_ptr<int32_t> minResAmount_ = nullptr;
    // The threshold for the ratio of connected sessions, which triggers automatic scaling of cloud computers within the multi-session many-to-many share. To calculate the ratio of connected sessions, use the following formula:
    // 
    // `Ratio of connected sessions = Number of connected sessions/(Total number of cloud computers × Maximum number of sessions allowed for each cloud computer) × 100%`.
    // 
    // If the session ratio exceeds the threshold, new cloud computers are provisioned. If it falls below the threshold, additional cloud computers are removed.
    std::shared_ptr<float> ratioThreshold_ = nullptr;
    // The type of the scheduled task.
    // 
    // Valid values:
    // 
    // *   drop: decline policy
    // *   normal: normal policy
    // *   peak: peak hour policy
    // *   rise: rise policy
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
