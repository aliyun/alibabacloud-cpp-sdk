// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESTATISTICALDATAREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESTATISTICALDATAREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DescribeStatisticalDataRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeStatisticalDataRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BeginTimeLeftRange, beginTimeLeftRange_);
      DARABONBA_PTR_TO_JSON(BeginTimeRightRange, beginTimeRightRange_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(TimeUnit, timeUnit_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeStatisticalDataRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BeginTimeLeftRange, beginTimeLeftRange_);
      DARABONBA_PTR_FROM_JSON(BeginTimeRightRange, beginTimeRightRange_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(TimeUnit, timeUnit_);
    };
    DescribeStatisticalDataRequest() = default ;
    DescribeStatisticalDataRequest(const DescribeStatisticalDataRequest &) = default ;
    DescribeStatisticalDataRequest(DescribeStatisticalDataRequest &&) = default ;
    DescribeStatisticalDataRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeStatisticalDataRequest() = default ;
    DescribeStatisticalDataRequest& operator=(const DescribeStatisticalDataRequest &) = default ;
    DescribeStatisticalDataRequest& operator=(DescribeStatisticalDataRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->beginTimeLeftRange_ == nullptr
        && this->beginTimeRightRange_ == nullptr && this->instanceId_ == nullptr && this->timeUnit_ == nullptr; };
    // beginTimeLeftRange Field Functions 
    bool hasBeginTimeLeftRange() const { return this->beginTimeLeftRange_ != nullptr;};
    void deleteBeginTimeLeftRange() { this->beginTimeLeftRange_ = nullptr;};
    inline int64_t getBeginTimeLeftRange() const { DARABONBA_PTR_GET_DEFAULT(beginTimeLeftRange_, 0L) };
    inline DescribeStatisticalDataRequest& setBeginTimeLeftRange(int64_t beginTimeLeftRange) { DARABONBA_PTR_SET_VALUE(beginTimeLeftRange_, beginTimeLeftRange) };


    // beginTimeRightRange Field Functions 
    bool hasBeginTimeRightRange() const { return this->beginTimeRightRange_ != nullptr;};
    void deleteBeginTimeRightRange() { this->beginTimeRightRange_ = nullptr;};
    inline int64_t getBeginTimeRightRange() const { DARABONBA_PTR_GET_DEFAULT(beginTimeRightRange_, 0L) };
    inline DescribeStatisticalDataRequest& setBeginTimeRightRange(int64_t beginTimeRightRange) { DARABONBA_PTR_SET_VALUE(beginTimeRightRange_, beginTimeRightRange) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeStatisticalDataRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // timeUnit Field Functions 
    bool hasTimeUnit() const { return this->timeUnit_ != nullptr;};
    void deleteTimeUnit() { this->timeUnit_ = nullptr;};
    inline string getTimeUnit() const { DARABONBA_PTR_GET_DEFAULT(timeUnit_, "") };
    inline DescribeStatisticalDataRequest& setTimeUnit(string timeUnit) { DARABONBA_PTR_SET_VALUE(timeUnit_, timeUnit) };


  protected:
    // The start of the query time range, specified as a Unix timestamp in milliseconds.
    shared_ptr<int64_t> beginTimeLeftRange_ {};
    // The end of the query time range, specified as a Unix timestamp in milliseconds.
    shared_ptr<int64_t> beginTimeRightRange_ {};
    // The instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The time unit. Valid values: `Day` and `Hour`.
    // 
    // This parameter is required.
    shared_ptr<string> timeUnit_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
