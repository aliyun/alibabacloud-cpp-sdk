// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTRESPONSEBODYDDOSEVENTLISTDDOSEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDDOSEVENTLISTRESPONSEBODYDDOSEVENTLISTDDOSEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AntiddosPublic20170518
{
namespace Models
{
  class DescribeDdosEventListResponseBodyDdosEventListDdosEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDdosEventListResponseBodyDdosEventListDdosEvent& obj) { 
      DARABONBA_PTR_TO_JSON(DdosStatus, ddosStatus_);
      DARABONBA_PTR_TO_JSON(DdosType, ddosType_);
      DARABONBA_PTR_TO_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UnBlackholeTime, unBlackholeTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDdosEventListResponseBodyDdosEventListDdosEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(DdosStatus, ddosStatus_);
      DARABONBA_PTR_FROM_JSON(DdosType, ddosType_);
      DARABONBA_PTR_FROM_JSON(DelayTime, delayTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UnBlackholeTime, unBlackholeTime_);
    };
    DescribeDdosEventListResponseBodyDdosEventListDdosEvent() = default ;
    DescribeDdosEventListResponseBodyDdosEventListDdosEvent(const DescribeDdosEventListResponseBodyDdosEventListDdosEvent &) = default ;
    DescribeDdosEventListResponseBodyDdosEventListDdosEvent(DescribeDdosEventListResponseBodyDdosEventListDdosEvent &&) = default ;
    DescribeDdosEventListResponseBodyDdosEventListDdosEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDdosEventListResponseBodyDdosEventListDdosEvent() = default ;
    DescribeDdosEventListResponseBodyDdosEventListDdosEvent& operator=(const DescribeDdosEventListResponseBodyDdosEventListDdosEvent &) = default ;
    DescribeDdosEventListResponseBodyDdosEventListDdosEvent& operator=(DescribeDdosEventListResponseBodyDdosEventListDdosEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ddosStatus_ != nullptr
        && this->ddosType_ != nullptr && this->delayTime_ != nullptr && this->endTime_ != nullptr && this->startTime_ != nullptr && this->unBlackholeTime_ != nullptr; };
    // ddosStatus Field Functions 
    bool hasDdosStatus() const { return this->ddosStatus_ != nullptr;};
    void deleteDdosStatus() { this->ddosStatus_ = nullptr;};
    inline string ddosStatus() const { DARABONBA_PTR_GET_DEFAULT(ddosStatus_, "") };
    inline DescribeDdosEventListResponseBodyDdosEventListDdosEvent& setDdosStatus(string ddosStatus) { DARABONBA_PTR_SET_VALUE(ddosStatus_, ddosStatus) };


    // ddosType Field Functions 
    bool hasDdosType() const { return this->ddosType_ != nullptr;};
    void deleteDdosType() { this->ddosType_ = nullptr;};
    inline string ddosType() const { DARABONBA_PTR_GET_DEFAULT(ddosType_, "") };
    inline DescribeDdosEventListResponseBodyDdosEventListDdosEvent& setDdosType(string ddosType) { DARABONBA_PTR_SET_VALUE(ddosType_, ddosType) };


    // delayTime Field Functions 
    bool hasDelayTime() const { return this->delayTime_ != nullptr;};
    void deleteDelayTime() { this->delayTime_ = nullptr;};
    inline int64_t delayTime() const { DARABONBA_PTR_GET_DEFAULT(delayTime_, 0L) };
    inline DescribeDdosEventListResponseBodyDdosEventListDdosEvent& setDelayTime(int64_t delayTime) { DARABONBA_PTR_SET_VALUE(delayTime_, delayTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeDdosEventListResponseBodyDdosEventListDdosEvent& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeDdosEventListResponseBodyDdosEventListDdosEvent& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // unBlackholeTime Field Functions 
    bool hasUnBlackholeTime() const { return this->unBlackholeTime_ != nullptr;};
    void deleteUnBlackholeTime() { this->unBlackholeTime_ = nullptr;};
    inline int64_t unBlackholeTime() const { DARABONBA_PTR_GET_DEFAULT(unBlackholeTime_, 0L) };
    inline DescribeDdosEventListResponseBodyDdosEventListDdosEvent& setUnBlackholeTime(int64_t unBlackholeTime) { DARABONBA_PTR_SET_VALUE(unBlackholeTime_, unBlackholeTime) };


  protected:
    // The status of the DDoS attack event. Valid values:
    // 
    // *   **mitigating**: indicates that traffic scrubbing is in progress.
    // *   **blackholed**: indicates that blackhole filtering is triggered for the asset.
    // *   **normal**: indicates that the DDoS attack event ends.
    std::shared_ptr<string> ddosStatus_ = nullptr;
    // The type of the DDoS attack event. Valid values:
    // 
    // *   **defense**: an attack event that triggers traffic scrubbing
    // *   **blackhole**: an attack event that triggers blackhole filtering
    std::shared_ptr<string> ddosType_ = nullptr;
    // The time of the last attack. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // > This parameter is returned only when the asset is attacked multiple times within a DDoS attack event.
    std::shared_ptr<int64_t> delayTime_ = nullptr;
    // The end time of the DDoS attack event. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The start time of the DDoS attack event. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The time when blackhole filtering is deactivated. The value is a UNIX timestamp. Unit: milliseconds.
    // 
    // > This parameter is returned only when the value of the **DdosType** parameter is **blackhole**.
    std::shared_ptr<int64_t> unBlackholeTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AntiddosPublic20170518
#endif
