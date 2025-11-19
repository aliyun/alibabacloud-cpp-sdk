// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMEDIADISTRIBUTIONRESPONSEBODYMEDIADISTRIBUTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMEDIADISTRIBUTIONRESPONSEBODYMEDIADISTRIBUTIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeMediaDistributionResponseBodyMediaDistributionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMediaDistributionResponseBodyMediaDistributionList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMediaDistributionResponseBodyMediaDistributionList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    DescribeMediaDistributionResponseBodyMediaDistributionList() = default ;
    DescribeMediaDistributionResponseBodyMediaDistributionList(const DescribeMediaDistributionResponseBodyMediaDistributionList &) = default ;
    DescribeMediaDistributionResponseBodyMediaDistributionList(DescribeMediaDistributionResponseBodyMediaDistributionList &&) = default ;
    DescribeMediaDistributionResponseBodyMediaDistributionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMediaDistributionResponseBodyMediaDistributionList() = default ;
    DescribeMediaDistributionResponseBodyMediaDistributionList& operator=(const DescribeMediaDistributionResponseBodyMediaDistributionList &) = default ;
    DescribeMediaDistributionResponseBodyMediaDistributionList& operator=(DescribeMediaDistributionResponseBodyMediaDistributionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->endTime_ == nullptr && return this->startTime_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeMediaDistributionResponseBodyMediaDistributionList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeMediaDistributionResponseBodyMediaDistributionList& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline DescribeMediaDistributionResponseBodyMediaDistributionList& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The number of media assets that are queried during the specified time range.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The end of the time range during which data is queried (exclusive). The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> endTime_ = nullptr;
    // The start of the time range during which data is queried (inclusive). The time follows the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time is displayed in UTC.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
