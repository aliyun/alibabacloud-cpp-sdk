// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETDESKTOPGROUPSCALETIMERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SETDESKTOPGROUPSCALETIMERREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class SetDesktopGroupScaleTimerRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetDesktopGroupScaleTimerRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ScaleTimerInfos, scaleTimerInfos_);
    };
    friend void from_json(const Darabonba::Json& j, SetDesktopGroupScaleTimerRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesktopGroupId, desktopGroupId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ScaleTimerInfos, scaleTimerInfos_);
    };
    SetDesktopGroupScaleTimerRequest() = default ;
    SetDesktopGroupScaleTimerRequest(const SetDesktopGroupScaleTimerRequest &) = default ;
    SetDesktopGroupScaleTimerRequest(SetDesktopGroupScaleTimerRequest &&) = default ;
    SetDesktopGroupScaleTimerRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetDesktopGroupScaleTimerRequest() = default ;
    SetDesktopGroupScaleTimerRequest& operator=(const SetDesktopGroupScaleTimerRequest &) = default ;
    SetDesktopGroupScaleTimerRequest& operator=(SetDesktopGroupScaleTimerRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ScaleTimerInfos : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScaleTimerInfos& obj) { 
        DARABONBA_PTR_TO_JSON(BuyResAmount, buyResAmount_);
        DARABONBA_PTR_TO_JSON(Cron, cron_);
        DARABONBA_PTR_TO_JSON(KeepDuration, keepDuration_);
        DARABONBA_PTR_TO_JSON(LoadPolicy, loadPolicy_);
        DARABONBA_PTR_TO_JSON(MaxResAmount, maxResAmount_);
        DARABONBA_PTR_TO_JSON(MinResAmount, minResAmount_);
        DARABONBA_PTR_TO_JSON(RatioThreshold, ratioThreshold_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, ScaleTimerInfos& obj) { 
        DARABONBA_PTR_FROM_JSON(BuyResAmount, buyResAmount_);
        DARABONBA_PTR_FROM_JSON(Cron, cron_);
        DARABONBA_PTR_FROM_JSON(KeepDuration, keepDuration_);
        DARABONBA_PTR_FROM_JSON(LoadPolicy, loadPolicy_);
        DARABONBA_PTR_FROM_JSON(MaxResAmount, maxResAmount_);
        DARABONBA_PTR_FROM_JSON(MinResAmount, minResAmount_);
        DARABONBA_PTR_FROM_JSON(RatioThreshold, ratioThreshold_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      ScaleTimerInfos() = default ;
      ScaleTimerInfos(const ScaleTimerInfos &) = default ;
      ScaleTimerInfos(ScaleTimerInfos &&) = default ;
      ScaleTimerInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScaleTimerInfos() = default ;
      ScaleTimerInfos& operator=(const ScaleTimerInfos &) = default ;
      ScaleTimerInfos& operator=(ScaleTimerInfos &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->buyResAmount_ == nullptr
        && this->cron_ == nullptr && this->keepDuration_ == nullptr && this->loadPolicy_ == nullptr && this->maxResAmount_ == nullptr && this->minResAmount_ == nullptr
        && this->ratioThreshold_ == nullptr && this->type_ == nullptr; };
      // buyResAmount Field Functions 
      bool hasBuyResAmount() const { return this->buyResAmount_ != nullptr;};
      void deleteBuyResAmount() { this->buyResAmount_ = nullptr;};
      inline int32_t getBuyResAmount() const { DARABONBA_PTR_GET_DEFAULT(buyResAmount_, 0) };
      inline ScaleTimerInfos& setBuyResAmount(int32_t buyResAmount) { DARABONBA_PTR_SET_VALUE(buyResAmount_, buyResAmount) };


      // cron Field Functions 
      bool hasCron() const { return this->cron_ != nullptr;};
      void deleteCron() { this->cron_ = nullptr;};
      inline string getCron() const { DARABONBA_PTR_GET_DEFAULT(cron_, "") };
      inline ScaleTimerInfos& setCron(string cron) { DARABONBA_PTR_SET_VALUE(cron_, cron) };


      // keepDuration Field Functions 
      bool hasKeepDuration() const { return this->keepDuration_ != nullptr;};
      void deleteKeepDuration() { this->keepDuration_ = nullptr;};
      inline int64_t getKeepDuration() const { DARABONBA_PTR_GET_DEFAULT(keepDuration_, 0L) };
      inline ScaleTimerInfos& setKeepDuration(int64_t keepDuration) { DARABONBA_PTR_SET_VALUE(keepDuration_, keepDuration) };


      // loadPolicy Field Functions 
      bool hasLoadPolicy() const { return this->loadPolicy_ != nullptr;};
      void deleteLoadPolicy() { this->loadPolicy_ = nullptr;};
      inline int32_t getLoadPolicy() const { DARABONBA_PTR_GET_DEFAULT(loadPolicy_, 0) };
      inline ScaleTimerInfos& setLoadPolicy(int32_t loadPolicy) { DARABONBA_PTR_SET_VALUE(loadPolicy_, loadPolicy) };


      // maxResAmount Field Functions 
      bool hasMaxResAmount() const { return this->maxResAmount_ != nullptr;};
      void deleteMaxResAmount() { this->maxResAmount_ = nullptr;};
      inline int32_t getMaxResAmount() const { DARABONBA_PTR_GET_DEFAULT(maxResAmount_, 0) };
      inline ScaleTimerInfos& setMaxResAmount(int32_t maxResAmount) { DARABONBA_PTR_SET_VALUE(maxResAmount_, maxResAmount) };


      // minResAmount Field Functions 
      bool hasMinResAmount() const { return this->minResAmount_ != nullptr;};
      void deleteMinResAmount() { this->minResAmount_ = nullptr;};
      inline int32_t getMinResAmount() const { DARABONBA_PTR_GET_DEFAULT(minResAmount_, 0) };
      inline ScaleTimerInfos& setMinResAmount(int32_t minResAmount) { DARABONBA_PTR_SET_VALUE(minResAmount_, minResAmount) };


      // ratioThreshold Field Functions 
      bool hasRatioThreshold() const { return this->ratioThreshold_ != nullptr;};
      void deleteRatioThreshold() { this->ratioThreshold_ = nullptr;};
      inline float getRatioThreshold() const { DARABONBA_PTR_GET_DEFAULT(ratioThreshold_, 0.0) };
      inline ScaleTimerInfos& setRatioThreshold(float ratioThreshold) { DARABONBA_PTR_SET_VALUE(ratioThreshold_, ratioThreshold) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline ScaleTimerInfos& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // One option for the auto scaling policy. This option specifies the number of cloud computers that you want to create in the cloud computer pool. Valid values: 0 to 200.
      shared_ptr<int32_t> buyResAmount_ {};
      // The cron expression of the trigger time.
      shared_ptr<string> cron_ {};
      // The keep-alive duration of a session after the session is disconnected. Unit: milliseconds. Valid values: 180000 (3 minutes) to 345600000 (4 days). A value of 0 indicates that the session always keeps alive.
      // 
      // If a session is disconnected by the end user or accidentally due to a factor and the end user does not re-establish a connection with the session within the keep-alive duration, the session expires and unsaved data is deleted. If the end user successfully re-establishes a connection with the session within the keep-alive duration, the end user returns to the session and can still access the original data.
      shared_ptr<int64_t> keepDuration_ {};
      // The load balancing policy for the multi-session cloud computer pool.
      // 
      // Valid values:
      // 
      // *   0: depth-first
      // *   1: breadth first.
      shared_ptr<int32_t> loadPolicy_ {};
      // One option for the auto scaling policy. This option specifies the maximum number of cloud computers that you can create in the cloud computer pool. Valid values: 0 to 200.
      shared_ptr<int32_t> maxResAmount_ {};
      // One option for the auto scaling policy. This option specifies the minimum number of cloud computers that you must create in the cloud computer pool. Valid values: 0 to 200.
      shared_ptr<int32_t> minResAmount_ {};
      // The threshold for the ratio of connected sessions. This parameter is the condition that triggers auto scaling in a multi-session cloud computer pool. Formula:
      // 
      // `Ratio of connected sessions = Number of connected sessions/(Total number of cloud computers × Maximum number of sessions allowed for each cloud computer) × 100%`.
      // 
      // When the specified threshold is reached, new cloud computers are automatically created. When the specified threshold is not reached, idle cloud computers are released.
      shared_ptr<float> ratioThreshold_ {};
      // The type of the auto scaling policy.
      // 
      // Valid values:
      // 
      // *   drop
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   normal
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   peak
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      // *   rise
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      // 
      //     <!-- -->
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->desktopGroupId_ == nullptr
        && this->regionId_ == nullptr && this->scaleTimerInfos_ == nullptr; };
    // desktopGroupId Field Functions 
    bool hasDesktopGroupId() const { return this->desktopGroupId_ != nullptr;};
    void deleteDesktopGroupId() { this->desktopGroupId_ = nullptr;};
    inline string getDesktopGroupId() const { DARABONBA_PTR_GET_DEFAULT(desktopGroupId_, "") };
    inline SetDesktopGroupScaleTimerRequest& setDesktopGroupId(string desktopGroupId) { DARABONBA_PTR_SET_VALUE(desktopGroupId_, desktopGroupId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline SetDesktopGroupScaleTimerRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // scaleTimerInfos Field Functions 
    bool hasScaleTimerInfos() const { return this->scaleTimerInfos_ != nullptr;};
    void deleteScaleTimerInfos() { this->scaleTimerInfos_ = nullptr;};
    inline const vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos> & getScaleTimerInfos() const { DARABONBA_PTR_GET_CONST(scaleTimerInfos_, vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos>) };
    inline vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos> getScaleTimerInfos() { DARABONBA_PTR_GET(scaleTimerInfos_, vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos>) };
    inline SetDesktopGroupScaleTimerRequest& setScaleTimerInfos(const vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos> & scaleTimerInfos) { DARABONBA_PTR_SET_VALUE(scaleTimerInfos_, scaleTimerInfos) };
    inline SetDesktopGroupScaleTimerRequest& setScaleTimerInfos(vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos> && scaleTimerInfos) { DARABONBA_PTR_SET_RVALUE(scaleTimerInfos_, scaleTimerInfos) };


  protected:
    // The ID of the cloud computer pool.
    // 
    // This parameter is required.
    shared_ptr<string> desktopGroupId_ {};
    // The region ID. You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) operation to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The information about the scheduled auto scaling task.
    shared_ptr<vector<SetDesktopGroupScaleTimerRequest::ScaleTimerInfos>> scaleTimerInfos_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
