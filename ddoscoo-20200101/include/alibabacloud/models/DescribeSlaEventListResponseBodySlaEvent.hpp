// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLAEVENTLISTRESPONSEBODYSLAEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLAEVENTLISTRESPONSEBODYSLAEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSlaEventListResponseBodySlaEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlaEventListResponseBodySlaEvent& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlaEventListResponseBodySlaEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeSlaEventListResponseBodySlaEvent() = default ;
    DescribeSlaEventListResponseBodySlaEvent(const DescribeSlaEventListResponseBodySlaEvent &) = default ;
    DescribeSlaEventListResponseBodySlaEvent(DescribeSlaEventListResponseBodySlaEvent &&) = default ;
    DescribeSlaEventListResponseBodySlaEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlaEventListResponseBodySlaEvent() = default ;
    DescribeSlaEventListResponseBodySlaEvent& operator=(const DescribeSlaEventListResponseBodySlaEvent &) = default ;
    DescribeSlaEventListResponseBodySlaEvent& operator=(DescribeSlaEventListResponseBodySlaEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->ip_ == nullptr && return this->region_ == nullptr && return this->startTime_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSlaEventListResponseBodySlaEvent& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeSlaEventListResponseBodySlaEvent& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeSlaEventListResponseBodySlaEvent& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSlaEventListResponseBodySlaEvent& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The end of the time range. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The region to which the destination IP address belongs. Valid values:
    // 
    // *   **cn**: a region in the Chinese mainland
    // *   **cn-hongkong**: China (Hong Kong)
    std::shared_ptr<string> region_ = nullptr;
    // The beginning of the time range. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
