// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPSTRATEGYWORKINGTIME_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEJOBGROUPRESPONSEBODYJOBGROUPSTRATEGYWORKINGTIME_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20191226
{
namespace Models
{
  class DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTime, beginTime_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
    };
    DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime() = default ;
    DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime(const DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime &) = default ;
    DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime(DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime &&) = default ;
    DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime() = default ;
    DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime& operator=(const DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime &) = default ;
    DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime& operator=(DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTime_ == nullptr
        && return this->endTime_ == nullptr; };
    // beginTime Field Functions 
    bool hasBeginTime() const { return this->beginTime_ != nullptr;};
    void deleteBeginTime() { this->beginTime_ = nullptr;};
    inline string beginTime() const { DARABONBA_PTR_GET_DEFAULT(beginTime_, "") };
    inline DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime& setBeginTime(string beginTime) { DARABONBA_PTR_SET_VALUE(beginTime_, beginTime) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline DescribeJobGroupResponseBodyJobGroupStrategyWorkingTime& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


  protected:
    std::shared_ptr<string> beginTime_ = nullptr;
    std::shared_ptr<string> endTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20191226
#endif
