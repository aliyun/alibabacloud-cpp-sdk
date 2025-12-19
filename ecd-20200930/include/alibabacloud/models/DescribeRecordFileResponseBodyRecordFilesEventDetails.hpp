// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERECORDFILERESPONSEBODYRECORDFILESEVENTDETAILS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERECORDFILERESPONSEBODYRECORDFILESEVENTDETAILS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeRecordFileResponseBodyRecordFilesEventDetails : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRecordFileResponseBodyRecordFilesEventDetails& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(EventTime, eventTime_);
      DARABONBA_PTR_TO_JSON(EventType, eventType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRecordFileResponseBodyRecordFilesEventDetails& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(EventTime, eventTime_);
      DARABONBA_PTR_FROM_JSON(EventType, eventType_);
    };
    DescribeRecordFileResponseBodyRecordFilesEventDetails() = default ;
    DescribeRecordFileResponseBodyRecordFilesEventDetails(const DescribeRecordFileResponseBodyRecordFilesEventDetails &) = default ;
    DescribeRecordFileResponseBodyRecordFilesEventDetails(DescribeRecordFileResponseBodyRecordFilesEventDetails &&) = default ;
    DescribeRecordFileResponseBodyRecordFilesEventDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRecordFileResponseBodyRecordFilesEventDetails() = default ;
    DescribeRecordFileResponseBodyRecordFilesEventDetails& operator=(const DescribeRecordFileResponseBodyRecordFilesEventDetails &) = default ;
    DescribeRecordFileResponseBodyRecordFilesEventDetails& operator=(DescribeRecordFileResponseBodyRecordFilesEventDetails &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && return this->eventTime_ == nullptr && return this->eventType_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string eventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeRecordFileResponseBodyRecordFilesEventDetails& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // eventTime Field Functions 
    bool hasEventTime() const { return this->eventTime_ != nullptr;};
    void deleteEventTime() { this->eventTime_ = nullptr;};
    inline int32_t eventTime() const { DARABONBA_PTR_GET_DEFAULT(eventTime_, 0) };
    inline DescribeRecordFileResponseBodyRecordFilesEventDetails& setEventTime(int32_t eventTime) { DARABONBA_PTR_SET_VALUE(eventTime_, eventTime) };


    // eventType Field Functions 
    bool hasEventType() const { return this->eventType_ != nullptr;};
    void deleteEventType() { this->eventType_ = nullptr;};
    inline string eventType() const { DARABONBA_PTR_GET_DEFAULT(eventType_, "") };
    inline DescribeRecordFileResponseBodyRecordFilesEventDetails& setEventType(string eventType) { DARABONBA_PTR_SET_VALUE(eventType_, eventType) };


  protected:
    std::shared_ptr<string> eventName_ = nullptr;
    std::shared_ptr<int32_t> eventTime_ = nullptr;
    std::shared_ptr<string> eventType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
