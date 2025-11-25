// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBLOCKSTATUSRESPONSEBODYSTATUSLISTBLOCKSTATUSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBLOCKSTATUSRESPONSEBODYSTATUSLISTBLOCKSTATUSLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeBlockStatusResponseBodyStatusListBlockStatusList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBlockStatusResponseBodyStatusListBlockStatusList& obj) { 
      DARABONBA_PTR_TO_JSON(BlockStatus, blockStatus_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(Line, line_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBlockStatusResponseBodyStatusListBlockStatusList& obj) { 
      DARABONBA_PTR_FROM_JSON(BlockStatus, blockStatus_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(Line, line_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeBlockStatusResponseBodyStatusListBlockStatusList() = default ;
    DescribeBlockStatusResponseBodyStatusListBlockStatusList(const DescribeBlockStatusResponseBodyStatusListBlockStatusList &) = default ;
    DescribeBlockStatusResponseBodyStatusListBlockStatusList(DescribeBlockStatusResponseBodyStatusListBlockStatusList &&) = default ;
    DescribeBlockStatusResponseBodyStatusListBlockStatusList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBlockStatusResponseBodyStatusListBlockStatusList() = default ;
    DescribeBlockStatusResponseBodyStatusListBlockStatusList& operator=(const DescribeBlockStatusResponseBodyStatusListBlockStatusList &) = default ;
    DescribeBlockStatusResponseBodyStatusListBlockStatusList& operator=(DescribeBlockStatusResponseBodyStatusListBlockStatusList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->blockStatus_ == nullptr
        && return this->endTime_ == nullptr && return this->line_ == nullptr && return this->startTime_ == nullptr; };
    // blockStatus Field Functions 
    bool hasBlockStatus() const { return this->blockStatus_ != nullptr;};
    void deleteBlockStatus() { this->blockStatus_ = nullptr;};
    inline string blockStatus() const { DARABONBA_PTR_GET_DEFAULT(blockStatus_, "") };
    inline DescribeBlockStatusResponseBodyStatusListBlockStatusList& setBlockStatus(string blockStatus) { DARABONBA_PTR_SET_VALUE(blockStatus_, blockStatus) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeBlockStatusResponseBodyStatusListBlockStatusList& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // line Field Functions 
    bool hasLine() const { return this->line_ != nullptr;};
    void deleteLine() { this->line_ = nullptr;};
    inline string line() const { DARABONBA_PTR_GET_DEFAULT(line_, "") };
    inline DescribeBlockStatusResponseBodyStatusListBlockStatusList& setLine(string line) { DARABONBA_PTR_SET_VALUE(line_, line) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeBlockStatusResponseBodyStatusListBlockStatusList& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The blocking status of the network traffic. Valid values:
    // 
    // *   **areablock**: Network traffic is blocked.
    // *   **normal**: Network traffic is not blocked.
    std::shared_ptr<string> blockStatus_ = nullptr;
    // The end time of the blocking. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The Internet service provider (ISP) line from which the traffic is blocked. Valid values:
    // 
    // *   **ct**: China Telecom (International)
    // *   **cut**: China Unicom (International)
    std::shared_ptr<string> line_ = nullptr;
    // The start time of the blocking. This value is a UNIX timestamp. Unit: seconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
