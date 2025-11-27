// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINRECORDDATARESPONSEBODYRECORDDATAPERINTERVALDATAMODULE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVSDOMAINRECORDDATARESPONSEBODYRECORDDATAPERINTERVALDATAMODULE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_TO_JSON(RecordValue, recordValue_);
      DARABONBA_PTR_TO_JSON(StreamCountValue, streamCountValue_);
      DARABONBA_PTR_TO_JSON(TimeStamp, timeStamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule& obj) { 
      DARABONBA_PTR_FROM_JSON(RecordValue, recordValue_);
      DARABONBA_PTR_FROM_JSON(StreamCountValue, streamCountValue_);
      DARABONBA_PTR_FROM_JSON(TimeStamp, timeStamp_);
    };
    DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule() = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule(const DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule &) = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule(DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule &&) = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule() = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule& operator=(const DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule &) = default ;
    DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule& operator=(DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recordValue_ == nullptr
        && return this->streamCountValue_ == nullptr && return this->timeStamp_ == nullptr; };
    // recordValue Field Functions 
    bool hasRecordValue() const { return this->recordValue_ != nullptr;};
    void deleteRecordValue() { this->recordValue_ = nullptr;};
    inline string recordValue() const { DARABONBA_PTR_GET_DEFAULT(recordValue_, "") };
    inline DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule& setRecordValue(string recordValue) { DARABONBA_PTR_SET_VALUE(recordValue_, recordValue) };


    // streamCountValue Field Functions 
    bool hasStreamCountValue() const { return this->streamCountValue_ != nullptr;};
    void deleteStreamCountValue() { this->streamCountValue_ = nullptr;};
    inline string streamCountValue() const { DARABONBA_PTR_GET_DEFAULT(streamCountValue_, "") };
    inline DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule& setStreamCountValue(string streamCountValue) { DARABONBA_PTR_SET_VALUE(streamCountValue_, streamCountValue) };


    // timeStamp Field Functions 
    bool hasTimeStamp() const { return this->timeStamp_ != nullptr;};
    void deleteTimeStamp() { this->timeStamp_ = nullptr;};
    inline string timeStamp() const { DARABONBA_PTR_GET_DEFAULT(timeStamp_, "") };
    inline DescribeVsDomainRecordDataResponseBodyRecordDataPerIntervalDataModule& setTimeStamp(string timeStamp) { DARABONBA_PTR_SET_VALUE(timeStamp_, timeStamp) };


  protected:
    std::shared_ptr<string> recordValue_ = nullptr;
    std::shared_ptr<string> streamCountValue_ = nullptr;
    std::shared_ptr<string> timeStamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
