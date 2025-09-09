// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBACKUPTIMESRESPONSEBODYRESTORETIME_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBACKUPTIMESRESPONSEBODYRESTORETIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeBackupTimesResponseBodyRestoreTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBackupTimesResponseBodyRestoreTime& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBackupTimesResponseBodyRestoreTime& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeBackupTimesResponseBodyRestoreTime() = default ;
    DescribeBackupTimesResponseBodyRestoreTime(const DescribeBackupTimesResponseBodyRestoreTime &) = default ;
    DescribeBackupTimesResponseBodyRestoreTime(DescribeBackupTimesResponseBodyRestoreTime &&) = default ;
    DescribeBackupTimesResponseBodyRestoreTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBackupTimesResponseBodyRestoreTime() = default ;
    DescribeBackupTimesResponseBodyRestoreTime& operator=(const DescribeBackupTimesResponseBodyRestoreTime &) = default ;
    DescribeBackupTimesResponseBodyRestoreTime& operator=(DescribeBackupTimesResponseBodyRestoreTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->startTime_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeBackupTimesResponseBodyRestoreTime& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeBackupTimesResponseBodyRestoreTime& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // Indicates the end time. The time is in the UNIX timestamp format. The time is in UTC. Unit: ms.
    std::shared_ptr<string> endTime_ = nullptr;
    // Indicates the start time. The time is in the UNIX timestamp format. The time must be in UTC. Unit: ms.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
