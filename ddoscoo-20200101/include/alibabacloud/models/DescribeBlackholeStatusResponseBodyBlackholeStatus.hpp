// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLACKHOLESTATUSRESPONSEBODYBLACKHOLESTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLACKHOLESTATUSRESPONSEBODYBLACKHOLESTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeBlackholeStatusResponseBodyBlackholeStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlackholeStatusResponseBodyBlackholeStatus& obj) { 
      DARABONBA_PTR_TO_JSON(BlackStatus, blackStatus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlackholeStatusResponseBodyBlackholeStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(BlackStatus, blackStatus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeBlackholeStatusResponseBodyBlackholeStatus() = default ;
    DescribeBlackholeStatusResponseBodyBlackholeStatus(const DescribeBlackholeStatusResponseBodyBlackholeStatus &) = default ;
    DescribeBlackholeStatusResponseBodyBlackholeStatus(DescribeBlackholeStatusResponseBodyBlackholeStatus &&) = default ;
    DescribeBlackholeStatusResponseBodyBlackholeStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlackholeStatusResponseBodyBlackholeStatus() = default ;
    DescribeBlackholeStatusResponseBodyBlackholeStatus& operator=(const DescribeBlackholeStatusResponseBodyBlackholeStatus &) = default ;
    DescribeBlackholeStatusResponseBodyBlackholeStatus& operator=(DescribeBlackholeStatusResponseBodyBlackholeStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blackStatus_ == nullptr
        && return this->endTime_ == nullptr && return this->ip_ == nullptr && return this->startTime_ == nullptr; };
    // blackStatus Field Functions 
    bool hasBlackStatus() const { return this->blackStatus_ != nullptr;};
    void deleteBlackStatus() { this->blackStatus_ = nullptr;};
    inline string blackStatus() const { DARABONBA_PTR_GET_DEFAULT(blackStatus_, "") };
    inline DescribeBlackholeStatusResponseBodyBlackholeStatus& setBlackStatus(string blackStatus) { DARABONBA_PTR_SET_VALUE(blackStatus_, blackStatus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeBlackholeStatusResponseBodyBlackholeStatus& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeBlackholeStatusResponseBodyBlackholeStatus& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeBlackholeStatusResponseBodyBlackholeStatus& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Indicates whether blackhole filtering is triggered for the instance. Valid values:
    // 
    // *   **blackhole**: yes
    // *   **normal**: no
    std::shared_ptr<string> blackStatus_ = nullptr;
    // The end time of blackhole filtering. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The IP address of the instance.
    std::shared_ptr<string> ip_ = nullptr;
    // The start time of blackhole filtering. The value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
